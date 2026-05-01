/*
 * XREFs of _lambda_0f768bc8971e0bee1fc73f6126b3910e_::operator() @ 0x180389780
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0f768bc8971e0bee1fc73f6126b3910e___::Run @ 0x18038BDC0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0f768bc8971e0bee1fc73f6126b3910e___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D48C8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1801419D8 (-ContinueOnCurrentThread@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAA.c)
 *     ??$ExperienceManager_CheckAndPopulateContact_PopulatedContact@_N@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAAX$$QEA_N@Z @ 0x180387F5C (--$ExperienceManager_CheckAndPopulateContact_PopulatedContact@_N@ExperienceManager_CheckAndPopul.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18038CA64 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_0f768bc8971e0bee1fc73f6126b3910e_::operator()(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r9
  int v4; // eax
  unsigned int v5; // ebx
  _BYTE v7[80]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  bool v9; // [rsp+90h] [rbp+8h] BYREF

  v2 = (__int64)(a1 + 4);
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (__int64)(a1 + 4),
    (__int64)v7);
  LOBYTE(v3) = *((_BYTE *)a1 + 24);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)*a1 + 48LL))(*a1, a1[1], a1[2], v3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v9 = *((_BYTE *)a1 + 24) != 0;
    QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::ExperienceManager_CheckAndPopulateContact_PopulatedContact<bool>(
      v2,
      (char *)&v9);
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v2);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41F,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  }
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v7);
  return v5;
}
