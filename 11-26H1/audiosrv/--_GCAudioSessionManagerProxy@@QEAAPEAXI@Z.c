/*
 * XREFs of ??_GCAudioSessionManagerProxy@@QEAAPEAXI@Z @ 0x1800693B8
 * Callers:
 *     AudioSessionManagerDestroy @ 0x180069290 (AudioSessionManagerDestroy.c)
 *     AUDIOSESSIONMANAGER_rundown @ 0x180084FB0 (AUDIOSESSIONMANAGER_rundown.c)
 * Callees:
 *     ??1CAudioSessionManagerProxy@@QEAA@XZ @ 0x1800B0A68 (--1CAudioSessionManagerProxy@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAudioSessionManagerProxy *__fastcall CAudioSessionManagerProxy::`scalar deleting destructor'(
        CAudioSessionManagerProxy *this)
{
  CAudioSessionManagerProxy::~CAudioSessionManagerProxy(this);
  operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
