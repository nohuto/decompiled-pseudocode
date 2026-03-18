/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WORK@@@Z @ 0x18029842C
 * Callers:
 *     CAsyncTask_CD3DDevice::D3D12Resources_::Start__CD3DDevice::EnsureBeginCreateD3D12Resources_::_5_::_lambda_1___ @ 0x180295C04 (CAsyncTask_CD3DDevice--D3D12Resources_--Start__CD3DDevice--EnsureBeginCreateD3D12Resources_--_5_.c)
 *     ??1?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAA@XZ @ 0x18029640C (--1-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAA@XZ.c)
 * Callees:
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1801D5518 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801D741C (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?Destroy@?$DestroyThreadPoolWork@$0A@@details@wil@@SAXPEAU_TP_WORK@@@Z @ 0x180297714 (-Destroy@-$DestroyThreadPoolWork@$0A@@details@wil@@SAXPEAU_TP_WORK@@@Z.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>::reset(
        struct _TP_WORK **a1,
        struct _TP_WORK *a2)
{
  struct _TP_WORK *v2; // rdi
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v5);
    wil::details::DestroyThreadPoolWork<0>::Destroy(v2);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v5);
  }
  *a1 = a2;
}
