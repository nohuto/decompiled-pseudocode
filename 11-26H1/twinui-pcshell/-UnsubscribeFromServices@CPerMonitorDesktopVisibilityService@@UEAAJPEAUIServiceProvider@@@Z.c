/*
 * XREFs of ?UnsubscribeFromServices@CPerMonitorDesktopVisibilityService@@UEAAJPEAUIServiceProvider@@@Z @ 0x1804E7C20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPerMonitorDesktopVisibilityService::UnsubscribeFromServices(
        CPerMonitorDesktopVisibilityService *this,
        struct IServiceProvider *a2)
{
  __int64 *v2; // rbx

  v2 = (__int64 *)((char *)this + 192);
  if ( *((_DWORD *)this + 42) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 32LL))(*v2);
    *((_DWORD *)this + 42) = 0;
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v2);
  return 0LL;
}
