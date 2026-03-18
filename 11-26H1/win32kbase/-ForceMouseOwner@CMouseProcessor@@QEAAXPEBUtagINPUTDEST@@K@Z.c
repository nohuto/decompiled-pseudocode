/*
 * XREFs of ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x140223874
 * Callers:
 *     ForceCapture @ 0x14021B530 (ForceCapture.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x140071D30 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     ?Clear@MouseOwner@CMouseProcessor@@QEAAXXZ @ 0x14010B1A0 (-Clear@MouseOwner@CMouseProcessor@@QEAAXXZ.c)
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x14010B214 (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::ForceMouseOwner(CMouseProcessor *this, const struct tagINPUTDEST *a2, char a3)
{
  bool v6; // bl
  bool v7; // si
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  _BYTE v11[128]; // [rsp+50h] [rbp-B8h] BYREF

  v6 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)this, (_DWORD)WPP_GLOBAL_Control, a3);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      6,
      19,
      (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids,
      a3);
  }
  if ( a2 )
  {
    CInputDest::CInputDest((CInputDest *)v11, a2);
    CMouseProcessor::MouseOwner::Set((CMouseProcessor *)((char *)this + 3784), (const struct CInputDest *)v11);
    CInputDest::~CInputDest((CInputDest *)v11);
  }
  else if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 976, 1, 1) )
  {
    CMouseProcessor::MouseOwner::Clear((CMouseProcessor *)((char *)this + 3784));
  }
}
