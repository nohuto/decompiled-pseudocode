/*
 * XREFs of MiReleaseUnusedPageFileReadResources @ 0x14037405C
 * Callers:
 *     MiResolvePageFileFault @ 0x140371F8C (MiResolvePageFileFault.c)
 * Callees:
 *     MiFreePageChain @ 0x140292004 (MiFreePageChain.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 */

void __fastcall MiReleaseUnusedPageFileReadResources(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // rdi
  __int64 v7; // rbx
  char v8; // r11

  MiFreePageChain(a1 + 104, a2, a3);
  v4 = *(unsigned int *)(a1 + 144);
  v5 = *(_QWORD *)(a1 + 88);
  if ( v4 != v5 )
  {
    v6 = v5 - v4;
    v7 = *(_QWORD *)(a1 + 32);
    MiReturnResident(v7, v6);
    if ( (v8 & 1) != 0 )
      MiReturnCommit(v7, v6, 0);
  }
}
