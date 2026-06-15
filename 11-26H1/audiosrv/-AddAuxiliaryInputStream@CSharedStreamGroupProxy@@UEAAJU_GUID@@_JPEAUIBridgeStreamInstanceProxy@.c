/*
 * XREFs of ?AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJU_GUID@@_JPEAUIBridgeStreamInstanceProxy@@PEBG@Z @ 0x1800FA620
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18003FB30 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMem.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800402CC (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ?UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ @ 0x18005BB34 (-UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18005C050 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSharedStreamGroupProxy::AddAuxiliaryInputStream(
        __int64 this,
        struct _GUID *a2,
        __int64 a3,
        struct IBridgeStreamInstanceProxy *a4,
        const unsigned __int16 *a5)
{
  __int64 v9; // rdx
  int v10; // ebx
  __int64 v12; // rbx
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  void **v18; // [rsp+38h] [rbp-30h] BYREF
  __int64 v19; // [rsp+40h] [rbp-28h] BYREF
  char v20; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+70h] [rbp+8h] BYREF

  if ( *(_QWORD *)(this + 472) )
  {
    v9 = 1264LL;
LABEL_3:
    v10 = -2147418113;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  if ( *(_QWORD *)(this + 1752) )
  {
    v9 = 1265LL;
    goto LABEL_3;
  }
  v18 = (void **)(this + 1752);
  v19 = 0LL;
  v20 = 1;
  v10 = _AllocString<CTCoAllocPolicy>(this, (__int64)a2, a5, &v19);
  wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(&v18);
  if ( v10 < 0 )
  {
    v9 = 1267LL;
    goto LABEL_4;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 1768));
  v22 = (struct _RTL_CRITICAL_SECTION *)(this + 1768);
  v12 = *(_QWORD *)(this + 1760);
  *(_QWORD *)(this + 1760) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct IBridgeStreamInstanceProxy *))(*(_QWORD *)a4 + 8LL))(a4);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v22);
  *(_QWORD *)(this + 1728) = a3;
  *(struct _GUID *)(this + 1736) = *a2;
  v13 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *v13 > 4u && tlgKeywordOn((__int64)v13, 512LL) )
  {
    v22 = (struct _RTL_CRITICAL_SECTION *)(this & ((unsigned __int128)-(__int128)(unsigned __int64)(this - 8) >> 64));
    v17 = *(_QWORD *)(this + 1728);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v14,
      byte_1801A6AEB,
      v15,
      v16,
      (__int64)&v17,
      (__int64)&v22);
  }
  CSharedStreamGroupProxy::UpdateAuxiliaryStreamState((struct _RTL_CRITICAL_SECTION *)(this - 8));
  return 0LL;
}
