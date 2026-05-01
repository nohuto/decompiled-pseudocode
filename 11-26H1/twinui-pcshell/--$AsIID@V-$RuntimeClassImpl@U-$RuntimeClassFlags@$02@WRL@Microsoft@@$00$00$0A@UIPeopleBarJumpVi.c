/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UILightDismissNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UILightDismissNotification@@UIClosable@Foundation@8@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801CE36C
 * Callers:
 *     ?QueryInterface@CPeopleBarJumpViewExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CE360 (-QueryInterface@CPeopleBarJumpViewExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VCPeopleBarJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180382F18 (--$MakeAndInitialize@VCPeopleBarJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvide.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v3; // eax
  __int64 v4; // rcx
  int v5; // ebx

  *a3 = 0LL;
  if ( !*a2 )
  {
    if ( a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      v3 = *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4];
      goto LABEL_5;
    }
LABEL_6:
    a1 += 8LL;
    if ( *a2 != 56
      || a2[1] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
      || a2[2] != *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
      || a2[3] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
    {
      v4 = a1 + 8;
      if ( *a2 == -1924325694
        && a2[1] == *(_DWORD *)&GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb.Data2
        && a2[2] == *(_DWORD *)GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb.Data4
        && a2[3] == *(_DWORD *)&GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb.Data4[4]
        || (v4 += 8LL, *a2 == 819308585)
        && a2[1] == *(_DWORD *)&GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e.Data2
        && a2[2] == *(_DWORD *)GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e.Data4
        && a2[3] == *(_DWORD *)&GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e.Data4[4] )
      {
        *a3 = v4;
        v5 = 0;
      }
      else
      {
        v5 = -2147467262;
      }
      if ( v5 < 0 )
        return (unsigned int)v5;
      goto LABEL_30;
    }
LABEL_29:
    *a3 = a1;
    v5 = 0;
LABEL_30:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v5;
  }
  if ( *a2 != -1350114592 )
  {
    if ( *a2 == -1419399131
      && a2[1] == *(_DWORD *)&GUID_ab65b025_ff88_470a_9513_b62bcd7ce879.Data2
      && a2[2] == *(_DWORD *)GUID_ab65b025_ff88_470a_9513_b62bcd7ce879.Data4
      && a2[3] == *(_DWORD *)&GUID_ab65b025_ff88_470a_9513_b62bcd7ce879.Data4[4] )
    {
      goto LABEL_29;
    }
    goto LABEL_6;
  }
  if ( a2[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    || a2[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
  {
    goto LABEL_6;
  }
  v3 = *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4];
LABEL_5:
  if ( a2[3] != v3 )
    goto LABEL_6;
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
