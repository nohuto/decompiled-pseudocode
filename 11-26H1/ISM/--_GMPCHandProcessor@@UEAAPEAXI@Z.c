/*
 * XREFs of ??_GMPCHandProcessor@@UEAAPEAXI@Z @ 0x1800BF9C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCHandProcessor@@UEAA@XZ @ 0x1800BF5F0 (--1MPCHandProcessor@@UEAA@XZ.c)
 */

MPCHandProcessor *__fastcall MPCHandProcessor::`scalar deleting destructor'(MPCHandProcessor *this, char a2)
{
  MPCHandProcessor::~MPCHandProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2708);
  return this;
}
