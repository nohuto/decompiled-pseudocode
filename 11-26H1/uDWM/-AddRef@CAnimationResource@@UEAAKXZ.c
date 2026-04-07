/*
 * XREFs of ?AddRef@CAnimationResource@@UEAAKXZ @ 0x18007CD50
 * Callers:
 *     ?QueryInterface@CAnimationResource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180099F20 (-QueryInterface@CAnimationResource@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationResource::AddRef(CAnimationResource *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
