/*
 * XREFs of ??_GSizeConversionViewInfo@@UEAAPEAXI@Z @ 0x18020A580
 * Callers:
 *     <none>
 * Callees:
 *     ??1SizeConversionViewInfo@@UEAA@XZ @ 0x18020A5BC (--1SizeConversionViewInfo@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
