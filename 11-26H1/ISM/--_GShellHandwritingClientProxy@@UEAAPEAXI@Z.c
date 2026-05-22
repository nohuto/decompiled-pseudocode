/*
 * XREFs of ??_GShellHandwritingClientProxy@@UEAAPEAXI@Z @ 0x18015EAD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1InputObserverClientProxy@@UEAA@XZ @ 0x18013AAEC (--1InputObserverClientProxy@@UEAA@XZ.c)
 */

ShellHandwritingClientProxy *__fastcall ShellHandwritingClientProxy::`scalar deleting destructor'(
        ShellHandwritingClientProxy *this,
        char a2)
{
  InputObserverClientProxy::~InputObserverClientProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
