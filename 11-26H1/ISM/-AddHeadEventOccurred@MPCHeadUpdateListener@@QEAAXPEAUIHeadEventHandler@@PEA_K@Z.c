/*
 * XREFs of ?AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAXPEAUIHeadEventHandler@@PEA_K@Z @ 0x1800D13B0
 * Callers:
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z @ 0x1800CFF8C (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z.c)
 *     ?SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUIMessageSession@@@Z @ 0x1800D7E0C (-SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUI.c)
 * Callees:
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800D0E48 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$com_ptr_t@UIHeadEventHandler@@Uerr_excepti.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCHeadUpdateListener::AddHeadEventOccurred(
        MPCHeadUpdateListener *this,
        struct IHeadEventHandler *a2,
        unsigned __int8 *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  unsigned __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rbx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 160);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 4);
  v7 = (*(_QWORD *)this)++;
  *(_QWORD *)a3 = v7;
  v8 = std::_Hash<std::_Umap_traits<unsigned __int64,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
         (float *)this + 2,
         (__int64)v10,
         a3);
  v9 = *(_QWORD *)(*(_QWORD *)v8 + 24LL);
  *(_QWORD *)(*(_QWORD *)v8 + 24LL) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IHeadEventHandler *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v6 )
    LeaveCriticalSection(v6);
}
