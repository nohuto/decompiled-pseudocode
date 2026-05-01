/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c080f31e4a013481e3d9e91b0ac65f7c___::Run @ 0x180392F60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180133E4C (-ContinueOnCurrentThread@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAA.c)
 *     ?ExperienceManager_CheckAndPopulateContact_PopulatedDelayLoadedContact@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAAXXZ @ 0x1803913FC (-ExperienceManager_CheckAndPopulateContact_PopulatedDelayLoadedContact@ExperienceManager_CheckAn.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180393C80 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c080f31e4a013481e3d9e91b0ac65f7c___::Run(
        __int64 a1)
{
  QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *v2; // rdi
  int v3; // eax
  _BYTE v4[88]; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = (QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)(a1 + 32);
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    a1 + 32,
    (__int64)v4);
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 56LL))(
         *(_QWORD *)(a1 + 16),
         *(_QWORD *)(a1 + 24));
  if ( v3 >= 0 )
  {
    QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::ExperienceManager_CheckAndPopulateContact_PopulatedDelayLoadedContact(v2);
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v2);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x43D,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  }
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v4);
}
