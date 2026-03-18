/*
 * XREFs of RtlOpenImageFileOptionsKey @ 0x140AB4D30
 * Callers:
 *     <none>
 * Callees:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x140AB4D48 (RtlpOpenImageFileOptionsKeyEx.c)
 */

__int64 __fastcall RtlOpenImageFileOptionsKey(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlpOpenImageFileOptionsKeyEx(a1, a2, a3, a3);
}
