/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@UIActiveZBandNotificationForMonitor@@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@UIActiveZBandNotificationForMonitor@@UIImmersiveWindowMessageNotification@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180186750
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@UIActiveZBandNotificationForMonitor@@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180228420 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIJumpViewE.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IJumpViewExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v5; // ebx
  __int64 v6; // rcx

  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_11;
  }
  if ( *a2 == -1350114592 )
  {
    if ( a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
LABEL_11:
      *a3 = a1;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      return 0LL;
    }
  }
  else if ( *a2 == -1778645235
         && a2[1] == *(_DWORD *)&GUID_95fc070d_cc20_44e5_8c0d_75ed8f7100b0.Data2
         && a2[2] == *(_DWORD *)GUID_95fc070d_cc20_44e5_8c0d_75ed8f7100b0.Data4
         && a2[3] == *(_DWORD *)&GUID_95fc070d_cc20_44e5_8c0d_75ed8f7100b0.Data4[4] )
  {
    goto LABEL_16;
  }
  a1 += 8LL;
  if ( *a2 != 56
    || a2[1] != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
    || a2[2] != *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
    || a2[3] != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
  {
    v6 = a1 + 8;
    if ( *a2 == -1811144131
      && a2[1] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
      && a2[2] == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
      && a2[3] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4]
      || (v6 += 8LL, *a2 == 819308585)
      && a2[1] == *(_DWORD *)&_uuidof__AUIDisposable_Platform__.Data2
      && a2[2] == *(_DWORD *)_uuidof__AUIDisposable_Platform__.Data4
      && a2[3] == *(_DWORD *)&_uuidof__AUIDisposable_Platform__.Data4[4]
      || (v6 += 8LL, *a2 == 2026419288)
      && a2[1] == *(_DWORD *)&GUID_78c8b458_dd5a_4f32_9d8b_d45a19ae9e1f.Data2
      && a2[2] == *(_DWORD *)GUID_78c8b458_dd5a_4f32_9d8b_d45a19ae9e1f.Data4
      && a2[3] == *(_DWORD *)&GUID_78c8b458_dd5a_4f32_9d8b_d45a19ae9e1f.Data4[4]
      || (v6 += 8LL, *a2 == -189734543)
      && a2[1] == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data2
      && a2[2] == *(_DWORD *)GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4
      && a2[3] == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4[4] )
    {
      *a3 = v6;
      v5 = 0;
    }
    else
    {
      v5 = -2147467262;
    }
    if ( v5 < 0 )
      return (unsigned int)v5;
    goto LABEL_17;
  }
LABEL_16:
  *a3 = a1;
  v5 = 0;
LABEL_17:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v5;
}
