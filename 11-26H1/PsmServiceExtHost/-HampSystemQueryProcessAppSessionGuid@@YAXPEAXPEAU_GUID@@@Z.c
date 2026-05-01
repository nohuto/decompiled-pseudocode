/*
 * XREFs of ?HampSystemQueryProcessAppSessionGuid@@YAXPEAXPEAU_GUID@@@Z @ 0x18006269C
 * Callers:
 *     ?HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z @ 0x180065F5C (-HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z.c)
 *     ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x180089774 (-RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall HampSystemQueryProcessAppSessionGuid(HANDLE ProcessHandle, struct _GUID *a2)
{
  _BYTE ProcessInformation[4]; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v5; // [rsp+34h] [rbp-74h]
  __int64 v6; // [rsp+40h] [rbp-68h]
  unsigned __int16 v7; // [rsp+68h] [rbp-40h]
  unsigned __int16 v8; // [rsp+6Ch] [rbp-3Ch]

  memset_0(ProcessInformation, 0, 0x60uLL);
  NtQueryInformationProcess(ProcessHandle, (PROCESSINFOCLASS)64, ProcessInformation, 0x60u, 0LL);
  a2->Data1 = v5;
  a2->Data2 = v7;
  a2->Data3 = v8;
  *(_QWORD *)a2->Data4 = v6;
}
