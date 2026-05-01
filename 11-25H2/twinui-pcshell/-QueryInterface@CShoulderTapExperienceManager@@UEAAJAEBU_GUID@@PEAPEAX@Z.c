/*
 * XREFs of ?QueryInterface@CShoulderTapExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801BF930
 * Callers:
 *     ??$MakeAndInitialize@VCShoulderTapExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18021049C (--$MakeAndInitialize@VCShoulderTapExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@De.c)
 *     ?QueryInterface@CShoulderTapExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18037DA00 (-QueryInterface@CShoulderTapExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShoulderTapExperienceManager::QueryInterface(
        CShoulderTapExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( *(_QWORD *)&a2->Data1 == __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || a2->Data1 == -1350114592
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
  {
    *a3 = this;
  }
  else
  {
    if ( a2->Data1 != -2040014067
      || *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_8667db0d_6960_465f_b9a4_c461863efa91.Data2
      || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_8667db0d_6960_465f_b9a4_c461863efa91.Data4
      || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_8667db0d_6960_465f_b9a4_c461863efa91.Data4[4] )
    {
      this = (CShoulderTapExperienceManager *)((char *)this + 8);
      if ( a2->Data1 != 56
        || *(_DWORD *)&a2->Data2 != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
        || *(_DWORD *)a2->Data4 != *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
        || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
      {
        return (unsigned int)-2147467262;
      }
    }
    *a3 = this;
  }
  (*(void (__fastcall **)(CShoulderTapExperienceManager *))(*(_QWORD *)this + 8LL))(this);
  return v3;
}
