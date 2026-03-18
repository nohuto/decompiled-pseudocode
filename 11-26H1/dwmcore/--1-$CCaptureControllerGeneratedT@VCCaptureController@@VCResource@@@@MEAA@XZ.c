/*
 * XREFs of ??1?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@MEAA@XZ @ 0x1802141D0
 * Callers:
 *     ??1CCaptureController@@EEAA@XZ @ 0x18021412C (--1CCaptureController@@EEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CCaptureControllerGeneratedT<CCaptureController,CResource>::~CCaptureControllerGeneratedT<CCaptureController,CResource>(
        struct CResource **this)
{
  struct CResource *v2; // rcx

  CResource::UnRegisterNotifierInternal((CResource *)this, this[13]);
  this[13] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[14]);
  this[14] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[15]);
  this[15] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[16]);
  this[16] = 0LL;
  v2 = this[17];
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (this[19] - v2) & 0xFFFFFFFFFFFFFFE0uLL);
    this[17] = 0LL;
    this[18] = 0LL;
    this[19] = 0LL;
  }
  CResource::~CResource((CResource *)this);
}
