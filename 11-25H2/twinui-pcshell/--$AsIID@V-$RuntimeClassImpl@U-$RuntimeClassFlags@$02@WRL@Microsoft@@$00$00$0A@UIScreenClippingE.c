/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIScreenClippingExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIScreenClippingExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIImmersiveWindowMessageNotification@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801C57D8
 * Callers:
 *     ??$AsWeak@VCScreenClippingExperienceManager@@@WRL@Microsoft@@YAJPEAVCScreenClippingExperienceManager@@PEAVWeakRef@01@@Z @ 0x1801C56D8 (--$AsWeak@VCScreenClippingExperienceManager@@@WRL@Microsoft@@YAJPEAVCScreenClippingExperienceMan.c)
 *     ??$MakeAndInitialize@VCScreenClippingExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1802027BC (--$MakeAndInitialize@VCScreenClippingExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIScreenClippingExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802CF8C0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIScreenCli.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IScreenClippingExperienceManager,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v4; // ebx
  __int64 v5; // rcx

  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || *a2 == -1350114592
    && a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return 0LL;
  }
  if ( *a2 == -1817382468
    && a2[1] == *(_DWORD *)&GUID_93acf1bc_b1c9_423a_9fa5_d80c0935ddee.Data2
    && a2[2] == *(_DWORD *)GUID_93acf1bc_b1c9_423a_9fa5_d80c0935ddee.Data4
    && a2[3] == *(_DWORD *)&GUID_93acf1bc_b1c9_423a_9fa5_d80c0935ddee.Data4[4]
    || (a1 += 8LL, *a2 == 56)
    && a2[1] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
    && a2[2] == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
    && a2[3] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
  {
    *a3 = a1;
    v4 = 0;
  }
  else
  {
    v5 = a1 + 8;
    if ( *a2 == 819308585
      && a2[1] == *(_DWORD *)&_uuidof__AUIDisposable_Platform__.Data2
      && a2[2] == *(_DWORD *)_uuidof__AUIDisposable_Platform__.Data4
      && a2[3] == *(_DWORD *)&_uuidof__AUIDisposable_Platform__.Data4[4]
      || (v5 += 8LL, *a2 == -189734543)
      && a2[1] == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data2
      && a2[2] == *(_DWORD *)GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4
      && a2[3] == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4[4] )
    {
      *a3 = v5;
      v4 = 0;
    }
    else
    {
      v4 = -2147467262;
    }
    if ( v4 < 0 )
      return (unsigned int)v4;
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v4;
}
