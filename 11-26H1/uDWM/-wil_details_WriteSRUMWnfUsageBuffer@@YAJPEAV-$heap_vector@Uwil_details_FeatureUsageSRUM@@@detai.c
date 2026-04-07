/*
 * XREFs of ?wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV?$heap_vector@Uwil_details_FeatureUsageSRUM@@@details_abi@wil@@@Z @ 0x18009379C
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_1_@?7???$EnsureCoalescedTimerSRUM@VFeatureStateManager@details@wil@@@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@AEA_NPEAVFeatureStateManager@23@@Z@SA@PEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180090180 (-_lambda_invoker_cdecl_@_lambda_1_@-7---$EnsureCoalescedTimerSRUM@VFeatureStateManager@details@w.c)
 * Callees:
 *     wil_details_NtUpdateWnfStateData @ 0x180086F50 (wil_details_NtUpdateWnfStateData.c)
 *     wil_details_NtQueryWnfStateData @ 0x180086FE0 (wil_details_NtQueryWnfStateData.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     ??$make_range@PEAUwil_details_FeatureUsageSRUM@@@wil@@YA?AV?$pointer_range@PEAUwil_details_FeatureUsageSRUM@@@details@0@PEAUwil_details_FeatureUsageSRUM@@_K@Z @ 0x1800905C0 (--$make_range@PEAUwil_details_FeatureUsageSRUM@@@wil@@YA-AV-$pointer_range@PEAUwil_details_Featu.c)
 *     _alloca_probe @ 0x1800E6C10 (_alloca_probe.c)
 */

__int64 __fastcall wil_details_WriteSRUMWnfUsageBuffer(__int64 *a1)
{
  unsigned int WnfStateData; // ebx
  unsigned int updated; // edi
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // r11d
  __int64 i; // r10
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 j; // rcx
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-E0h]
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v17[2]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v18[3]; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v19[1024]; // [rsp+70h] [rbp-90h] BYREF

  WnfStateData = 0;
  updated = 0;
  if ( (unsigned __int64)(a1[1] - *a1) >= 0xC )
  {
    v4 = 0;
    do
    {
      memset_0(v19, 0, sizeof(v19));
      v16 = 4096LL;
      WnfStateData = wil_details_NtQueryWnfStateData(
                       (__int64)&__WIL_WNF_WIL_FEATURE_USAGE_FOR_SRUM,
                       v5,
                       v6,
                       (__int64)&v16 + 4,
                       (__int64)v19,
                       (__int64)&v16);
      if ( !WnfStateData )
      {
        if ( (unsigned int)v16 != 12 * ((unsigned int)v16 / 0xCuLL) )
          LODWORD(v16) = 0;
        wil::make_range<wil_details_FeatureUsageSRUM *>(v17, *a1, (a1[1] - *a1) / 0xCuLL);
        for ( i = v17[0]; i != v17[1]; i = v11 + 12 )
        {
          wil::make_range<wil_details_FeatureUsageSRUM *>(v18, (__int64)v19, v8);
          for ( j = v18[0]; j != v18[1]; j += 12LL )
          {
            if ( *(_DWORD *)j == *(_DWORD *)v11 && *(_WORD *)(j + 4) == *(_WORD *)(v11 + 4) )
            {
              *(_DWORD *)(j + 8) += *(_DWORD *)(v11 + 8);
              v7 = (unsigned int)v16;
              goto LABEL_15;
            }
          }
          if ( (unsigned __int64)(unsigned int)v7 + 12 <= 0x1000 )
          {
            v13 = 3 * v10;
            *(_QWORD *)&v19[v13] = *(_QWORD *)v11;
            v7 = (unsigned int)(v7 + 12);
            ++v8;
            v19[v13 + 2] = *(_DWORD *)(v11 + 8);
            LODWORD(v16) = v7;
          }
LABEL_15:
          ;
        }
        updated = wil_details_NtUpdateWnfStateData(
                    (__int64)&__WIL_WNF_WIL_FEATURE_USAGE_FOR_SRUM,
                    (__int64)v19,
                    v7,
                    v7,
                    v15,
                    SHIDWORD(v16),
                    1);
      }
      ++v4;
    }
    while ( updated == -1073741823 && v4 < 100 && !WnfStateData );
  }
  if ( !WnfStateData )
    return updated;
  return WnfStateData;
}
