/*
 * XREFs of AlpcpProbeForWriteMessageHeader @ 0x1408F5AA0
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x1407BFF70 (NtReplyWaitReceivePortEx.c)
 *     NtReplyWaitReplyPort @ 0x1407C0130 (NtReplyWaitReplyPort.c)
 *     AlpcpProcessConnectionRequest @ 0x1408E7654 (AlpcpProcessConnectionRequest.c)
 *     AlpcpReceiveMessage @ 0x1408F806C (AlpcpReceiveMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x140ACBE7C (AlpcpReceiveLegacyMessage.c)
 *     NtRequestWaitReplyPort @ 0x140B0DA40 (NtRequestWaitReplyPort.c)
 * Callees:
 *     RtlReadUCharFromUser @ 0x14077F51C (RtlReadUCharFromUser.c)
 *     RtlWriteUCharToUser @ 0x14077F710 (RtlWriteUCharToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ExRaiseAccessViolation @ 0x1408F5DA0 (ExRaiseAccessViolation.c)
 */

void __fastcall AlpcpProbeForWriteMessageHeader(unsigned __int64 a1, int a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  char UCharFromUser; // al

  v2 = a1;
  if ( a2 >= 0 || (a2 & 0x40000000) != 0 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 + 40 <= a1 || a1 + 40 > 0x7FFFFFFF0000LL )
      ExRaiseAccessViolation();
    v3 = ((a1 + 39) & 0xFFFFFFFFFFFFF000uLL) + 4096;
    do
    {
      UCharFromUser = RtlReadUCharFromUser((volatile void *)v2);
      RtlWriteUCharToUser((_BYTE *)v2, UCharFromUser);
      v2 = (v2 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    while ( v2 != v3 );
  }
  else
  {
    ProbeForWrite((volatile void *)a1, 0x18uLL, 4u);
  }
}
