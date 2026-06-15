/*
 * XREFs of ??_GPolicyRule@@UEAAPEAXI@Z @ 0x1801296A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PolicyRule@@UEAA@XZ @ 0x180129580 (--1PolicyRule@@UEAA@XZ.c)
 */

PolicyRule *__fastcall PolicyRule::`scalar deleting destructor'(PolicyRule *this, char a2)
{
  PolicyRule::~PolicyRule(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x158);
  return this;
}
