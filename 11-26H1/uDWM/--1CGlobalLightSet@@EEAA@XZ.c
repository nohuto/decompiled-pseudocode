/*
 * XREFs of ??1CGlobalLightSet@@EEAA@XZ @ 0x1800B5AD0
 * Callers:
 *     ??_ECGlobalLightSet@@EEAAPEAXI@Z @ 0x1800B5BF0 (--_ECGlobalLightSet@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@01@$$T@Z @ 0x1800357D0 (--$-9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV-$ComP.c)
 *     ?RemoveElement@?$CGenericTableMap@W4LightType@UI@Windows@@UVISUAL_RESOURCE_MAP_ENTRY_LIGHT@CGlobalLightSet@@@@QEAAXPEAUVISUAL_RESOURCE_MAP_ENTRY_LIGHT@CGlobalLightSet@@@Z @ 0x1800B5C3C (-RemoveElement@-$CGenericTableMap@W4LightType@UI@Windows@@UVISUAL_RESOURCE_MAP_ENTRY_LIGHT@CGlob.c)
 *     ?RemoveInteropVisualFromTree@CGlobalLightSet@@AEAAXXZ @ 0x1800B5C84 (-RemoveInteropVisualFromTree@CGlobalLightSet@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CGlobalLightSet::~CGlobalLightSet(CBaseObject **this)
{
  struct _RTL_GENERIC_TABLE *i; // rsi
  __int64 v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  PVOID v8; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *this = (CBaseObject *)&CGlobalLightSet::`vftable';
  for ( i = (struct _RTL_GENERIC_TABLE *)(this + 2);
        ;
        CGenericTableMap<enum Windows::UI::LightType,CGlobalLightSet::VISUAL_RESOURCE_MAP_ENTRY_LIGHT>::RemoveElement(
          i,
          v5) )
  {
    RestartKey = 0LL;
    v4 = RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    v5 = v4;
    if ( !v4 )
      break;
    v3 = v4[1];
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( Microsoft::WRL::operator!=<Windows::UI::Composition::ICompositionProjectedShadowReceiver>(this + 12) )
    CGlobalLightSet::RemoveInteropVisualFromTree((CGlobalLightSet *)this);
  v6 = this[15];
  if ( v6 )
  {
    this[15] = 0LL;
    (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = this[14];
  if ( v7 )
  {
    this[14] = 0LL;
    (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(this + 13);
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(this + 12);
  while ( 1 )
  {
    RestartKey = 0LL;
    v8 = RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    if ( !v8 )
      break;
    CGenericTableMap<enum Windows::UI::LightType,CGlobalLightSet::VISUAL_RESOURCE_MAP_ENTRY_LIGHT>::RemoveElement(i, v8);
  }
  CBaseObject::~CBaseObject((CBaseObject *)this);
}
