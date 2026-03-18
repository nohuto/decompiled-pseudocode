/*
 * XREFs of ?EnumPwndDlgChildProc@@YAHPEAUtagWND@@_J@Z @ 0x140303340
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     IsVisible @ 0x140128400 (IsVisible.c)
 *     ?IsHelpParent@@YAHPEAUtagWND@@@Z @ 0x14030338C (-IsHelpParent@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall EnumPwndDlgChildProc(struct tagWND *a1, struct tagWND **a2)
{
  __int64 v2; // r10
  __int64 v3; // r11
  struct tagWND *v4; // r10
  __int64 v5; // r11

  if ( a1 == *a2
    || !(unsigned int)IsVisible((__int64)a1)
    || !PtInRect((_DWORD *)(*(_QWORD *)(v2 + 40) + 88LL), *(_QWORD *)(v3 + 16)) )
  {
    return 1LL;
  }
  *(_QWORD *)(v5 + 8) = v4;
  return IsHelpParent(v4);
}
