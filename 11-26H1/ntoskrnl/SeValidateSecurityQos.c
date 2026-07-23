/*
 * XREFs of SeValidateSecurityQos @ 0x1408F2300
 * Callers:
 *     AlpcpValidateAndSetPortAttributes @ 0x1408F1C4C (AlpcpValidateAndSetPortAttributes.c)
 *     SeCaptureSecurityQos @ 0x1408F2220 (SeCaptureSecurityQos.c)
 *     ObpCaptureObjectCreateInformation @ 0x14092DF60 (ObpCaptureObjectCreateInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeValidateSecurityQos(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) > 1u )
    return 3221225485LL;
  result = 3221225637LL;
  if ( *(_DWORD *)(a1 + 4) < 4u )
    return 0LL;
  return result;
}
