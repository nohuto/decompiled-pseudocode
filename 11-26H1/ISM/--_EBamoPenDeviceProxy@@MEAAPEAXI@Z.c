/*
 * XREFs of ??_EBamoPenDeviceProxy@@MEAAPEAXI@Z @ 0x1801175A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1BamoPenDeviceProxyImpl@BamoImpl@@UEAA@XZ @ 0x18003FBAC (--1BamoPenDeviceProxyImpl@BamoImpl@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

BamoPenDeviceProxy *__fastcall BamoPenDeviceProxy::`vector deleting destructor'(BamoPenDeviceProxy *this, char a2)
{
  BamoImpl::BamoPenDeviceProxyImpl::~BamoPenDeviceProxyImpl((BamoPenDeviceProxy *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
