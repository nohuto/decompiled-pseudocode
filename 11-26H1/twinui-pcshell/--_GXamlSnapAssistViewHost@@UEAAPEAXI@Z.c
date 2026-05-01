/*
 * XREFs of ??_GXamlSnapAssistViewHost@@UEAAPEAXI@Z @ 0x1806A8FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XamlSnapAssistViewHost@@UEAA@XZ @ 0x18018FA64 (--1XamlSnapAssistViewHost@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
