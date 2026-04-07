/*
 * XREFs of ?UpdateBrush@CSystemBackdropVisual@@QEAAJ_N0000@Z @ 0x180039A24
 * Callers:
 *     ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x18000F64C (-UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N1@Z @ 0x180039B18 (-SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSystemBackdropVisual::UpdateBrush(
        CSystemBackdropVisual *this,
        char a2,
        __int64 a3,
        __int64 a4,
        bool a5,
        bool a6)
{
  unsigned int v6; // edi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  DWORD SysColor; // eax
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = 1;
  if ( (_BYTE)a4 )
  {
    v6 = 3;
  }
  else if ( !a2 || !(_BYTE)a3 )
  {
    v6 = 2;
  }
  v8 = *((_DWORD *)this + 45);
  if ( v8 == v6 && v6 != 3 && *((_BYTE *)this + 176) == a5 )
    return 0LL;
  if ( v8 == 3 && v6 == 3 )
  {
    SysColor = GetSysColor(5);
    if ( *((_BYTE *)this + 184) == 0xFF
      && *(_WORD *)((char *)this + 185) == (_WORD)SysColor
      && *((_BYTE *)this + 187) == BYTE2(SysColor) )
    {
      return 0LL;
    }
  }
  LOBYTE(a4) = a6;
  LOBYTE(a3) = a5;
  v9 = CSystemBackdropVisual::SetState(this, v6, a3, a4);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x55,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
    (const char *)(unsigned int)v9,
    v13);
  return v10;
}
