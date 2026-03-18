/*
 * XREFs of CreateSprite @ 0x14005C580
 * Callers:
 *     xxxSetLayeredWindow @ 0x14005C15C (xxxSetLayeredWindow.c)
 * Callees:
 *     IsWindowContentProtected @ 0x14001D640 (IsWindowContentProtected.c)
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     GreCreateSprite @ 0x14005ADD0 (GreCreateSprite.c)
 *     ?InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x14007BB28 (-InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall CreateSprite(Gre::Base *a1, __int64 a2, struct tagRECT *a3, _QWORD *a4)
{
  __int64 v7; // rcx
  int v8; // ebp
  __int64 v9; // rdx
  BOOL v10; // r12d
  BOOL v11; // esi
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rax
  char Prop; // bl
  int v17; // eax
  void *Sprite; // rdx
  __int64 result; // rax
  _BYTE v21[144]; // [rsp+70h] [rbp-E8h] BYREF

  memset_0(v21, 0, 0x88uLL);
  InitializeMiniWinInfo((const struct tagWND *const)a2, (struct tagMINIWINDOWINFO *)v21);
  v7 = *(_QWORD *)(a2 + 40);
  v8 = *(_BYTE *)(v7 + 31) & 0x10;
  v9 = *(_WORD *)(v7 + 42) & 0x2FFF;
  v10 = v9 == 669;
  v11 = *(_QWORD *)(v7 + 88) == *(_QWORD *)(v7 + 104) && *(_QWORD *)(v7 + 96) == *(_QWORD *)(v7 + 112)
     || (_DWORD)v9 == 669;
  v12 = IsWindowContentProtected(a2, v9);
  UserSessionState = W32GetUserSessionState(v14, v13);
  Prop = GetProp(a2, *(unsigned __int16 *)(UserSessionState + 41360), 1u);
  v17 = IsWindowDesktopComposed(a2);
  Sprite = GreCreateSprite(
             a1,
             *(HWND *)a2,
             a3,
             (struct tagMINIWINDOWINFO *)v21,
             *(_DWORD *)(a2 + 256),
             v17,
             v8,
             v10,
             v11,
             v12,
             (Prop & 0x11) != 0,
             0LL);
  result = Sprite == 0LL ? 0x803F0002 : 0;
  if ( a4 )
    *a4 = Sprite;
  return result;
}
