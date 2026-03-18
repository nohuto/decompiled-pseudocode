/*
 * XREFs of ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1401951A8
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1401D26C0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x140363C84 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x140340220 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 */

unsigned __int8 __fastcall SESSION_VIEW::IsCrossAdapterView(SESSION_VIEW *this)
{
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r10
  __int64 v5; // r8
  __int64 v6; // rcx

  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(this);
  if ( PrimaryDisplaySource )
  {
    v3 = *((_QWORD *)PrimaryDisplaySource + 7);
    v4 = v2 + 48;
    v5 = 0LL;
    if ( v3 != v4 )
      v5 = v3 - 56;
    while ( v5 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL) != *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) )
        return 1;
      v6 = *(_QWORD *)(v5 + 56);
      v5 = 0LL;
      if ( v6 != v4 )
        v5 = v6 - 56;
    }
  }
  return 0;
}
