/*
 * XREFs of RtlLengthSidAsUnicodeString @ 0x180026B40
 * Callers:
 *     WerEscalationLazyInit @ 0x1800D3120 (WerEscalationLazyInit.c)
 * Callees:
 *     RtlValidSid @ 0x1800276B0 (RtlValidSid.c)
 */

NTSTATUS __cdecl RtlLengthSidAsUnicodeString(PSID Sid, PULONG StringLength)
{
  int v4; // edx

  if ( RtlValidSid(Sid) != 1 )
    return -1073741704;
  if ( *((_BYTE *)Sid + 2) || *((_BYTE *)Sid + 3) )
    v4 = 36;
  else
    v4 = 28;
  *StringLength = v4 + 22 * *((unsigned __int8 *)Sid + 1);
  return 0;
}
