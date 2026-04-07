/*
 * XREFs of ?_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ @ 0x1800BEAA0
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800BE360 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 * Callees:
 *     ?PartitionSetExcludeFromDDA@CVisualProxy@@QEAAJ_N@Z @ 0x18007C3DC (-PartitionSetExcludeFromDDA@CVisualProxy@@QEAAJ_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_UpdateFilteredVisualList(
        CProjectionBorderManager *this,
        __int64 a2,
        __int64 a3)
{
  unsigned int i; // ebx
  __int64 v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = 0; i < *((_DWORD *)this + 106); ++i )
  {
    v5 = *(_QWORD *)(56LL * i + *((_QWORD *)this + 50));
    if ( v5 )
    {
      v6 = CVisualProxy::PartitionSetExcludeFromDDA(*(CVisualProxy **)(v5 + 16), 1, a3);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x125,
          (int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
          (const char *)(unsigned int)v6);
    }
  }
  return 0LL;
}
