/*
 * XREFs of MiLocatePagefileSubsection @ 0x140342390
 * Callers:
 *     MmMapViewInSystemCache @ 0x1402C4A60 (MmMapViewInSystemCache.c)
 *     MiAdvanceVadView @ 0x1403178D0 (MiAdvanceVadView.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403413D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiOffsetToProtos @ 0x1403422D4 (MiOffsetToProtos.c)
 *     MiPrepareDataViewSubsections @ 0x140995B50 (MiPrepareDataViewSubsections.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14099A770 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MmCommitSessionMappedView @ 0x140AD1F80 (MmCommitSessionMappedView.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall MiLocatePagefileSubsection(unsigned int *a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // r10
  unsigned int *result; // rax
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r9
  unsigned int *v10; // rcx

  v3 = *a2;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x1000) != 0 || a1[12] >= 0x40000000 )
  {
    v5 = 0x40000LL;
    if ( a1[12] < 0x40000000 )
      v5 = 0x20000LL;
    v6 = (unsigned int)(v3 / v5);
    v7 = v3 / v5;
    v8 = v3 % v5;
    v9 = v6 + 1;
    if ( !v8 )
      v9 = v6;
    if ( v9 > *(unsigned int *)(*(_QWORD *)a1 + 96LL) )
      return 0LL;
    v10 = &a1[22 * v7];
    if ( v8 >= v10[11] )
      return 0LL;
    result = v10;
    *a2 = v8;
  }
  else
  {
    if ( v3 >= a1[11] )
      return 0LL;
    return a1;
  }
  return result;
}
