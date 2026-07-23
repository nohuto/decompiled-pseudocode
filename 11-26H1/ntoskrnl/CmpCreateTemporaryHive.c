/*
 * XREFs of CmpCreateTemporaryHive @ 0x140A7FC0C
 * Callers:
 *     CmSaveMergedKeys @ 0x140853684 (CmSaveMergedKeys.c)
 *     CmSaveKey @ 0x140A7EF8C (CmSaveKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpCreateHive @ 0x1408BC440 (CmpCreateHive.c)
 */

ULONG_PTR __fastcall CmpCreateTemporaryHive(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  ULONG_PTR v6[2]; // [rsp+70h] [rbp-1D8h] BYREF
  _BYTE v7[432]; // [rsp+80h] [rbp-1C8h] BYREF

  v4 = 0LL;
  v6[0] = 0LL;
  memset_0(v7, 0, sizeof(v7));
  if ( (int)CmpCreateHive(v6, 0, 1, 0, 0LL, 0LL, 0LL, 17956864, a1, a2, 0LL, 0LL, (__int64)v7) >= 0 )
    return v6[0];
  return v4;
}
