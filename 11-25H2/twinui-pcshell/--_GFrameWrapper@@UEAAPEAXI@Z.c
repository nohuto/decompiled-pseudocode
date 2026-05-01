/*
 * XREFs of ??_GFrameWrapper@@UEAAPEAXI@Z @ 0x18020E5B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1FrameWrapper@@UEAA@XZ @ 0x18020E5F0 (--1FrameWrapper@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

FrameWrapper *__fastcall FrameWrapper::`scalar deleting destructor'(FrameWrapper *this, char a2)
{
  FrameWrapper::~FrameWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
