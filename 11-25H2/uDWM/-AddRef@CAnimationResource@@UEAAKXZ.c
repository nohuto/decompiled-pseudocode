/*
 * XREFs of ?AddRef@CAnimationResource@@UEAAKXZ @ 0x18008DBC0
 * Callers:
 *     ?QueryInterface@CAnimationResource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A7560 (-QueryInterface@CAnimationResource@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationResource::AddRef(CAnimationResource *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
