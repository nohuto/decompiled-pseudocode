/*
 * XREFs of ?GetMenuRightAlignHint@@YA_NXZ @ 0x140295A68
 * Callers:
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x140175A04 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 *     xxxMNOpenHierarchy @ 0x14024D400 (xxxMNOpenHierarchy.c)
 * Callees:
 *     GetUserHandedness @ 0x14023BD40 (GetUserHandedness.c)
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
