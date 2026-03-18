/*
 * XREFs of ?SSQResult@RawInput@InputTraceLogging@@SAXPEAXW4SsqResult@12@@Z @ 0x1401BA804
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::RawInput::SSQResult(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  const char *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v10; // [rsp+60h] [rbp+17h]
  int v11; // [rsp+68h] [rbp+1Fh]
  int v12; // [rsp+6Ch] [rbp+23h]
  __int64 *v13; // [rsp+70h] [rbp+27h]
  __int64 v14; // [rsp+78h] [rbp+2Fh]
  const char *v15; // [rsp+80h] [rbp+37h]
  int v16; // [rsp+88h] [rbp+3Fh]
  int v17; // [rsp+8Ch] [rbp+43h]

  if ( (unsigned int)dword_1403AA9C0 > 5
    && (qword_1403AA9D0 & 0x40000) != 0
    && (qword_1403AA9D8 & 0x40000) == qword_1403AA9D8 )
  {
    if ( a2 )
    {
      v2 = a2 - 1;
      if ( v2 )
      {
        v3 = v2 - 1;
        if ( v3 )
        {
          v4 = v3 - 1;
          if ( v4 )
          {
            if ( v4 == 1 )
              v5 = "Returned";
            else
              v5 = "UNKNOWN";
          }
          else
          {
            v5 = "WrongThread";
          }
        }
        else
        {
          v5 = "Filter";
        }
      }
      else
      {
        v5 = "CrossThreadCheck";
      }
    }
    else
    {
      v5 = "NoSuitableWindow";
    }
    v7 = a1;
    v6 = -1LL;
    do
      ++v6;
    while ( v5[v6] );
    v15 = v5;
    EventDescriptor.Keyword = 0x40000LL;
    v16 = v6 + 1;
    v17 = 0;
    v13 = &v7;
    UserData.Ptr = (ULONGLONG)off_1403AA9C8;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v14 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1403AA9C8;
    v10 = &unk_140374384;
    UserData.Reserved = 2;
    v11 = 40;
    v12 = 1;
    EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
}
