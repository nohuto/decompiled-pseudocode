/*
 * XREFs of ??_GSearchBoxOnTaskbarSearchAppPositionerConfig@@UEAAPEAXI@Z @ 0x1803C5D90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SearchBoxOnTaskbarSearchAppPositionerConfig@@UEAA@XZ @ 0x1803C5D18 (--1SearchBoxOnTaskbarSearchAppPositionerConfig@@UEAA@XZ.c)
 */

SearchBoxOnTaskbarSearchAppPositionerConfig *__fastcall SearchBoxOnTaskbarSearchAppPositionerConfig::`scalar deleting destructor'(
        SearchBoxOnTaskbarSearchAppPositionerConfig *this,
        char a2)
{
  SearchBoxOnTaskbarSearchAppPositionerConfig::~SearchBoxOnTaskbarSearchAppPositionerConfig(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
