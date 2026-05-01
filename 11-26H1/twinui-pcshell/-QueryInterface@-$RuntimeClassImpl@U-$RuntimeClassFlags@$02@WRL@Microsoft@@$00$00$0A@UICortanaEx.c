/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIInitializeTrustedComponentForegroundControl@@VIDeferralMessage@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180172B90
 * Callers:
 *     ??$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienceManager@@PEAVWeakRef@01@@Z @ 0x18017EE68 (--$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienc.c)
 *     ??$MakeAndInitialize@VUndockedSearchAppExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1803A7564 (--$MakeAndInitialize@VUndockedSearchAppExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIInitializeTrustedComponentForegroundControl@@VIDeferralMessage@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803B6E50 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1803B6E50.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIInitializeTrustedComponentForegroundControl@@VIDeferralMessage@@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803B6E60 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1803B6E60.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIInitializeTrustedComponentForegroundControl@@VIDeferralMessage@@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803B6E70 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1803B6E70.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,IInitializeTrustedComponentForegroundControl,IDeferralMessage>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // edi
  int v4; // eax
  __int64 v5; // rcx
  int v6; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2 )
  {
    if ( a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      goto LABEL_6;
    }
    v4 = *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4];
    goto LABEL_5;
  }
  if ( *a2 != -1350114592 )
  {
    if ( *a2 == -861972281
      && a2[1] == *(_DWORD *)&GUID_cc9f58c7_f178_47ce_b78c_6c5f88e13931.Data2
      && a2[2] == *(_DWORD *)GUID_cc9f58c7_f178_47ce_b78c_6c5f88e13931.Data4
      && a2[3] == *(_DWORD *)&GUID_cc9f58c7_f178_47ce_b78c_6c5f88e13931.Data4[4] )
    {
      goto LABEL_23;
    }
    goto LABEL_6;
  }
  if ( a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
  {
    v4 = *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4];
LABEL_5:
    if ( a2[3] == v4 )
    {
      *a3 = a1;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      return v3;
    }
  }
LABEL_6:
  a1 += 8LL;
  if ( *a2 != 56
    || a2[1] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
  {
    v5 = a1 + 8;
    if ( *a2 == 1609546638
      && a2[1] == *(_DWORD *)&GUID_5fefbb8e_82c3_4ec4_93a0_05c4b9fcd4cd.Data2
      && a2[2] == *(_DWORD *)GUID_5fefbb8e_82c3_4ec4_93a0_05c4b9fcd4cd.Data4
      && a2[3] == *(_DWORD *)&GUID_5fefbb8e_82c3_4ec4_93a0_05c4b9fcd4cd.Data4[4]
      || (v5 += 8LL, *a2 == -736029690)
      && a2[1] == *(_DWORD *)&GUID_d4211406_e345_4633_bd48_e4e2b0cec865.Data2
      && a2[2] == *(_DWORD *)GUID_d4211406_e345_4633_bd48_e4e2b0cec865.Data4
      && a2[3] == *(_DWORD *)&GUID_d4211406_e345_4633_bd48_e4e2b0cec865.Data4[4] )
    {
      *a3 = v5;
      v6 = 0;
    }
    else
    {
      v6 = -2147467262;
    }
    if ( v6 < 0 )
      return (unsigned int)v6;
    goto LABEL_24;
  }
LABEL_23:
  *a3 = a1;
  v6 = 0;
LABEL_24:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v6;
}
