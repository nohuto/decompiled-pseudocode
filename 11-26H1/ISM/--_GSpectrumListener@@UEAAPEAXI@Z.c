/*
 * XREFs of ??_GSpectrumListener@@UEAAPEAXI@Z @ 0x1800D02C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SpectrumListener@@UEAA@XZ @ 0x1800D0220 (--1SpectrumListener@@UEAA@XZ.c)
 */

SpectrumListener *__fastcall SpectrumListener::`scalar deleting destructor'(SpectrumListener *this, char a2)
{
  SpectrumListener::~SpectrumListener(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
