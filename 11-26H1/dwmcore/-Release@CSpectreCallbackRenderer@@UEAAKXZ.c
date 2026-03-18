/*
 * XREFs of ?Release@CSpectreCallbackRenderer@@UEAAKXZ @ 0x1801D3FD0
 * Callers:
 *     ?Release@CSpectreCallbackRenderer@@W7EAAKXZ @ 0x180227170 (-Release@CSpectreCallbackRenderer@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpectreCallbackRenderer::Release(CSpectreCallbackRenderer *this)
{
  return CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release((volatile signed __int32 *)this + 2);
}
