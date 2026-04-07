/*
 * XREFs of ??0CAnimationResource@@IEAA@XZ @ 0x180061F40
 * Callers:
 *     ?Create@CAnimationResource@@SAJPEAPEAV1@@Z @ 0x180061E74 (-Create@CAnimationResource@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180009100 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 */

CAnimationResource *__fastcall CAnimationResource::CAnimationResource(CAnimationResource *this)
{
  __int64 v1; // r9
  CAnimationResource *result; // rax
  __int64 v3; // r10

  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &CAnimationResource::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 24, 0LL, 0);
  result = (CAnimationResource *)v1;
  *(_QWORD *)(v1 + 56) = v3;
  *(_WORD *)(v1 + 64) = v3;
  *(_QWORD *)(v1 + 72) = v3;
  *(_DWORD *)(v1 + 80) = 9;
  *(_QWORD *)(v1 + 88) = v3;
  return result;
}
