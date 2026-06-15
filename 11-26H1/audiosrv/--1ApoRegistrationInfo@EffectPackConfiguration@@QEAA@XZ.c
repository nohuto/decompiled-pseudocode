/*
 * XREFs of ??1ApoRegistrationInfo@EffectPackConfiguration@@QEAA@XZ @ 0x1800ABCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 */

void __fastcall EffectPackConfiguration::ApoRegistrationInfo::~ApoRegistrationInfo(void **this)
{
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    this + 3,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    this + 1,
    0LL);
}
