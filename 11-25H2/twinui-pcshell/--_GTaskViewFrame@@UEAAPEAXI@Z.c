/*
 * XREFs of ??_GTaskViewFrame@@UEAAPEAXI@Z @ 0x180695450
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TaskViewFrame@@UEAA@XZ @ 0x180694F44 (--1TaskViewFrame@@UEAA@XZ.c)
 */

TaskViewFrame *__fastcall TaskViewFrame::`scalar deleting destructor'(TaskViewFrame *this, char a2)
{
  TaskViewFrame::~TaskViewFrame(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x218);
  return this;
}
