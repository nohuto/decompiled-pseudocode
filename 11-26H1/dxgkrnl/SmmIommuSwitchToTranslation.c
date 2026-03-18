/*
 * XREFs of SmmIommuSwitchToTranslation @ 0x140285730
 * Callers:
 *     ?SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x140285CDC (-SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     SmmAssignDomain @ 0x14009BB18 (SmmAssignDomain.c)
 *     SmmMapExistingMemoryToDomain @ 0x14009C300 (SmmMapExistingMemoryToDomain.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     SmmIdentityMapMemory @ 0x140284F9C (SmmIdentityMapMemory.c)
 *     SmmIommuCreateDomain @ 0x140285398 (SmmIommuCreateDomain.c)
 *     SmmIommuDeleteDomain @ 0x1402853E4 (SmmIommuDeleteDomain.c)
 *     SmmSwapDomains @ 0x1402859E4 (SmmSwapDomains.c)
 */

__int64 __fastcall SmmIommuSwitchToTranslation(__int64 a1)
{
  __int64 v1; // r15
  char v3; // r14
  int Domain; // eax
  int v5; // edi
  __int64 v6; // rbp
  const wchar_t *v7; // r9
  __int64 v9; // [rsp+70h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 112);
  v9 = 0LL;
  v3 = 0;
  Domain = SmmIommuCreateDomain(0, (__int64)&v9);
  v5 = Domain;
  if ( Domain < 0 )
  {
    v6 = Domain;
    WdLogSingleEntry2(2LL, a1, Domain);
    WdLogGlobalForLineNumber = 2362;
    v7 = L"Failed to create IOMMU domain. SysMmAdapter=0x%.16I64x, Status=0x%.8x";
LABEL_14:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v7, a1, v6, 0LL, 0LL, 0LL);
    if ( v3 )
    {
      if ( !*(_QWORD *)(a1 + 336) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2428;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pAdapter->Iommu.CallbackContext != nullptr",
          2428LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))(a1 + 296))(a1, *(_QWORD *)(a1 + 336));
    }
    goto LABEL_18;
  }
  SmmAssignDomain(a1, v9, ((unsigned int)dword_1401696C0 >> 8) & 1);
  if ( (dword_1401696C0 & 0x100) != 0 )
  {
    v5 = SmmIdentityMapMemory(a1);
    if ( v5 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2372;
      v6 = 0LL;
      v7 = L"Failed to identity map domain. SysMmAdapter=0x%.16I64x";
      goto LABEL_14;
    }
LABEL_9:
    if ( (dword_1401696D8 & 1) != 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2407;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Verifier fault: Fail to attach to translation domain. SysMmAdapter=0x%.16I64x",
        a1,
        0LL,
        0LL,
        0LL,
        0LL);
      v5 = -1073741823;
    }
    else
    {
      v5 = SmmSwapDomains(a1, *(_QWORD *)(a1 + 112), v1);
      if ( v5 >= 0 )
        return (unsigned int)v5;
    }
    v6 = v5;
    WdLogSingleEntry2(2LL, a1, v5);
    WdLogGlobalForLineNumber = 2419;
    v7 = L"Failed to swap/attach IOMMU domains. SysMmAdapter=0x%.16I64x, Status=0x%.8x";
    goto LABEL_14;
  }
  v5 = SmmMapExistingMemoryToDomain(a1);
  if ( v5 >= 0 )
  {
    if ( !*(_QWORD *)(a1 + 336) )
      goto LABEL_9;
    v5 = (*(__int64 (__fastcall **)(__int64))(a1 + 288))(a1);
    if ( v5 >= 0 )
    {
      v3 = 1;
      goto LABEL_9;
    }
  }
LABEL_18:
  if ( v9 )
  {
    SmmAssignDomain(a1, v1, 1);
    SmmIommuDeleteDomain();
  }
  return (unsigned int)v5;
}
