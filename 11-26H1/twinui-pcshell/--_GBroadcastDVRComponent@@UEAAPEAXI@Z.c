/*
 * XREFs of ??_GBroadcastDVRComponent@@UEAAPEAXI@Z @ 0x18022E91C
 * Callers:
 *     ??_EBroadcastDVRComponent@@WDI@EAAPEAXI@Z @ 0x180310A20 (--_EBroadcastDVRComponent@@WDI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1BroadcastDVRComponent@@UEAA@XZ @ 0x180286BC4 (--1BroadcastDVRComponent@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
