/*
 * XREFs of ?GreWideStringLengthFromUntrustedVa@@YA_KPEBG@Z @ 0x1401F3440
 * Callers:
 *     <none>
 * Callees:
 *     RtlWideStringLengthFromUser @ 0x1402D2278 (RtlWideStringLengthFromUser.c)
 */

__int64 __fastcall GreWideStringLengthFromUntrustedVa(const unsigned __int16 *a1)
{
  return RtlWideStringLengthFromUser(a1);
}
