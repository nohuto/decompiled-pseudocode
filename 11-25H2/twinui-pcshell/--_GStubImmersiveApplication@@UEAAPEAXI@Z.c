/*
 * XREFs of ??_GStubImmersiveApplication@@UEAAPEAXI@Z @ 0x18045F8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1StubImmersiveApplication@@UEAA@XZ @ 0x18045C8F4 (--1StubImmersiveApplication@@UEAA@XZ.c)
 */

void **__fastcall StubImmersiveApplication::`scalar deleting destructor'(void **this, char a2)
{
  StubImmersiveApplication::~StubImmersiveApplication(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
