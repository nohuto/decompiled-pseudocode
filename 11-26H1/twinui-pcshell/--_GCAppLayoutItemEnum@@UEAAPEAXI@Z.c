/*
 * XREFs of ??_GCAppLayoutItemEnum@@UEAAPEAXI@Z @ 0x1806C5C40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TabletModePositionerHandoffContext@@UEAA@XZ @ 0x1802E82CC (--1TabletModePositionerHandoffContext@@UEAA@XZ.c)
 */

CAppLayoutItemEnum *__fastcall CAppLayoutItemEnum::`scalar deleting destructor'(CAppLayoutItemEnum *this, char a2)
{
  TabletModePositionerHandoffContext::~TabletModePositionerHandoffContext(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
