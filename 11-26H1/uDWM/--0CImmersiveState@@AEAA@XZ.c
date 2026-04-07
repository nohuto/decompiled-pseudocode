/*
 * XREFs of ??0CImmersiveState@@AEAA@XZ @ 0x18003C89C
 * Callers:
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18003C7D4 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x180021380 (--0CBaseObject@@QEAA@XZ.c)
 */

CImmersiveState *__fastcall CImmersiveState::CImmersiveState(CImmersiveState *this)
{
  __int64 v1; // rcx
  CImmersiveState *result; // rax

  CBaseObject::CBaseObject(this);
  *(_QWORD *)v1 = &CImmersiveState::`vftable';
  *(_QWORD *)(v1 + 16) = 0LL;
  *(_QWORD *)(v1 + 24) = 0LL;
  *(_QWORD *)(v1 + 32) = 0LL;
  *(_DWORD *)(v1 + 40) = 0;
  *(_QWORD *)(v1 + 48) = 0LL;
  *(_BYTE *)(v1 + 56) = 0;
  *(_QWORD *)(v1 + 64) = 0LL;
  result = (CImmersiveState *)v1;
  *(_OWORD *)(v1 + 72) = 0LL;
  return result;
}
