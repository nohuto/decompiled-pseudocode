/*
 * XREFs of wil_RtlStagingConfig_QueryFeatureState @ 0x1800ECAEC
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1800E5058 (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     RtlQueryFeatureConfiguration @ 0x1800ECBC0 (RtlQueryFeatureConfiguration.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall wil_RtlStagingConfig_QueryFeatureState(__int64 a1, RTL_FEATURE_ID a2, int a3)
{
  unsigned int v4; // ebx
  NTSTATUS v5; // eax
  ULONG Flags; // ecx
  ULONGLONG v8; // [rsp+20h] [rbp-28h] BYREF
  _RTL_FEATURE_CONFIGURATION v9; // [rsp+28h] [rbp-20h] BYREF

  v4 = 0;
  v8 = 0LL;
  *(_QWORD *)&v9.FeatureId = 0LL;
  v9.VariantPayload = 0;
  v5 = RtlQueryFeatureConfiguration(a2, (RTL_FEATURE_CONFIGURATION_TYPE)(a3 == 0), &v8, &v9);
  if ( !v5 )
  {
    Flags = v9.Flags;
    *(_DWORD *)a1 = (v9.Flags >> 4) & 3;
    *(_BYTE *)(a1 + 4) = BYTE1(Flags) & 0x3F;
    *(_DWORD *)(a1 + 12) = v9.VariantPayload;
    *(_DWORD *)(a1 + 8) = (unsigned __int16)Flags >> 14;
    *(_DWORD *)(a1 + 20) = (Flags >> 6) & 1;
    *(_DWORD *)(a1 + 16) = (Flags >> 7) & 1;
    return 1;
  }
  if ( v5 == 279 )
  {
    *(_DWORD *)(a1 + 16) = (v9.Flags >> 7) & 1;
    return 1;
  }
  return v4;
}
