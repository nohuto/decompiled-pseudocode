/*
 * XREFs of ??_ECMonitor@@MEAAPEAXI@Z @ 0x18011BF70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMonitor@@MEAA@XZ @ 0x180120D54 (--1CMonitor@@MEAA@XZ.c)
 */

CMonitor *__fastcall CMonitor::`vector deleting destructor'(CMonitor *this, char a2)
{
  CMonitor::~CMonitor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xD8);
  return this;
}
