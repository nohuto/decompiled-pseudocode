/*
 * XREFs of ?InternalAddRef@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEBAXXZ @ 0x1801AA6E0
 * Callers:
 *     ??0AsyncEventWorkItem@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAA@PEAV12@PEAVEventTargetArray@Details@WRL@Microsoft@@$$QEAV?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@@Z@wistd@@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@2@@Z @ 0x18040188C (--0AsyncEventWorkItem@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Sh.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalAddRef(__int64 *a1)
{
  __int64 v1; // rdx
  signed __int32 v2; // eax

  v1 = *a1;
  if ( *a1 )
  {
    do
      v2 = *(_DWORD *)(v1 + 12);
    while ( v2 != 0x7FFFFFFF && v2 != _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 12), v2 + 1, v2) );
  }
}
