/*
 * XREFs of ??1CLight@@MEAA@XZ @ 0x180264280
 * Callers:
 *     ??1?$CPositionedLightGeneratedT@VCPositionedLight@@VCLight@@@@MEAA@XZ @ 0x180245C74 (--1-$CPositionedLightGeneratedT@VCPositionedLight@@VCLight@@@@MEAA@XZ.c)
 *     ??_ECAmbientLight@@UEAAPEAXI@Z @ 0x180246500 (--_ECAmbientLight@@UEAAPEAXI@Z.c)
 *     ??_ECEnvironmentLight@@UEAAPEAXI@Z @ 0x18028BDC0 (--_ECEnvironmentLight@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18022F4CC (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 *     ?RemoveLight@CVisual@@QEAAXPEAVCLight@@W4LightBehavior@@@Z @ 0x180260E88 (-RemoveLight@CVisual@@QEAAXPEAVCLight@@W4LightBehavior@@@Z.c)
 */

void __fastcall CLight::~CLight(CLight *this)
{
  _QWORD **v2; // rsi
  _QWORD **i; // rdi
  _QWORD **v4; // rsi
  _QWORD **j; // rdi
  void *v6; // rcx
  void *v7; // rcx

  if ( *((_BYTE *)this + 180) )
    CSceneResourceManager::UnregisterSceneListener(
      *(const __m128i ***)(*((_QWORD *)this + 3) + 672LL),
      (struct ISceneNotificationListener *)(((unsigned __int64)this + 88) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  v2 = (_QWORD **)*((_QWORD *)this + 24);
  for ( i = (_QWORD **)*((_QWORD *)this + 23); i != v2; ++i )
    CVisual::RemoveLight(*i, (__int64)this, 0);
  v4 = (_QWORD **)*((_QWORD *)this + 27);
  for ( j = (_QWORD **)*((_QWORD *)this + 26); j != v4; ++j )
    CVisual::RemoveLight(*j, (__int64)this, 1);
  v6 = (void *)*((_QWORD *)this + 26);
  if ( v6 )
  {
    std::_Deallocate<16>(v6, (*((_QWORD *)this + 28) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
    *((_QWORD *)this + 28) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 23);
  if ( v7 )
  {
    std::_Deallocate<16>(v7, (*((_QWORD *)this + 25) - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 23) = 0LL;
    *((_QWORD *)this + 24) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 13);
  CResource::~CResource(this);
}
