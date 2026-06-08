/*
 * XREFs of ReadEnergyEquation @ 0x140046330
 * Callers:
 *     PopulateEnergyEstimationModel @ 0x1400461E0 (PopulateEnergyEstimationModel.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14000CC0C (RtlStringCchPrintfW.c)
 *     RtlStringCchCatW @ 0x14000CCF0 (RtlStringCchCatW.c)
 *     RtlStringCopyWorkerW @ 0x14000CD5C (RtlStringCopyWorkerW.c)
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     memset @ 0x14000EA40 (memset.c)
 *     GetRegistryDwordValueNoDefault @ 0x1400243DC (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall ReadEnergyEquation(unsigned __int8 a1, __int64 a2)
{
  int RegistryDwordValueNoDefault; // ebx
  size_t v4; // rdx
  size_t v5; // rdx
  size_t *v7; // r8
  unsigned int v8; // esi
  __int64 v9; // rdi
  size_t cchToCopy; // [rsp+20h] [rbp-E0h]
  size_t cchToCopya; // [rsp+20h] [rbp-E0h]
  unsigned int v12; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-CCh] BYREF
  wchar_t pszSrc[20]; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t pszDest[192]; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t v16[192]; // [rsp+1E0h] [rbp+E0h] BYREF

  v13 = 0;
  v12 = 0;
  LODWORD(cchToCopy) = a1;
  RegistryDwordValueNoDefault = RtlStringCchPrintfW(
                                  pszDest,
                                  0xC0uLL,
                                  L"%s\\EfficiencyClass\\%d\\EnergyEquation",
                                  L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU");
  if ( RegistryDwordValueNoDefault < 0 )
    goto LABEL_8;
  RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                  (__int64)pszDest,
                                  (__int64)L"EquationIndex",
                                  (__int64)&v13);
  if ( RegistryDwordValueNoDefault < 0 )
    goto LABEL_8;
  RegistryDwordValueNoDefault = RtlStringCchPrintfW(pszSrc, 0x10uLL, L"\\%d", v13);
  if ( RegistryDwordValueNoDefault < 0 )
    goto LABEL_8;
  RegistryDwordValueNoDefault = RtlStringCchCatW(pszDest, v4, pszSrc);
  if ( RegistryDwordValueNoDefault < 0 )
    goto LABEL_8;
  RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                  (__int64)pszDest,
                                  (__int64)L"NumberOfCounters",
                                  (__int64)&v12);
  if ( RegistryDwordValueNoDefault < 0 )
    goto LABEL_8;
  if ( !v12 )
  {
    RegistryDwordValueNoDefault = -1073741807;
LABEL_8:
    *(_DWORD *)(a2 + 40) = 0;
    memset((void *)(a2 + 44), 0, 0xC0uLL);
    return (unsigned int)RegistryDwordValueNoDefault;
  }
  if ( v12 > 0x10 )
  {
    RegistryDwordValueNoDefault = -2147483643;
    goto LABEL_8;
  }
  RegistryDwordValueNoDefault = RtlStringCchCatW(pszDest, v5, L"\\EnergyCounter");
  if ( RegistryDwordValueNoDefault < 0 )
    goto LABEL_8;
  RegistryDwordValueNoDefault = RtlStringCopyWorkerW(v16, 0xC0uLL, v7, pszDest, cchToCopy);
  if ( RegistryDwordValueNoDefault < 0 )
    goto LABEL_8;
  v8 = 0;
  v9 = a2 + 44;
  while ( v8 < v12 )
  {
    LODWORD(cchToCopya) = v8;
    RegistryDwordValueNoDefault = RtlStringCchPrintfW(pszDest, 0xC0uLL, L"%s\\%d", v16, cchToCopya);
    if ( RegistryDwordValueNoDefault < 0 )
      goto LABEL_8;
    RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"CounterId", v9);
    if ( RegistryDwordValueNoDefault < 0 )
      goto LABEL_8;
    RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"CounterType", v9 + 4);
    if ( RegistryDwordValueNoDefault < 0 )
      goto LABEL_8;
    RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"Factor", v9 + 8);
    if ( RegistryDwordValueNoDefault < 0 )
      goto LABEL_8;
    ++v8;
    v9 += 12LL;
  }
  *(_DWORD *)(a2 + 40) = v12;
  return (unsigned int)RegistryDwordValueNoDefault;
}
