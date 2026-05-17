/*
 * XREFs of RtlSetSecurityObjectEx @ 0x180111340
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetSecurityObject @ 0x18005BF70 (RtlpSetSecurityObject.c)
 */

__int64 __fastcall RtlSetSecurityObjectEx(unsigned int a1, __int64 a2, __int64 *a3, __int16 a4, _DWORD *a5, void *a6)
{
  return RtlpSetSecurityObject(0LL, a1, a2, a3, a4, 0, a5, a6);
}
