/*
 * XREFs of ?OnReadNotification@Win32k@InputTraceLogging@@SAXPEAXK@Z @ 0x14012E368
 * Callers:
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1401220B0 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Win32k::OnReadNotification(void *a1, int a2)
{
  _DWORD v2[2]; // [rsp+30h] [rbp-19h] BYREF
  void *v3; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v6; // [rsp+60h] [rbp+17h]
  int v7; // [rsp+68h] [rbp+1Fh]
  int v8; // [rsp+6Ch] [rbp+23h]
  void **v9; // [rsp+70h] [rbp+27h]
  __int64 v10; // [rsp+78h] [rbp+2Fh]
  _DWORD *v11; // [rsp+80h] [rbp+37h]
  __int64 v12; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_1402A9E40 > 5 && (qword_1402A9E50 & 2) != 0 && (qword_1402A9E58 & 2) == qword_1402A9E58 )
  {
    v3 = a1;
    v11 = v2;
    v2[0] = a2;
    v9 = &v3;
    UserData.Ptr = (ULONGLONG)off_1402A9E48;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v12 = 4LL;
    EventDescriptor.Keyword = 2LL;
    v10 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1402A9E48;
    v6 = &unk_14028AC4E;
    UserData.Reserved = 2;
    v7 = 54;
    v8 = 1;
    v2[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_1402A9E60, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
}
