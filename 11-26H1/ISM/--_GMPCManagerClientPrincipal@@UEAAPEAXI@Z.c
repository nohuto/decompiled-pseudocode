/*
 * XREFs of ??_GMPCManagerClientPrincipal@@UEAAPEAXI@Z @ 0x18016B4F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCManagerClientPrincipal@@UEAA@XZ @ 0x18016B4C8 (--1MPCManagerClientPrincipal@@UEAA@XZ.c)
 */

MPCManagerClientPrincipal *__fastcall MPCManagerClientPrincipal::`scalar deleting destructor'(
        MPCManagerClientPrincipal *this,
        char a2)
{
  MPCManagerClientPrincipal::~MPCManagerClientPrincipal(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
