/*
 * XREFs of ??0?$SimpleClassFactory@VActivityToastNotificationCallback@ToastNotification@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180067A74
 * Callers:
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VActivityToastNotificationCallback@ToastNotification@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VActivityToastNotificationCallback@ToastNotification@@$0A@@12@@Z @ 0x180066684 (--$MakeAndInitialize@V-$SimpleClassFactory@VActivityToastNotificationCallback@ToastNotification@.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x1800679D0 (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *Microsoft::WRL::SimpleClassFactory<ToastNotification::ActivityToastNotificationCallback,0>::SimpleClassFactory<ToastNotification::ActivityToastNotificationCallback,0>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>();
  result = v0;
  *v0 = &Microsoft::WRL::SimpleClassFactory<ToastNotification::ActivityToastNotificationCallback,0>::`vftable';
  return result;
}
