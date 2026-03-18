/*
 * XREFs of ?ReadInput@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@@Z @ 0x140098308
 * Callers:
 *     RIMReadInput @ 0x1400979E0 (RIMReadInput.c)
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
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
  __int64 v8; // [rsp+78h] [rbp+3Fh]

  if ( (unsigned int)dword_1402A9E40 > 4
    && (qword_1402A9E50 & 0x100) != 0
    && (qword_1402A9E58 & 0x100) == qword_1402A9E58 )
  {
    v1 = a1;
    v7 = &v1;
    UserData.Ptr = (ULONGLONG)off_1402A9E48;
    *(_DWORD *)&EventDescriptor.Level = 4;
    EventDescriptor.Keyword = 256LL;
    v8 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1402A9E48;
    v4 = &unk_140285170;
    UserData.Reserved = 2;
    v5 = 26;
    v6 = 1;
    EtwWriteTransfer(qword_1402A9E60, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
}
