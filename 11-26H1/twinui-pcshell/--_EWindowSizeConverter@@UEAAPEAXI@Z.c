/*
 * XREFs of ??_EWindowSizeConverter@@UEAAPEAXI@Z @ 0x1804E93D0
 * Callers:
 *     ??_EWindowSizeConverter@@WBI@EAAPEAXI@Z @ 0x1804E93C0 (--_EWindowSizeConverter@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1WindowSizeConverter@@UEAA@XZ @ 0x1804E9234 (--1WindowSizeConverter@@UEAA@XZ.c)
 */

WindowSizeConverter *__fastcall WindowSizeConverter::`vector deleting destructor'(WindowSizeConverter *this, char a2)
{
  WindowSizeConverter::~WindowSizeConverter(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA0);
  return this;
}
