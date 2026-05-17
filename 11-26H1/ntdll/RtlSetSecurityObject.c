/*
 * XREFs of RtlSetSecurityObject @ 0x18005BB10
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetSecurityObject @ 0x18005BF70 (RtlpSetSecurityObject.c)
 */

__int64 __fastcall RtlSetSecurityObject(int a1, int a2, int a3, __int64 a4, __int64 a5)
{
  return RtlpSetSecurityObject(0, a1, a2, a3, 0, 0, a4, a5);
}
