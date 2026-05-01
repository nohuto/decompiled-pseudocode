/*
 * XREFs of ?QueryInterface@CJumpViewExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18018BB60
 * Callers:
 *     ??$MakeAndInitialize@VCJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18004ECB8 (--$MakeAndInitialize@VCJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Detai.c)
 *     ??$AsWeak@VCJumpViewExperienceManager@@@WRL@Microsoft@@YAJPEAVCJumpViewExperienceManager@@PEAVWeakRef@01@@Z @ 0x1802BC104 (--$AsWeak@VCJumpViewExperienceManager@@@WRL@Microsoft@@YAJPEAVCJumpViewExperienceManager@@PEAVWe.c)
 *     ?QueryInterface@CJumpViewExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180386F90 (-QueryInterface@CJumpViewExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CJumpViewExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180386FA0 (-QueryInterface@CJumpViewExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CJumpViewExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180386FB0 (-QueryInterface@CJumpViewExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CJumpViewExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180386FC0 (-QueryInterface@CJumpViewExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CJumpViewExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180386FD0 (-QueryInterface@CJumpViewExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CJumpViewExperienceManager::QueryInterface(
        CJumpViewExperienceManager *this,
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
  if ( a2->Data1 == -1350114592 )
  {
    if ( *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
LABEL_10:
      *a3 = this;
      (*(void (__fastcall **)(CJumpViewExperienceManager *))(*(_QWORD *)this + 8LL))(this);
      return 0;
    }
  }
  else if ( a2->Data1 == -1778645235
         && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_95fc070d_cc20_44e5_8c0d_75ed8f7100b0.Data2
         && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_95fc070d_cc20_44e5_8c0d_75ed8f7100b0.Data4
         && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_95fc070d_cc20_44e5_8c0d_75ed8f7100b0.Data4[4] )
  {
    goto LABEL_15;
  }
  this = (CJumpViewExperienceManager *)((char *)this + 8);
  if ( a2->Data1 == 56
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
  {
LABEL_15:
    *a3 = this;
    v4 = 0;
LABEL_16:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v4;
  }
  v6 = (char *)this + 8;
  if ( a2->Data1 == -1811144131
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4]
    || (v6 += 8, a2->Data1 == 819308585)
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&_uuidof__AUIDisposable_Platform__.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)_uuidof__AUIDisposable_Platform__.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&_uuidof__AUIDisposable_Platform__.Data4[4]
    || (v6 += 8, a2->Data1 == 2026419288)
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_78c8b458_dd5a_4f32_9d8b_d45a19ae9e1f.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_78c8b458_dd5a_4f32_9d8b_d45a19ae9e1f.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_78c8b458_dd5a_4f32_9d8b_d45a19ae9e1f.Data4[4]
    || (v6 += 8, a2->Data1 == -189734543)
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4[4] )
  {
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
