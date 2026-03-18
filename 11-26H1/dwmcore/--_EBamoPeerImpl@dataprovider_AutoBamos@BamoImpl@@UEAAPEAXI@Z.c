/*
 * XREFs of ??_EBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x18023EE50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x18023EC5C (--1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ.c)
 */

BamoImpl::dataprovider_AutoBamos::BamoPeerImpl *__fastcall BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::`vector deleting destructor'(
        BamoImpl::dataprovider_AutoBamos::BamoPeerImpl *this,
        char a2)
{
  Microsoft::BamoImpl::BaseBamoPeerImpl::~BaseBamoPeerImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
