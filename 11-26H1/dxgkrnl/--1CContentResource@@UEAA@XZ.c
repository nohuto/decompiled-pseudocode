/*
 * XREFs of ??1CContentResource@@UEAA@XZ @ 0x1400593F4
 * Callers:
 *     ??_ECContentResource@@UEAAPEAXI@Z @ 0x1400593B0 (--_ECContentResource@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z @ 0x140029854 (-ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z.c)
 *     ?SendToTokenManager@CDisableScanoutToken@@SAJAEAPEAV1@@Z @ 0x140029E24 (-SendToTokenManager@CDisableScanoutToken@@SAJAEAPEAV1@@Z.c)
 *     ??1CFlipResource@@MEAA@XZ @ 0x140059444 (--1CFlipResource@@MEAA@XZ.c)
 */

void __fastcall CContentResource::~CContentResource(CContentResource *this)
{
  bool v1; // zf
  struct CDisableScanoutToken *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 6) == 0LL;
  *(_QWORD *)this = &CContentResource::`vftable';
  if ( !v1 )
  {
    v3 = 0LL;
    CContentResource::ClearCompositionSurfaceBinding(this, &v3);
    CDisableScanoutToken::SendToTokenManager(&v3);
  }
  CFlipResource::~CFlipResource(this);
}
