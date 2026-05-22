/*
 * XREFs of ??_EBamoMPCManagerProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180164E80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x180164AA0 (--1BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoMPCManagerProxyImpl *__fastcall BamoImpl::BamoMPCManagerProxyImpl::`vector deleting destructor'(
        BamoImpl::BamoMPCManagerProxyImpl *this,
        char a2)
{
  BamoImpl::BamoMPCConstantManagerClientProxyImpl::~BamoMPCConstantManagerClientProxyImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
