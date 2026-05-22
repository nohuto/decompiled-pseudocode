/*
 * XREFs of ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x18002083C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_94fff237e78348d233dedf47fc0a83da__void__MIT_MOUSE_INPUT_MESSAGE_const___::_Do_call @ 0x18001F270 (std--_Func_impl_no_alloc__lambda_94fff237e78348d233dedf47fc0a83da__void__MIT_MOUSE_INPUT_MESSAGE.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     ?DeliverRawMouseToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x1800223E4 (-DeliverRawMouseToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V-$function@$$A6AXPEAV.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002A9EC (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x180053030 (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     ?ConstructInputInteropMessageFromMouseInputMessageForWheel@@YA?AU_MIT_INPUT_INTEROP_MESSAGE@@AEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x18007D37C (-ConstructInputInteropMessageFromMouseInputMessageForWheel@@YA-AU_MIT_INPUT_INTEROP_MESSAGE@@AEB.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetExistingOrCreateNewInputTarget@InputDestTarget@@SA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBUtagINPUTDEST@@PEAUIInputTarget@@@Z @ 0x180090E30 (-GetExistingOrCreateNewInputTarget@InputDestTarget@@SA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@.c)
 *     ?ReceiveMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x180098C98 (-ReceiveMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 *     ?DropMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x180098D84 (-DropMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?ConstructInputNotificationFromMouseInputMessage@@YA?AU_InputMessageNotification@@AEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800F12C0 (-ConstructInputNotificationFromMouseInputMessage@@YA-AU_InputMessageNotification@@AEBU_MIT_MOUSE.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification@@_N@Z @ 0x1800F28F8 (-ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Win32kInterop::ProcessMouseInputMessage(Win32kInterop *this, const struct _MIT_MOUSE_INPUT_MESSAGE *a2)
{
  struct _MIT_MOUSE_INPUT_MESSAGE *v3; // rbx
  unsigned int v4; // edi
  int v5; // eax
  __int64 v6; // rdi
  struct _MIT_MOUSE_INPUT_MESSAGE *v7; // r9
  __int64 v8; // rcx
  _OWORD *v9; // rax
  char *v10; // rcx
  _OWORD *v11; // rax
  __int64 v12; // r9
  struct _MIT_MOUSE_INPUT_MESSAGE *v13; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v19[8]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v20[8]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v21[408]; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD v22[4]; // [rsp+270h] [rbp+170h] BYREF
  __int64 v23; // [rsp+280h] [rbp+180h]
  int v24; // [rsp+288h] [rbp+188h]
  __int128 v25; // [rsp+2C8h] [rbp+1C8h]
  __int64 v26; // [rsp+2D8h] [rbp+1D8h]
  char v27; // [rsp+2EDh] [rbp+1EDh]
  char v28; // [rsp+2EEh] [rbp+1EEh]
  char v29; // [rsp+2F0h] [rbp+1F0h] BYREF
  _OWORD v30[15]; // [rsp+490h] [rbp+390h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+5A8h] [rbp+4A8h]

  v13 = a2;
  InputTraceLogging::ISM::ReceiveMouseInput(a2);
  v3 = v13;
  v17 = *((_QWORD *)v13 + 6);
  v4 = *(_DWORD *)v13;
  if ( *(_DWORD *)v13 )
  {
    if ( v4 != -1 )
    {
      if ( !Win32kInterop::IsDeviceAttached(this, v4, 1) )
      {
        InputTraceLogging::ISM::DropMouseInput(v13);
        v15[0] = 1LL;
        NtMITPostMouseInputMessage(&v17, 1LL, 0LL, v15, v13);
        return;
      }
      v3 = v13;
    }
  }
  else
  {
    v4 = -1;
  }
  memset_0(v22, 0, 0x218uLL);
  v24 = 536;
  v22[1] = v4;
  v22[0] = 4096;
  v22[2] = *((_DWORD *)v3 + 8);
  v23 = *((_QWORD *)v3 + 5);
  v25 = *(_OWORD *)((char *)v3 + 8);
  v26 = *((_QWORD *)v3 + 3);
  v5 = *((_DWORD *)v3 + 19);
  if ( v5 == 1 || ((v5 - 2) & 0xFFFFFFFD) == 0 )
    v27 = 1;
  v6 = 3LL;
  if ( *((_DWORD *)v3 + 19) == 3 )
  {
    v28 = 1;
    v9 = (_OWORD *)ConstructInputInteropMessageFromMouseInputMessageForWheel(v21, v3);
    v10 = &v29;
    do
    {
      *(_OWORD *)v10 = *v9;
      *((_OWORD *)v10 + 1) = v9[1];
      *((_OWORD *)v10 + 2) = v9[2];
      *((_OWORD *)v10 + 3) = v9[3];
      *((_OWORD *)v10 + 4) = v9[4];
      *((_OWORD *)v10 + 5) = v9[5];
      *((_OWORD *)v10 + 6) = v9[6];
      v10 += 128;
      *((_OWORD *)v10 - 1) = v9[7];
      v9 += 8;
      --v6;
    }
    while ( v6 );
    *(_OWORD *)v10 = *v9;
    *((_QWORD *)v10 + 2) = *((_QWORD *)v9 + 2);
    v3 = v13;
  }
  InputDestTarget::GetExistingOrCreateNewInputTarget(&v14, (char *)v3 + 72, *((_QWORD *)this + 53));
  v18 = *((_QWORD *)v13 + 21);
  v16 = *((_DWORD *)v13 + 44);
  v20[0] = off_1801DF600;
  v20[1] = &v13;
  v20[2] = v22;
  v20[7] = v20;
  v19[0] = off_1801DF680;
  v19[1] = &v14;
  v19[2] = &v18;
  v19[3] = &v16;
  v19[7] = v19;
  Win32kInterop::DeliverRawMouseToContextualProcessing(this, v22, v19, v20);
  v7 = v13;
  if ( *((_DWORD *)v13 + 19) == 2 )
    goto LABEL_23;
  if ( IsEdition(0x3DDA1uLL) )
  {
    v7 = v13;
LABEL_23:
    if ( *((_DWORD *)v7 + 19) == 4 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x3CC,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)v7);
    v11 = (_OWORD *)ConstructInputNotificationFromMouseInputMessage(v21, v7);
    v30[0] = *v11;
    v30[1] = v11[1];
    v30[2] = v11[2];
    v30[3] = v11[3];
    v30[4] = v11[4];
    v30[5] = v11[5];
    v30[6] = v11[6];
    v30[7] = v11[7];
    v11 += 8;
    v30[8] = *v11;
    v30[9] = v11[1];
    v30[10] = v11[2];
    v30[11] = v11[3];
    v30[12] = v11[4];
    v30[13] = v11[5];
    v30[14] = v11[6];
    LODWORD(v15[0]) = 0;
    HIDWORD(v15[0]) = *(_DWORD *)(v12 + 76);
    v15[1] = *(_QWORD *)(v12 + 48);
    Win32kInterop::ProcessInputMessage(
      this,
      (const struct Win32kInterop::InputMessageContext *)v15,
      (const struct _InputMessageNotification *)v30,
      *(_DWORD *)(v12 + 188) != 0);
  }
  if ( *((_DWORD *)v13 + 19) == 2 || *((_DWORD *)v13 + 19) == 1 )
    Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((char *)this + 424, &v14);
  v8 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
}
