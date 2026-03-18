/*
 * XREFs of _EUDCCountRegion::EUDCCountRegion_::_2_::_lambda_1_::_lambda_invoker_cdecl_ @ 0x140219F30
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140082830 (--$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140082918 (--$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 */

void __fastcall EUDCCountRegion::EUDCCountRegion_::_2_::_lambda_1_::_lambda_invoker_cdecl_(int a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  GreAcquirePushLockShared2<16,0>(v2 + 4872);
  _InterlockedDecrement((volatile signed __int32 *)(v2 + 13508));
  GreReleasePushLockShared2<16,0>(v2 + 4872);
}
