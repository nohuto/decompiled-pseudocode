/*
 * XREFs of ?IssueLightChangedNotification@CLight@@QEAAXXZ @ 0x18021B488
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18008E700 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?SetCoordinateSpaceVisual@?$CPositionedLightGeneratedT@VCPositionedLight@@VCLight@@@@QEAAJPEAVCVisual@@@Z @ 0x18024AC1C (-SetCoordinateSpaceVisual@-$CPositionedLightGeneratedT@VCPositionedLight@@VCLight@@@@QEAAJPEAVCV.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLight::IssueLightChangedNotification(CLight *this)
{
  unsigned int v2; // r9d
  CLight *v3; // r8

  v2 = (*(__int64 (__fastcall **)(CLight *))(*(_QWORD *)this + 272LL))(this);
  v3 = this;
  if ( v2 != 11 )
    v3 = 0LL;
  (*(void (__fastcall **)(CLight *, _QWORD, CLight *))(*(_QWORD *)this + 80LL))(this, v2, v3);
}
