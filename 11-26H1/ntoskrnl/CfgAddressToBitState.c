/*
 * XREFs of CfgAddressToBitState @ 0x1404F0B80
 * Callers:
 *     MiCheckVerifierFunctionsCfgState @ 0x14087BAA8 (MiCheckVerifierFunctionsCfgState.c)
 *     MiCfgMarkValidEntries @ 0x140AA0D20 (MiCfgMarkValidEntries.c)
 *     MiValidateUserCallTarget @ 0x140AA0FF0 (MiValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CfgAddressToBitState(unsigned __int64 a1, const signed __int64 *a2)
{
  return _bittest64(a2, 2 * (a1 >> 4)) | (2 * (unsigned int)_bittest64(a2, 2 * (a1 >> 4) + 1));
}
