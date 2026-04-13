/*
 * XREFs of ?GetTargetedContentNodes@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AV?$vector@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x1800AF864
 * Callers:
 *     ?EnumerateTargetedContentNodes@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@QEAAX$$QEAV?$function@$$A6A_NV?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUHSTRING__@@@Z@std@@@Z @ 0x1800AE938 (-EnumerateTargetedContentNodes@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@Cr.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18008E7D0 (--0-$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?_Reserve@?$vector@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@IEAAX_K@Z @ 0x1800B1DBC (-_Reserve@-$vector@V-$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::GetTargetedContentNodes(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // r14
  __int64 (__fastcall *v4)(__int64, HSTRING, __int64 *); // r15
  unsigned __int64 v5; // rdi
  int v6; // eax
  int v7; // eax
  unsigned int i; // esi
  __int64 v9; // rax
  int v10; // eax
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  __int64 *v13; // rdx
  unsigned int v15; // [rsp+20h] [rbp-50h] BYREF
  __int64 v16; // [rsp+28h] [rbp-48h] BYREF
  __int64 *v17; // [rsp+30h] [rbp-40h] BYREF
  int v18; // [rsp+38h] [rbp-38h]
  __int64 v19; // [rsp+40h] [rbp-30h]
  HSTRING string; // [rsp+48h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v19 = a2;
  v18 = 0;
  v17 = 0LL;
  v3 = *a1;
  v4 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)*a1 + 128LL);
  v5 = -1LL;
  do
    ++v5;
  while ( aStartTargetedc[v5] );
  if ( v5 > 0xFFFFFFFF )
  {
    LODWORD(v5) = -1;
    RaiseException(0xC000000D, 1u, 0, 0LL);
  }
  WindowsCreateStringReference(L"start:TargetedContentTile", v5, &hstringHeader, &string);
  v6 = v4(v3, string, (__int64 *)&v17);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      137LL,
      (__int64)"shellcommon\\shell\\ContentDeliveryManager\\Utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v6,
      v15);
  v15 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v17 + 48))(v17, &v15);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      141LL,
      (__int64)"shellcommon\\shell\\ContentDeliveryManager\\Utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v7,
      v15);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v18 = 1;
  for ( i = 0; i < v15; ++i )
  {
    v16 = 0LL;
    v9 = *v17;
    v16 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v9 + 56))(v17, i, &v16);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        147LL,
        (__int64)"shellcommon\\shell\\ContentDeliveryManager\\Utils\\inc\\targetedcontentlayoutxmlutilities.h",
        (const char *)(unsigned int)v10,
        v15);
    v11 = *(_QWORD *)(a2 + 8);
    if ( (unsigned __int64)&v16 >= v11 || *(_QWORD *)a2 > (unsigned __int64)&v16 )
    {
      if ( v11 == *(_QWORD *)(a2 + 16) )
        std::vector<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>::_Reserve(a2);
      v13 = &v16;
    }
    else
    {
      v12 = ((__int64)&v16 - *(_QWORD *)a2) >> 3;
      if ( v11 == *(_QWORD *)(a2 + 16) )
        std::vector<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>::_Reserve(a2);
      v13 = (__int64 *)(*(_QWORD *)a2 + 8 * v12);
    }
    wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>(
      *(__int64 **)(a2 + 8),
      v13);
    *(_QWORD *)(a2 + 8) += 8LL;
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v16);
  }
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v17);
  return a2;
}
