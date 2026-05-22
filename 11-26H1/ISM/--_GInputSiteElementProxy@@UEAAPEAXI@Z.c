/*
 * XREFs of ??_GInputSiteElementProxy@@UEAAPEAXI@Z @ 0x18003FBE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InputSiteElementProxy@@UEAA@XZ @ 0x18003FC1C (--1InputSiteElementProxy@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

InputSiteElementProxy *__fastcall InputSiteElementProxy::`scalar deleting destructor'(
        InputSiteElementProxy *this,
        char a2)
{
  InputSiteElementProxy::~InputSiteElementProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x158);
  return this;
}
