/*
 * XREFs of ?LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D230
 * Callers:
 *     ?ScanLookAsideList_Allocate@@YAPEAXXZ @ 0x14000B080 (-ScanLookAsideList_Allocate@@YAPEAXXZ.c)
 *     Win32AllocateFromPagedLookasideList @ 0x14000BDC0 (Win32AllocateFromPagedLookasideList.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x14000C1D0 (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x14000C940 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x14000EE20 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x14000F490 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z @ 0x14006110C (-Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z.c)
 * Callees:
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14000D310 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     RIMLockShared @ 0x14000D340 (RIMLockShared.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x14000D374 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 */

char __fastcall NSInstrumentation::CPointerHashTable::LookupInterlockedIncrement(
        NSInstrumentation::CPointerHashTable *this,
        unsigned __int64 a2)
{
  int i; // eax
  unsigned __int64 v5; // rdx
  unsigned int v6; // r11d
  unsigned __int64 v7; // rdx
  unsigned int v8; // r10d
  unsigned int j; // r9d
  __int64 v10; // r8

  _InterlockedIncrement((volatile signed __int32 *)this + 6);
  for ( i = *((_DWORD *)this + 7); i; i = *((_DWORD *)this + 7) )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    RIMLockShared(this);
    W32ReleasePushLockShared(this);
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
  }
  if ( a2 == -1LL )
    goto LABEL_16;
  if ( !*((_DWORD *)this + 12) )
    goto LABEL_16;
  v5 = 0x9E3779B97F34A803uLL * (a2 >> 4);
  if ( (*((_BYTE *)this + 52) & 1) != 0 && *(_QWORD *)a2 != v5 )
    goto LABEL_16;
  v6 = *((_DWORD *)this + 10);
  v7 = v5 >> (64 - (unsigned __int8)*((_DWORD *)this + 11));
  v8 = 0;
LABEL_8:
  if ( v8 >= 2 )
  {
LABEL_16:
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    return 0;
  }
  else
  {
    for ( j = v7; ; ++j )
    {
      if ( j >= v6 )
      {
        v6 = v7;
        LODWORD(v7) = 0;
        ++v8;
        goto LABEL_8;
      }
      v10 = *((_QWORD *)this + 4) + 16LL * j;
      if ( *(_QWORD *)v10 == a2 )
        break;
    }
    if ( !v10 )
      goto LABEL_16;
    _InterlockedIncrement64((volatile signed __int64 *)(v10 + 8));
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    return 1;
  }
}
