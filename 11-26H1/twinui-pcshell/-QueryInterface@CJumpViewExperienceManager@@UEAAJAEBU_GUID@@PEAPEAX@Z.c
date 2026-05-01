/*
 * XREFs of ?QueryInterface@CJumpViewExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180181D80
 * Callers:
 *     ??$MakeAndInitialize@VCJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180056138 (--$MakeAndInitialize@VCJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Detai.c)
 *     ??$AsWeak@VCJumpViewExperienceManager@@@WRL@Microsoft@@YAJPEAVCJumpViewExperienceManager@@PEAVWeakRef@01@@Z @ 0x1802B2E9C (--$AsWeak@VCJumpViewExperienceManager@@@WRL@Microsoft@@YAJPEAVCJumpViewExperienceManager@@PEAVWe.c)
 *     ?QueryInterface@CJumpViewExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18038DF80 (-QueryInterface@CJumpViewExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CJumpViewExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18038DF90 (-QueryInterface@CJumpViewExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CJumpViewExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18038DFA0 (-QueryInterface@CJumpViewExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CJumpViewExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18038DFB0 (-QueryInterface@CJumpViewExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CJumpViewExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18038DFC0 (-QueryInterface@CJumpViewExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CJumpViewExperienceManager::QueryInterface(
        CJumpViewExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // edi
  int v4; // eax
  char *v5; // rcx
  int v6; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( !a2->Data1 )
  {
    if ( *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      goto LABEL_6;
    }
    v4 = *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4];
    goto LABEL_5;
  }
  if ( a2->Data1 != -1350114592 )
  {
    if ( a2->Data1 == -1778645235
      && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_95fc070d_cc20_44e5_8c0d_75ed8f7100b0.Data2
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_95fc070d_cc20_44e5_8c0d_75ed8f7100b0.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_95fc070d_cc20_44e5_8c0d_75ed8f7100b0.Data4[4] )
    {
      goto LABEL_38;
    }
    goto LABEL_6;
  }
  if ( *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
  {
    v4 = *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4];
LABEL_5:
    if ( *(_DWORD *)&a2->Data4[4] == v4 )
    {
      *a3 = this;
      (*(void (__fastcall **)(CJumpViewExperienceManager *))(*(_QWORD *)this + 8LL))(this);
      return v3;
    }
  }
LABEL_6:
  this = (CJumpViewExperienceManager *)((char *)this + 8);
  if ( a2->Data1 != 56
    || *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
    || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
    || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
  {
    v5 = (char *)this + 8;
    if ( a2->Data1 == -1811144131
      && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4]
      || (v5 += 8, a2->Data1 == 819308585)
      && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e.Data2
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e.Data4[4]
      || (v5 += 8, a2->Data1 == 2026419288)
      && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_78c8b458_dd5a_4f32_9d8b_d45a19ae9e1f.Data2
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_78c8b458_dd5a_4f32_9d8b_d45a19ae9e1f.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_78c8b458_dd5a_4f32_9d8b_d45a19ae9e1f.Data4[4]
      || (v5 += 8, a2->Data1 == -189734543)
      && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data2
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4[4] )
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
    goto LABEL_39;
  }
LABEL_38:
  *a3 = this;
  v6 = 0;
LABEL_39:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v6;
}
