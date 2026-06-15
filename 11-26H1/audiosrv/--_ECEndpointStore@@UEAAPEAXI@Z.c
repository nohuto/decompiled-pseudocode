/*
 * XREFs of ??_ECEndpointStore@@UEAAPEAXI@Z @ 0x180104A80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CEndpointStore@@UEAA@XZ @ 0x180104920 (--1CEndpointStore@@UEAA@XZ.c)
 */

CEndpointStore *__fastcall CEndpointStore::`vector deleting destructor'(CEndpointStore *this, char a2)
{
  CEndpointStore::~CEndpointStore(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x108);
  return this;
}
