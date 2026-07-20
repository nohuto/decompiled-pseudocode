/*
 * XREFs of SmpEventWriteString @ 0x140011DFC
 * Callers:
 *     SmpGetDumpDestination @ 0x140011F7C (SmpGetDumpDestination.c)
 * Callees:
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

void __fastcall SmpEventWriteString(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int16 v3; // ax
  __int16 v4; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v5[3]; // [rsp+28h] [rbp-30h] BYREF
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]

  if ( SmpTraceHandle )
  {
    if ( EtwEventEnabled(SmpTraceHandle, &SmssEvt_CrashDumpCopy_Error) )
    {
      v3 = *a2;
      v6 = *a2;
      v4 = v3 >> 1;
      v5[0] = &v4;
      v5[2] = *((_QWORD *)a2 + 1);
      v5[1] = 2LL;
      v7 = 0;
      EtwEventWrite(SmpTraceHandle, &SmssEvt_CrashDumpCopy_Error, 2LL, v5);
    }
  }
}
