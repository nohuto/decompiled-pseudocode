/*
 * XREFs of ?GetNodeTileId@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@AEBV?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800AF078
 * Callers:
 *     ?EnumerateTargetedContentNodes@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@QEAAX$$QEAV?$function@$$A6A_NV?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUHSTRING__@@@Z@std@@@Z @ 0x1800AE938 (-EnumerateTargetedContentNodes@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@Cr.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
HSTRING *__fastcall CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::GetNodeTileId(
        __int64 a1,
        HSTRING *a2,
        _QWORD *a3)
{
  int v4; // eax
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, HSTRING, _QWORD); // r15
  unsigned __int64 v7; // rdi
  int v8; // eax
  int v9; // eax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, HSTRING *); // rdi
  int v12; // eax
  __int64 v14; // [rsp+28h] [rbp-48h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-40h] BYREF
  __int64 v16[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING string; // [rsp+48h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v16[1] = (__int64)a2;
  v16[0] = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a3 + 128LL))(*a3, v16);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      181LL,
      (__int64)"shellcommon\\shell\\ContentDeliveryManager\\Utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v4,
      0);
  v15 = 0LL;
  v5 = v16[0];
  v6 = *(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v16[0] + 64LL);
  v7 = -1LL;
  do
    ++v7;
  while ( aTileid[v7] );
  if ( v7 > 0xFFFFFFFF )
  {
    LODWORD(v7) = -1;
    RaiseException(0xC000000D, 1u, 0, 0LL);
  }
  WindowsCreateStringReference(L"TileID", v7, &hstringHeader, &string);
  v8 = v6(v5, string, &v15);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      184LL,
      (__int64)"shellcommon\\shell\\ContentDeliveryManager\\Utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v8,
      0);
  *a2 = 0LL;
  v14 = 0LL;
  v9 = (**v15)(v15, &GUID_ac144aa4_b4f1_4db6_b206_8a22c308db0a, &v14);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      7305LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v9,
      1);
  v10 = v14;
  v11 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v14 + 64LL);
  WindowsDeleteString(*a2);
  *a2 = 0LL;
  v12 = v11(v10, a2);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      188LL,
      (__int64)"shellcommon\\shell\\ContentDeliveryManager\\Utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v12,
      3);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v14);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v15);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(v16);
  return a2;
}
