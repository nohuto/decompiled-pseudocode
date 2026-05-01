/*
 * XREFs of ??_EImmersiveMonitorHelper@@UEAAPEAXI@Z @ 0x18021FB60
 * Callers:
 *     <none>
 * Callees:
 *     ??1ImmersiveMonitorHelper@@UEAA@XZ @ 0x1802C8D40 (--1ImmersiveMonitorHelper@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ImmersiveMonitorHelper *__fastcall ImmersiveMonitorHelper::`vector deleting destructor'(
        ImmersiveMonitorHelper *this,
        char a2)
{
  ImmersiveMonitorHelper::~ImmersiveMonitorHelper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
