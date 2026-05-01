/*
 * XREFs of ??_GCRealmActivationHistory@@EEAAPEAXI@Z @ 0x1802FDC00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CRealmActivationHistory@@EEAA@XZ @ 0x1802FDA74 (--1CRealmActivationHistory@@EEAA@XZ.c)
 */

CRealmActivationHistory *__fastcall CRealmActivationHistory::`scalar deleting destructor'(
        CRealmActivationHistory *this,
        char a2)
{
  CRealmActivationHistory::~CRealmActivationHistory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x198);
  return this;
}
