/*
 * XREFs of ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z @ 0x180079870
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180010150 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800292CC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@?$unordered_map@UDWMPointerMapping@@UCursorId@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@5@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@std@@_N@1@$$QEAUDWMPointerMapping@@AEAUCursorId@@@Z @ 0x1800468C4 (--$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@-$unordered_map@UDWMPointerMapping@@UCur.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x18008E0B4 (-Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??$_Try_emplace@AEBW4InputType@@$$V@?$_Hash@V?$_Umap_traits@W4InputType@@UtagPOINT@@V?$_Uhash_compare@W4InputType@@U?$hash@W4InputType@@@std@@U?$equal_to@W4InputType@@@3@@std@@V?$allocator@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@PEAX@std@@_N@1@AEBW4InputType@@@Z @ 0x1800F7B90 (--$_Try_emplace@AEBW4InputType@@$$V@-$_Hash@V-$_Umap_traits@W4InputType@@UtagPOINT@@V-$_Uhash_co.c)
 *     ?find@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@2@AEBUCursorId@@@Z @ 0x1801CCB08 (-find@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-$_Uhash_compare@UCursorId@@UCursorIdHa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DWMCursorBroker::CreateCursor(
        DWMCursorBroker *this,
        struct DeviceInfo *a2,
        int a3,
        struct ICursor **a4)
{
  unsigned int v8; // esi
  __int64 v10; // rbx
  struct ICursor *v11; // rsi
  int v12; // eax
  __int64 (__fastcall *v13)(DWMCursorBroker *, _QWORD **); // rbx
  int v14; // eax
  _DWORD *v15; // rbx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v20; // rax
  struct ICursor *v21; // rbx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // [rsp+20h] [rbp-50h] BYREF
  _QWORD *v25; // [rsp+28h] [rbp-48h] BYREF
  struct ICursor *v26; // [rsp+30h] [rbp-40h] BYREF
  int v27; // [rsp+38h] [rbp-38h] BYREF
  void *v28; // [rsp+40h] [rbp-30h]
  _BYTE v29[16]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v30; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v28 = &DWMCursorBroker::s_lock;
  std::_Mutex_base::lock((std::_Mutex_base *)&DWMCursorBroker::s_lock);
  *a4 = 0LL;
  v26 = 0LL;
  v8 = *((_DWORD *)a2 + 1);
  if ( (v8 & 8) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x211,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)0x80070057LL,
      v24);
    _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
    return 2147942487LL;
  }
  else
  {
    if ( (v8 & 2) != 0 )
    {
      v8 = 64;
      if ( (*((_DWORD *)a2 + 1) & 0x40) != 0 )
      {
        v24 = 2LL;
      }
      else
      {
        v8 = 2;
        v24 = 1LL;
      }
    }
    else
    {
      LODWORD(v24) = *((_DWORD *)this + 114);
      *((_DWORD *)this + 114) = v24 + 1;
      HIDWORD(v24) = 0;
    }
    v10 = v24;
    std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::find(
      (char *)this + 48,
      &v25,
      &v24);
    if ( v25 == *((_QWORD **)this + 7) )
    {
      v12 = DWMCursor::Create(this, v10, v8, &v26);
      if ( v12 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x231,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
          (const char *)(unsigned int)v12,
          v24);
      v25 = 0LL;
      v13 = *(__int64 (__fastcall **)(DWMCursorBroker *, _QWORD **))(*(_QWORD *)this + 40LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
      v14 = v13(this, &v25);
      v11 = v26;
      if ( v14 >= 0 )
      {
        v26 = 0LL;
        v30 = 0LL;
        v15 = (_DWORD *)(*(__int64 (__fastcall **)(struct ICursor *, int *))(*(_QWORD *)v11 + 48LL))(v11, &v27);
        if ( *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v25 + 48LL))(v25, v29) == *v15 )
        {
          v26 = *(struct ICursor **)((char *)this + 460);
        }
        else
        {
          v17 = (*(__int64 (__fastcall **)(_QWORD *, struct ICursor **, char *))(*v25 + 40LL))(
                  v25,
                  &v26,
                  (char *)&v26 + 4);
          if ( v17 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x241,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\"
                            "dwmcursorbroker.cpp",
              (const char *)(unsigned int)v17,
              v24);
        }
        v16 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(*v25 + 104LL))(v25, &v30);
        if ( v16 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x243,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dw"
                          "mcursorbroker.cpp",
            (const char *)(unsigned int)v16,
            v24);
        v18 = (*(__int64 (__fastcall **)(struct ICursor *, _QWORD, _QWORD))(*(_QWORD *)v11 + 24LL))(
                v11,
                (unsigned int)v26,
                HIDWORD(v26));
        if ( v18 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x245,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dw"
                          "mcursorbroker.cpp",
            (const char *)(unsigned int)v18,
            v24);
        BamoServerConnection = ISMStatics::GetBamoServerConnection();
        v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 232LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
        if ( v20 )
        {
          v27 = 2;
          v21 = v26;
          *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<enum InputType,tagPOINT,std::_Uhash_compare<enum InputType,std::hash<enum InputType>,std::equal_to<enum InputType>>,std::allocator<std::pair<enum InputType const,tagPOINT>>,0>>::_Try_emplace<enum InputType const &,>(
                                   v20 + 96,
                                   v29,
                                   &v27)
                    + 20LL) = v21;
        }
        v22 = (*(__int64 (__fastcall **)(struct ICursor *, __int128 *))(*(_QWORD *)v11 + 96LL))(v11, &v30);
        if ( v22 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x253,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dw"
                          "mcursorbroker.cpp",
            (const char *)(unsigned int)v22,
            v24);
      }
      v23 = (__int64)v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
    }
    else
    {
      v11 = (struct ICursor *)v25[3];
      (*(void (__fastcall **)(struct ICursor *))(*(_QWORD *)v11 + 8LL))(v11);
    }
    if ( *(_DWORD *)a2 )
    {
      LODWORD(v25) = *(_DWORD *)a2;
      HIDWORD(v25) = a3;
      std::unordered_map<DWMPointerMapping,CursorId,DWMMappingHash,std::equal_to<DWMPointerMapping>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>>::_Insert_or_assign<DWMPointerMapping,CursorId &>(
        (float *)this + 28,
        (__int64)&v30,
        (unsigned __int8 *)&v25,
        &v24);
    }
    *a4 = v11;
    _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
    return 0LL;
  }
}
