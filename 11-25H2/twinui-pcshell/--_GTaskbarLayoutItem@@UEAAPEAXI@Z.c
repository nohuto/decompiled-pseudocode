/*
 * XREFs of ??_GTaskbarLayoutItem@@UEAAPEAXI@Z @ 0x180321B00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TaskbarLayoutItem@@UEAA@XZ @ 0x180321AB8 (--1TaskbarLayoutItem@@UEAA@XZ.c)
 */

TaskbarLayoutItem *__fastcall TaskbarLayoutItem::`scalar deleting destructor'(TaskbarLayoutItem *this, char a2)
{
  TaskbarLayoutItem::~TaskbarLayoutItem(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x88);
  return this;
}
