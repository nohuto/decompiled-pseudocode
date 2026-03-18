/*
 * XREFs of PsW32ScreenSaver_Show @ 0x1402B6BC0
 * Callers:
 *     <none>
 * Callees:
 *     _PostMessage @ 0x1400208B0 (_PostMessage.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x14014BC9C (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?StartScreenSaver@@YAXH@Z @ 0x14026CCBC (-StartScreenSaver@@YAXH@Z.c)
 */

void __fastcall PsW32ScreenSaver_Show(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  unsigned int *v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 UserSessionState; // rax

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18888)
    && (v4 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 18888), *(_QWORD *)(v4 + 128))
    && (v5 = W32GetUserSessionState(v4, v2),
        !IsHungWindow(*(const struct tagTHREADINFO ***)(*(_QWORD *)(v5 + 18888) + 128LL))) )
  {
    v8 = *(_DWORD **)(W32GetUserSessionState(v6, v2) + 19872);
    if ( (*v8 & 0x200) != 0 )
      StartScreenSaver(1LL, v7);
    v9 = *(unsigned int **)(W32GetUserSessionState(v8, v7) + 19872);
    v10 = *v9;
    UserSessionState = W32GetUserSessionState(v9, v11);
    PostMessage(*(_QWORD *)(*(_QWORD *)(UserSessionState + 18888) + 128LL), 274, 61760, (v10 >> 9) & 1);
  }
  else
  {
    StartScreenSaver(0LL, v2);
  }
}
