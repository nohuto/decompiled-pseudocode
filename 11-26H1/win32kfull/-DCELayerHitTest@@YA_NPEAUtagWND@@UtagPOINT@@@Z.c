/*
 * XREFs of ?DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x14008C6E8
 * Callers:
 *     EditionPostDwmSpeedHitTest @ 0x14008C7D0 (EditionPostDwmSpeedHitTest.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x14008D280 (DCELogicalSpeedTopLevelHitTest.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14008E350 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x140264828 (-TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagREC.c)
 * Callees:
 *     GrePtInSprite @ 0x14008CE2C (GrePtInSprite.c)
 */

bool __fastcall DCELayerHitTest(struct tagWND *a1, struct tagPOINT a2)
{
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbp
  int v8; // esi
  BOOL v9; // edi
  __int64 v10; // rdx
  __int64 UserSessionState; // rax
  unsigned int y; // [rsp+4Ch] [rbp+14h]

  y = a2.y;
  v4 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v4 + 24) & 0x20) != 0 )
    return 0;
  if ( a2.x < *(_DWORD *)(v4 + 88)
    || a2.x >= *(_DWORD *)(v4 + 96)
    || a2.y < *(_DWORD *)(v4 + 92)
    || a2.y >= *(_DWORD *)(v4 + 100)
    || (*(_BYTE *)(v4 + 27) & 0x20) != 0 && (*(_BYTE *)(v4 + 26) & 0x20) != 0 )
  {
    return 1;
  }
  v5 = IsWindowDesktopComposed(a1);
  v6 = *((unsigned __int16 *)a1 + 128);
  v7 = *(_QWORD *)a1;
  v8 = v5;
  v9 = (unsigned __int16)v6 >= 0x602u;
  UserSessionState = W32GetUserSessionState(v6, v10);
  return (unsigned int)GrePtInSprite(
                         *(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 40LL),
                         v7,
                         (unsigned int)a2.x,
                         y,
                         v9,
                         v8) != 0;
}
