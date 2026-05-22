/*
 * XREFs of ??_EInputObserverClientProxy@@UEAAPEAXI@Z @ 0x18013AB20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1InputObserverClientProxy@@UEAA@XZ @ 0x18013AAEC (--1InputObserverClientProxy@@UEAA@XZ.c)
 */

InputObserverClientProxy *__fastcall InputObserverClientProxy::`vector deleting destructor'(
        InputObserverClientProxy *this,
        char a2)
{
  InputObserverClientProxy::~InputObserverClientProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
