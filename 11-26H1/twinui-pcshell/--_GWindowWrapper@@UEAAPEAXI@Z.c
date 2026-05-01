/*
 * XREFs of ??_GWindowWrapper@@UEAAPEAXI@Z @ 0x18042E520
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1WindowWrapper@@UEAA@XZ @ 0x18042DF70 (--1WindowWrapper@@UEAA@XZ.c)
 */

WindowWrapper *__fastcall WindowWrapper::`scalar deleting destructor'(WindowWrapper *this, char a2)
{
  WindowWrapper::~WindowWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2C8);
  return this;
}
