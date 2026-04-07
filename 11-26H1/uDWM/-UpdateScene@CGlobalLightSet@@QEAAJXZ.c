/*
 * XREFs of ?UpdateScene@CGlobalLightSet@@QEAAJXZ @ 0x18001EAF0
 * Callers:
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x18001E590 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     ??$?9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@01@$$T@Z @ 0x1800357D0 (--$-9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV-$ComP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalLightSet::UpdateScene(CGlobalLightSet *this)
{
  _QWORD *v1; // rcx

  if ( (unsigned __int8)Microsoft::WRL::operator!=<Windows::UI::Composition::ICompositionProjectedShadowReceiver>((char *)this + 96) )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 48LL))(*v1);
  return 0LL;
}
