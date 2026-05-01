/*
 * XREFs of ?QueryInterface@CActionCenterExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801539D0
 * Callers:
 *     ??$AsWeak@VCActionCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCActionCenterExperienceManager@@PEAVWeakRef@01@@Z @ 0x1801538B0 (--$AsWeak@VCActionCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCActionCenterExperienceManager.c)
 *     ??$com_weak_query@PEAVCActionCenterExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCActionCenterExperienceManager@@@Z @ 0x1802AA378 (--$com_weak_query@PEAVCActionCenterExperienceManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Ue.c)
 *     ??$MakeAndInitialize@VCActionCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18035C644 (--$MakeAndInitialize@VCActionCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@D.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180360140 (-QueryInterface@CActionCenterExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180360150 (-QueryInterface@CActionCenterExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180360160 (-QueryInterface@CActionCenterExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180360170 (-QueryInterface@CActionCenterExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180360180 (-QueryInterface@CActionCenterExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180360190 (-QueryInterface@CActionCenterExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803601A0 (-QueryInterface@CActionCenterExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803601B0 (-QueryInterface@CActionCenterExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803601C0 (-QueryInterface@CActionCenterExperienceManager@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803601D0 (-QueryInterface@CActionCenterExperienceManager@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803601E0 (-QueryInterface@CActionCenterExperienceManager@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CActionCenterExperienceManager::QueryInterface(
        CActionCenterExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  int v4; // ebx
  char *v6; // rcx

  *a3 = 0LL;
  if ( *(_QWORD *)&a2->Data1 == __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_10;
  }
  if ( a2->Data1 == -1350114592 && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2 )
  {
    if ( *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
LABEL_10:
      *a3 = this;
      (*(void (__fastcall **)(CActionCenterExperienceManager *))(*(_QWORD *)this + 8LL))(this);
      return 0;
    }
    if ( *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
      goto LABEL_15;
    }
  }
  this = (CActionCenterExperienceManager *)((char *)this + 8);
  if ( a2->Data1 == -1924325694
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb.Data4[4] )
  {
LABEL_15:
    *a3 = this;
    v4 = 0;
LABEL_16:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v4;
  }
  v6 = (char *)this + 8;
  if ( a2->Data1 == 56
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
  {
    goto LABEL_23;
  }
  v6 += 8;
  if ( a2->Data1 == -41934107
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_fd8022e5_1099_53f9_b49a_b39bf3f15861.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_fd8022e5_1099_53f9_b49a_b39bf3f15861.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_fd8022e5_1099_53f9_b49a_b39bf3f15861.Data4[4] )
  {
    goto LABEL_23;
  }
  v6 += 8;
  if ( a2->Data1 == -546972841
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_df65db57_d504_456e_8bd7_004ce308d8d9.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_df65db57_d504_456e_8bd7_004ce308d8d9.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_df65db57_d504_456e_8bd7_004ce308d8d9.Data4[4] )
  {
    goto LABEL_23;
  }
  if ( (v6 += 8, a2->Data1 == -557823208)
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_dec04b18_357e_41d8_9b71_b991243bea34.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_dec04b18_357e_41d8_9b71_b991243bea34.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_dec04b18_357e_41d8_9b71_b991243bea34.Data4[4]
    || (v6 += 8, a2->Data1 == 2119596781)
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_7e567aed_92f2_4ad4_be89_4be989ec6cef.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_7e567aed_92f2_4ad4_be89_4be989ec6cef.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_7e567aed_92f2_4ad4_be89_4be989ec6cef.Data4[4]
    || (v6 += 8, a2->Data1 == -1738762077)
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4[4]
    || (v6 += 8, a2->Data1 == -189734543)
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4[4]
    || (v6 += 8, a2->Data1 == -1811144131)
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4]
    || (v6 += 8, a2->Data1 == 819308585)
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&_uuidof__AUIDisposable_Platform__.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)_uuidof__AUIDisposable_Platform__.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&_uuidof__AUIDisposable_Platform__.Data4[4]
    || (v6 += 8, a2->Data1 == 1337586361)
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e.Data4[4] )
  {
LABEL_23:
    *a3 = v6;
    v4 = 0;
  }
  else
  {
    v4 = -2147467262;
  }
  if ( v4 >= 0 )
    goto LABEL_16;
  return (unsigned int)v4;
}
