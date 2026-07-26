/*
 * XREFs of ??4?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1400931CC
 * Callers:
 *     ?ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x140139A28 (-ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@U_UNICODE_STRING@.c)
 *     ?RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_CHARACTERISTICS@@@Z @ 0x140148514 (-RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_C.c)
 *     BuildServicePath @ 0x1401691D0 (BuildServicePath.c)
 * Callees:
 *     ?reset@?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x14008C0E0 (-reset@-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAXPEAU_UNICODE.c)
 */

void **__fastcall wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>::operator=(void **a1, void **a2)
{
  void *v4; // rdx

  v4 = *a2;
  *a2 = 0LL;
  wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>::reset(a1, v4);
  return a1;
}
