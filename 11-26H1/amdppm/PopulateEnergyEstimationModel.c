/*
 * XREFs of PopulateEnergyEstimationModel @ 0x1400461E0
 * Callers:
 *     ProcLibGlobalInit @ 0x140045428 (ProcLibGlobalInit.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14000CC0C (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     memset @ 0x14000EA40 (memset.c)
 *     GetRegistryDwordValueNoDefault @ 0x1400243DC (GetRegistryDwordValueNoDefault.c)
 *     ProcLibTraceInvalidPowerCurve @ 0x14004403C (ProcLibTraceInvalidPowerCurve.c)
 *     ReadEnergyEquation @ 0x140046330 (ReadEnergyEquation.c)
 *     ReadPowerCurve @ 0x140046548 (ReadPowerCurve.c)
 */

int __fastcall PopulateEnergyEstimationModel(unsigned __int8 a1, int *a2)
{
  int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // edx
  unsigned int i; // r9d
  unsigned int v8; // r11d
  unsigned int v9; // r10d
  unsigned int v10; // r10d
  int result; // eax
  int v12; // ecx
  int v13; // [rsp+20h] [rbp-1B8h]
  int v14[4]; // [rsp+30h] [rbp-1A8h] BYREF
  wchar_t pszDest[192]; // [rsp+40h] [rbp-198h] BYREF

  v3 = a1;
  v14[0] = 0;
  memset(a2, 0, 0x100uLL);
  LOBYTE(v4) = v3;
  ReadEnergyEquation(v4, a2);
  LOBYTE(v5) = v3;
  if ( (int)ReadPowerCurve(v5, a2) >= 0 )
  {
    v6 = ((unsigned int)a2[1] >> 1) & 0x7F;
    if ( v6 < 2 || (unsigned __int8)a2[v6 + 1] > 0x64u || (a2[2] & 0xFFFFFF00) > 0x3E8000 )
    {
LABEL_12:
      ProcLibTraceInvalidPowerCurve(v3, v6, a2 + 2);
    }
    else
    {
      for ( i = 1; i < v6; ++i )
      {
        v8 = a2[i + 1];
        v9 = a2[i + 2];
        if ( (unsigned __int8)v9 <= (unsigned __int8)v8 )
          goto LABEL_12;
        v10 = v9 >> 8;
        if ( v10 < v8 >> 8 || v10 > 0x3E80 )
          goto LABEL_12;
      }
      a2[1] |= 1u;
    }
  }
  v13 = v3;
  result = RtlStringCchPrintfW(
             pszDest,
             0xC0uLL,
             L"%s\\EfficiencyClass\\%d",
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU",
             v13);
  if ( result < 0
    || (result = GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"PowerEnvelope", (__int64)v14), result < 0)
    || (v12 = v14[0], result = v14[0] - 1, (unsigned int)(v14[0] - 1) > 0x3E7F) )
  {
    v12 = 750;
  }
  *a2 = v12;
  return result;
}
