/*
 * XREFs of MiDoParentWork @ 0x1404FD268
 * Callers:
 *     MiUseThreads @ 0x1403CD544 (MiUseThreads.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x14025A030 (PsReferencePartitionSafe.c)
 *     MiGetNextAffinityWalker @ 0x1402F68CC (MiGetNextAffinityWalker.c)
 *     MiThreadWorker @ 0x1403CD1F0 (MiThreadWorker.c)
 */

void __fastcall MiDoParentWork(__int64 a1)
{
  _DWORD *v1; // r8
  __int64 v2; // rcx
  _DWORD *v3; // rbx
  __int64 v4; // rdi
  int v5; // eax

  v1 = (_DWORD *)a1;
  if ( *(_DWORD *)(a1 + 32) )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( v2 && !PsReferencePartitionSafe(v2) )
      return;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  v3 = v1 + 30;
  v4 = (__int64)&v1[34 * v1[8] + 136];
  *(_DWORD *)(v4 + 44) = -2;
  *(_QWORD *)(v4 + 16) = MiThreadWorker;
  *(_QWORD *)(v4 + 24) = v4;
  *(_QWORD *)v4 = 0LL;
  v5 = v1[4];
  if ( ((v5 & 0x40) != 0 || v1[100])
    && ((v5 & 0x80u) == 0 || !v1[33] && v1[101])
    && (int)MiGetNextAffinityWalker((ULONG_PTR)(v1 + 30), v4 + 40) >= 0
    && !v3[3] )
  {
    *(_DWORD *)(v4 + 44) = -1;
  }
  MiThreadWorker(v4);
}
