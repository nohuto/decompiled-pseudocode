/*
 * XREFs of ?ListenForSurfaceNotifications@CBitmapRenderStrategy@@UEBA_NPEBVCResource@@@Z @ 0x18018E070
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CBitmapRenderStrategy::ListenForSurfaceNotifications(
        CBitmapRenderStrategy *this,
        const struct CResource *a2)
{
  return (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 31LL) == 0;
}
