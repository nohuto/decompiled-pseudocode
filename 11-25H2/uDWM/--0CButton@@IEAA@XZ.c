/*
 * XREFs of ??0CButton@@IEAA@XZ @ 0x180011DBC
 * Callers:
 *     ?Create@CButton@@SAJPEAPEAV1@@Z @ 0x180011E64 (-Create@CButton@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x18001167C (--0CAtlasedRectsVisual@@IEAA@XZ.c)
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x180011E44 (--0CBitmapSourceArray@@QEAA@XZ.c)
 */

CButton *__fastcall CButton::CButton(CButton *this)
{
  CButton *result; // rax
  __int64 v3; // r9

  CAtlasedRectsVisual::CAtlasedRectsVisual(this);
  *(_QWORD *)this = &CButton::`vftable';
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  CBitmapSourceArray::CBitmapSourceArray((CButton *)((char *)this + 264));
  CBitmapSourceArray::CBitmapSourceArray((CButton *)((char *)this + 296));
  *((_BYTE *)this + 240) |= 1u;
  *((_DWORD *)this + 84) = 1065353216;
  *((_DWORD *)this + 88) = 1065353216;
  *((_DWORD *)this + 89) = 1065353216;
  result = this;
  *((_QWORD *)this + 41) = v3;
  *((_QWORD *)this + 43) = v3;
  *((_DWORD *)this + 90) = 2;
  return result;
}
