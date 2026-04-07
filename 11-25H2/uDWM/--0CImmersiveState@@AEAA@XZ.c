/*
 * XREFs of ??0CImmersiveState@@AEAA@XZ @ 0x1800253D0
 * Callers:
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x180025310 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x1800088E4 (--0CBaseObject@@QEAA@XZ.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180009100 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 */

CImmersiveState *__fastcall CImmersiveState::CImmersiveState(CImmersiveState *this)
{
  _QWORD *v1; // r9
  __int64 v2; // r9
  CImmersiveState *result; // rax

  CBaseObject::CBaseObject(this);
  *v1 = &CImmersiveState::`vftable';
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)(v1 + 2), 0LL, 0);
  *(_QWORD *)(v2 + 48) = 0LL;
  result = (CImmersiveState *)v2;
  *(_BYTE *)(v2 + 56) = 0;
  *(_QWORD *)(v2 + 64) = 0LL;
  *(_OWORD *)(v2 + 72) = 0LL;
  return result;
}
