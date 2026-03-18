/*
 * XREFs of ?RemoveMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x14019B14C
 * Callers:
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1401948F0 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Delivery::RemoveMessage(const struct tagQMSG *a1, const struct tagQ *a2)
{
  unsigned int v2; // r8d
  int v4; // ecx
  _DWORD v5[2]; // [rsp+30h] [rbp-39h] BYREF
  const struct tagQ *v6; // [rsp+38h] [rbp-31h] BYREF
  __int64 v7; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-9h] BYREF
  void *v10; // [rsp+70h] [rbp+7h]
  int v11; // [rsp+78h] [rbp+Fh]
  int v12; // [rsp+7Ch] [rbp+13h]
  __int64 *v13; // [rsp+80h] [rbp+17h]
  __int64 v14; // [rsp+88h] [rbp+1Fh]
  _DWORD *v15; // [rsp+90h] [rbp+27h]
  __int64 v16; // [rsp+98h] [rbp+2Fh]
  const struct tagQ **v17; // [rsp+A0h] [rbp+37h]
  __int64 v18; // [rsp+A8h] [rbp+3Fh]

  v2 = *((_DWORD *)a1 + 6);
  if ( v2 >= 0x241 && v2 <= 0x244
    || v2 - 255 <= 0xA
    || v2 - 581 <= 0x12 && (v4 = 524031, _bittest(&v4, v2 - 581))
    || v2 - 512 <= 0xE
    || v2 - 160 <= 0xD )
  {
    if ( (unsigned int)dword_1403AA9C0 > 5
      && (qword_1403AA9D0 & 0x10) != 0
      && (qword_1403AA9D8 & 0x10) == qword_1403AA9D8 )
    {
      v7 = *((_QWORD *)a1 + 18);
      v17 = &v6;
      v15 = v5;
      v13 = &v7;
      UserData.Ptr = (ULONGLONG)off_1403AA9C8;
      *(_DWORD *)&EventDescriptor.Level = 5;
      v6 = a2;
      v5[0] = v2;
      v18 = 8LL;
      v16 = 4LL;
      v14 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 16LL;
      UserData.Size = *(unsigned __int16 *)off_1403AA9C8;
      v10 = &unk_14037454F;
      UserData.Reserved = 2;
      v11 = 53;
      v12 = 1;
      v5[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
  }
}
