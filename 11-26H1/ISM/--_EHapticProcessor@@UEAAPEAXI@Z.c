/*
 * XREFs of ??_EHapticProcessor@@UEAAPEAXI@Z @ 0x1800C80F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1HapticProcessor@@UEAA@XZ @ 0x1800C8050 (--1HapticProcessor@@UEAA@XZ.c)
 */

void **__fastcall HapticProcessor::`vector deleting destructor'(void **this, char a2)
{
  HapticProcessor::~HapticProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
