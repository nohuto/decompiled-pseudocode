/*
 * XREFs of SmpEventWriteULONGString @ 0x1400092B0
 * Callers:
 *     SmpExecuteImage @ 0x140005010 (SmpExecuteImage.c)
 * Callees:
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

void __fastcall SmpEventWriteULONGString(PCEVENT_DESCRIPTOR EventDescriptor, int a2, unsigned __int16 *a3)
{
  unsigned __int16 v5; // ax
  __int64 v6; // rax
  __int16 v7; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v8[5]; // [rsp+28h] [rbp-40h] BYREF
  int v9; // [rsp+50h] [rbp-18h]
  int v10; // [rsp+54h] [rbp-14h]
  int v11; // [rsp+78h] [rbp+10h] BYREF

  v11 = a2;
  if ( SmpTraceHandle )
  {
    if ( EtwEventEnabled(SmpTraceHandle, EventDescriptor) )
    {
      v5 = *a3;
      v9 = *a3;
      v7 = v5 >> 1;
      v8[0] = &v11;
      v8[2] = &v7;
      v6 = *((_QWORD *)a3 + 1);
      v10 = 0;
      v8[4] = v6;
      v8[1] = 4LL;
      v8[3] = 2LL;
      EtwEventWrite(SmpTraceHandle, EventDescriptor, 3LL, v8);
    }
  }
}
