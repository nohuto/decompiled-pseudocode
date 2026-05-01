/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnapAssistControllerBase@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnapAssistControllerBase@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801A3B9C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnapAssistControllerBase@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A3B90 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnapAssis.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UISnapAssistControllerPrivate@@UISnapAssistCallback@@UITabletModePositionerManagerNotification@@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@UIGuidedSnapAssistController@89Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801A3CE8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UISnapAssistControllerP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CSnapAssistControllerBase>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v3; // rdx
  int CanCastTo; // ebx
  __int64 v5; // r9
  __int64 v6; // r9

  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 != -1350114592 || a2[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2 )
      goto LABEL_5;
    if ( a2[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      || a2[3] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
      if ( a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
        && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
        && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
      {
        *a3 = a1;
        goto LABEL_27;
      }
LABEL_5:
      if ( *a2 != -1850883050
        || a2[1] != *(_DWORD *)&GUID_91adc416_4c36_457e_9bab_7e545e723826.Data2
        || a2[2] != *(_DWORD *)GUID_91adc416_4c36_457e_9bab_7e545e723826.Data4
        || a2[3] != *(_DWORD *)&GUID_91adc416_4c36_457e_9bab_7e545e723826.Data4[4] )
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISnapAssistControllerPrivate,ISnapAssistCallback,ITabletModePositionerManagerNotification,Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController>::CanCastTo(a1 + 16);
        if ( CanCastTo == -2147467262 )
        {
          v6 = v5 + 320;
          if ( *v3 == 56
            && v3[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
            && v3[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
            && v3[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
          {
            *a3 = v6;
            CanCastTo = 0;
          }
          else
          {
            CanCastTo = -2147467262;
          }
        }
        if ( CanCastTo < 0 )
          return (unsigned int)CanCastTo;
        goto LABEL_28;
      }
      *a3 = a1 + 8;
LABEL_27:
      CanCastTo = 0;
LABEL_28:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
      return (unsigned int)CanCastTo;
    }
  }
  else if ( a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
         || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
         || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_5;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
