/*
 * XREFs of ?GetMenuRightAlignHint@@YA_NXZ @ 0x14026E280
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x14015AE18 (xxxTrackPopupMenuEx.c)
 *     xxxMNOpenHierarchy @ 0x14016D6F0 (xxxMNOpenHierarchy.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1401A73E0 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 * Callees:
 *     GetUserHandedness @ 0x140204B90 (GetUserHandedness.c)
 */

bool __fastcall GetMenuRightAlignHint(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( (((unsigned int)CInputGlobals::GetLastInputType(*(_QWORD *)(UserSessionState + 3056)) - 11) & 0xFFFFFFFD) != 0 )
    return (unsigned int)RIMIsDefaultUILanguageRTL() != 0;
  else
    return (unsigned int)GetUserHandedness() == 1;
}
