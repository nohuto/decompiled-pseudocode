/*
 * XREFs of SeValidateSecurityQos @ 0x1408EBD40
 * Callers:
 *     AlpcpValidateAndSetPortAttributes @ 0x1408EB68C (AlpcpValidateAndSetPortAttributes.c)
 *     SeCaptureSecurityQos @ 0x1408EBC60 (SeCaptureSecurityQos.c)
 *     ObpCaptureObjectCreateInformation @ 0x1408FDFD0 (ObpCaptureObjectCreateInformation.c)
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
