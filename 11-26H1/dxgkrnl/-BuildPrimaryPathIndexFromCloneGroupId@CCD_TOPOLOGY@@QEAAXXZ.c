/*
 * XREFs of ?BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ @ 0x140369EEC
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140367688 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId(CCD_TOPOLOGY *this)
{
  unsigned int i; // r8d
  __int64 v3; // rdx
  unsigned __int16 v4; // ax
  unsigned int j; // r8d
  unsigned __int16 v6; // ax
  __int64 v7; // r9
  int v8; // r11d
  unsigned int k; // ecx
  unsigned __int16 v10; // ax
  __int64 v11; // r9

  for ( i = 0; ; ++i )
  {
    v3 = *((_QWORD *)this + 8);
    v4 = v3 ? *(_WORD *)(v3 + 20) : 0;
    if ( i >= v4 )
      break;
    *(_QWORD *)(296LL * i + v3 + 56) &= ~0x4000000000000uLL;
  }
  for ( j = 0; ; ++j )
  {
    v6 = v3 ? *(_WORD *)(v3 + 20) : 0;
    if ( j >= v6 )
      break;
    v7 = 296LL * j;
    if ( (*(_QWORD *)(v7 + v3 + 56) & 0x4000000000000LL) == 0 )
    {
      v8 = *(_DWORD *)(v7 + v3 + 240);
      for ( k = j; ; ++k )
      {
        v3 = *((_QWORD *)this + 8);
        v10 = v3 ? *(_WORD *)(v3 + 20) : 0;
        if ( k >= v10 )
          break;
        v11 = 296LL * k;
        if ( *(_DWORD *)(v11 + v3 + 240) == v8 )
        {
          *(_DWORD *)(v11 + v3 + 324) = j;
          *(_QWORD *)(*((_QWORD *)this + 8) + v11 + 56) |= 0x4000000000000uLL;
        }
      }
    }
  }
}
