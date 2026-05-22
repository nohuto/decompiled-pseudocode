/*
 * XREFs of ??_GSpatialRimDeviceCollectionHeadEventHandler@@UEAAPEAXI@Z @ 0x1800D4CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SpatialRimDeviceCollectionHeadEventHandler@@UEAA@XZ @ 0x1800D4A88 (--1SpatialRimDeviceCollectionHeadEventHandler@@UEAA@XZ.c)
 */

SpatialRimDeviceCollectionHeadEventHandler *__fastcall SpatialRimDeviceCollectionHeadEventHandler::`scalar deleting destructor'(
        SpatialRimDeviceCollectionHeadEventHandler *this,
        char a2)
{
  SpatialRimDeviceCollectionHeadEventHandler::~SpatialRimDeviceCollectionHeadEventHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC8);
  return this;
}
