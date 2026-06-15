/*
 * XREFs of ??_GResourceGroupInstance@@UEAAPEAXI@Z @ 0x1800F13C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ResourceGroupInstance@@UEAA@XZ @ 0x1800F0BE0 (--1ResourceGroupInstance@@UEAA@XZ.c)
 */

ResourceGroupInstance *__fastcall ResourceGroupInstance::`scalar deleting destructor'(
        ResourceGroupInstance *this,
        char a2)
{
  ResourceGroupInstance::~ResourceGroupInstance(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2A0);
  return this;
}
