/*
 * XREFs of ??_ECServiceHostComponent@@UEAAPEAXI@Z @ 0x1805605A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CServiceHostComponent@@UEAA@XZ @ 0x18055FF10 (--1CServiceHostComponent@@UEAA@XZ.c)
 */

CServiceHostComponent *__fastcall CServiceHostComponent::`vector deleting destructor'(
        CServiceHostComponent *this,
        char a2)
{
  CServiceHostComponent::~CServiceHostComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
