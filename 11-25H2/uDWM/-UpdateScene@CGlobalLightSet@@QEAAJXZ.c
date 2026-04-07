/*
 * XREFs of ?UpdateScene@CGlobalLightSet@@QEAAJXZ @ 0x1800353E0
 * Callers:
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180016C80 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     ??$?9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@01@$$T@Z @ 0x18000F840 (--$-9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV-$ComP.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalLightSet::UpdateScene(CGlobalLightSet *this)
{
  _QWORD *v1; // rcx
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !Microsoft::WRL::operator!=<Windows::UI::Composition::ICompositionProjectedShadowReceiver>((_QWORD *)this + 12) )
    return 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 48LL))(*v1);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA6,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
    (const char *)(unsigned int)v2,
    v5);
  return v3;
}
