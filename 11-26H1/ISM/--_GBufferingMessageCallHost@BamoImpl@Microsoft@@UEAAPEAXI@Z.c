/*
 * XREFs of ??_GBufferingMessageCallHost@BamoImpl@Microsoft@@UEAAPEAXI@Z @ 0x1800AB920
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BufferingMessageCallHost@BamoImpl@Microsoft@@UEAA@XZ @ 0x1800AB7E0 (--1BufferingMessageCallHost@BamoImpl@Microsoft@@UEAA@XZ.c)
 */

Microsoft::BamoImpl::BufferingMessageCallHost *__fastcall Microsoft::BamoImpl::BufferingMessageCallHost::`scalar deleting destructor'(
        Microsoft::BamoImpl::BufferingMessageCallHost *this,
        char a2)
{
  Microsoft::BamoImpl::BufferingMessageCallHost::~BufferingMessageCallHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
