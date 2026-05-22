/*
 * XREFs of ?OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801B5530
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180029AA4 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?GetUnhandedVirtualKey@KeyboardInputInfo@@QEAAGXZ @ 0x18019B7F8 (-GetUnhandedVirtualKey@KeyboardInputInfo@@QEAAGXZ.c)
 *     ?GetContainerGuidFromInputTarget@@YA_NV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAU_GUID@@@Z @ 0x1801B540C (-GetContainerGuidFromInputTarget@@YA_NV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAU_GUID@@@Z.c)
 *     ?OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z @ 0x1801B60C4 (-OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z.c)
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z @ 0x1801CF798 (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HotkeyContextualProcessor::OnInput(
        HotKeyProcessor **this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  GUID v7; // xmm6
  __int16 v8; // cx
  __int64 *v9; // rbx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // edi
  unsigned __int16 UnhandedVirtualKey; // ax
  unsigned __int64 v15; // r9
  unsigned __int8 *Source; // r10
  bool v17; // r11
  int v18; // eax
  HotKeyProcessor *v19; // rcx
  int v20; // eax
  int v22; // [rsp+28h] [rbp-79h]
  int v23; // [rsp+28h] [rbp-79h]
  unsigned int v24; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v25; // [rsp+5Ch] [rbp-45h] BYREF
  __int64 v26; // [rsp+60h] [rbp-41h] BYREF
  __int64 v27[2]; // [rsp+68h] [rbp-39h] BYREF
  struct _GUID v28; // [rsp+78h] [rbp-29h] BYREF
  std::_Ref_count_base *v29[2]; // [rsp+88h] [rbp-19h] BYREF
  GUID v30; // [rsp+98h] [rbp-9h]
  char v31; // [rsp+A8h] [rbp+7h]
  int v32; // [rsp+ACh] [rbp+Bh]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  *((_DWORD *)a4 + 2) = (*((_DWORD *)a3 + 26) != 3) + 3;
  if ( (*(_BYTE *)a2 & 4) != 0 )
  {
    *(_OWORD *)v29 = 0LL;
    v7 = GUID_NULL;
    v30 = GUID_NULL;
    v31 = 0;
    v32 = 0;
    v8 = *((_WORD *)a2 + 30);
    if ( v8 != 1 && (unsigned __int16)(v8 - 4) > 2u && v8 != 2 && v8 != 231 )
    {
      v25 = 0;
      v24 = 0;
      v28 = GUID_NULL;
      v26 = 0LL;
      v9 = (__int64 *)((char *)a3 + 16);
      if ( *((_QWORD *)a3 + 2)
        && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a3 + 2,
                  &v26) >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v26 + 32LL))(v26, &v25);
        if ( v10 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xA2,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\hotkey"
                 "contextualprocessor.cpp",
            (const char *)(unsigned int)v10,
            v22);
        v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v26 + 40LL))(v26, &v24);
        if ( v11 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xA3,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\hotkey"
                 "contextualprocessor.cpp",
            (const char *)(unsigned int)v11,
            v22);
        v27[0] = *v9;
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v27);
        GetContainerGuidFromInputTarget(v27, &v28);
        v7 = v28;
      }
      v12 = v24;
      v13 = v25;
      v28 = v7;
      UnhandedVirtualKey = KeyboardInputInfo::GetUnhandedVirtualKey(a2);
      v18 = HotKeyProcessor::DetectAndProcessHotKey(
              this[5],
              UnhandedVirtualKey,
              v17,
              v15,
              *((_QWORD *)a2 + 4),
              Source,
              v13,
              v12,
              &v28,
              (struct HotKeyDetectionResult *)v29);
      if ( v18 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xB2,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\hotkeyco"
               "ntextualprocessor.cpp",
          (const char *)(unsigned int)v18,
          v23);
      if ( v32 )
      {
        v19 = this[4];
        if ( v19 )
          (*(void (__fastcall **)(HotKeyProcessor *))(*(_QWORD *)v19 + 40LL))(v19);
      }
      v28 = v7;
      v20 = VirtualHotKeyTracker::OnInput(this[6], a2, &v28, (const struct HotKeyDetectionResult *)v29);
      if ( v20 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xBD,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\hotkeyco"
               "ntextualprocessor.cpp",
          (const char *)(unsigned int)v20,
          v23);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
      if ( v31 )
        *((_DWORD *)a4 + 2) = 3;
    }
    if ( v29[1] )
      std::_Ref_count_base::_Decref(v29[1]);
  }
  return 0LL;
}
