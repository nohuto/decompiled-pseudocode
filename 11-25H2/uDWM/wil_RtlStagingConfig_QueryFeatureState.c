/*
 * XREFs of wil_RtlStagingConfig_QueryFeatureState @ 0x180079D1C
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x180079BDC (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 * Callees:
 *     ?wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z @ 0x1800954E0 (-wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil_RtlStagingConfig_QueryFeatureState(__int64 a1, unsigned int a2, int a3, _DWORD *a4)
{
  int v4; // ebx
  BOOL v7; // ebp
  unsigned int v9; // edi
  __int64 (*NtDllProcedureAddress)(void); // rax
  int v11; // eax
  int v12; // edx
  unsigned int v14; // ecx
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+38h] [rbp-40h] BYREF
  int v17; // [rsp+40h] [rbp-38h]

  v4 = 0;
  v15 = 0LL;
  v7 = a3 == 0;
  v9 = 0;
  v16 = 0LL;
  v17 = 0;
  NtDllProcedureAddress = (__int64 (*)(void))g_wil_details_pfnRtlQueryFeatureConfiguration;
  if ( g_wil_details_pfnRtlQueryFeatureConfiguration
    || (NtDllProcedureAddress = wil_details_GetNtDllProcedureAddress("RtlQueryFeatureConfiguration"),
        (g_wil_details_pfnRtlQueryFeatureConfiguration = (__int64)NtDllProcedureAddress) != 0) )
  {
    v11 = ((__int64 (__fastcall *)(_QWORD, BOOL, __int64 *, __int64 *))NtDllProcedureAddress)(a2, v7, &v15, &v16);
    v12 = v11;
    if ( v11 )
    {
      if ( v11 != 279 )
        goto LABEL_4;
      v14 = HIDWORD(v16);
      v9 = 1;
    }
    else
    {
      v14 = HIDWORD(v16);
      v9 = 1;
      *(_DWORD *)a1 = (HIDWORD(v16) >> 4) & 3;
      *(_BYTE *)(a1 + 4) = BYTE1(v14) & 0x3F;
      *(_DWORD *)(a1 + 12) = v17;
      *(_DWORD *)(a1 + 8) = (unsigned __int16)v14 >> 14;
      *(_DWORD *)(a1 + 20) = (v14 >> 6) & 1;
    }
    *(_DWORD *)(a1 + 16) = (v14 >> 7) & 1;
  }
  else
  {
    v12 = -1073741511;
  }
LABEL_4:
  if ( a4 )
  {
    LOBYTE(v4) = v12 != -2147483614;
    *a4 = v4;
  }
  return v9;
}
