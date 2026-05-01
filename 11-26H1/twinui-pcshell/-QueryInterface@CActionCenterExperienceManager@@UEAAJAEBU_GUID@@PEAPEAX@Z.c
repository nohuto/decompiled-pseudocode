/*
 * XREFs of ?QueryInterface@CActionCenterExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010B950
 * Callers:
 *     ??$AsWeak@VCActionCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCActionCenterExperienceManager@@PEAVWeakRef@01@@Z @ 0x18010B828 (--$AsWeak@VCActionCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCActionCenterExperienceManager.c)
 *     ??$com_weak_query@PEAVCActionCenterExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCActionCenterExperienceManager@@@Z @ 0x1802A2C48 (--$com_weak_query@PEAVCActionCenterExperienceManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Ue.c)
 *     ??$MakeAndInitialize@VCActionCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18036344C (--$MakeAndInitialize@VCActionCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@D.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180367100 (-QueryInterface@CActionCenterExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180367110 (-QueryInterface@CActionCenterExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180367120 (-QueryInterface@CActionCenterExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180367130 (-QueryInterface@CActionCenterExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180367140 (-QueryInterface@CActionCenterExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180367150 (-QueryInterface@CActionCenterExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180367160 (-QueryInterface@CActionCenterExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180367170 (-QueryInterface@CActionCenterExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180367180 (-QueryInterface@CActionCenterExperienceManager@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180367190 (-QueryInterface@CActionCenterExperienceManager@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803671A0 (-QueryInterface@CActionCenterExperienceManager@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::QueryInterface(
        CActionCenterExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // edi
  char *v4; // rcx
  int v5; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( a2->Data1 )
  {
    if ( a2->Data1 == -1350114592
      && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2 )
    {
      if ( *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
      {
        goto LABEL_5;
      }
      if ( *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
      {
        goto LABEL_62;
      }
    }
    goto LABEL_13;
  }
  if ( *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
LABEL_13:
    this = (CActionCenterExperienceManager *)((char *)this + 8);
    if ( a2->Data1 != -1924325694
      || *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb.Data2
      || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb.Data4
      || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb.Data4[4] )
    {
      v4 = (char *)this + 8;
      if ( a2->Data1 == 56
        && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
      {
        goto LABEL_61;
      }
      v4 += 8;
      if ( a2->Data1 == -41934107
        && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_fd8022e5_1099_53f9_b49a_b39bf3f15861.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_fd8022e5_1099_53f9_b49a_b39bf3f15861.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_fd8022e5_1099_53f9_b49a_b39bf3f15861.Data4[4] )
      {
        goto LABEL_61;
      }
      v4 += 8;
      if ( a2->Data1 == -546972841
        && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_df65db57_d504_456e_8bd7_004ce308d8d9.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_df65db57_d504_456e_8bd7_004ce308d8d9.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_df65db57_d504_456e_8bd7_004ce308d8d9.Data4[4] )
      {
        goto LABEL_61;
      }
      if ( (v4 += 8, a2->Data1 == -557823208)
        && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_dec04b18_357e_41d8_9b71_b991243bea34.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_dec04b18_357e_41d8_9b71_b991243bea34.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_dec04b18_357e_41d8_9b71_b991243bea34.Data4[4]
        || (v4 += 8, a2->Data1 == 2119596781)
        && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_7e567aed_92f2_4ad4_be89_4be989ec6cef.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_7e567aed_92f2_4ad4_be89_4be989ec6cef.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_7e567aed_92f2_4ad4_be89_4be989ec6cef.Data4[4]
        || (v4 += 8, a2->Data1 == -1738762077)
        && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4[4]
        || (v4 += 8, a2->Data1 == -189734543)
        && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4[4]
        || (v4 += 8, a2->Data1 == -1811144131)
        && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4]
        || (v4 += 8, a2->Data1 == 819308585)
        && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e.Data4[4]
        || (v4 += 8, a2->Data1 == 1337586361)
        && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e.Data4[4] )
      {
LABEL_61:
        *a3 = v4;
        v5 = 0;
      }
      else
      {
        v5 = -2147467262;
      }
      if ( v5 < 0 )
        return (unsigned int)v5;
      goto LABEL_63;
    }
LABEL_62:
    *a3 = this;
    v5 = 0;
LABEL_63:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v5;
  }
LABEL_5:
  *a3 = this;
  (*(void (__fastcall **)(CActionCenterExperienceManager *))(*(_QWORD *)this + 8LL))(this);
  return v3;
}
