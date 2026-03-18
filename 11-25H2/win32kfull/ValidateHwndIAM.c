/*
 * XREFs of ValidateHwndIAM @ 0x14015C6C4
 * Callers:
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x14015C664 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     NtUserSetBridgeWindowChild @ 0x14029E030 (NtUserSetBridgeWindowChild.c)
 *     NtUserShellMigrateWindow @ 0x1402A14B0 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1402A1990 (NtUserShellSetWindowPos.c)
 * Callees:
 *     ??1CDisableILCheckAuto@@QEAA@XZ @ 0x14001BB60 (--1CDisableILCheckAuto@@QEAA@XZ.c)
 *     ??0CDisableILCheckAuto@@QEAA@XZ @ 0x14001BB78 (--0CDisableILCheckAuto@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IAMThreadAccessGranted @ 0x14015C7E0 (IAMThreadAccessGranted.c)
 */

__int64 __fastcall ValidateHwndIAM(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // rbx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = PtiCurrent(a1, a2);
  if ( !(unsigned int)IAMThreadAccessGranted(v3) )
    return ValidateHwnd(a1);
  CDisableILCheckAuto::CDisableILCheckAuto((CDisableILCheckAuto *)v6);
  v4 = ValidateHwnd(a1);
  CDisableILCheckAuto::~CDisableILCheckAuto((CDisableILCheckAuto *)v6);
  return v4;
}
