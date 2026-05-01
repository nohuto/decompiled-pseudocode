/*
 * XREFs of ??_ETaskViewHost@@UEAAPEAXI@Z @ 0x18067F0A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TaskViewHost@@UEAA@XZ @ 0x18067EB8C (--1TaskViewHost@@UEAA@XZ.c)
 */

TaskViewHost *__fastcall TaskViewHost::`vector deleting destructor'(TaskViewHost *this, char a2)
{
  TaskViewHost::~TaskViewHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2F8);
  return this;
}
