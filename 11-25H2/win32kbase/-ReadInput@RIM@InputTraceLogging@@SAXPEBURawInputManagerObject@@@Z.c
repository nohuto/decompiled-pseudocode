/*
 * XREFs of ?ReadInput@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@@Z @ 0x140035188
 * Callers:
 *     RIMReadInput @ 0x140034A90 (RIMReadInput.c)
 * Callees:
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::RIM::ReadInput(const struct RawInputManagerObject *a1)
{
  const struct RawInputManagerObject *v1; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+17h] BYREF
  void *v4; // [rsp+60h] [rbp+27h]
  int v5; // [rsp+68h] [rbp+2Fh]
  int v6; // [rsp+6Ch] [rbp+33h]
  const struct RawInputManagerObject **v7; // [rsp+70h] [rbp+37h]
  int v8; // [rsp+78h] [rbp+3Fh]
  int v9; // [rsp+7Ch] [rbp+43h]

  if ( (unsigned int)dword_14029EE20 > 4
    && (qword_14029EE30 & 0x100) != 0
    && (qword_14029EE38 & 0x100) == qword_14029EE38 )
  {
    v9 = 0;
    v7 = &v1;
    v1 = a1;
    UserData.Ptr = (ULONGLONG)off_14029EE28;
    *(_DWORD *)&EventDescriptor.Level = 4;
    EventDescriptor.Keyword = 256LL;
    v8 = 8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_14029EE28;
    v4 = &unk_14027AEC9;
    UserData.Reserved = 2;
    v5 = 26;
    v6 = 1;
    EtwWriteTransfer(qword_14029EE40, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
}
