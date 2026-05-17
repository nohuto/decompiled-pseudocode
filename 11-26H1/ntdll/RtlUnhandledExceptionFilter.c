/*
 * XREFs of RtlUnhandledExceptionFilter @ 0x18011F2D0
 * Callers:
 *     __raise_securityfailure @ 0x1801269B8 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x1801269E0 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnhandledExceptionFilter(__int64 a1)
{
  return RtlUnhandledExceptionFilter2(a1, &unk_180176D3C);
}
