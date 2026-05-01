/*
 * XREFs of ??_GXamlSnapAssistViewHost@@UEAAPEAXI@Z @ 0x180681C10
 * Callers:
 *     <none>
 * Callees:
 *     ??1XamlSnapAssistViewHost@@UEAA@XZ @ 0x180197CA4 (--1XamlSnapAssistViewHost@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

XamlSnapAssistViewHost *__fastcall XamlSnapAssistViewHost::`scalar deleting destructor'(
        XamlSnapAssistViewHost *this,
        char a2)
{
  XamlSnapAssistViewHost::~XamlSnapAssistViewHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2D8);
  return this;
}
