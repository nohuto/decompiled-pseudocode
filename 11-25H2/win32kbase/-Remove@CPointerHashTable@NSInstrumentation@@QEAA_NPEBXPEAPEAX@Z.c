/*
 * XREFs of ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x14000D044
 * Callers:
 *     ?ScanLookAsideList_Free@@YAXPEAX@Z @ 0x14000ED10 (-ScanLookAsideList_Free@@YAXPEAX@Z.c)
 *     ?vDeleteREGION@REGION@@AEAAXXZ @ 0x14000FE30 (-vDeleteREGION@REGION@@AEAAXXZ.c)
 *     ?Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z @ 0x140010398 (-Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x140010450 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     Win32FreeToPagedLookasideList @ 0x1400109D0 (Win32FreeToPagedLookasideList.c)
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x140010A90 (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
 *     UserReAllocPool @ 0x14001E320 (UserReAllocPool.c)
 *     FreeThreadBufferWithTag @ 0x14001E6A0 (FreeThreadBufferWithTag.c)
 *     ?Win32FreePoolImpl@@YAXPEAX@Z @ 0x14001E7F0 (-Win32FreePoolImpl@@YAXPEAX@Z.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x14001EA70 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x14019FBE8 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 * Callees:
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14000D310 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     RIMLockShared @ 0x14000D340 (RIMLockShared.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x14000D374 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 */

char __fastcall NSInstrumentation::CPointerHashTable::Remove(
        NSInstrumentation::CPointerHashTable *this,
        unsigned __int64 a2,
        void **a3)
{
  char v6; // di
  int i; // eax
  unsigned __int64 v8; // rdx
  unsigned int v9; // r10d
  unsigned __int64 v10; // rdx
  unsigned int j; // r8d
  unsigned int k; // eax
  __int64 v14; // r9
  __int64 v15; // rcx
  void *v16; // rax

  if ( a2 == -1LL )
    return 0;
  v6 = 1;
  _InterlockedAdd((volatile signed __int32 *)this + 6, 1u);
  for ( i = *((_DWORD *)this + 7); i; i = *((_DWORD *)this + 7) )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    RIMLockShared(this);
    W32ReleasePushLockShared(this);
    _InterlockedAdd((volatile signed __int32 *)this + 6, 1u);
  }
  if ( *((_DWORD *)this + 12) )
  {
    v8 = 0x9E3779B97F34A803uLL * (a2 >> 4);
    if ( (*((_BYTE *)this + 52) & 1) == 0 || *(_QWORD *)a2 == v8 )
    {
      v9 = *((_DWORD *)this + 10);
      v10 = v8 >> (64 - (unsigned __int8)*((_DWORD *)this + 11));
      for ( j = 0; j < 2; ++j )
      {
        for ( k = v10; k < v9; ++k )
        {
          v14 = *((_QWORD *)this + 4);
          v15 = 2LL * k;
          if ( *(_QWORD *)(v14 + 16LL * k) == a2 )
          {
            v16 = *(void **)(v14 + 16LL * k + 8);
            *(_QWORD *)(v14 + 8 * v15 + 8) = 0LL;
            *a3 = v16;
            *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v15) = 0LL;
            _InterlockedDecrement((volatile signed __int32 *)this + 12);
            goto LABEL_10;
          }
        }
        v9 = v10;
        LODWORD(v10) = 0;
      }
    }
  }
  v6 = 0;
LABEL_10:
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v6;
}
