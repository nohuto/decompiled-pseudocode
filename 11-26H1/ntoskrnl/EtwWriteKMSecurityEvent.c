/*
 * XREFs of EtwWriteKMSecurityEvent @ 0x140214E28
 * Callers:
 *     AdtpWriteToEtwEx @ 0x1404750AC (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x140AAC7D8 (AdtpWriteToEtw.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x14021336C (EtwpEventWriteFull.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall EtwWriteKMSecurityEvent(__int64 a1, __int64 a2)
{
  __int64 CurrentServerSiloGlobals; // rax
  unsigned int v3; // r8d
  __int64 v4; // r9
  unsigned __int16 *v5; // r10

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals(a1, a2);
  return EtwpEventWriteFull(
           *(_QWORD *)(CurrentServerSiloGlobals + 832) + 24LL,
           *(_WORD *)(*(_QWORD *)(CurrentServerSiloGlobals + 832) + 4336LL),
           0,
           0,
           v5,
           0,
           0,
           0LL,
           0LL,
           v3,
           v4,
           0LL,
           0LL,
           0LL,
           0,
           0LL,
           0LL);
}
