/*
 * XREFs of ??_GBroadcastDVRComponent@@UEAAPEAXI@Z @ 0x18023C7DC
 * Callers:
 *     ??_EBroadcastDVRComponent@@WDI@EAAPEAXI@Z @ 0x1803148B0 (--_EBroadcastDVRComponent@@WDI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1BroadcastDVRComponent@@UEAA@XZ @ 0x18029AEA8 (--1BroadcastDVRComponent@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

BroadcastDVRComponent *__fastcall BroadcastDVRComponent::`scalar deleting destructor'(
        BroadcastDVRComponent *this,
        char a2)
{
  BroadcastDVRComponent::~BroadcastDVRComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x238);
  return this;
}
