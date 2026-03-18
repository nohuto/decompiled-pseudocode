/*
 * XREFs of ?CallLowLevelHooks@Keyboard@InputTraceLogging@@SAXK@Z @ 0x1401730DC
 * Callers:
 *     EditionKeyEventLLHook @ 0x140172CB0 (EditionKeyEventLLHook.c)
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Keyboard::CallLowLevelHooks(int a1)
{
  _DWORD v1[2]; // [rsp+30h] [rbp-50h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  void *v4; // [rsp+58h] [rbp-28h]
  int v5; // [rsp+60h] [rbp-20h]
  int v6; // [rsp+64h] [rbp-1Ch]
  _DWORD *v7; // [rsp+68h] [rbp-18h]
  __int64 v8; // [rsp+70h] [rbp-10h]

  if ( (unsigned int)dword_1403AA9C0 > 4
    && (qword_1403AA9D0 & 0x4000) != 0
    && (qword_1403AA9D8 & 0x4000) == qword_1403AA9D8 )
  {
    v1[0] = a1;
    v7 = v1;
    UserData.Ptr = (ULONGLONG)off_1403AA9C8;
    *(_DWORD *)&EventDescriptor.Level = 4;
    EventDescriptor.Keyword = 0x4000LL;
    v8 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1403AA9C8;
    v4 = &unk_14037682D;
    UserData.Reserved = 2;
    v5 = 40;
    v6 = 1;
    v1[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
}
