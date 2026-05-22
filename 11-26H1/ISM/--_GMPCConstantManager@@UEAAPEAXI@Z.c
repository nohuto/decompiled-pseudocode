/*
 * XREFs of ??_GMPCConstantManager@@UEAAPEAXI@Z @ 0x1800B3580
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCConstantManager@@UEAA@XZ @ 0x1800B337C (--1MPCConstantManager@@UEAA@XZ.c)
 */

MPCConstantManager *__fastcall MPCConstantManager::`scalar deleting destructor'(MPCConstantManager *this, char a2)
{
  MPCConstantManager::~MPCConstantManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
