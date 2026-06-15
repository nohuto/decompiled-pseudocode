/*
 * XREFs of ??_GCreateMonitorContext@@QEAAPEAXI@Z @ 0x18011BFD8
 * Callers:
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18008233C (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?CreateMonitorIfAppropriateWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18011C500 (-CreateMonitorIfAppropriateWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WOR.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CreateMonitorContext@@QEAA@XZ @ 0x18011BD6C (--1CreateMonitorContext@@QEAA@XZ.c)
 */

CreateMonitorContext *__fastcall CreateMonitorContext::`scalar deleting destructor'(CreateMonitorContext *this)
{
  CreateMonitorContext::~CreateMonitorContext(this);
  operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
