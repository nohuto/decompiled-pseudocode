/*
 * XREFs of ??_EMPCConstantManagerClientPrincipal@@UEAAPEAXI@Z @ 0x180178460
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCConstantManagerClientPrincipal@@UEAA@XZ @ 0x180178434 (--1MPCConstantManagerClientPrincipal@@UEAA@XZ.c)
 */

MPCConstantManagerClientPrincipal *__fastcall MPCConstantManagerClientPrincipal::`vector deleting destructor'(
        MPCConstantManagerClientPrincipal *this,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  MPCConstantManagerClientPrincipal::~MPCConstantManagerClientPrincipal(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
