/*
 * XREFs of ??0CAccent@@IEAA@XZ @ 0x18007C97C
 * Callers:
 *     ?Create@CAccent@@SAJPEAPEAV1@@Z @ 0x18007C8B0 (-Create@CAccent@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CCanvasVisual@@IEAA@XZ @ 0x180009F1C (--0CCanvasVisual@@IEAA@XZ.c)
 */

CAccent *__fastcall CAccent::CAccent(CAccent *this)
{
  CCanvasVisual::CCanvasVisual(this);
  *((_DWORD *)this + 79) = 0xFFFFFF;
  *(_QWORD *)this = &CAccent::`vftable';
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_WORD *)((char *)this + 333) = 0;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_BYTE *)this + 332) = 0;
  *((_QWORD *)this + 42) = 0LL;
  return this;
}
