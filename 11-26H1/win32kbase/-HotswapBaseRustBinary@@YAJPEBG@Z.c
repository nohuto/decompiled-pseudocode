/*
 * XREFs of ?HotswapBaseRustBinary@@YAJPEBG@Z @ 0x1401F3EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0LOGGED_NTSTATUS@@QEAA@JW4RUST_INFRA_FAILURE@@@Z @ 0x1401F3C48 (--0LOGGED_NTSTATUS@@QEAA@JW4RUST_INFRA_FAILURE@@@Z.c)
 *     Win32kBaseRustPatchCalloutHandler @ 0x1401F4020 (Win32kBaseRustPatchCalloutHandler.c)
 */

__int64 __fastcall HotswapBaseRustBinary(PCWSTR SourceString)
{
  __int64 result; // rax
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS v4; // eax
  int v5; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  _OWORD SystemInformation[2]; // [rsp+30h] [rbp-28h] BYREF
  LUID PrivilegeValue; // [rsp+68h] [rbp+10h] BYREF

  if ( !WPP_MAIN_CB.Dpc.DeferredContext )
    return 3221225474LL;
  PreviousMode = ExGetPreviousMode();
  PrivilegeValue = (LUID)10LL;
  if ( !SeSinglePrivilegeCheck((LUID)10LL, PreviousMode) )
    return 3221225569LL;
  DestinationString = 0LL;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  RtlInitUnicodeString(&DestinationString, SourceString);
  v4 = ZwSetSystemInformation(SystemLoadGdiDriverInSystemSpaceInformation, &DestinationString, 0x30uLL);
  LOGGED_NTSTATUS::LOGGED_NTSTATUS((int *)&PrivilegeValue, v4, 2);
  result = PrivilegeValue.LowPart;
  DestinationString = 0LL;
  if ( (PrivilegeValue.LowPart & 0x80000000) == 0 )
  {
    v5 = Win32kBaseRustPatchCalloutHandler(&DestinationString, 0LL);
    Win32kBaseRustPatchCalloutHandler(&DestinationString, ((v5 >> 31) & 1u) + 1);
    if ( v5 < 0 && ZwSetSystemInformation(SystemUnloadGdiDriverInformation, (char *)SystemInformation + 8, 8uLL) < 0 )
      DbgPrintEx(0x70u, 1u, "failed to unload '%s'\n", (const char *)SourceString);
    return (unsigned int)v5;
  }
  return result;
}
