/*
 * XREFs of ??_EXamlLauncher@@UEAAPEAXI@Z @ 0x1800518F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XamlLauncher@@UEAA@XZ @ 0x18005192C (--1XamlLauncher@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

XamlLauncher *__fastcall XamlLauncher::`vector deleting destructor'(XamlLauncher *this, char a2)
{
  XamlLauncher::~XamlLauncher(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1F0);
  return this;
}
