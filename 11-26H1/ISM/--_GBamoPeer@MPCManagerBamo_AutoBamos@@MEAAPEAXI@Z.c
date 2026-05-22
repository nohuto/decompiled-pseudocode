/*
 * XREFs of ??_GBamoPeer@MPCManagerBamo_AutoBamos@@MEAAPEAXI@Z @ 0x180026B30
 * Callers:
 *     <none>
 * Callees:
 *     ??1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x180026B70 (--1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

MPCManagerBamo_AutoBamos::BamoPeer *__fastcall MPCManagerBamo_AutoBamos::BamoPeer::`scalar deleting destructor'(
        MPCManagerBamo_AutoBamos::BamoPeer *this,
        char a2)
{
  Microsoft::BamoImpl::BaseBamoPeerImpl::~BaseBamoPeerImpl((MPCManagerBamo_AutoBamos::BamoPeer *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
