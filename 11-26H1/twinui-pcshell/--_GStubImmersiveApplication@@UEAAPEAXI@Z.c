/*
 * XREFs of ??_GStubImmersiveApplication@@UEAAPEAXI@Z @ 0x18046BC40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1StubImmersiveApplication@@UEAA@XZ @ 0x180468C00 (--1StubImmersiveApplication@@UEAA@XZ.c)
 */

void **__fastcall StubImmersiveApplication::`scalar deleting destructor'(void **this, char a2)
{
  StubImmersiveApplication::~StubImmersiveApplication(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
