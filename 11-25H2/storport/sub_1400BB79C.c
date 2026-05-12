/*
 * XREFs of sub_1400BB79C @ 0x1400BB79C
 * Callers:
 *     sub_14003A710 @ 0x14003A710 (sub_14003A710.c)
 *     sub_14004E598 @ 0x14004E598 (sub_14004E598.c)
 *     DllUnload @ 0x1400A5240 (DllUnload.c)
 * Callees:
 *     <none>
 */

__int64 sub_1400BB79C()
{
  __int64 result; // rax

  if ( byte_140168DE0
    && KeDeregisterBugCheckReasonCallback((PKBUGCHECK_REASON_CALLBACK_RECORD)&stru_1401692A0.Reserved) != 1 )
  {
    return 3221225473LL;
  }
  qword_140168DD8 = 0LL;
  result = 0LL;
  byte_140168DE0 = 0;
  return result;
}
