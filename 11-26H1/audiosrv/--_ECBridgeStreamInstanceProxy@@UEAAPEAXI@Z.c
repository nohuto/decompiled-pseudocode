/*
 * XREFs of ??_ECBridgeStreamInstanceProxy@@UEAAPEAXI@Z @ 0x1800C5420
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBridgeStreamInstanceProxy@@UEAA@XZ @ 0x180062C58 (--1CBridgeStreamInstanceProxy@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CBridgeStreamInstanceProxy *__fastcall CBridgeStreamInstanceProxy::`vector deleting destructor'(
        CBridgeStreamInstanceProxy *this,
        char a2)
{
  CBridgeStreamInstanceProxy::~CBridgeStreamInstanceProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
