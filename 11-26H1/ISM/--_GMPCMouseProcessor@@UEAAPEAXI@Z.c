/*
 * XREFs of ??_GMPCMouseProcessor@@UEAAPEAXI@Z @ 0x1801C5EAC
 * Callers:
 *     ??_EMPCMouseProcessor@@WBA@EAAPEAXI@Z @ 0x1801C5E50 (--_EMPCMouseProcessor@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCMouseProcessor@@UEAA@XZ @ 0x1801C5D6C (--1MPCMouseProcessor@@UEAA@XZ.c)
 */

MPCMouseProcessor *__fastcall MPCMouseProcessor::`scalar deleting destructor'(MPCMouseProcessor *this, char a2)
{
  MPCMouseProcessor::~MPCMouseProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2120);
  return this;
}
