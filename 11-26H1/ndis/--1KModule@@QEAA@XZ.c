/*
 * XREFs of ??1KModule@@QEAA@XZ @ 0x140148080
 * Callers:
 *     ??_GKModule@@QEAAPEAXI@Z @ 0x1401480D4 (--_GKModule@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x14008C0E0 (-reset@-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAXPEAU_UNICODE.c)
 *     ??1DriverService@@QEAA@XZ @ 0x140148054 (--1DriverService@@QEAA@XZ.c)
 */

void __fastcall KModule::~KModule(void **this)
{
  DriverService::~DriverService(this + 6);
  wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>::reset(this + 5, 0LL);
}
