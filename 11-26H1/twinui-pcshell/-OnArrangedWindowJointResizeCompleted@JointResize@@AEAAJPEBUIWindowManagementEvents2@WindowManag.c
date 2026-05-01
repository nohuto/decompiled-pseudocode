/*
 * XREFs of ?OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z @ 0x180538EA0
 * Callers:
 *     ?OnApplicationViewChanged@JointResize@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180538D30 (-OnApplicationViewChanged@JointResize@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEA.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Cleanup@JointResize@@AEAAXXZ @ 0x1800787A8 (-Cleanup@JointResize@@AEAAXXZ.c)
 *     ?DestroyGhostDivider@JointResize@@AEAAXXZ @ 0x1801CC820 (-DestroyGhostDivider@JointResize@@AEAAXXZ.c)
 *     ??1JointResize@JointResizeTelemetry@@QEAA@XZ @ 0x180285324 (--1JointResize@JointResizeTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18050AF9C (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     ?Commit@JointResize@@AEAAJXZ @ 0x1805381DC (-Commit@JointResize@@AEAAJXZ.c)
 *     ?TransferToCurrentThread@JointResize@JointResizeTelemetry@@QEAA?AV12@XZ @ 0x18053AAD8 (-TransferToCurrentThread@JointResize@JointResizeTelemetry@@QEAA-AV12@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall JointResize::OnArrangedWindowJointResizeCompleted(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  char v6; // di
  int v7; // eax
  __int64 v9[42]; // [rsp+20h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  JointResizeTelemetry::JointResize::TransferToCurrentThread(a1 + 496, v9);
  if ( *(_BYTE *)(a1 + 280) )
  {
    *(_BYTE *)(a1 + 280) = 0;
    v6 = *(_BYTE *)(a3 + 8);
    if ( v6 )
    {
      v7 = JointResize::Commit((JointResize *)a1);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x42D,
          (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)(unsigned int)v7);
    }
    LOBYTE(v5) = v6 == 0;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 248) + 48LL))(*(_QWORD *)(a1 + 248), v5);
    JointResize::DestroyGhostDivider((JointResize *)a1);
    JointResize::Cleanup((JointResize *)a1);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v9,
      0);
  }
  JointResizeTelemetry::JointResize::~JointResize((JointResizeTelemetry::JointResize *)v9);
  return 0LL;
}
