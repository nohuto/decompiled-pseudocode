/*
 * XREFs of RtlCheckTokenMembership @ 0x18000DF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCheckTokenMembership(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlCheckTokenMembershipEx(a1, a2, 0LL, a3);
}
