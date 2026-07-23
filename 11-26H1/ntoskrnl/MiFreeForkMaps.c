/*
 * XREFs of MiFreeForkMaps @ 0x140A07F00
 * Callers:
 *     MiReturnCloneResources @ 0x140A07D98 (MiReturnCloneResources.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x14028EB40 (MiDeleteUltraThreadContext.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MiFinishLastForkPageTable @ 0x1404CA0CC (MiFinishLastForkPageTable.c)
 *     MiUnmapSinglePage @ 0x1404FE958 (MiUnmapSinglePage.c)
 */

void __fastcall MiFreeForkMaps(__int64 a1)
{
  unsigned __int64 v2; // rcx
  _QWORD *PteAddress; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 *v8; // rdi
  __int64 v9; // rsi

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    PteAddress = (_QWORD *)MiGetPteAddress(v2);
    *PteAddress = v4;
    MiUnmapSinglePage(*(_QWORD *)(a1 + 56));
  }
  else if ( *(_BYTE *)(a1 + 192) )
  {
    v5 = *(_QWORD *)(a1 + 32);
    if ( v5 )
    {
      v6 = (_QWORD *)MiGetPteAddress(v5);
      *v6 = v7;
    }
    MiDeleteUltraThreadContext(a1 + 72);
  }
  v8 = (__int64 *)(a1 + 8);
  v9 = 3LL;
  do
  {
    if ( *v8 != -1 )
    {
      MiFinishLastForkPageTable(*(_KPROCESS **)a1, *v8);
      *v8 = -1LL;
    }
    ++v8;
    --v9;
  }
  while ( v9 );
}
