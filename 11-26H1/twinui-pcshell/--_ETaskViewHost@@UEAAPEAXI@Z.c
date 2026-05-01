/*
 * XREFs of ??_ETaskViewHost@@UEAAPEAXI@Z @ 0x1806A5F80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TaskViewHost@@UEAA@XZ @ 0x1806A5A58 (--1TaskViewHost@@UEAA@XZ.c)
 */

TaskViewHost *__fastcall TaskViewHost::`vector deleting destructor'(TaskViewHost *this, char a2)
{
  TaskViewHost::~TaskViewHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2F8);
  return this;
}
