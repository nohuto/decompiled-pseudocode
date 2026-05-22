/*
 * XREFs of ?HandleChordedKey@ViewMenuChordedKeyHandler@@QEAAJW4GameInputGamepadButtons@@0PEA_N@Z @ 0x180182034
 * Callers:
 *     ?HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEA_N@Z @ 0x18005F8B4 (-HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GameInputGamepadButtons@@PEA_N@Z @ 0x180181B60 (-ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GameInputGamepadButtons@@PEA_N@Z.c)
 */

__int64 __fastcall ViewMenuChordedKeyHandler::HandleChordedKey(__int64 a1, int a2, char a3, char *a4)
{
  bool v4; // zf
  bool v7; // dl
  bool v8; // r8
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *(_DWORD *)(a1 + 16) == 0;
  *a4 = 0;
  if ( v4 )
    return 0LL;
  v7 = (a2 & 2) != 0;
  v8 = a2 & 1;
  if ( v7 == ((a3 & 2) != 0) && v8 == (a3 & 1) )
    return 0LL;
  v9 = ViewMenuChordedKeyHandler::ChordedKeyStateMachine(a1, v7, v8, a2, a4);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC0,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
