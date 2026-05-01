/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIClosable@Foundation@Windows@@UILightDismissNotification@@UIImmersiveMonitorNotification@@UIInsightsExperienceManager@Experience@Shell@Internal@6@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIClosable@Foundation@Windows@@UILightDismissNotification@@UIImmersiveMonitorNotification@@UIInsightsExperienceManager@Experience@Shell@Internal@6@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1802260CC
 * Callers:
 *     ??$MakeAndInitialize@VCInsightsExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18007F25C (--$MakeAndInitialize@VCInsightsExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Detai.c)
 *     ?QueryInterface@CInsightsExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802CE650 (-QueryInterface@CInsightsExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UILightDismissNotification@@UIImmersiveMonitorNotification@@UIInsightsExperienceManager@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180396BB0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_180396BB0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IClosable,ILightDismissNotification,IImmersiveMonitorNotification,Windows::Internal::Shell::Experience::IInsightsExperienceManager>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int CanCastTo; // ebx

  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_9;
  }
  if ( *a2 == -1350114592 )
  {
    if ( a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
LABEL_9:
      *a3 = a1;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      return 0LL;
    }
  }
  else if ( *a2 == 819308585
         && a2[1] == *(_DWORD *)&_uuidof__AUIDisposable_Platform__.Data2
         && a2[2] == *(_DWORD *)_uuidof__AUIDisposable_Platform__.Data4
         && a2[3] == *(_DWORD *)&_uuidof__AUIDisposable_Platform__.Data4[4] )
  {
    *a3 = a1;
    CanCastTo = 0;
LABEL_16:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)CanCastTo;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,ILightDismissNotification,IImmersiveMonitorNotification,Windows::Internal::Shell::Experience::IInsightsExperienceManager>::CanCastTo(a1 + 8);
  if ( CanCastTo >= 0 )
    goto LABEL_16;
  return (unsigned int)CanCastTo;
}
