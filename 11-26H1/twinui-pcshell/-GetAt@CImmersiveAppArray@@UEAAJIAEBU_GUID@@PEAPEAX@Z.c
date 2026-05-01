/*
 * XREFs of ?GetAt@CImmersiveAppArray@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1801EB270
 * Callers:
 *     ?GetAt@CImmersiveAppArray@@W7EAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1802E9BD0 (-GetAt@CImmersiveAppArray@@W7EAAJIAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveAppArray::GetAt(CImmersiveAppArray *this, __int64 a2, const struct _GUID *a3, void **a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, const struct _GUID *, void **))(**((_QWORD **)this + 3) + 32LL))(
           *((_QWORD *)this + 3),
           a2,
           a3,
           a4);
}
