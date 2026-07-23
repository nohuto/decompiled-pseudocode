/*
 * XREFs of PfpOpenHandleInitialize @ 0x140AAC258
 * Callers:
 *     PfpReadSupportInitialize @ 0x1404D5E80 (PfpReadSupportInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpOpenHandleInitialize(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  result = 0x200000000LL;
  a1[3] = 0x200000000LL;
  return result;
}
