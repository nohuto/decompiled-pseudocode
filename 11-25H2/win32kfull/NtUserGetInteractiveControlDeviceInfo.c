/*
 * XREFs of NtUserGetInteractiveControlDeviceInfo @ 0x140297D20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012FC60 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ?GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z @ 0x1402DFD70 (-GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetInteractiveControlDeviceInfo(unsigned int a1, volatile void *Address)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  InteractiveControlManager *v11; // rax
  _QWORD v13[3]; // [rsp+38h] [rbp-50h] BYREF
  _OWORD Src[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v15; // [rsp+70h] [rbp-18h]

  memset(Src, 0, sizeof(Src));
  v15 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(v13, 1LL);
  v6 = 0;
  if ( Address )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5, v4);
    ProbeForWrite(Address, 0x28uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    v11 = InteractiveControlManager::Instance(v10, v9);
    if ( (int)InteractiveControlManager::GetDeviceInfo(v11, a1, (struct tagINTERACTIVECTRL_DEVICE_INFO *)Src) >= 0 )
    {
      if ( (unsigned __int64)Address >= MmUserProbeAddress )
        Address = (volatile void *)MmUserProbeAddress;
      RtlCopyVolatileMemory((void *)Address, Src, 0x28uLL);
      v6 = 1;
    }
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v6;
}
