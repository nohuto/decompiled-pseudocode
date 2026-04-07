/*
 * XREFs of ??0CAnimationEngine@@AEAA@XZ @ 0x180075DD4
 * Callers:
 *     ?CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z @ 0x180075D5C (-CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CAnimationEngine *__fastcall CAnimationEngine::CAnimationEngine(CAnimationEngine *this)
{
  CAnimationEngine *result; // rax

  *(_QWORD *)this = &CAnimationEngine::`vftable';
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_BYTE *)this + 120) = 0;
  result = this;
  *((_DWORD *)this + 29) = 1;
  return result;
}
