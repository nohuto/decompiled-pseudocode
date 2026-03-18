/*
 * XREFs of ProcessFreezeChangeNotify @ 0x14014C310
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140059BB8 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400910B4 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?FreezeChangeNotify@tagPROCESSINFO@@SAXPEAPEAU_EPROCESS@@K@Z @ 0x14013A1DC (-FreezeChangeNotify@tagPROCESSINFO@@SAXPEAPEAU_EPROCESS@@K@Z.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall ProcessFreezeChangeNotify(struct _EPROCESS **a1, unsigned int a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  _QWORD *UserSessionState; // rbx
  char v8; // di
  __int64 v9; // rax
  int v10; // edx
  int v11; // r8d
  bool v12; // bl
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _BYTE v21[256]; // [rsp+50h] [rbp-108h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v21);
  UserSessionState = (_QWORD *)W32GetUserSessionState(v5, v4, v6);
  v8 = 1;
  v9 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v9;
  if ( v9 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v9) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v10, v11);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v8 = 0;
  }
  v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v11);
    LOBYTE(v14) = v12;
    LOBYTE(v15) = v8;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v14,
      *(_QWORD *)(v13 + 69136),
      4,
      14,
      30,
      (__int64)&WPP_ecd75a293f58357f88bf2c1d127de49e_Traceguids,
      a2);
  }
  tagPROCESSINFO::FreezeChangeNotify(a1, a2, v11);
  UserSessionSwitchLeaveCritWithNonPaged(v17, v16, v18, v19);
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v21);
  return 0LL;
}
