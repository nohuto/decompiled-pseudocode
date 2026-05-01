/*
 * XREFs of ??_GSizeConversionViewInfo@@UEAAPEAXI@Z @ 0x1801168B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SizeConversionViewInfo@@UEAA@XZ @ 0x1801168EC (--1SizeConversionViewInfo@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

SizeConversionViewInfo *__fastcall SizeConversionViewInfo::`scalar deleting destructor'(
        SizeConversionViewInfo *this,
        char a2)
{
  SizeConversionViewInfo::~SizeConversionViewInfo(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
