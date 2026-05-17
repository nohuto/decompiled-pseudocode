/*
 * XREFs of SymCryptMd5Append @ 0x180038720
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptHashAppendInternal @ 0x18003898C (SymCryptHashAppendInternal.c)
 */

__int64 __fastcall SymCryptMd5Append(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptHashAppendInternal(SymCryptMd5Algorithm_default, a1, a2, a3);
}
