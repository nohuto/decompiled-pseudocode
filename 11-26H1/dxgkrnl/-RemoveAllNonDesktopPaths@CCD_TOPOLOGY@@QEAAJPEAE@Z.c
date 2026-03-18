/*
 * XREFs of ?RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x1402690D4
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x140319388 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140365C4C (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1402AC488 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RemoveAllNonDesktopPaths(CCD_TOPOLOGY *this, unsigned __int8 *a2)
{
  unsigned __int16 v2; // r8
  unsigned int v4; // r11d
  unsigned int v5; // ebx
  __int64 v7; // r9
  unsigned __int16 v8; // ax
  __int128 *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r10
  __int128 v12; // xmm0

  v2 = 0;
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    v7 = *((_QWORD *)this + 8);
    v8 = v7 ? *(_WORD *)(v7 + 20) : 0;
    if ( v4 >= v8 )
      break;
    v9 = (__int128 *)(v7 + 296LL * v4 + 56);
    if ( _bittest64((const signed __int64 *)v9, 0x24u) )
    {
      *a2 = 1;
    }
    else
    {
      if ( v4 != v5 )
      {
        v10 = 2LL;
        v11 = v7 + 296LL * v5 + 56;
        do
        {
          v12 = *v9;
          v9 += 8;
          *(_OWORD *)v11 = v12;
          v11 += 128LL;
          *(_OWORD *)(v11 - 112) = *(v9 - 7);
          *(_OWORD *)(v11 - 96) = *(v9 - 6);
          *(_OWORD *)(v11 - 80) = *(v9 - 5);
          *(_OWORD *)(v11 - 64) = *(v9 - 4);
          *(_OWORD *)(v11 - 48) = *(v9 - 3);
          *(_OWORD *)(v11 - 32) = *(v9 - 2);
          *(_OWORD *)(v11 - 16) = *(v9 - 1);
          --v10;
        }
        while ( v10 );
        *(_OWORD *)v11 = *v9;
        *(_OWORD *)(v11 + 16) = v9[1];
        *(_QWORD *)(v11 + 32) = *((_QWORD *)v9 + 4);
      }
      ++v5;
    }
    ++v4;
  }
  if ( *a2 )
  {
    if ( v7 )
      v2 = *(_WORD *)(v7 + 22);
    if ( v5 > v2 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 731;
    }
    *(_WORD *)(*((_QWORD *)this + 8) + 20LL) = v5;
    CCD_TOPOLOGY::ClearModalitySetId(this);
  }
  return 0LL;
}
