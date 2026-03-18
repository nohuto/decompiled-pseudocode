/*
 * XREFs of NtUserOpenWindowStation @ 0x1401E4DE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x14009D6E8 (UserSetLastStatus.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     _OpenWindowStation @ 0x1401CE8D8 (_OpenWindowStation.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x140293924 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

__int64 __fastcall NtUserOpenWindowStation(void *Src, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  PUNICODE_STRING v9; // rdx
  ULONG64 v10; // rcx
  struct _UNICODE_STRING *v11; // r15
  NTSTATUS ProcessLuid; // eax
  bool v14; // [rsp+30h] [rbp-A8h]
  volatile void *Address[2]; // [rsp+38h] [rbp-A0h]
  __int128 v16; // [rsp+58h] [rbp-80h] BYREF
  PUNICODE_STRING DestinationString[2]; // [rsp+68h] [rbp-70h]
  __int128 v18; // [rsp+78h] [rbp-60h]
  __int128 v19; // [rsp+90h] [rbp-48h]
  __int128 v20; // [rsp+A0h] [rbp-38h]
  __int128 v21; // [rsp+B0h] [rbp-28h]
  __int64 v22; // [rsp+F0h] [rbp+18h] BYREF
  __int64 v23; // [rsp+F8h] [rbp+20h]

  v4 = 0LL;
  v22 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v14 = 1;
  EnterCrit(0LL, 0LL);
  v16 = 0LL;
  *(_OWORD *)DestinationString = 0LL;
  v18 = 0LL;
  RtlCopyFromUser(&v16, Src, 0x30uLL);
  v19 = v16;
  v20 = *(_OWORD *)DestinationString;
  v21 = v18;
  if ( PsGetCurrentProcessWow64Process(v6, v5) )
  {
    v23 = 1LL;
    v8 = 0LL;
  }
  else
  {
    v23 = 4LL;
    v8 = 3LL;
  }
  v9 = DestinationString[0];
  if ( ((unsigned __int64)DestinationString[0] & v8) != 0 )
    ExRaiseDatatypeMisalignment();
  v10 = MmUserProbeAddress;
  if ( DestinationString[0] >= (PUNICODE_STRING)MmUserProbeAddress )
    v9 = (PUNICODE_STRING)MmUserProbeAddress;
  LOBYTE(v9->Length) = v9->Length;
  HIBYTE(v9->Buffer) = HIBYTE(v9->Buffer);
  v11 = DestinationString[0];
  *(struct _UNICODE_STRING *)Address = *DestinationString[0];
  if ( *((_QWORD *)&v16 + 1) )
  {
    if ( Address[1] )
    {
      if ( LODWORD(Address[0]) == 3801144 )
      {
        ProbeForWrite(Address[1], 0x3AuLL, 2u);
        if ( !_wcsicmp((const wchar_t *)Address[1], L"Service-0x00000000-00000000$") )
        {
          ProcessLuid = GetProcessLuid(0LL, &v22);
          v14 = ProcessLuid >= 0;
          if ( ProcessLuid < 0 )
          {
            UserSetLastStatus(ProcessLuid, 1);
          }
          else
          {
            RtlStringCbPrintfW((unsigned __int16 *)Address[1], 0x3AuLL, L"Service-0x%x-%x$", HIDWORD(v22), v22);
            RtlInitUnicodeString(v11, (PCWSTR)Address[1]);
          }
        }
      }
    }
  }
  if ( v14 )
    v4 = OpenWindowStation((__int64)Src, a2, v7);
  UserSessionSwitchLeaveCrit(v10);
  return v4;
}
