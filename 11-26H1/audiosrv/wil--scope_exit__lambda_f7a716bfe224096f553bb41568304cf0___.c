/*
 * XREFs of wil::scope_exit__lambda_f7a716bfe224096f553bb41568304cf0___ @ 0x18015462C
 * Callers:
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x180037A44 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x1801569BC (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::scope_exit__lambda_f7a716bfe224096f553bb41568304cf0___(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = *a2;
  result = a1;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
