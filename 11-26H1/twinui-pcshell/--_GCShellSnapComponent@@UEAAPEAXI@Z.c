/*
 * XREFs of ??_GCShellSnapComponent@@UEAAPEAXI@Z @ 0x18059E3F8
 * Callers:
 *     ??_ECShellSnapComponent@@WDA@EAAPEAXI@Z @ 0x18059E250 (--_ECShellSnapComponent@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CShellSnapComponent@@UEAA@XZ @ 0x18059D8EC (--1CShellSnapComponent@@UEAA@XZ.c)
 */

CShellSnapComponent *__fastcall CShellSnapComponent::`scalar deleting destructor'(CShellSnapComponent *this, char a2)
{
  CShellSnapComponent::~CShellSnapComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x760);
  return this;
}
