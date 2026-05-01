/*
 * XREFs of ?AddWindow@CVirtualDesktopSoftLandingHandler@@AEAAJPEAUHWND__@@@Z @ 0x1801F3E88
 * Callers:
 *     ?OnApplicationViewChanged@CVirtualDesktopSoftLandingHandler@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1801F3DC0 (-OnApplicationViewChanged@CVirtualDesktopSoftLandingHandler@@UEAAJPEAUIApplicationView@@W4APPLIC.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?TriggerCampaign@CVirtualDesktopSoftLandingHandler@@AEAAJXZ @ 0x18056887C (-TriggerCampaign@CVirtualDesktopSoftLandingHandler@@AEAAJXZ.c)
 */

__int64 __fastcall CVirtualDesktopSoftLandingHandler::AddWindow(CVirtualDesktopSoftLandingHandler *this, HWND hWnd)
{
  __int64 **v4; // rcx
  __int64 *v5; // rdi
  __int64 **i; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rcx

  if ( !GetPropW(hWnd, (LPCWSTR)0xA920) )
  {
    v4 = (__int64 **)*((_QWORD *)this + 23);
    v5 = *v4;
    for ( i = (__int64 **)*v4; i != v4; i = (__int64 **)*i )
    {
      if ( i[2] == (__int64 *)hWnd )
        return 0LL;
    }
    if ( *((_QWORD *)this + 24) == 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error("list too long");
    v7 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(24LL);
    v7[2] = hWnd;
    ++*((_QWORD *)this + 24);
    v8 = (_QWORD *)v5[1];
    *v7 = v5;
    v7[1] = v8;
    v5[1] = (__int64)v7;
    *v8 = v7;
    if ( *((_QWORD *)this + 24) > 7uLL )
      CVirtualDesktopSoftLandingHandler::TriggerCampaign(this);
  }
  return 0LL;
}
