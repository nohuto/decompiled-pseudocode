/*
 * XREFs of ??_EMagnifierProcessor@@UEAAPEAXI@Z @ 0x1801B1FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MagnifierProcessor@@UEAA@XZ @ 0x1801B1E60 (--1MagnifierProcessor@@UEAA@XZ.c)
 */

MagnifierProcessor *__fastcall MagnifierProcessor::`vector deleting destructor'(MagnifierProcessor *this, char a2)
{
  MagnifierProcessor::~MagnifierProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
