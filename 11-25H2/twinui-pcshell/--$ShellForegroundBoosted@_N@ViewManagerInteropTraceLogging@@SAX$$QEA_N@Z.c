/*
 * XREFs of ??$ShellForegroundBoosted@_N@ViewManagerInteropTraceLogging@@SAX$$QEA_N@Z @ 0x1801C7AA8
 * Callers:
 *     ?BoostShellPriority@UwpWindowEventDispatcher@@UEAAXW4BoostOptions@@@Z @ 0x18006FC60 (-BoostShellPriority@UwpWindowEventDispatcher@@UEAAXW4BoostOptions@@@Z.c)
 *     ?UnboostShellPriority@UwpWindowEventDispatcher@@UEAAXXZ @ 0x180070F30 (-UnboostShellPriority@UwpWindowEventDispatcher@@UEAAXXZ.c)
 *     ?BoostShellPriority@WindowEventDispatcher@@UEAAXW4BoostOptions@@@Z @ 0x18040CF30 (-BoostShellPriority@WindowEventDispatcher@@UEAAXW4BoostOptions@@@Z.c)
 *     ?UnboostShellPriority@WindowEventDispatcher@@UEAAXXZ @ 0x180414200 (-UnboostShellPriority@WindowEventDispatcher@@UEAAXXZ.c)
 * Callees:
 *     ?Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180070E64 (-Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::ShellForegroundBoosted<bool>(char *a1)
{
  const struct _tlgProvider_t *v2; // rax
  char v3; // cl
  char v5; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v6; // [rsp+34h] [rbp-4Ch]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  void *v9; // [rsp+58h] [rbp-28h]
  int v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+64h] [rbp-1Ch]
  char *v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+70h] [rbp-10h]
  int v14; // [rsp+74h] [rbp-Ch]

  v2 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    v3 = *a1;
    v14 = 0;
    EventDescriptor.Keyword = 0LL;
    v12 = &v5;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v2 + 1);
    v5 = v3;
    v13 = 1;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v9 = &unk_1807CCC81;
    v11 = 1;
    UserData.Reserved = 2;
    v10 = 41;
    v6 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v2) = EventWriteTransfer(*((_QWORD *)v2 + 4), &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  return (int)v2;
}
