/*
 * XREFs of ??_GCShellSnapComponent@@UEAAPEAXI@Z @ 0x18057AC98
 * Callers:
 *     ??_ECShellSnapComponent@@WDA@EAAPEAXI@Z @ 0x18057AAF0 (--_ECShellSnapComponent@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CShellSnapComponent@@UEAA@XZ @ 0x18057A164 (--1CShellSnapComponent@@UEAA@XZ.c)
 */

CShellSnapComponent *__fastcall CShellSnapComponent::`scalar deleting destructor'(CShellSnapComponent *this, char a2)
{
  CShellSnapComponent::~CShellSnapComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x760);
  return this;
}
