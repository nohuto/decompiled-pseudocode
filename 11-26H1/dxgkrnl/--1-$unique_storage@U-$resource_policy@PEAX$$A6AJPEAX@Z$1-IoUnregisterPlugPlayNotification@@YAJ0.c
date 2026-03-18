/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400651AC
 * Callers:
 *     ??1DISPLAY_MUX_DEVICE@@QEAA@XZ @ 0x140089FBC (--1DISPLAY_MUX_DEVICE@@QEAA@XZ.c)
 *     ??1DISPLAY_MUX_MGR@@QEAA@XZ @ 0x14008A034 (--1DISPLAY_MUX_MGR@@QEAA@XZ.c)
 *     ??1MonitorUsb4State@DxgMonitor@@QEAA@XZ @ 0x140277514 (--1MonitorUsb4State@DxgMonitor@@QEAA@XZ.c)
 *     ??1USB4_HOSTROUTER_MGR@@QEAA@XZ @ 0x140277570 (--1USB4_HOSTROUTER_MGR@@QEAA@XZ.c)
 *     ??1MonitorPnpState@DxgMonitor@@QEAA@XZ @ 0x1402799D0 (--1MonitorPnpState@DxgMonitor@@QEAA@XZ.c)
 * Callees:
 *     ??$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z @ 0x140060408 (--$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z.c)
 */

__int64 __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
        __int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  NTSTATUS (__stdcall *v3)(PVOID); // [rsp+38h] [rbp+10h] BYREF

  result = *a1;
  if ( *a1 )
  {
    v2 = *a1;
    v3 = IoUnregisterPlugPlayNotification;
    return ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&v3, &v2);
  }
  return result;
}
