/*
 * XREFs of IsNotifyInputSinkTransformChangedPresent @ 0x180221938
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A01C4 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1802222E9 (ApiSetQueryApiSetPresence_0.c)
 */

char IsNotifyInputSinkTransformChangedPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1803DDB54 == 1 )
    return 1;
  if ( dword_1803DDB54 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"HJ", &v1) < 0 )
    return 0;
  result = v1;
  dword_1803DDB54 = 2 - (v1 != 0);
  return result;
}
