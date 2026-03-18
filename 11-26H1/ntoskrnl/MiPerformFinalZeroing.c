/*
 * XREFs of MiPerformFinalZeroing @ 0x140513B9C
 * Callers:
 *     MiGetPageChain @ 0x140285DD0 (MiGetPageChain.c)
 *     MiGetPageChainSmallPageProcess @ 0x140287AA0 (MiGetPageChainSmallPageProcess.c)
 * Callees:
 *     MiZeroPhysicalPage @ 0x1402D8B20 (MiZeroPhysicalPage.c)
 *     MiChangePageAttributeBatch @ 0x140368E1C (MiChangePageAttributeBatch.c)
 *     MiGetPteLink @ 0x140369198 (MiGetPteLink.c)
 *     MiSetPfnTbFlushStamp @ 0x14036BAE0 (MiSetPfnTbFlushStamp.c)
 */

void __fastcall MiPerformFinalZeroing(__int64 a1, int a2)
{
  __int64 v2; // r14
  int v4; // ebp
  __int64 v5; // rdi
  __int64 PteLink; // rbx

  v2 = *(_QWORD *)a1;
  v4 = *(_DWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 12) = 1;
  MiChangePageAttributeBatch(a1, a2);
  if ( v2 != 0x7FFFFFFFFFLL )
  {
    do
    {
      v5 = 48 * v2 - 0x220000000000LL;
      PteLink = MiGetPteLink(*(_QWORD *)(v5 + 16));
      MiZeroPhysicalPage(0LL, v2, 0, v4);
      v2 = PteLink;
      MiSetPfnTbFlushStamp(v5, 0LL, 0);
      *(_QWORD *)(v5 + 16) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    }
    while ( PteLink != 0x7FFFFFFFFFLL );
  }
  *(_QWORD *)a1 = 0x7FFFFFFFFFLL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
