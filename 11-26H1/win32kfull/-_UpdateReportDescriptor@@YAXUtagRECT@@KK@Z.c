/*
 * XREFs of ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x14029FDAC
 * Callers:
 *     CreatePseudoDigitizerDevice @ 0x14029FFC8 (CreatePseudoDigitizerDevice.c)
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
  UserSessionState[70055] = HIBYTE(a3);
  UserSessionState[70169] = HIBYTE(a3);
  UserSessionState[70283] = HIBYTE(a3);
  UserSessionState[70397] = HIBYTE(a3);
  v10 = LOBYTE(a1->right) - LOBYTE(a1->left);
  v8 >>= 8;
  UserSessionState[70049] = v4;
  UserSessionState[70163] = v4;
  UserSessionState[70277] = v4;
  UserSessionState[70391] = v4;
  UserSessionState[70058] = v8;
  UserSessionState[70172] = v8;
  UserSessionState[70286] = v8;
  UserSessionState[70400] = v8;
  UserSessionState[70050] = HIBYTE(v4);
  UserSessionState[70054] = a3;
  UserSessionState[70164] = HIBYTE(v4);
  UserSessionState[70168] = a3;
  UserSessionState[70278] = HIBYTE(v4);
  UserSessionState[70282] = a3;
  UserSessionState[70392] = HIBYTE(v4);
  UserSessionState[70396] = a3;
  UserSessionState[70036] = v10;
  UserSessionState[70037] = v9;
  UserSessionState[70057] = v7;
  UserSessionState[70150] = v10;
  UserSessionState[70151] = v9;
  UserSessionState[70171] = v7;
  UserSessionState[70264] = v10;
  UserSessionState[70265] = v9;
  UserSessionState[70285] = v7;
  UserSessionState[70378] = v10;
  UserSessionState[70379] = v9;
  UserSessionState[70399] = v7;
}
