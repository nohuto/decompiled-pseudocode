/*
 * XREFs of SmmIommuSwitchToGpuVaIoMmu @ 0x140285400
 * Callers:
 *     ?SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x140285CDC (-SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     SmmAssignDomain @ 0x14009BB18 (SmmAssignDomain.c)
 *     SmmMapExistingMemoryToDomain @ 0x14009C300 (SmmMapExistingMemoryToDomain.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     SmmIommuCreateDomain @ 0x140285398 (SmmIommuCreateDomain.c)
 *     SmmIommuDeleteDomain @ 0x1402853E4 (SmmIommuDeleteDomain.c)
 *     SmmSwapDomains @ 0x1402859E4 (SmmSwapDomains.c)
 */

__int64 __fastcall SmmIommuSwitchToGpuVaIoMmu(__int64 a1, char a2)
{
  __int64 v2; // r13
  char v4; // r12
  int Domain; // eax
  int v6; // edi
  _QWORD *v7; // rsi
  __int64 v8; // r15
  const wchar_t *v9; // r9
  __int64 v11; // [rsp+80h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 112);
  v11 = 0LL;
  v4 = 0;
  Domain = SmmIommuCreateDomain(a2 ^ 1u, (__int64)&v11);
  v6 = Domain;
  if ( Domain < 0 )
  {
    v8 = Domain;
    WdLogSingleEntry2(2LL, a1, Domain);
    v9 = L"Failed to create IOMMU domain. SysMmAdapter=0x%.16I64x, Status=0x%.8x";
    WdLogGlobalForLineNumber = 2506;
    v7 = (_QWORD *)(a1 + 336);
LABEL_11:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, a1, v8, 0LL, 0LL, 0LL);
    if ( v4 )
    {
      if ( !*v7 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2556;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pAdapter->Iommu.CallbackContext != nullptr",
          2556LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))(a1 + 296))(a1, *v7);
    }
    goto LABEL_15;
  }
  SmmAssignDomain(a1, v11, 0);
  v6 = SmmMapExistingMemoryToDomain(a1);
  if ( v6 >= 0 )
  {
    v7 = (_QWORD *)(a1 + 336);
    if ( !*(_QWORD *)(a1 + 336) )
    {
LABEL_6:
      if ( (dword_1401696D8 & 1) != 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 2537;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Verifier fault: Fail to attach to Pasid domain. SysMmAdapter=0x%.16I64x",
          a1,
          0LL,
          0LL,
          0LL,
          0LL);
        v6 = -1073741823;
      }
      else
      {
        v6 = SmmSwapDomains(a1, *(_QWORD *)(a1 + 112), v2);
        if ( v6 >= 0 )
          return (unsigned int)v6;
      }
      v8 = v6;
      WdLogSingleEntry2(2LL, a1, v6);
      v9 = L"Failed to swap/attach IOMMU domains. SysMmAdapter=0x%.16I64x, Status=0x%.8x";
      WdLogGlobalForLineNumber = 2547;
      goto LABEL_11;
    }
    v6 = (*(__int64 (__fastcall **)(__int64))(a1 + 288))(a1);
    if ( v6 >= 0 )
    {
      v4 = 1;
      goto LABEL_6;
    }
  }
LABEL_15:
  if ( v11 )
  {
    SmmAssignDomain(a1, v2, 1);
    SmmIommuDeleteDomain();
  }
  return (unsigned int)v6;
}
