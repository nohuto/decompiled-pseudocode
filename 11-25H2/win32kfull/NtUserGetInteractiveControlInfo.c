/*
 * XREFs of NtUserGetInteractiveControlInfo @ 0x140297E30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012FC60 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1402E032C (-GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetInteractiveControlInfo(unsigned int a1, volatile void *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  InteractiveControlManager *v10; // rax
  __int64 v11; // rcx
  _QWORD v13[3]; // [rsp+38h] [rbp-50h] BYREF
  __int128 Src; // [rsp+50h] [rbp-38h] BYREF
  __int64 v15; // [rsp+60h] [rbp-28h]
  int v16; // [rsp+68h] [rbp-20h]

  Src = 0LL;
  v15 = 0LL;
  v16 = 0;
  v4 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(v13, 1LL);
  if ( a1 && a2 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6, v5);
    ProbeForWrite(a2, 0x1CuLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    v10 = InteractiveControlManager::Instance(v9, v8);
    if ( (int)InteractiveControlManager::GetReportInfo(
                v10,
                (unsigned __int16)a1,
                HIWORD(a1),
                (struct tagINTERACTIVECTRL_INFO *)&Src) < 0 )
    {
      v4 = 0;
    }
    else
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (volatile void *)MmUserProbeAddress;
      RtlCopyVolatileMemory((void *)a2, &Src, 0x1CuLL);
    }
  }
  else
  {
    v4 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v11);
  return v4;
}
