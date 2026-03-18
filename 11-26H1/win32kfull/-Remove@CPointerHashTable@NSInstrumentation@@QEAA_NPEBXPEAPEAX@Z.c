/*
 * XREFs of ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1400D30C8
 * Callers:
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1400D1C9C (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     ?_RemoveAllocationFromLookup@UmfdAllocation@@CAXPEAX00@Z @ 0x1400D3074 (-_RemoveAllocationFromLookup@UmfdAllocation@@CAXPEAX00@Z.c)
 *     GreNotifyHwndDpiDirty @ 0x1400D3F38 (GreNotifyHwndDpiDirty.c)
 *     ?UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z @ 0x1402923EC (-UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400C2AE0 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400C2B30 (-AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 */

char __fastcall NSInstrumentation::CPointerHashTable::Remove(
        NSInstrumentation::CPointerHashTable *this,
        unsigned __int64 a2,
        void **a3)
{
  char v6; // di
  unsigned __int64 v7; // rdx
  unsigned int v8; // r10d
  unsigned __int64 v9; // rdx
  unsigned int i; // r8d
  unsigned int j; // eax
  __int64 v12; // r9
  __int64 v13; // rcx
  void *v14; // rax

  if ( a2 == -1LL )
    return 0;
  NSInstrumentation::CPrioritizedWriterLock::AcquireShared(this);
  if ( *((_DWORD *)this + 12) )
  {
    v6 = 1;
    v7 = 0x9E3779B97F34A803uLL * (a2 >> 4);
    if ( (*((_BYTE *)this + 52) & 1) == 0 || *(_QWORD *)a2 == v7 )
    {
      v8 = *((_DWORD *)this + 10);
      v9 = v7 >> (64 - (unsigned __int8)*((_DWORD *)this + 11));
      for ( i = 0; i < 2; ++i )
      {
        for ( j = v9; j < v8; ++j )
        {
          v12 = *((_QWORD *)this + 4);
          v13 = 2LL * j;
          if ( *(_QWORD *)(v12 + 16LL * j) == a2 )
          {
            v14 = *(void **)(v12 + 16LL * j + 8);
            *(_QWORD *)(v12 + 8 * v13 + 8) = 0LL;
            *a3 = v14;
            *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v13) = 0LL;
            _InterlockedDecrement((volatile signed __int32 *)this + 12);
            goto LABEL_11;
          }
        }
        v8 = v9;
        LODWORD(v9) = 0;
      }
    }
  }
  v6 = 0;
LABEL_11:
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v6;
}
