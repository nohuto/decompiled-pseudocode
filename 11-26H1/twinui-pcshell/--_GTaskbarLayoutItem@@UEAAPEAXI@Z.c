/*
 * XREFs of ??_GTaskbarLayoutItem@@UEAAPEAXI@Z @ 0x18031E360
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TaskbarLayoutItem@@UEAA@XZ @ 0x18031E31C (--1TaskbarLayoutItem@@UEAA@XZ.c)
 */

TaskbarLayoutItem *__fastcall TaskbarLayoutItem::`scalar deleting destructor'(TaskbarLayoutItem *this, char a2)
{
  TaskbarLayoutItem::~TaskbarLayoutItem(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x88);
  return this;
}
