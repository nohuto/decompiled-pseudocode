/*
 * XREFs of ?start@?$tip_test@V?$merged_data@U_tip_EnableCloudPCTipTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x1806435E0
 * Callers:
 *     ?EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@000@Z @ 0x18063FDF0 (-EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18027FD64 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18028038C (-start@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?has_ever_started@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802C604C (-has_ever_started@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_EnableCloudPCTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180499BE8 (--1-$com_ptr_t@V-$merged_data@U_tip_EnableCloudPCTipTest@@U1@@details@tip2@@Uerr_returncode_poli.c)
 *     ?Release@?$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@AEAAKXZ @ 0x18049CDD8 (-Release@-$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@AEAAKXZ.c)
 *     ??0?$merged_data@U_tip_EnableCloudPCTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x18063E798 (--0-$merged_data@U_tip_EnableCloudPCTipTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

_OWORD *__fastcall tip2::tip_test<tip2::details::merged_data<_tip_EnableCloudPCTipTest,_tip_EnableCloudPCTipTest>>::start(
        __int64 *a1,
        _OWORD *a2)
{
  volatile signed __int32 *v4; // r8
  LPVOID v5; // rax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rax
  volatile signed __int32 *v8; // rcx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 && tip2::details::shared_data<1,0,0>::has_ever_started(*a1 + 8) )
  {
    *a1 = 0LL;
    tip2::details::merged_data<_tip_AppThumbnailTest,_tip_AppThumbnailTest>::Release(v4);
  }
  if ( !*a1 )
  {
    v5 = CoTaskMemAlloc(0x118uLL);
    if ( !v5 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v6);
    v7 = tip2::details::merged_data<_tip_EnableCloudPCTipTest,_tip_EnableCloudPCTipTest>::merged_data<_tip_EnableCloudPCTipTest,_tip_EnableCloudPCTipTest>((__int64)v5);
    v8 = (volatile signed __int32 *)*a1;
    v10 = 0LL;
    *a1 = v7;
    if ( v8 )
      tip2::details::merged_data<_tip_AppThumbnailTest,_tip_AppThumbnailTest>::Release(v8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_EnableCloudPCTipTest,_tip_EnableCloudPCTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_EnableCloudPCTipTest,_tip_EnableCloudPCTipTest>,wil::err_returncode_policy>(&v10);
  }
  tip2::details::shared_data<1,0,0>::start(*a1 + 8, a2);
  return a2;
}
