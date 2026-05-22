/*
 * XREFs of ?ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification@@_N@Z @ 0x1800F28F8
 * Callers:
 *     ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x18002083C (-ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@KV?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x18000F4CC (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@KV-$function@$$A6AXPEAVInputCo.c)
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x180011120 (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x180053030 (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x180062EBC (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ?GetCurrentKeyboardModifierState@KeyboardModifierState@@QEAAJPEAK@Z @ 0x180067ED4 (-GetCurrentKeyboardModifierState@KeyboardModifierState@@QEAAJPEAK@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetExistingOrCreateNewInputTarget@InputDestTarget@@SA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBUtagINPUTDEST@@PEAUIInputTarget@@@Z @ 0x180090E30 (-GetExistingOrCreateNewInputTarget@InputDestTarget@@SA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@.c)
 *     _lambda_7f079bc5e87df2e09bd622ff86c26e64_::_lambda_7f079bc5e87df2e09bd622ff86c26e64_ @ 0x1800A7A50 (_lambda_7f079bc5e87df2e09bd622ff86c26e64_--_lambda_7f079bc5e87df2e09bd622ff86c26e64_.c)
 *     ?DropMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z @ 0x1800F14DC (-DropMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z.c)
 *     ?IsIdentityTransform@CInputTransform@@SA_NAEBUtagINPUT_TRANSFORM@@@Z @ 0x1800F24B0 (-IsIdentityTransform@CInputTransform@@SA_NAEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?ReceiveMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z @ 0x1800F3274 (-ReceiveMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z.c)
 *     ?ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800F3338 (-ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800F44E0 (-find@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Win32kInterop::ProcessInputMessage(
        Win32kInterop *this,
        const struct Win32kInterop::InputMessageContext *a2,
        const struct _InputMessageNotification *a3,
        char a4)
{
  unsigned int v8; // esi
  __int64 v9; // r8
  const char *v10; // r9
  __int64 v11; // r9
  _DWORD *v12; // rbx
  const struct InputInfo *v13; // rax
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  __int64 v20; // rax
  char v21; // al
  __int16 v22; // cx
  const struct InputInfo *v23; // rdx
  __int64 v24; // rax
  __int16 v25; // ax
  _QWORD *v26; // rax
  const struct std::nothrow_t *v27; // rdx
  int v28; // [rsp+28h] [rbp-A9h]
  const struct InputInfo *v29; // [rsp+38h] [rbp-99h] BYREF
  struct KeyboardModifierState *v30; // [rsp+40h] [rbp-91h] BYREF
  __int64 v31; // [rsp+48h] [rbp-89h] BYREF
  __int64 v32; // [rsp+50h] [rbp-81h] BYREF
  __int64 v33; // [rsp+58h] [rbp-79h] BYREF
  void *v34[2]; // [rsp+60h] [rbp-71h] BYREF
  __int64 (__fastcall **v35)(); // [rsp+70h] [rbp-61h] BYREF
  __int128 v36; // [rsp+78h] [rbp-59h]
  __int64 v37; // [rsp+88h] [rbp-49h]
  __int64 (__fastcall ***v38)(); // [rsp+A8h] [rbp-29h]
  _QWORD v39[8]; // [rsp+B0h] [rbp-21h] BYREF
  _QWORD v40[3]; // [rsp+F0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]
  __int64 v42; // [rsp+140h] [rbp+6Fh] BYREF

  if ( *(_DWORD *)a2 )
    return;
  v32 = *((_QWORD *)a2 + 1);
  v8 = *((_DWORD *)a3 + 38);
  if ( !v8 )
    v8 = -1;
  LODWORD(v42) = v8;
  InputETW::Win32kInterop::ReceivedInputMessage(v8);
  InputTraceLogging::ISM::ReceiveMouseInput(a3);
  if ( v8 != -1 && !Win32kInterop::IsDeviceAttached(this, v8, 1) )
  {
    InputTraceLogging::ISM::DropMouseInput(a3);
    v42 = 1LL;
    NtMITPostMouseInputMessage(&v32, 1LL, 0LL, &v42);
    return;
  }
  VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>((__int64)v34, 0x1D0uLL, v9, v10);
  v12 = v34[0];
  v29 = (const struct InputInfo *)v34[0];
  *(_DWORD *)v34[0] = 2;
  *((_DWORD *)v29 + 1) = v8;
  *((_DWORD *)v29 + 2) = *((_DWORD *)a3 + 34);
  *((_QWORD *)v29 + 2) = *((_QWORD *)a3 + 18);
  *((_QWORD *)v29 + 38) = v32;
  *((_BYTE *)v29 + 312) = a4;
  if ( *((_DWORD *)a2 + 1) == 1 )
    *((_BYTE *)v29 + 314) = 1;
  *((_DWORD *)v29 + 79) = 1;
  v13 = v29;
  *(_OWORD *)((char *)v29 + 236) = *(_OWORD *)((char *)a3 + 168);
  *(_OWORD *)((char *)v13 + 252) = *(_OWORD *)((char *)a3 + 184);
  *(_OWORD *)((char *)v13 + 268) = *(_OWORD *)((char *)a3 + 200);
  *(_OWORD *)((char *)v13 + 284) = *(_OWORD *)((char *)a3 + 216);
  *((_QWORD *)v29 + 8) = *((_QWORD *)a3 + 3);
  *((_DWORD *)v29 + 18) = *((_DWORD *)a3 + 4) & 1;
  if ( (*((_BYTE *)a3 + 232) & 1) != 0 )
  {
    *((_DWORD *)v29 + 19) = 1;
    *((_DWORD *)v29 + 20) = 100;
    *((_DWORD *)v29 + 21) = 100;
  }
  v28 = (_DWORD)v29 + 56;
  LOBYTE(v11) = 1;
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 54) + 72LL))(
          *((_QWORD *)this + 54),
          v8,
          1LL,
          v11);
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4CC,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v14,
      v28);
  v30 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
  v15 = KeyboardModifierState::Create(&v30);
  if ( v15 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4E0,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v15,
      v28);
  KeyboardModifierState::GetCurrentKeyboardModifierState(v30, (unsigned int *)v29 + 58);
  v12[81] = 1;
  v12[83] = 2;
  v16 = *((__int16 *)a3 + 64);
  v12[92] = v16;
  v17 = *((__int16 *)a3 + 65);
  v12[93] = v17;
  v12[88] = v16;
  v12[89] = v17;
  v18 = *((_DWORD *)a3 + 40);
  v12[94] = v18;
  v19 = *((_DWORD *)a3 + 41);
  v12[95] = v19;
  v12[90] = v18;
  v12[91] = v19;
  v12[80] = 4;
  v12[96] = *((_DWORD *)v29 + 2);
  *((_QWORD *)v12 + 50) = *((_QWORD *)v29 + 2);
  std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>>,0>>::find(
    (char *)this + 64,
    &v33,
    &v42);
  if ( v33 == *((_QWORD *)this + 9) || *(_DWORD *)(*(_QWORD *)(v33 + 24) + 4LL) == 2 )
    v20 = *((unsigned int *)v29 + 1);
  else
    v20 = -1LL;
  *((_QWORD *)v12 + 42) = v20;
  v21 = 0;
  if ( *((_QWORD *)a3 + 15) )
  {
    v22 = *((_WORD *)a3 + 60);
    if ( (v22 & 1) != 0 )
    {
      v12[83] |= 0x10u;
      v21 = 1;
    }
    if ( (v22 & 2) != 0 )
    {
      v12[83] |= 0x20u;
      v21 = 1;
    }
    if ( (v22 & 0x10) != 0 )
    {
      v12[83] |= 0x40u;
      v21 = 1;
    }
    if ( (v22 & 0x20) != 0 )
    {
      v12[83] |= 0x80u;
      v21 = 1;
    }
    if ( (v22 & 0x40) != 0 )
    {
      v12[83] |= 0x100u;
LABEL_31:
      v12[83] |= 4u;
      goto LABEL_32;
    }
    if ( v21 )
      goto LABEL_31;
  }
LABEL_32:
  if ( !CInputTransform::IsIdentityTransform((const struct InputInfo *)((char *)v29 + 236)) )
  {
    v12[83] |= 0x400000u;
    v23 = v29;
  }
  v24 = (unsigned int)(*((_DWORD *)a3 + 28) - 512);
  if ( (unsigned int)v24 <= 0xE )
  {
    *((_WORD *)v23 + 150) = word_180207E48[v24];
    v23 = v29;
    v25 = *((_WORD *)v29 + 150);
    if ( (v25 & 0xC0) != 0 && *((_WORD *)a3 + 61) == 2 )
    {
      *((_WORD *)v29 + 150) = 4 * v25;
      v23 = v29;
    }
  }
  if ( *((_DWORD *)a3 + 28) == 522 || *((_DWORD *)a3 + 28) == 526 )
    *((_WORD *)v23 + 151) = *((_WORD *)a3 + 61);
  InputDestTarget::GetExistingOrCreateNewInputTarget(
    &v31,
    (__int64)a3,
    *((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 53));
  v26 = lambda_7f079bc5e87df2e09bd622ff86c26e64_::_lambda_7f079bc5e87df2e09bd622ff86c26e64_(
          v40,
          (__int64)this,
          (__int64)&v29,
          (__int64)&v31);
  v38 = 0LL;
  v35 = off_1801E7F20;
  v36 = *(_OWORD *)v26;
  v37 = v26[2];
  v38 = &v35;
  v39[0] = off_1801E7EB8;
  v39[1] = &v31;
  v39[2] = a3;
  v39[7] = v39;
  Win32kInterop::DeliverToContextualProcessing((__int64)this, v29, *((_DWORD *)a3 + 59), (__int64)v39, (__int64)&v35);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(v34, v27);
}
