/*
 * XREFs of ??1USB4_POWERON_WORK_QUEUE@@QEAA@XZ @ 0x1402775A8
 * Callers:
 *     ?reset@?$unique_ptr@VUSB4_POWERON_WORK_QUEUE@@U?$default_delete@VUSB4_POWERON_WORK_QUEUE@@@wistd@@@wistd@@QEAAXPEAVUSB4_POWERON_WORK_QUEUE@@@Z @ 0x1400988DC (-reset@-$unique_ptr@VUSB4_POWERON_WORK_QUEUE@@U-$default_delete@VUSB4_POWERON_WORK_QUEUE@@@wistd.c)
 *     ??1USB4_HOSTROUTER_MGR@@QEAA@XZ @ 0x140277570 (--1USB4_HOSTROUTER_MGR@@QEAA@XZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14004A500 (--1-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@deta.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14005B35C (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14006CEFC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 */

void __fastcall USB4_POWERON_WORK_QUEUE::~USB4_POWERON_WORK_QUEUE(USB4_POWERON_WORK_QUEUE *this)
{
  if ( *((_BYTE *)this + 80) )
  {
    KeSetEvent(*((PRKEVENT *)this + 11), 0, 0);
    *((_BYTE *)this + 80) = 0;
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)this + 12);
  wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>((DxgkCompositionObject **)this + 11);
  DXGFASTMUTEX::~DXGFASTMUTEX((USB4_POWERON_WORK_QUEUE *)((char *)this + 8));
}
