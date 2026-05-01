/*
 * XREFs of _lambda_f50d75b95467dfcfa5462755f3ee65a6_::operator() @ 0x180569848
 * Callers:
 *     ?ShouldShowGripper@TouchEdgeGestureManager@@AEAA_NXZ @ 0x180569CBC (-ShouldShowGripper@TouchEdgeGestureManager@@AEAA_NXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$HasFullScreenGameInFocus@AEAH@TouchEdgeGestureTelemetry@@SAXAEAH@Z @ 0x180568B34 (--$HasFullScreenGameInFocus@AEAH@TouchEdgeGestureTelemetry@@SAXAEAH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall lambda_f50d75b95467dfcfa5462755f3ee65a6_::operator()(IUnknown ***a1)
{
  int v1; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+30h] [rbp+8h] BYREF
  void *ppvOut; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  if ( *((_BYTE *)*a1 + 344) )
  {
    ppvOut = 0LL;
    if ( IUnknown_QueryService(*a1[1], &IID_IRudeWindowManager, &GUID_d29c946b_4f1c_425a_bb5b_d4e2e6e2993c, &ppvOut) >= 0 )
    {
      v1 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 40LL))(ppvOut, &v5);
      if ( v1 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x188,
          (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegesturemanager.cpp",
          (const char *)(unsigned int)v1,
          v3);
    }
    if ( ppvOut )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&ppvOut);
  }
  TouchEdgeGestureTelemetry::HasFullScreenGameInFocus<int &>(&v5);
  return v5 != 0;
}
