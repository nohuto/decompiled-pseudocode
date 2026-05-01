/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UISnapAssistControllerPrivate@@UISnapAssistCallback@@UITabletModePositionerManagerNotification@@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@UIGuidedSnapAssistController@89Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801A3CE8
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnapAssistControllerBase@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnapAssistControllerBase@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801A3B9C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnapAssistContr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISnapAssistControllerPrivate,ISnapAssistCallback,ITabletModePositionerManagerNotification,Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 != -972259702
    || a2[1] != *(_DWORD *)&GUID_c60c7e8a_f650_4afb_917b_8d93242dbc36.Data2
    || a2[2] != *(_DWORD *)GUID_c60c7e8a_f650_4afb_917b_8d93242dbc36.Data4
    || a2[3] != *(_DWORD *)&GUID_c60c7e8a_f650_4afb_917b_8d93242dbc36.Data4[4] )
  {
    a1 += 8LL;
    if ( *a2 != 1993831834
      || a2[1] != *(_DWORD *)&GUID_76d7759a_857c_46bd_ba0c_841904e0fc8d.Data2
      || a2[2] != *(_DWORD *)GUID_76d7759a_857c_46bd_ba0c_841904e0fc8d.Data4
      || a2[3] != *(_DWORD *)&GUID_76d7759a_857c_46bd_ba0c_841904e0fc8d.Data4[4] )
    {
      a1 += 8LL;
      if ( *a2 != -1334129192
        || a2[1] != *(_DWORD *)&GUID_b07acdd8_280b_4fe2_b920_95f945832a24.Data2
        || a2[2] != *(_DWORD *)GUID_b07acdd8_280b_4fe2_b920_95f945832a24.Data4
        || a2[3] != *(_DWORD *)&GUID_b07acdd8_280b_4fe2_b920_95f945832a24.Data4[4] )
      {
        a1 += 8LL;
        if ( *a2 != -1647821199
          || a2[1] != *(_DWORD *)&GUID_9dc83e71_3d96_5bac_acf9_4d7d062b1fb8.Data2
          || a2[2] != *(_DWORD *)GUID_9dc83e71_3d96_5bac_acf9_4d7d062b1fb8.Data4
          || a2[3] != *(_DWORD *)&GUID_9dc83e71_3d96_5bac_acf9_4d7d062b1fb8.Data4[4] )
        {
          a1 += 8LL;
          if ( *a2 != 309511596
            || a2[1] != *(_DWORD *)&GUID_1272c5ac_d7c9_5a11_88e3_f6ffaf79e9b1.Data2
            || a2[2] != *(_DWORD *)GUID_1272c5ac_d7c9_5a11_88e3_f6ffaf79e9b1.Data4
            || a2[3] != *(_DWORD *)&GUID_1272c5ac_d7c9_5a11_88e3_f6ffaf79e9b1.Data4[4] )
          {
            return 2147500034LL;
          }
        }
      }
    }
  }
  *a3 = a1;
  return 0LL;
}
