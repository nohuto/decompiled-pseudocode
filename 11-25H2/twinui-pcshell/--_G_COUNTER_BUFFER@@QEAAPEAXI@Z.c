/*
 * XREFs of ??_G_COUNTER_BUFFER@@QEAAPEAXI@Z @ 0x180356A90
 * Callers:
 *     ??1Cpu@@UEAA@XZ @ 0x180356A44 (--1Cpu@@UEAA@XZ.c)
 *     ?InitializeCpuQuery@Cpu@@QEAAJXZ @ 0x180356C40 (-InitializeCpuQuery@Cpu@@QEAAJXZ.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@UDISPLAYCONFIG_PATH_INFO@@U?$default_delete@$$BY0A@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAA@XZ @ 0x1801DAE58 (--1-$unique_ptr@$$BY0A@UDISPLAYCONFIG_PATH_INFO@@U-$default_delete@$$BY0A@UDISPLAYCONFIG_PATH_IN.c)
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 */

void **__fastcall _COUNTER_BUFFER::`scalar deleting destructor'(void **this, const struct std::nothrow_t *a2)
{
  std::unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>::~unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>(this, a2);
  operator delete(this);
  return this;
}
