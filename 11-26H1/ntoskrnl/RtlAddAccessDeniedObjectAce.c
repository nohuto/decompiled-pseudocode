/*
 * XREFs of RtlAddAccessDeniedObjectAce @ 0x1408030D0
 * Callers:
 *     LocalGetAclForString @ 0x1409243B0 (LocalGetAclForString.c)
 * Callees:
 *     RtlpAddKnownObjectAce @ 0x140803804 (RtlpAddKnownObjectAce.c)
 *     RtlpAddKnownAce @ 0x1409D7990 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAccessDeniedObjectAce(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, PSID Src)
{
  if ( a5 || a6 )
    return RtlpAddKnownObjectAce(a1, a2, a3, a4, a5, a6, Src, 6);
  else
    return RtlpAddKnownAce(a1, a2, a3, a4, Src, 1);
}
