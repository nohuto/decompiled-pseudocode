/*
 * XREFs of wil_RtlStagingConfig_QueryFeatureState @ 0x14001B640
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x14001BD54 (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     wil_details_GetNtDllProcedureAddress @ 0x14001BEB0 (wil_details_GetNtDllProcedureAddress.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140020010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil_RtlStagingConfig_QueryFeatureState(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // ebx
  BOOL v6; // esi
  __int64 (__fastcall *NtDllProcedureAddress)(_QWORD, BOOL, __int64 *, __int64 *); // rax
  int v8; // eax
  unsigned int v9; // ecx
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+38h] [rbp-30h] BYREF
  int v13; // [rsp+40h] [rbp-28h]

  v3 = 0;
  v11 = 0LL;
  v6 = a3 == 0;
  v12 = 0LL;
  v13 = 0;
  NtDllProcedureAddress = (__int64 (__fastcall *)(_QWORD, BOOL, __int64 *, __int64 *))g_wil_details_pfnRtlQueryFeatureConfiguration;
  if ( g_wil_details_pfnRtlQueryFeatureConfiguration
    || (NtDllProcedureAddress = (__int64 (__fastcall *)(_QWORD, BOOL, __int64 *, __int64 *))wil_details_GetNtDllProcedureAddress(
                                                                                              "RtlQueryFeatureConfiguration"),
        (g_wil_details_pfnRtlQueryFeatureConfiguration = (__int64)NtDllProcedureAddress) != 0) )
  {
    v8 = NtDllProcedureAddress(a2, v6, &v11, &v12);
    if ( v8 )
    {
      if ( v8 == 279 )
      {
        v3 = 1;
        *(_DWORD *)(a1 + 16) = (HIDWORD(v12) >> 7) & 1;
      }
    }
    else
    {
      v9 = HIDWORD(v12);
      v3 = 1;
      *(_DWORD *)a1 = (HIDWORD(v12) >> 4) & 3;
      *(_BYTE *)(a1 + 4) = BYTE1(v9) & 0x3F;
      *(_DWORD *)(a1 + 12) = v13;
      *(_DWORD *)(a1 + 8) = (unsigned __int16)v9 >> 14;
      *(_DWORD *)(a1 + 20) = (v9 >> 6) & 1;
      *(_DWORD *)(a1 + 16) = (v9 >> 7) & 1;
    }
  }
  return v3;
}
