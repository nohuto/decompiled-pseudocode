/*
 * XREFs of MiDeleteNonPagedPoolTail @ 0x140364AB0
 * Callers:
 *     MiClearNonPagedPtes @ 0x140365158 (MiClearNonPagedPtes.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiReduceShareCount @ 0x1402BC9E0 (MiReduceShareCount.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInitializeUsedPtesCount @ 0x140342440 (MiInitializeUsedPtesCount.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteNonPagedPoolTail(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  unsigned int v3; // ecx
  __int64 v4; // rdx
  unsigned int v5; // edx
  int v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  if ( *(_QWORD *)v1 )
  {
    MiFlushTbList(*(_QWORD *)v1);
    MiReleaseProcessorFlushList();
    *(_QWORD *)v1 = 0LL;
  }
  if ( *(_DWORD *)(v1 + 40) )
  {
    v2 = 48 * ((**(_QWORD **)(v1 + 48) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v7);
      while ( *(__int64 *)(v2 + 24) < 0 );
    }
    MiReduceShareCount(v2, *(unsigned int *)(v1 + 40));
    v3 = *(_DWORD *)(v1 + 40);
    if ( (*(_DWORD *)(v2 + 36) & 0x4000000) != 0 )
      v4 = *(_QWORD *)v2 >> 36;
    else
      v4 = *(_QWORD *)(v2 + 16) >> 17;
    v5 = v4 & 0x3FF;
    if ( v5 < v3 )
      KeBugCheckEx(0x1Au, 0x41790uLL, v2, v5, *(unsigned int *)(v1 + 40));
    MiInitializeUsedPtesCount(v2, v5 - v3);
    _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_DWORD *)(v1 + 40) = 0;
  }
  return 0LL;
}
