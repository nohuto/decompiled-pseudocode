/*
 * XREFs of ??_GTaskViewFrame@@UEAAPEAXI@Z @ 0x1806BCB60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TaskViewFrame@@UEAA@XZ @ 0x1806BC65C (--1TaskViewFrame@@UEAA@XZ.c)
 */

TaskViewFrame *__fastcall TaskViewFrame::`scalar deleting destructor'(TaskViewFrame *this, char a2)
{
  TaskViewFrame::~TaskViewFrame(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x218);
  return this;
}
