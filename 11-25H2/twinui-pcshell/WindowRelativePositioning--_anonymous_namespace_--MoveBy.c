/*
 * XREFs of WindowRelativePositioning::_anonymous_namespace_::MoveBy @ 0x1804F2994
 * Callers:
 *     ?GetAdjacentPosition@WindowRelativePositioning@@YA?AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApplicationViewCollection@@0@Z @ 0x1804F23F4 (-GetAdjacentPosition@WindowRelativePositioning@@YA-AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApp.c)
 * Callees:
 *     WindowRelativePositioning::_anonymous_namespace_::MoveIntoDisplayRect @ 0x1804F29E4 (WindowRelativePositioning--_anonymous_namespace_--MoveIntoDisplayRect.c)
 */

__int64 __fastcall WindowRelativePositioning::_anonymous_namespace_::MoveBy(
        __int64 a1,
        _DWORD *a2,
        int a3,
        int a4,
        __int64 a5)
{
  int v6; // r10d
  int v7; // r8d
  int v8; // r10d
  int v9; // edx
  _DWORD v11[6]; // [rsp+20h] [rbp-18h] BYREF

  v6 = a3 + *a2;
  v7 = a2[2] + a3;
  v11[0] = v6;
  v8 = a2[1];
  v9 = a2[3];
  v11[2] = v7;
  v11[3] = a4 + v9;
  v11[1] = a4 + v8;
  WindowRelativePositioning::_anonymous_namespace_::MoveIntoDisplayRect(a1, v11, a5);
  return a1;
}
