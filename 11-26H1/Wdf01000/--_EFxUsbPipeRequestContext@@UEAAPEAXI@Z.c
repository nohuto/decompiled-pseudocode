/*
 * XREFs of ??_EFxUsbPipeRequestContext@@UEAAPEAXI@Z @ 0x14009E360
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxUsbPipeRequestContext@@UEAA@XZ @ 0x1400045A4 (--1FxUsbPipeRequestContext@@UEAA@XZ.c)
 *     ??3FxStump@@SAXPEAX@Z @ 0x14002E4F4 (--3FxStump@@SAXPEAX@Z.c)
 */

FxUsbPipeRequestContext *__fastcall FxUsbPipeRequestContext::`vector deleting destructor'(
        FxUsbPipeRequestContext *this,
        char a2)
{
  FxUsbPipeRequestContext::~FxUsbPipeRequestContext(this);
  if ( (a2 & 1) != 0 )
    FxStump::operator delete(this);
  return this;
}
