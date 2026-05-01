/*
 * XREFs of ??_G_COUNTER_BUFFER@@QEAAPEAXI@Z @ 0x18035D380
 * Callers:
 *     ??1Cpu@@UEAA@XZ @ 0x18035D334 (--1Cpu@@UEAA@XZ.c)
 *     ?InitializeCpuQuery@Cpu@@QEAAJXZ @ 0x18035D530 (-InitializeCpuQuery@Cpu@@QEAAJXZ.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@UDISPLAYCONFIG_PATH_INFO@@U?$default_delete@$$BY0A@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAA@XZ @ 0x1801D0414 (--1-$unique_ptr@$$BY0A@UDISPLAYCONFIG_PATH_INFO@@U-$default_delete@$$BY0A@UDISPLAYCONFIG_PATH_IN.c)
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 */

void **__fastcall _COUNTER_BUFFER::`scalar deleting destructor'(void **this, const struct std::nothrow_t *a2)
{
  std::unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>::~unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>(this, a2);
  operator delete(this);
  return this;
}
