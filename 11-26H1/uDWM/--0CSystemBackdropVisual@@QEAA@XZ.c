/*
 * XREFs of ??0CSystemBackdropVisual@@QEAA@XZ @ 0x18002733C
 * Callers:
 *     ?Create@CSystemBackdropVisual@@SAJW4SYSTEMBACKDROP_TYPE@@PEAPEAV1@@Z @ 0x180027194 (-Create@CSystemBackdropVisual@@SAJW4SYSTEMBACKDROP_TYPE@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CSpriteVisual@@QEAA@XZ @ 0x180027638 (--0CSpriteVisual@@QEAA@XZ.c)
 */

CSystemBackdropVisual *__fastcall CSystemBackdropVisual::CSystemBackdropVisual(CSystemBackdropVisual *this)
{
  __int64 v1; // r11
  CSystemBackdropVisual *result; // rax

  CSpriteVisual::CSpriteVisual(this);
  *(_QWORD *)v1 = &CSystemBackdropVisual::`vftable';
  *(_QWORD *)(v1 + 184) = 0LL;
  *(_BYTE *)(v1 + 192) = 0;
  *(_QWORD *)(v1 + 196) = 0LL;
  result = (CSystemBackdropVisual *)v1;
  *(_OWORD *)(v1 + 204) = 0LL;
  return result;
}
