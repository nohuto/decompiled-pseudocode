/*
 * XREFs of CmCheckNoTxContext @ 0x14097C910
 * Callers:
 *     NtCompactKeys @ 0x14084E8F0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x14084EBA0 (NtCompressKey.c)
 *     NtReplaceKey @ 0x14084FD20 (NtReplaceKey.c)
 *     NtSaveMergedKeys @ 0x140850190 (NtSaveMergedKeys.c)
 *     CmLoadDifferencingKey @ 0x14097B3F0 (CmLoadDifferencingKey.c)
 *     NtSaveKeyEx @ 0x140A754D0 (NtSaveKeyEx.c)
 *     NtRestoreKey @ 0x140A76FC0 (NtRestoreKey.c)
 * Callees:
 *     <none>
 */

__int64 CmCheckNoTxContext()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  result = TmCurrentTransaction(&v1);
  if ( (_DWORD)result == -1073741637 )
    return 0LL;
  if ( (int)result >= 0 )
    return v1 != 0 ? 0xC0190001 : 0;
  return result;
}
