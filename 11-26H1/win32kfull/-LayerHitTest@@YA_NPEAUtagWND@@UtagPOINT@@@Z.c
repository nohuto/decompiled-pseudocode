/*
 * XREFs of ?LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x14008C220
 * Callers:
 *     _ChildWindowFromPointEx @ 0x140047B90 (_ChildWindowFromPointEx.c)
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14008B280 (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x140264828 (-TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagREC.c)
 * Callees:
 *     GrePtInSprite @ 0x14008CE2C (GrePtInSprite.c)
 */

bool __fastcall LayerHitTest(struct tagWND *a1, struct tagPOINT a2)
{
  unsigned int x; // ebx
  _BYTE *v4; // rdx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbp
  int v8; // esi
  BOOL v9; // edi
  __int64 v10; // rdx
  __int64 UserSessionState; // rax
  unsigned int y; // [rsp+4Ch] [rbp+14h]

  y = a2.y;
  x = a2.x;
  v4 = (_BYTE *)*((_QWORD *)a1 + 5);
  if ( (v4[24] & 0x20) != 0 )
    return 0;
  if ( (v4[27] & 0x20) != 0 && (v4[26] & 0x20) != 0 )
    return 1;
  v5 = IsWindowDesktopComposed(a1);
  v6 = *((unsigned __int16 *)a1 + 128);
  v7 = *(_QWORD *)a1;
  v8 = v5;
  v9 = (unsigned __int16)v6 >= 0x602u;
  UserSessionState = W32GetUserSessionState(v6, v10);
  return (unsigned int)GrePtInSprite(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 40LL), v7, x, y, v9, v8) != 0;
}
