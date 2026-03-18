/*
 * XREFs of ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x14027B920
 * Callers:
 *     CreatePseudoDigitizerDevice @ 0x14027BC78 (CreatePseudoDigitizerDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall _UpdateReportDescriptor(struct tagRECT *a1, __int64 a2, __int16 a3)
{
  __int16 v4; // bx
  _BYTE *UserSessionState; // rax
  char v7; // dl
  int v8; // ecx
  int v9; // r8d
  char v10; // r9

  v4 = a2;
  UserSessionState = (_BYTE *)W32GetUserSessionState(a1, a2);
  v7 = LOBYTE(a1->bottom) - LOBYTE(a1->top);
  v8 = a1->bottom - a1->top;
  v9 = (a1->right - a1->left) >> 8;
  UserSessionState[70063] = HIBYTE(a3);
  UserSessionState[70177] = HIBYTE(a3);
  UserSessionState[70291] = HIBYTE(a3);
  UserSessionState[70405] = HIBYTE(a3);
  v10 = LOBYTE(a1->right) - LOBYTE(a1->left);
  v8 >>= 8;
  UserSessionState[70057] = v4;
  UserSessionState[70171] = v4;
  UserSessionState[70285] = v4;
  UserSessionState[70399] = v4;
  UserSessionState[70066] = v8;
  UserSessionState[70180] = v8;
  UserSessionState[70294] = v8;
  UserSessionState[70408] = v8;
  UserSessionState[70058] = HIBYTE(v4);
  UserSessionState[70062] = a3;
  UserSessionState[70172] = HIBYTE(v4);
  UserSessionState[70176] = a3;
  UserSessionState[70286] = HIBYTE(v4);
  UserSessionState[70290] = a3;
  UserSessionState[70400] = HIBYTE(v4);
  UserSessionState[70404] = a3;
  UserSessionState[70044] = v10;
  UserSessionState[70045] = v9;
  UserSessionState[70065] = v7;
  UserSessionState[70158] = v10;
  UserSessionState[70159] = v9;
  UserSessionState[70179] = v7;
  UserSessionState[70272] = v10;
  UserSessionState[70273] = v9;
  UserSessionState[70293] = v7;
  UserSessionState[70386] = v10;
  UserSessionState[70387] = v9;
  UserSessionState[70407] = v7;
}
