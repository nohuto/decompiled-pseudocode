/*
 * XREFs of ??4?$unique_ptr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801603C0
 * Callers:
 *     ?GetPacketSizeConstraints@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@AEAV?$unique_ptr@UPacketSizeConstraints@@U?$default_delete@UPacketSizeConstraints@@@std@@@std@@@Z @ 0x1801613FC (-GetPacketSizeConstraints@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@AEAV-$unique_ptr@UPac.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 */

void **__fastcall wistd::unique_ptr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::operator=(
        void **a1,
        void **a2)
{
  void *v4; // rdx

  v4 = *a2;
  *a2 = 0LL;
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(a1, v4);
  return a1;
}
