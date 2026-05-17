/*
 * XREFs of RtlNewSecurityObject @ 0x1801086E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNewSecurityObject @ 0x18005E6A0 (RtlpNewSecurityObject.c)
 */

__int64 __fastcall RtlNewSecurityObject(__int64 a1, _OWORD *a2, _QWORD *a3, unsigned __int8 a4, void *a5, _DWORD *a6)
{
  return RtlpNewSecurityObject(a1, a2, a3, 0LL, 0, a4, 0, a5, a6);
}
