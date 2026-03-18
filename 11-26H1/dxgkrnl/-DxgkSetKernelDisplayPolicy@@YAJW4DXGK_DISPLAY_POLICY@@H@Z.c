/*
 * XREFs of ?DxgkSetKernelDisplayPolicy@@YAJW4DXGK_DISPLAY_POLICY@@H@Z @ 0x1403F06D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DisableDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x14002EF2C (-DisableDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x14002EF70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x140075F40 (-DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall DxgkSetKernelDisplayPolicy(int a1, int a2)
{
  DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v9; // rcx
  struct DXGSESSIONDATA *v10; // rdi
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  bool v15; // bl
  __int64 CurrentProcess; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int ProcessSessionId; // eax
  _BYTE v21[32]; // [rsp+50h] [rbp-28h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global, v5, v6, v7);
  v10 = SessionData;
  if ( SessionData )
  {
    v11 = a1 - 1;
    if ( !v11 )
    {
      if ( a2 )
      {
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21, (struct _KTHREAD **)SessionData + 2375, 0);
        DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v21);
        *((_BYTE *)v10 + 18992) = 1;
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
      }
      else
      {
        DispBrokerClient::DisableDisplayBroker((struct DXGSESSIONDATA *)((char *)SessionData + 18984));
      }
      return 0LL;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      *((_BYTE *)SessionData + 18499) = a2 == 0;
      return 0LL;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      *((_BYTE *)SessionData + 18498) = a2 == 0;
      return 0LL;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v15 = a2 != 0;
      if ( *((_BYTE *)SessionData + 18993) != (a2 != 0) )
      {
        *((_BYTE *)SessionData + 18993) = v15;
        DispBrokerClient::DisconnectDisplayBroker((struct _KTHREAD **)SessionData + 2373);
      }
      *((_BYTE *)v10 + 18500) = v15;
      return 0LL;
    }
    if ( v14 == 1 )
    {
      *((_BYTE *)SessionData + 18501) = a2 != 0;
      return 0LL;
    }
    return 3221225485LL;
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v9);
    PsGetProcessSessionId(CurrentProcess);
    WdLogSingleEntry1(1LL);
    WdLogGlobalForLineNumber = 36;
    v19 = PsGetCurrentProcess(v18);
    ProcessSessionId = PsGetProcessSessionId(v19);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Called DxgkSetKernelDisplayPolicy without session data in session 0x%I64x",
      ProcessSessionId,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221226581LL;
  }
}
