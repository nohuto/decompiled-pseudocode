/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIControlCenterExperienceManager@6789@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@UIInputSwitchHost@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIControlCenterExperienceManager@6789@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@UIInputSwitchHost@@UIInputHostLayoutChanges@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800BDC6C
 * Callers:
 *     ??$com_weak_query@PEAVCControlCenterExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCControlCenterExperienceManager@@@Z @ 0x1800BDB84 (--$com_weak_query@PEAVCControlCenterExperienceManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@U.c)
 *     ??$MakeAndInitialize@VCControlCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18020235C (--$MakeAndInitialize@VCControlCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802200F0 (-QueryInterface@CControlCenterExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputSwitchHost,IInputHostLayoutChanges>>(
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
  if ( *a2 == -1350114592 && a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2 )
  {
    if ( a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
LABEL_11:
      *a3 = a1;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      return 0LL;
    }
    if ( a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
      goto LABEL_15;
    }
  }
  a1 += 8LL;
  if ( *a2 == -1924325694
    && a2[1] == *(_DWORD *)&GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb.Data2
    && a2[2] == *(_DWORD *)GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb.Data4
    && a2[3] == *(_DWORD *)&GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb.Data4[4] )
  {
LABEL_15:
    *a3 = a1;
    v5 = 0;
  }
  else
  {
    v6 = a1 + 8;
    if ( *a2 == 56
      && a2[1] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
      && a2[2] == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
      && a2[3] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
    {
      goto LABEL_27;
    }
    v6 += 8LL;
    if ( *a2 == -41934107
      && a2[1] == *(_DWORD *)&GUID_fd8022e5_1099_53f9_b49a_b39bf3f15861.Data2
      && a2[2] == *(_DWORD *)GUID_fd8022e5_1099_53f9_b49a_b39bf3f15861.Data4
      && a2[3] == *(_DWORD *)&GUID_fd8022e5_1099_53f9_b49a_b39bf3f15861.Data4[4] )
    {
      goto LABEL_27;
    }
    if ( (v6 += 8LL, *a2 == -697719410)
      && a2[1] == *(_DWORD *)&GUID_d669a58e_6b18_4d1d_9004_a8862adb0a20.Data2
      && a2[2] == *(_DWORD *)GUID_d669a58e_6b18_4d1d_9004_a8862adb0a20.Data4
      && a2[3] == *(_DWORD *)&GUID_d669a58e_6b18_4d1d_9004_a8862adb0a20.Data4[4]
      || (v6 += 8LL, *a2 == -1738762077)
      && a2[1] == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data2
      && a2[2] == *(_DWORD *)GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4
      && a2[3] == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4[4]
      || (v6 += 8LL, *a2 == -189734543)
      && a2[1] == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data2
      && a2[2] == *(_DWORD *)GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4
      && a2[3] == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4[4]
      || (v6 += 8LL, *a2 == -1811144131)
      && a2[1] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
      && a2[2] == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
      && a2[3] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4]
      || (v6 += 8LL, *a2 == 819308585)
      && a2[1] == *(_DWORD *)&_uuidof__AUIDisposable_Platform__.Data2
      && a2[2] == *(_DWORD *)_uuidof__AUIDisposable_Platform__.Data4
      && a2[3] == *(_DWORD *)&_uuidof__AUIDisposable_Platform__.Data4[4]
      || (v6 += 8LL, *a2 == 1695559482)
      && a2[1] == *(_DWORD *)&GUID_65102f3a_20a8_4047_a936_05aa4c3965bf.Data2
      && a2[2] == *(_DWORD *)GUID_65102f3a_20a8_4047_a936_05aa4c3965bf.Data4
      && a2[3] == *(_DWORD *)&GUID_65102f3a_20a8_4047_a936_05aa4c3965bf.Data4[4]
      || (v6 += 8LL, *a2 == 1337586361)
      && a2[1] == *(_DWORD *)&GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e.Data2
      && a2[2] == *(_DWORD *)GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e.Data4
      && a2[3] == *(_DWORD *)&GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e.Data4[4] )
    {
LABEL_27:
      *a3 = v6;
      v5 = 0;
    }
    else
    {
      v5 = -2147467262;
    }
    if ( v5 < 0 )
      return (unsigned int)v5;
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v5;
}
