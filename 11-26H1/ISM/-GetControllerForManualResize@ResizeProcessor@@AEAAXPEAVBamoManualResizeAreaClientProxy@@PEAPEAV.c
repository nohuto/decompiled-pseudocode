/*
 * XREFs of ?GetControllerForManualResize@ResizeProcessor@@AEAAXPEAVBamoManualResizeAreaClientProxy@@PEAPEAVBamoResizeControllerClientProxy@@PEAPEAVInputSite@@@Z @ 0x180154034
 * Callers:
 *     ?StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBamoManualResizeAreaClientProxy@@@Z @ 0x180155724 (-StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBam.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetIdForNamespace@InputSite@@QEBA?AV?$optional@_K@std@@W4InputSiteIdNamespace@@@Z @ 0x18001E8F0 (-GetIdForNamespace@InputSite@@QEBA-AV-$optional@_K@std@@W4InputSiteIdNamespace@@@Z.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002C510 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18002C810 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18002D184 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UIManualResizeAreaClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIManualResizeAreaClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003F2DC (--$As@UIManualResizeAreaClientProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x18005AD04 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     ?value@?$optional@_K@std@@QEGAAAEA_KXZ @ 0x180061504 (-value@-$optional@_K@std@@QEGAAAEA_KXZ.c)
 *     ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAA@XZ @ 0x180061A40 (--1-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pa.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BDDC (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800A7A68 (--0-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$GetAttachedObject@UIResizeControllerClientProxy@@VBamoResizeControllerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoResizeControllerClientProxy@@@WRL@Microsoft@@XZ @ 0x180152CF4 (--$GetAttachedObject@UIResizeControllerClientProxy@@VBamoResizeControllerClientProxy@@@InputSite.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall ResizeProcessor::GetControllerForManualResize(
        ResizeProcessor *this,
        struct BamoManualResizeAreaClientProxy *a2,
        struct BamoResizeControllerClientProxy **a3,
        struct InputSite **a4)
{
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  struct BamoManualResizeAreaClientProxy *v15; // rsi
  struct IInputSiteHierarchyManager *InputSiteHierarchyManager; // rdi
  __int64 (__fastcall *v17)(struct IInputSiteHierarchyManager *, __int64 **, _QWORD); // rbx
  _QWORD *v18; // rax
  __int64 v19; // rbx
  __int64 *i; // rdi
  struct BamoResizeControllerClientProxy *v21; // rbx
  _QWORD *v22; // rsi
  _QWORD *v23; // rax
  __int64 v24; // rcx
  _BYTE v25[16]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v26; // [rsp+30h] [rbp-50h] BYREF
  __int64 v27; // [rsp+40h] [rbp-40h]
  __int64 v28[3]; // [rsp+48h] [rbp-38h] BYREF
  __int64 *v29[4]; // [rsp+60h] [rbp-20h] BYREF
  struct BamoResizeControllerClientProxy *v30; // [rsp+C0h] [rbp+40h] BYREF
  struct BamoManualResizeAreaClientProxy *v31; // [rsp+D0h] [rbp+50h]

  v30 = this;
  *a3 = 0LL;
  *a4 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  InputSiteManager = ISMStatics::GetInputSiteManager();
  std::vector<InputSite *>::vector<InputSite *>(v28, (__int64)InputSiteManager + 56);
  v8 = (__int64 *)v28[0];
  v9 = v28[1];
  while ( v8 != (__int64 *)v9 )
  {
    v10 = 0LL;
    v30 = 0LL;
    v11 = *(_QWORD *)(*v8 + 488);
    v12 = *(_QWORD *)(*v8 + 496);
    if ( v11 != v12 )
    {
      do
      {
        if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IManualResizeAreaClientProxy>(
                    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v11 + 8),
                    (__int64 *)&v30) >= 0 )
          break;
        v11 += 16LL;
      }
      while ( v11 != v12 );
      v10 = (__int64)v30;
    }
    v13 = v10 - 8;
    v14 = -v10;
    v15 = (struct BamoManualResizeAreaClientProxy *)(v13 & -(__int64)(v14 != 0));
    v31 = v15;
    if ( v15 )
      (**(void (__fastcall ***)(__int64))v15)(v13 & -(__int64)(v14 != 0));
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
    if ( v15 && v15 == a2 )
    {
      InputSite::GetIdForNamespace(*v8, (__int64)v25, 0);
      InputSiteHierarchyManager = ISMStatics::GetInputSiteHierarchyManager();
      v17 = *(__int64 (__fastcall **)(struct IInputSiteHierarchyManager *, __int64 **, _QWORD))(*(_QWORD *)InputSiteHierarchyManager
                                                                                              + 24LL);
      v18 = (_QWORD *)std::optional<unsigned __int64>::value((__int64)v25);
      v19 = v17(InputSiteHierarchyManager, v29, *v18);
      if ( &v26 != (__int128 *)v19 )
      {
        std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64 **)&v26);
        v26 = *(_OWORD *)v19;
        v27 = *(_QWORD *)(v19 + 16);
        *(_QWORD *)v19 = 0LL;
        *(_QWORD *)(v19 + 8) = 0LL;
        *(_QWORD *)(v19 + 16) = 0LL;
      }
      std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(v29);
      (*(void (__fastcall **)(struct BamoManualResizeAreaClientProxy *))(*(_QWORD *)v15 + 8LL))(v15);
      break;
    }
    if ( v15 )
      (*(void (__fastcall **)(struct BamoManualResizeAreaClientProxy *))(*(_QWORD *)v15 + 8LL))(v15);
    ++v8;
  }
  for ( i = (__int64 *)v26; i != *((__int64 **)&v26 + 1); ++i )
  {
    InputSite::GetAttachedObject<IResizeControllerClientProxy,BamoResizeControllerClientProxy>(*i, (__int64 *)&v30);
    v21 = v30;
    if ( v30 )
    {
      v22 = (_QWORD *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 40LL))((char *)a2 + 8);
      v23 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v21 + 1) + 64LL))((__int64)v21 + 8);
      v24 = *v23 - *v22;
      if ( *v23 == *v22 )
        v24 = v23[1] - v22[1];
      if ( !v24 )
      {
        Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v30);
        *a3 = v21;
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(i);
        *a4 = (struct InputSite *)*i;
        Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v30);
        break;
      }
    }
    Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v30);
  }
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>::~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>(v28);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64 **)&v26);
}
