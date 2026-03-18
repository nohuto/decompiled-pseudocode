/*
 * XREFs of ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x140220638
 * Callers:
 *     ForceCapture @ 0x1402160B0 (ForceCapture.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C5510 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?Clear@MouseOwner@CMouseProcessor@@QEAAXXZ @ 0x14012A060 (-Clear@MouseOwner@CMouseProcessor@@QEAAXXZ.c)
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x140222170 (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::ForceMouseOwner(CMouseProcessor *this, const struct tagINPUTDEST *a2, char a3)
{
  bool v6; // di
  bool v7; // bp
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  _BYTE v11[128]; // [rsp+50h] [rbp-B8h] BYREF

  v6 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      6,
      19,
      (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids,
      a3);
  }
  if ( a2 )
  {
    CInputDest::CInputDest((CInputDest *)v11, a2);
    CMouseProcessor::MouseOwner::Set((CMouseProcessor *)((char *)this + 3776), (const struct CInputDest *)v11);
    CInputDest::~CInputDest((CInputDest *)v11);
  }
  else if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 974, 1, 1) )
  {
    CMouseProcessor::MouseOwner::Clear((CMouseProcessor *)((char *)this + 3776));
  }
}
