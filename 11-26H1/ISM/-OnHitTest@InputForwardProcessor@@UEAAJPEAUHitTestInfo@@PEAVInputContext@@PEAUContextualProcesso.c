/*
 * XREFs of ?OnHitTest@InputForwardProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801ABD20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002A9EC (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x18004DF38 (-Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUI.c)
 *     ?ToCompositionInputType@@YA?AW4CompositionInputType@@W4InputType@@@Z @ 0x180054E98 (-ToCompositionInputType@@YA-AW4CompositionInputType@@W4InputType@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??$_Try_emplace@_K$$V@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@$$QEA_K@Z @ 0x1801AB594 (--$_Try_emplace@_K$$V@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uha.c)
 *     ?GetInputForwardInputSite@InputForwardProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputType@@PEAUHitTestResult@@@Z @ 0x1801ABA7C (-GetInputForwardInputSite@InputForwardProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4I.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall InputForwardProcessor::OnHitTest(
        InputForwardProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  InputForwardProcessor *v6; // r13
  __int64 v7; // r14
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rbx
  unsigned int v11; // eax
  int v12; // eax
  unsigned int v13; // edi
  __int64 v15; // rax
  int v16[2]; // [rsp+20h] [rbp-B9h] BYREF
  __int64 v17; // [rsp+28h] [rbp-B1h] BYREF
  __int64 v18; // [rsp+30h] [rbp-A9h] BYREF
  _OWORD v19[2]; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v20; // [rsp+58h] [rbp-81h]
  _BYTE v21[16]; // [rsp+60h] [rbp-79h] BYREF
  __int128 v22; // [rsp+70h] [rbp-69h] BYREF
  __int128 v23; // [rsp+80h] [rbp-59h]
  __int128 v24; // [rsp+90h] [rbp-49h]
  __int64 v25; // [rsp+A0h] [rbp-39h]
  _BYTE v26[64]; // [rsp+B0h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+5Fh]

  v6 = this;
  *(_DWORD *)a4 = 0;
  LOBYTE(this) = (*(_DWORD *)a2 & 0x1A) != 0;
  if ( ((unsigned __int8)this & ((*(_DWORD *)a2 & 0x4000) == 0)) != 0 )
  {
    v7 = *((unsigned int *)a2 + 10);
    v8 = *((_QWORD *)a3 + 22);
    v9 = *(_QWORD *)(v8 + 8);
    InputForwardProcessor::GetInputForwardInputSite((__int64)this, &v18, *(_DWORD *)a2, v8);
    v10 = v18;
    if ( v18 )
    {
      if ( v9 )
      {
        v22 = 0LL;
        v23 = 0LL;
        v24 = 0LL;
        v25 = 0LL;
        memset_0(v26, 0, sizeof(v26));
        v11 = ToCompositionInputType(*(_DWORD *)a2);
        if ( (int)NtQueryCompositionInputQueueAndTransform(v9, v11, &v22, v26) >= 0 && (unsigned int)(v22 - 3) <= 1 )
        {
          v19[0] = v23;
          v19[1] = v24;
          v20 = v25;
          *(_QWORD *)v16 = 0LL;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v16);
          v17 = v10;
          wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v17);
          v12 = DWMInputTarget::Create((__int64)v19, &v17, v16);
          v13 = v12;
          if ( v12 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x7C,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputforwarder\\system\\l"
                   "ib\\inputforwardprocessor.cpp",
              (const char *)(unsigned int)v12);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v16);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
            return v13;
          }
          if ( *(_QWORD *)v16 )
          {
            v17 = v7;
            v15 = std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Try_emplace<unsigned __int64,>(
                    (float *)v6 + 8,
                    (__int64)v21,
                    (unsigned __int8 *)&v17);
            Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)(*(_QWORD *)v15 + 24LL), v16);
            *(_DWORD *)a4 = 1;
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v16);
        }
      }
    }
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return 0LL;
}
