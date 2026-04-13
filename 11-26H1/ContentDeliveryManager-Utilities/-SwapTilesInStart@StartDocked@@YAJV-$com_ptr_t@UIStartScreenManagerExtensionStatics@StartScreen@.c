/*
 * XREFs of ?SwapTilesInStart@StartDocked@@YAJV?$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@3@1PEAE@Z @ 0x1800986D0
 * Callers:
 *     ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800985C4 (-SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@PEAE@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@PEAEW4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800673FC (--$WaitForCompletion@PEAU-$IAsyncOperation@_N@Foundation@Windows@@PEAE@details@wil@@YAJPEAU-$IAs.c)
 *     ??0?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18008E7D0 (--0-$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?GetUdkTileIdFromUnifiedTileIdentifier@Internal@StartDocked@@YAJV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEAPEAUITileId@StartScreen@UI@WindowsUdk@@@Z @ 0x180097510 (-GetUdkTileIdFromUnifiedTileIdentifier@Internal@StartDocked@@YAJV-$com_ptr_t@UIUnifiedTileIdenti.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall StartDocked::SwapTilesInStart(__int64 *a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  __int64 *v8; // rax
  int UdkTileIdFromUnifiedTileIdentifier; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 *v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  int v16; // r8d
  __int64 v17; // rdx
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-30h] BYREF
  __int64 v20; // [rsp+38h] [rbp-28h] BYREF
  __int64 v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v20 = 0LL;
  v21 = 0LL;
  v8 = wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>(
         v22,
         a2);
  UdkTileIdFromUnifiedTileIdentifier = StartDocked::Internal::GetUdkTileIdFromUnifiedTileIdentifier(v8, &v21);
  v10 = UdkTileIdFromUnifiedTileIdentifier;
  if ( UdkTileIdFromUnifiedTileIdentifier < 0 )
  {
    v11 = 174LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"ShellCommon\\internal\\Shell\\inc\\Private\\StartAppServiceHelpers.h",
      (const char *)(unsigned int)UdkTileIdFromUnifiedTileIdentifier);
    goto LABEL_12;
  }
  v20 = 0LL;
  v12 = wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>(
          v22,
          a3);
  UdkTileIdFromUnifiedTileIdentifier = StartDocked::Internal::GetUdkTileIdFromUnifiedTileIdentifier(v12, &v20);
  v10 = UdkTileIdFromUnifiedTileIdentifier;
  if ( UdkTileIdFromUnifiedTileIdentifier < 0 )
  {
    v11 = 175LL;
    goto LABEL_5;
  }
  v19 = 0LL;
  v13 = (_QWORD *)*a1;
  v14 = *(_QWORD *)*a1;
  v19 = 0LL;
  v15 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v14 + 80))(
          v13,
          v21,
          v20,
          &v19);
  v10 = v15;
  if ( v15 >= 0 )
  {
    v15 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<bool> *,unsigned char *>(v19, a4, v16);
    v10 = v15;
    if ( v15 >= 0 )
    {
      wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v19);
      v10 = 0;
      goto LABEL_12;
    }
    v17 = 179LL;
  }
  else
  {
    v17 = 178LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"ShellCommon\\internal\\Shell\\inc\\Private\\StartAppServiceHelpers.h",
    (const char *)(unsigned int)v15);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v19);
LABEL_12:
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v20);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v21);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(a1);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(a2);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(a3);
  return v10;
}
