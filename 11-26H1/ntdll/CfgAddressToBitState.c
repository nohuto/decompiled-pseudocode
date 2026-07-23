/*
 * XREFs of CfgAddressToBitState @ 0x1800C43AC
 * Callers:
 *     RtlValidateUserCallTarget @ 0x1800C4310 (RtlValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CfgAddressToBitState(unsigned __int64 a1, const signed __int64 *a2)
{
  return _bittest64(a2, 2 * (a1 >> 4)) | (2 * (unsigned int)_bittest64(a2, 2 * (a1 >> 4) + 1));
}
