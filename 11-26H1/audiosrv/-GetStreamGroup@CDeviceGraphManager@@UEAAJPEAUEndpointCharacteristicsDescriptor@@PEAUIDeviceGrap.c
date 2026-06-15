/*
 * XREFs of ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@KAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUMODE_PARAMS@@PEAPEAUIStreamGroupProxy@@@Z @ 0x1800FDF30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?CreateStreamGroup@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@KAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUMODE_PARAMS@@PEAPEAUIStreamGroupProxy@@@Z @ 0x1800FC730 (-CreateStreamGroup@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceG.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDeviceGraphManager::GetStreamGroup(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  _QWORD *v8; // r14
  unsigned int StreamGroup; // edi

  v8 = a8;
  *a8 = 0LL;
  (*(void (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)a3 + 80LL))(a3, &a8);
  if ( *(_BYTE *)(a4 + 48)
    || *(_BYTE *)(a4 + 50)
    || (StreamGroup = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)a3 + 40LL))(a3, a4, v8),
        StreamGroup == -2147023728) )
  {
    StreamGroup = CDeviceGraphManager::CreateStreamGroup(a1, a2, a3, a4, a5, a6, a7, v8);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&a8);
  return StreamGroup;
}
