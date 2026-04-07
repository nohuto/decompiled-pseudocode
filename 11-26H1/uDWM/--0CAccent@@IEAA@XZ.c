/*
 * XREFs of ??0CAccent@@IEAA@XZ @ 0x18006E4E0
 * Callers:
 *     ?Create@CAccent@@SAJPEAPEAV1@@Z @ 0x18006E418 (-Create@CAccent@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CContainerVisual@@IEAA@XZ @ 0x1800212BC (--0CContainerVisual@@IEAA@XZ.c)
 */

CAccent *__fastcall CAccent::CAccent(CAccent *this)
{
  __int64 v1; // r9
  CAccent *result; // rax

  CContainerVisual::CContainerVisual(this);
  *(_DWORD *)(v1 + 260) = 0xFFFFFF;
  *(_QWORD *)(v1 + 240) = 0LL;
  *(_QWORD *)(v1 + 248) = 0LL;
  *(_WORD *)(v1 + 276) = 0;
  *(_QWORD *)(v1 + 288) = 0LL;
  *(_QWORD *)(v1 + 296) = 0LL;
  *(_QWORD *)(v1 + 224) = 0LL;
  *(_QWORD *)(v1 + 232) = 0LL;
  *(_QWORD *)(v1 + 264) = 0LL;
  *(_QWORD *)(v1 + 280) = 0LL;
  result = (CAccent *)v1;
  *(_QWORD *)v1 = &CAccent::`vftable';
  return result;
}
