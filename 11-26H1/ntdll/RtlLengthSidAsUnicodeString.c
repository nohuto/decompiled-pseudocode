/*
 * XREFs of RtlLengthSidAsUnicodeString @ 0x18003C5D0
 * Callers:
 *     WerEscalationLazyInit @ 0x1800D6160 (WerEscalationLazyInit.c)
 * Callees:
 *     RtlValidSid @ 0x18003D140 (RtlValidSid.c)
 */

__int64 __fastcall RtlLengthSidAsUnicodeString(unsigned __int8 *a1, _DWORD *a2)
{
  int v4; // edx

  if ( (unsigned __int8)RtlValidSid(a1) != 1 )
    return 3221225592LL;
  if ( a1[2] || a1[3] )
    v4 = 36;
  else
    v4 = 28;
  *a2 = v4 + 22 * a1[1];
  return 0LL;
}
