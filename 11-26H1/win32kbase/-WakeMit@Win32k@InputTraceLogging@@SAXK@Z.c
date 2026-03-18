/*
 * XREFs of ?WakeMit@Win32k@InputTraceLogging@@SAXK@Z @ 0x14012E5F0
 * Callers:
 *     HandleMITWakeSignal @ 0x14012BBF8 (HandleMITWakeSignal.c)
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Win32k::WakeMit(int a1)
{
  int v1; // ecx
  const char *v2; // rax
  __int64 v3; // rcx
  int v4; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  void *v7; // [rsp+58h] [rbp-28h]
  int v8; // [rsp+60h] [rbp-20h]
  int v9; // [rsp+64h] [rbp-1Ch]
  const char *v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+70h] [rbp-10h]
  int v12; // [rsp+74h] [rbp-Ch]

  if ( (unsigned int)dword_1402A9E40 > 4 && (qword_1402A9E50 & 2) != 0 && (qword_1402A9E58 & 2) == qword_1402A9E58 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      v4 = v1 - 1;
      if ( v4 )
      {
        if ( v4 == 2 )
          v2 = "MouseInterceptCallout";
        else
          v2 = "UNKNOWN";
      }
      else
      {
        v2 = "InputSinkFromPoint";
      }
    }
    else
    {
      v2 = "Mouse";
    }
    v3 = -1LL;
    do
      ++v3;
    while ( v2[v3] );
    v10 = v2;
    EventDescriptor.Keyword = 2LL;
    v11 = v3 + 1;
    UserData.Ptr = (ULONGLONG)off_1402A9E48;
    *(_DWORD *)&EventDescriptor.Level = 4;
    v12 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1402A9E48;
    v7 = &unk_14028B910;
    UserData.Reserved = 2;
    v8 = 31;
    v9 = 1;
    EtwWriteTransfer(qword_1402A9E60, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
}
