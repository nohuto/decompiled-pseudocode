/*
 * XREFs of CfgAddressToBitState @ 0x1404EA160
 * Callers:
 *     MiCheckVerifierFunctionsCfgState @ 0x140881EA8 (MiCheckVerifierFunctionsCfgState.c)
 *     MiCfgMarkValidEntries @ 0x140AA27E4 (MiCfgMarkValidEntries.c)
 *     MiValidateUserCallTarget @ 0x140AA2AB4 (MiValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CfgAddressToBitState(unsigned __int64 a1, const signed __int64 *a2)
{
  return _bittest64(a2, 2 * (a1 >> 4)) | (2 * (unsigned int)_bittest64(a2, 2 * (a1 >> 4) + 1));
}
