/*
 * XREFs of ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x1801B0B24
 * Callers:
 *     ?OnHitTest@EdgyLegacyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801AD100 (-OnHitTest@EdgyLegacyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorI.c)
 *     ?Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z @ 0x1801AFD10 (-Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x180013B4C (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002A9EC (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18002AE40 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002C510 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x18004DF38 (-Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall EdgyProcessorTarget::UpdateInputTarget(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  _OWORD *v4; // r15
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 v7; // r14
  char v8; // si
  __int64 *v9; // r12
  int (__fastcall ***v10)(_QWORD, GUID *, int *); // rax
  int (__fastcall *v11)(_QWORD, GUID *, int *); // rbx
  __int64 v13; // rbx
  struct InputSiteManager *InputSiteManager; // rax
  char *InputSiteFromInputSinkHandle; // rax
  __int64 v16; // rcx
  unsigned int v17; // esi
  int v18; // eax
  const char *v19; // r9
  int v20[2]; // [rsp+20h] [rbp-88h] BYREF
  int (__fastcall ***v21)(_QWORD, _QWORD, _QWORD); // [rsp+28h] [rbp-80h] BYREF
  __int64 v22; // [rsp+30h] [rbp-78h] BYREF
  __int64 v23; // [rsp+38h] [rbp-70h]
  __int64 *v24; // [rsp+40h] [rbp-68h]
  __int64 v25; // [rsp+48h] [rbp-60h]
  wil::ResultException *v26; // [rsp+50h] [rbp-58h] BYREF
  __int64 v27; // [rsp+60h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v25 = a1;
  v27 = a2;
  v23 = a3;
  v8 = 0;
  v9 = (__int64 *)(a1 + 128);
  v24 = (__int64 *)(a1 + 128);
  v10 = *(int (__fastcall ****)(_QWORD, GUID *, int *))(a1 + 128);
  v21 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v10;
  if ( !v10 )
    goto LABEL_9;
  *(_QWORD *)v20 = 0LL;
  v11 = **v10;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v20);
  if ( v11(v21, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, v20) >= 0 )
  {
    if ( !*(_QWORD *)v20 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x74,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
        (const char *)0x8000FFFFLL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v20);
      return 2147549183LL;
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)v20 + 24LL))(*(_QWORD *)v20, v6, v5);
    if ( v8 && v5 )
      NtCloseCompositionInputSink(v5);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v20);
  if ( !v8 )
  {
LABEL_9:
    v22 = 0LL;
    v13 = 0LL;
    v21 = 0LL;
    if ( v5 )
    {
      try
      {
        InputSiteManager = ISMStatics::GetInputSiteManager();
        InputSiteFromInputSinkHandle = (char *)InputSiteManager::GetInputSiteFromInputSinkHandle(
                                                 (__int64)InputSiteManager,
                                                 (__int64)v20,
                                                 v5);
        Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)&v21, InputSiteFromInputSinkHandle);
        v16 = *(_QWORD *)v20;
        if ( *(_QWORD *)v20 )
        {
          *(_QWORD *)v20 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
      catch ( wil::ResultException *v26 )
      {
        v19 = (const char *)*((unsigned int *)v26 + 8);
        v20[0] = (int)v19;
        if ( (int)v19 >= 0 )
        {
          v4 = a4;
          v9 = v24;
          v7 = v25;
          v6 = v27;
          v5 = v23;
          goto LABEL_16;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9F,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
          v19);
        if ( v21 )
          ((void (__fastcall *)(int (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v21)[2])(v21);
        v17 = v20[0];
LABEL_20:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
        return v17;
      }
LABEL_16:
      v13 = (__int64)v21;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
    v21 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v13;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v21);
    v18 = DWMInputTarget::Create(v6, &v21, &v22);
    v17 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA6,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
        (const char *)(unsigned int)v18);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      goto LABEL_20;
    }
    NtCloseCompositionInputSink(v5);
    Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=(v9, &v22);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  }
  *(_DWORD *)(v7 + 32) = 0;
  *(_OWORD *)(v7 + 48) = *v4;
  *(_OWORD *)(v7 + 64) = v4[1];
  return 0LL;
}
