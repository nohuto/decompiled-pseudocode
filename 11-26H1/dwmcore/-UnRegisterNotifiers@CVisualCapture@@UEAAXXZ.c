/*
 * XREFs of ?UnRegisterNotifiers@CVisualCapture@@UEAAXXZ @ 0x18026A580
 * Callers:
 *     ??1CVisualCapture@@UEAA@XZ @ 0x180286260 (--1CVisualCapture@@UEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CVisualCapture::UnRegisterNotifiers(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[298]);
  this[298] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[299]);
  this[299] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[300]);
  this[300] = 0LL;
}
