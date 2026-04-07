/*
 * XREFs of ??0CAnimationResource@@IEAA@XZ @ 0x1800505A8
 * Callers:
 *     ?Create@CAnimationResource@@SAJPEAPEAV1@@Z @ 0x1800504DC (-Create@CAnimationResource@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CAnimationResource *__fastcall CAnimationResource::CAnimationResource(CAnimationResource *this)
{
  CAnimationResource *result; // rax

  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &CAnimationResource::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_WORD *)this + 32) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  result = this;
  *((_DWORD *)this + 20) = 8;
  return result;
}
