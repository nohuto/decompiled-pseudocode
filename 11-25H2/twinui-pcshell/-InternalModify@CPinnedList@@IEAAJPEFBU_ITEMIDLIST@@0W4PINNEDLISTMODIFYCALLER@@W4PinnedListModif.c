/*
 * XREFs of ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x18066C480
 * Callers:
 *     _lambda_e9273f30aaf408505b3f0162e09ecc61_::operator() @ 0x1805C02CC (_lambda_e9273f30aaf408505b3f0162e09ecc61_--operator().c)
 *     ?ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x180666170 (-ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 *     ?ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z @ 0x180666430 (-ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z.c)
 *     ?ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x180666840 (-ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 *     ?ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z @ 0x180666B50 (-ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z.c)
 *     ?MarkAsTombstone@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x18066DE00 (-MarkAsTombstone@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z.c)
 *     ?Modify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@@Z @ 0x18066DE50 (-Modify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BEFC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x1800A3288 (--1-$CCoTaskMemPtr@E@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800A51D4 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800EDA04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180181C58 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarSuggestions@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801F9EE0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarSuggestions@@@details@wil@@QEAAX_N.c)
 *     DSA_GetItemPtr @ 0x1801FE380 (DSA_GetItemPtr.c)
 *     ?GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z @ 0x1802198EC (-GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x18023D984 (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wi.c)
 *     ?ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z @ 0x1802B5EE4 (-ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z.c)
 *     ??$?0V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@UDummy@Details@23@@Z @ 0x1802B867C (--$-0V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HStringReference.c)
 *     ??1?$out_param_t@V?$unique_ptr@$$CFAU_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1802C4C24 (--1-$out_param_t@V-$unique_ptr@$$CFAU_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x1802C4C48 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 *     ?Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ @ 0x1802C9EF0 (-Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1802CF538 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-ReleaseMutex@details@wil@@YAX0@ZU-$inte.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1802DED38 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-ReleaseMutex@details@wil@@YAX0@ZU-$.c)
 *     ??$Start@$$V@PinningActivity@TaskbarPinningTelemetry@@SA?AV01@XZ @ 0x180664DD0 (--$Start@$$V@PinningActivity@TaskbarPinningTelemetry@@SA-AV01@XZ.c)
 *     ??$make_unique_nothrow@VCBackupLocationManager@@$$V@wil@@YA?AV?$unique_ptr@VCBackupLocationManager@@U?$default_delete@VCBackupLocationManager@@@wistd@@@wistd@@XZ @ 0x18066511C (--$make_unique_nothrow@VCBackupLocationManager@@$$V@wil@@YA-AV-$unique_ptr@VCBackupLocationManag.c)
 *     ??1CPinList@@QEAA@XZ @ 0x180665A30 (--1CPinList@@QEAA@XZ.c)
 *     ??1PinningActivity@TaskbarPinningTelemetry@@QEAA@XZ @ 0x180665B54 (--1PinningActivity@TaskbarPinningTelemetry@@QEAA@XZ.c)
 *     ??_GCBackupLocationManager@@QEAAPEAXI@Z @ 0x180665FB4 (--_GCBackupLocationManager@@QEAAPEAXI@Z.c)
 *     ?AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z @ 0x180665FE4 (-AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z.c)
 *     ?CreateBackupLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x1806672AC (-CreateBackupLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     ?GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YAJPEBGPEAPEAG1@Z @ 0x1806689E8 (-GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@Y.c)
 *     ?GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z @ 0x18066B1B8 (-GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z.c)
 *     ?GetTimestampFromPidl@@YAJPEFBU_ITEMIDLIST@@W4IDLHID@@PEAU_FILETIME@@@Z @ 0x18066BD60 (-GetTimestampFromPidl@@YAJPEFBU_ITEMIDLIST@@W4IDLHID@@PEAU_FILETIME@@@Z.c)
 *     ?IsFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YA_NPEBG@Z @ 0x18066D3D4 (-IsFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YA_NPEBG@Z.c)
 *     ?IsPlaceholderPin@TaskbarPinHelper@@YA_NPEFBU_ITEMIDLIST@@@Z @ 0x18066D5E0 (-IsPlaceholderPin@TaskbarPinHelper@@YA_NPEFBU_ITEMIDLIST@@@Z.c)
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x18066DB10 (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?PinnedListAdded@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG0W4PINNEDLISTMODIFYCALLER@@0@Z @ 0x18066E81C (-PinnedListAdded@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG0W4PINNEDLISTMODIFYCALLER@@0@.c)
 *     ?PinnedListPlaceholderProcessed@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG_N@Z @ 0x18066E9F8 (-PinnedListPlaceholderProcessed@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG_N@Z.c)
 *     ?PinnedListRemoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG000HW4PINNEDLISTMODIFYCALLER@@@Z @ 0x18066EAE4 (-PinnedListRemoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG000HW4PINNEDLISTMODIFYCALLE.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18066EF00 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarRestorePlaceholders@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18066F574 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarRestorePlaceholders@@@details@wil@.c)
 *     ?Save@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x18066FA60 (-Save@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z @ 0x18066FFA0 (-SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z.c)
 *     ?SetPinTimeForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAU_FILETIME@@PEAPEFAU1@@Z @ 0x1806700C4 (-SetPinTimeForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAU_FILETIME@@PEAPEFAU1@@Z.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180670974 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     ?TaskListTileMoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBGW4PINNEDLISTMODIFYCALLER@@@Z @ 0x1806716AC (-TaskListTileMoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBGW4PINNEDLISTMODIFYCALLER@@@.c)
 *     ?UpdateShellLink@PINENTRY@@QEAAJXZ @ 0x180671B9C (-UpdateShellLink@PINENTRY@@QEAAJXZ.c)
 *     _CacheAppIDInIDList @ 0x180671C30 (_CacheAppIDInIDList.c)
 *     ?_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z @ 0x1806724B8 (-_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z.c)
 *     ?_GetAppIDFromIDList@@YAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@PEAPEAGPEAH@Z @ 0x180672810 (-_GetAppIDFromIDList@@YAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@PEAPEAGPEAH@Z.c)
 *     ?create@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEBGKKPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x18067383C (-create@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil.c)
 *     ?get@?$static_lazy@VTaskbarPinningTelemetry@@@details@wil@@QEAAPEAVTaskbarPinningTelemetry@@P6AXXZ@Z @ 0x180673E5C (-get@-$static_lazy@VTaskbarPinningTelemetry@@@details@wil@@QEAAPEAVTaskbarPinningTelemetry@@P6AX.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=23
__int64 __fastcall CPinnedList::InternalModify(
        struct CPinnedList *a1,
        struct _ITEMIDLIST *a2,
        struct _ITEMIDLIST *a3,
        unsigned int a4,
        int a5)
{
  struct _ITEMIDLIST *v6; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // edi
  wil::details *v13; // rbx
  void *v14; // rdx
  wil::details **v15; // r14
  int v16; // edi
  int TimestampFromPidl; // eax
  __int64 v18; // rcx
  int BackupLnk; // r14d
  LPWSTR *v20; // rbx
  __int64 v21; // r9
  _DWORD *v22; // rcx
  int v23; // r12d
  void (__fastcall *v24)(char *, LPITEMIDLIST, wchar_t **); // rbx
  const struct _ITEMIDLIST *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  const unsigned __int16 *v28; // rdx
  __int64 v29; // r8
  wchar_t *v30; // rcx
  __int64 v31; // rbx
  int ActivationFactory; // eax
  struct _FILETIME v33; // rbx
  __int64 (__fastcall *v34)(struct _FILETIME, GUID *, struct IApplicationResolver **); // rdi
  int v35; // eax
  unsigned __int16 **v36; // r9
  int AumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier; // eax
  unsigned int v38; // r8d
  struct IApplicationResolver *v39; // rbx
  __int64 (__fastcall *v40)(struct IApplicationResolver *, PVOID, PVOID); // rsi
  PVOID Reserved1; // rdi
  unsigned int v42; // r8d
  HSTRING_HEADER *v43; // rax
  unsigned int v44; // eax
  LPWSTR *v45; // rbx
  __int64 v46; // r9
  __int64 v47; // r8
  ITEMIDLIST *v48; // rax
  int appended; // eax
  PINENTRY *ItemPtr; // rax
  void (__fastcall *v51)(char *, LPITEMIDLIST, struct _ITEMIDLIST **); // rbx
  void **v52; // rax
  __int64 v53; // rdx
  void *v54; // rdx
  void *v55; // rdx
  bool v56; // [rsp+40h] [rbp-C0h]
  ITEMIDLIST *v58; // [rsp+48h] [rbp-B8h]
  ITEMIDLIST *v59; // [rsp+50h] [rbp-B0h]
  HSTRING_HEADER v60; // [rsp+58h] [rbp-A8h] BYREF
  HSTRING_HEADER v61; // [rsp+78h] [rbp-88h] BYREF
  LPITEMIDLIST pidl; // [rsp+98h] [rbp-68h] BYREF
  struct IApplicationResolver *ppv; // [rsp+A0h] [rbp-60h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+A8h] [rbp-58h] BYREF
  struct _ITEMIDLIST *v65[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v66; // [rsp+C0h] [rbp-40h]
  wchar_t *Str[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v68; // [rsp+D8h] [rbp-28h]
  wil::details *v69; // [rsp+E0h] [rbp-20h] BYREF
  struct _ITEMIDLIST *v70; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int16 *v71[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v72; // [rsp+100h] [rbp+0h]
  HDSA hdsa[2]; // [rsp+108h] [rbp+8h] BYREF
  wil::details *v74; // [rsp+118h] [rbp+18h] BYREF
  struct _ITEMIDLIST *v75; // [rsp+120h] [rbp+20h] BYREF
  LPWSTR *ppwsz; // [rsp+128h] [rbp+28h] BYREF
  unsigned __int16 *v77[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v78; // [rsp+140h] [rbp+40h]
  unsigned __int16 *v79[2]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v80; // [rsp+158h] [rbp+58h]
  HSTRING_HEADER hstringHeader; // [rsp+160h] [rbp+60h] BYREF
  __int64 v82; // [rsp+178h] [rbp+78h]
  _BYTE v83[336]; // [rsp+180h] [rbp+80h] BYREF
  WCHAR psz[264]; // [rsp+2D0h] [rbp+1D0h] BYREF
  WCHAR Filename[264]; // [rsp+4E0h] [rbp+3E0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+748h] [rbp+648h]

  v6 = a2;
  v70 = a2;
  if ( (*(unsigned int (__fastcall **)(struct CPinnedList *))(*(_QWORD *)a1 + 120LL))(a1) )
    return 2147942405LL;
  memset_0(v83, 0, 0x148uLL);
  TaskbarPinningTelemetry::PinningActivity::Start<>((TaskbarPinningTelemetry::PinningActivity *)v83);
  v58 = 0LL;
  v59 = 0LL;
  v75 = 0LL;
  if ( v6 )
  {
    v9 = SHLogILFromFSIL(v6);
    v58 = (ITEMIDLIST *)v9;
    if ( v9 )
      v6 = (struct _ITEMIDLIST *)v9;
    v70 = v6;
  }
  if ( (unsigned __int64)a3 >= 0x10000 )
  {
    v10 = SHLogILFromFSIL(a3);
    v59 = (ITEMIDLIST *)v10;
    if ( v10 )
      a3 = (struct _ITEMIDLIST *)v10;
  }
  v74 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct CPinnedList *))(*(_QWORD *)a1 + 208LL))(a1);
  v12 = _create___mutex_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJPEBGKKPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
          &v74,
          v11);
  v13 = 0LL;
  v69 = 0LL;
  if ( v12 >= 0 )
  {
    v15 = (wil::details **)_acquire___mutex_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEBA_AV__unique_any_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_ReleaseMutex_details_wil__YAX0_ZU__integral_constant__K_01_wistd__PEAXPEAX_0A___T_details_wil___details_wil___2_PEAKKH_Z(
                             (HANDLE *)&v74,
                             &SystemTimeAsFileTime);
    if ( &v69 != v15 )
    {
      _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_ReleaseMutex_details_wil__YAX0_ZU__integral_constant__K_01_wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
        &v69,
        *v15);
      *v15 = 0LL;
      v13 = v69;
    }
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_ReleaseMutex_details_wil__YAX0_ZU__integral_constant__K_01_wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
      (wil::details **)&SystemTimeAsFileTime,
      v14);
    if ( !v13 )
      v12 = -2147019873;
  }
  *(_OWORD *)hdsa = 0LL;
  if ( v12 >= 0 && (int)CPinList::Load((CPinList *)hdsa, a1) >= 0 )
  {
    v56 = 0;
    pidl = 0LL;
    v16 = 1;
    if ( !v6 )
    {
      if ( a3 )
      {
        BackupLnk = (*(__int64 (__fastcall **)(struct CPinnedList *, WCHAR *, __int64))(*(_QWORD *)a1 + 104LL))(
                      a1,
                      psz,
                      260LL);
        if ( BackupLnk >= 0 )
        {
          v45 = (LPWSTR *)operator new(8uLL);
          ppwsz = v45;
          *v45 = 0LL;
          *v45 = 0LL;
          BackupLnk = SHStrDupW(psz, v45);
          if ( BackupLnk >= 0 )
          {
            BackupLnk = CBackupLocationManager::CreateBackupLnk((CBackupLocationManager *)v45, a3, &pidl, v46);
            if ( BackupLnk >= 0 )
            {
              LODWORD(ppv) = 0;
              if ( (int)GetPinSourceForPinnedItem(a3, (enum TaskbarPinningSource *)&ppv) < 0
                || (v47 = (unsigned int)ppv, (_DWORD)ppv == -1) )
              {
                v47 = 0LL;
              }
              BackupLnk = SetPinSourceForPinnedItem(pidl, &pidl, v47);
              if ( BackupLnk >= 0 )
              {
                SystemTimeAsFileTime = 0LL;
                BackupLnk = SetPinTimeForPinnedItem(pidl, 0LL, (struct _ITEMIDLIST **)&SystemTimeAsFileTime);
                ILFree(pidl);
                v48 = (ITEMIDLIST *)SystemTimeAsFileTime;
                SystemTimeAsFileTime = 0LL;
                pidl = v48;
                CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>((void **)&SystemTimeAsFileTime);
                if ( BackupLnk >= 0 )
                {
                  BackupLnk = CacheAppIDInIDList(pidl);
                  if ( BackupLnk >= 0 )
                  {
                    appended = CPinList::AppendPidl((CPinList *)hdsa, a1, pidl);
                    if ( appended < 0 )
                    {
                      BackupLnk = -2147024882;
                    }
                    else
                    {
                      ItemPtr = (PINENTRY *)DSA_GetItemPtr(hdsa[0], appended);
                      PINENTRY::UpdateShellLink(ItemPtr);
                    }
                    if ( BackupLnk >= 0 )
                    {
                      v65[0] = 0LL;
                      v65[1] = 0LL;
                      v66 = 0LL;
                      v51 = *(void (__fastcall **)(char *, LPITEMIDLIST, struct _ITEMIDLIST **))(*((_QWORD *)a1 + 2)
                                                                                               + 88LL);
                      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v65);
                      v65[1] = (struct _ITEMIDLIST *)-1LL;
                      v66 = -1LL;
                      v51((char *)a1 + 16, pidl, v65);
                      if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
                      {
                        v70 = 0LL;
                        v52 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&v70);
                        ILGetHiddenStringAllocW((__int64)pidl, 3203334174LL, v52);
                        TaskbarPinningTelemetry::PinningActivity::PinnedListAdded(v83, v65[0], Filename, a4);
                        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v70);
                      }
                      BackupLnk = CPinList::Save((CPinList *)hdsa, a1);
                      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v65);
                      v45 = ppwsz;
                      v16 = 1;
                    }
                  }
                }
              }
            }
          }
          CBackupLocationManager::`scalar deleting destructor'((LPVOID *)v45);
          goto LABEL_86;
        }
      }
      else
      {
        BackupLnk = -2147024809;
      }
LABEL_92:
      ILFree(pidl);
      goto LABEL_94;
    }
    if ( !a3 )
      goto LABEL_43;
    if ( (unsigned __int64)a3 < 0x10000 || !ILIsEqual(v6, a3) )
    {
      v56 = 1;
      (*(void (__fastcall **)(struct CPinnedList *))(*(_QWORD *)a1 + 168LL))(a1);
      if ( (unsigned __int64)a3 < 0x10000 )
        goto LABEL_43;
    }
    SystemTimeAsFileTime = 0LL;
    TimestampFromPidl = GetTimestampFromPidl(v6, -1091633109, &SystemTimeAsFileTime);
    if ( TimestampFromPidl < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C,
        (int)"Desktop\\Internal\\Shell\\Inc\\private\\PinningTimeHelpers.h",
        (const char *)(unsigned int)TimestampFromPidl);
      GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    }
    BackupLnk = SetPinTimeForPinnedItem(a3, &SystemTimeAsFileTime, &v75);
    if ( BackupLnk < 0 )
      goto LABEL_33;
    a3 = v75;
    if ( (unsigned __int64)v75 >= 0x10000 )
    {
      BackupLnk = (*(__int64 (__fastcall **)(struct CPinnedList *, WCHAR *, __int64))(*(_QWORD *)a1 + 104LL))(
                    a1,
                    psz,
                    260LL);
      wil::make_unique_nothrow<CBackupLocationManager,>(&ppwsz);
      v20 = ppwsz;
      if ( ppwsz )
      {
        BackupLnk = SHStrDupW(psz, ppwsz);
        if ( BackupLnk >= 0 )
        {
          ppv = 0LL;
          v65[0] = (struct _ITEMIDLIST *)&ppv;
          v65[1] = 0LL;
          LOBYTE(v66) = 1;
          BackupLnk = CBackupLocationManager::CreateBackupLnk((CBackupLocationManager *)v20, a3, &v65[1], v21);
          wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)v65);
          if ( BackupLnk >= 0 )
            BackupLnk = CPinList::ReplacePidl(hdsa, a1, v6, ppv, a5, &pidl);
          wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&ppv,
            0LL);
        }
      }
      if ( v20 )
        CBackupLocationManager::`scalar deleting destructor'((LPVOID *)v20);
    }
    else
    {
LABEL_43:
      BackupLnk = CPinList::ReplacePidl(hdsa, a1, v6, a3, a5, &pidl);
    }
LABEL_33:
    v22 = *(_DWORD **)(wil::details::static_lazy<TaskbarPinningTelemetry>::get(
                         v18,
                         _lambda_576b8a055e1eddaf8c0f48bcebe2427e_::_lambda_invoker_cdecl_)
                     + 8);
    if ( v22 && *v22 )
    {
      Str[0] = 0LL;
      Str[1] = 0LL;
      v68 = 0LL;
      v23 = -1;
      if ( !pidl
        || (v24 = *(void (__fastcall **)(char *, LPITEMIDLIST, wchar_t **))(*((_QWORD *)a1 + 2) + 88LL),
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)Str),
            Str[1] = (wchar_t *)-1LL,
            v68 = -1LL,
            v24((char *)a1 + 16, pidl, Str),
            v16 = 1,
            !Str[0])
        || !*Str[0] )
      {
        ppv = 0LL;
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
        if ( CoCreateInstance(
               &CLSID_StartMenuCacheAndAppResolver,
               0LL,
               1u,
               &GUID_de25675a_72de_44b4_9373_05170450c140,
               (LPVOID *)&ppv) >= 0 )
        {
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)Str);
          Str[1] = (wchar_t *)-1LL;
          v68 = -1LL;
          _GetAppIDFromIDList(ppv, v6, Str, 0LL);
        }
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
      }
      if ( TaskbarPinHelper::IsPlaceholderPin((TaskbarPinHelper *)v6, v25) )
      {
        TaskbarPinningTelemetry::PinningActivity::PinnedListPlaceholderProcessed(
          (TaskbarPinningTelemetry::PinningActivity *)v83,
          Str[0],
          v56);
      }
      else if ( v56 )
      {
        TaskbarPinningTelemetry::PinningActivity::TaskListTileMoved(v83, Str[0], a4);
      }
      else
      {
        v65[0] = 0LL;
        v65[1] = 0LL;
        v66 = 0LL;
        v79[0] = 0LL;
        v79[1] = 0LL;
        v80 = 0LL;
        v71[0] = 0LL;
        v71[1] = 0LL;
        v72 = 0LL;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarSuggestions>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_TaskbarSuggestions>::GetImpl'::`2'::impl,
          1u,
          v26,
          v27);
        v30 = Str[0];
        if ( Str[0] )
        {
          if ( *Str[0] )
          {
            (*(void (__fastcall **)(struct CPinnedList *, wchar_t *))(*(_QWORD *)a1 + 192LL))(a1, Str[0]);
            v30 = Str[0];
          }
          if ( v30 && *v30 && SecondaryTileIdentifierHelpers::IsFullyQualifiedTileIdentifier(v30, v28) )
          {
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v71);
            v71[1] = (unsigned __int16 *)-1LL;
            v72 = -1LL;
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v79);
            v79[1] = (unsigned __int16 *)-1LL;
            v80 = -1LL;
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v65);
            v65[1] = (struct _ITEMIDLIST *)-1LL;
            v66 = -1LL;
            TaskbarTelemetryHelper::GetSecondaryTileLaunchArguments(Str[0], (unsigned __int16 *)v65, v79, v71);
            SystemTimeAsFileTime = 0LL;
            v82 = 0LL;
            Microsoft::WRL::Wrappers::HStringReference::CreateReference(
              &hstringHeader,
              L"Windows.UI.StartScreen.SecondaryTile",
              0x25u,
              0x24u);
            v31 = v82;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&SystemTimeAsFileTime);
            ActivationFactory = RoGetActivationFactory(
                                  v31,
                                  &GUID_57f52ca0_51bc_4abf_8ebf_627a0398b05a,
                                  &SystemTimeAsFileTime);
            if ( ActivationFactory >= 0 )
            {
              ppv = 0LL;
              v33 = SystemTimeAsFileTime;
              v34 = ***(__int64 (__fastcall ****)(struct _FILETIME, GUID *, struct IApplicationResolver **))&SystemTimeAsFileTime;
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
              v35 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v34)(
                      v33,
                      &GUID_5365d67e_eedb_4ecd_a099_a195558a9f80,
                      &ppv);
              if ( v35 >= 0 )
              {
                memset(&hstringHeader, 0, sizeof(hstringHeader));
                v77[0] = 0LL;
                v77[1] = 0LL;
                v78 = 0LL;
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v77);
                v77[1] = (unsigned __int16 *)-1LL;
                v78 = -1LL;
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&hstringHeader);
                *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = -1LL;
                *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = -1LL;
                AumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier = SecondaryTileIdentifierHelpers::GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier(
                                                                               Str[0],
                                                                               (unsigned __int16 *)&hstringHeader,
                                                                               v77,
                                                                               v36);
                if ( AumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier >= 0 )
                {
                  v39 = ppv;
                  v40 = *(__int64 (__fastcall **)(struct IApplicationResolver *, PVOID, PVOID))(*(_QWORD *)ppv + 72LL);
                  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                                &v60,
                                (const WCHAR **)v77,
                                v38)[1].Reserved.Reserved1;
                  v43 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                          &v61,
                          (const WCHAR **)&hstringHeader,
                          v42);
                  v44 = v40(v39, v43[1].Reserved.Reserved1, Reserved1);
                  wil::details::in1diag3::Log_IfFailedWithExpected(
                    retaddr,
                    (void *)0x71C,
                    (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
                    (const char *)v44,
                    1u,
                    0x80070490);
                  v6 = v70;
                }
                else
                {
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x71A,
                    (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
                    (const char *)(unsigned int)AumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier);
                }
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v77);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&hstringHeader);
              }
              else
              {
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x716,
                  (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
                  (const char *)(unsigned int)v35);
              }
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
              v16 = 1;
            }
            else
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x713,
                (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
                (const char *)(unsigned int)ActivationFactory);
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&SystemTimeAsFileTime);
          }
        }
        if ( !v71[0] )
        {
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v71);
          v71[1] = (unsigned __int16 *)-1LL;
          v72 = -1LL;
          ILGetHiddenStringAllocW((__int64)pidl, 3203334174LL, (void **)v71);
        }
        LOBYTE(v29) = 3;
        LOBYTE(v28) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarRestorePlaceholders>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_TaskbarRestorePlaceholders>::GetImpl'::`2'::impl,
          v28,
          v29);
        LODWORD(ppv) = 0;
        if ( (int)GetPinSourceForPinnedItem(pidl, (enum TaskbarPinningSource *)&ppv) >= 0 )
          v23 = (int)ppv;
        TaskbarPinningTelemetry::PinningActivity::PinnedListRemoved(v83, Str[0], v65[0], v79[0], v71[0], v23, a4);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v71);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v79);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v65);
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)Str);
    }
LABEL_86:
    if ( BackupLnk >= 0 )
    {
      _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_ReleaseMutex_details_wil__YAX0_ZU__integral_constant__K_01_wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
        &v69,
        0LL);
      if ( !v6 || a3 )
        v16 = 0;
      CPinnedList::_DoNotifyPinListChange(a1, pidl, v16);
    }
    goto LABEL_92;
  }
  BackupLnk = -2147024882;
LABEL_94:
  ILFree(v58);
  ILFree(v59);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_ReleaseMutex_details_wil__YAX0_ZU__integral_constant__K_01_wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    &v69,
    0LL);
  v53 = (unsigned int)BackupLnk;
  if ( v6 && !a3 && BackupLnk == -2147023728 )
    v53 = 0LL;
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(v83, v53);
  CPinList::~CPinList((CPinList *)hdsa);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_ReleaseMutex_details_wil__YAX0_ZU__integral_constant__K_01_wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    &v69,
    v54);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    &v74,
    v55);
  CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>((void **)&v75);
  TaskbarPinningTelemetry::PinningActivity::~PinningActivity((TaskbarPinningTelemetry::PinningActivity *)v83);
  return (unsigned int)BackupLnk;
}
