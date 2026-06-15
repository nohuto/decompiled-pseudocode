/*
 * XREFs of ??_ECAudioStream@@UEAAPEAXI@Z @ 0x18006DCA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAudioStream@@UEAA@XZ @ 0x18006DCDC (--1CAudioStream@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAudioStream *__fastcall CAudioStream::`vector deleting destructor'(CAudioStream *this, char a2)
{
  CAudioStream::~CAudioStream(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2A8);
  return this;
}
