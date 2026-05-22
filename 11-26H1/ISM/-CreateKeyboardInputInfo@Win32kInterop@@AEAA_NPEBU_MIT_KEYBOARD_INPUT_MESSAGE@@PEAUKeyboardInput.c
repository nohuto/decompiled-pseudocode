/*
 * XREFs of ?CreateKeyboardInputInfo@Win32kInterop@@AEAA_NPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@PEAUKeyboardInputInfo@@@Z @ 0x180053210
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_1b0efb71d9072eeea077d490cef5cfbb__void__MIT_KEYBOARD_INPUT_MESSAGE_const___::_Do_call @ 0x180053120 (std--_Func_impl_no_alloc__lambda_1b0efb71d9072eeea077d490cef5cfbb__void__MIT_KEYBOARD_INPUT_MESS.c)
 *     ?ProcessLowLevelKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800F2F80 (-ProcessLowLevelKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSA.c)
 * Callees:
 *     ??$As@UIInputDeviceInfoStore@@@?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputDeviceInfoStore@@@WRL@Microsoft@@@Details@12@@Z @ 0x180053654 (--$As@UIInputDeviceInfoStore@@@-$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x18009AAB2 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?count@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x1800F4430 (-count@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDevice.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall Win32kInterop::CreateKeyboardInputInfo(
        Win32kInterop *this,
        const struct _MIT_KEYBOARD_INPUT_MESSAGE *a2,
        struct KeyboardInputInfo *a3)
{
  __int64 v6; // rsi
  const struct _MIT_KEYBOARD_INPUT_MESSAGE *v7; // r12
  const struct _MIT_KEYBOARD_INPUT_MESSAGE *v8; // rax
  unsigned int v9; // r15d
  char *v10; // r8
  __int64 v11; // rdx
  _WORD *v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int16 v15; // ax
  _WORD *v16; // rax
  _OWORD *v17; // rax
  _OWORD *v18; // rcx
  __int64 v19; // rdx
  _OWORD *v20; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v26; // [rsp+28h] [rbp-D8h] BYREF
  _DWORD v27[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C0h]
  int v29; // [rsp+48h] [rbp-B8h]
  __int64 v30; // [rsp+50h] [rbp-B0h]
  char v31; // [rsp+61h] [rbp-9Fh]
  __int16 v32; // [rsp+68h] [rbp-98h]
  __int16 v33; // [rsp+6Ah] [rbp-96h]
  __int16 v34; // [rsp+6Ch] [rbp-94h]
  _BYTE v35[32]; // [rsp+6Eh] [rbp-92h] BYREF
  __int16 v36; // [rsp+8Eh] [rbp-72h]
  _BYTE v37[256]; // [rsp+90h] [rbp-70h] BYREF
  int v38; // [rsp+190h] [rbp+90h]
  __int16 v39; // [rsp+194h] [rbp+94h]
  bool v40; // [rsp+196h] [rbp+96h]
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v6 = *(_QWORD *)a2;
  v7 = (const struct _MIT_KEYBOARD_INPUT_MESSAGE *)((char *)a2 + 344);
  v8 = (const struct _MIT_KEYBOARD_INPUT_MESSAGE *)((char *)a2 + 344);
  if ( *(_QWORD *)a2 )
    v8 = a2;
  v9 = *(_DWORD *)v8;
  v25[0] = *(_DWORD *)v8;
  if ( std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>>,0>>::count(
         (char *)this + 64,
         v25) )
  {
    goto LABEL_4;
  }
  *(_QWORD *)v25 = 0LL;
  v22 = Microsoft::WRL::ComPtr<ISystemInputRouter>::As<IInputDeviceInfoStore>((char *)this + 48, v25);
  if ( v22 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x176,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v22,
      v25[0]);
  v26 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)v25 + 24LL))(*(_QWORD *)v25, v9, &v26) >= 0 )
  {
    v23 = *(_QWORD *)v25;
    if ( *(_QWORD *)v25 )
    {
      *(_QWORD *)v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v6 = *(_QWORD *)a2;
LABEL_4:
    memset_0(v27, 0, 0x170uLL);
    v29 = 368;
    if ( v6 )
      v7 = a2;
    v27[1] = *(_DWORD *)v7;
    v30 = *((_QWORD *)a2 + 42);
    v39 = *((_WORD *)a2 + 166);
    v27[0] = 4;
    v27[2] = *((_DWORD *)a2 + 78);
    v28 = *((_QWORD *)a2 + 40);
    v40 = *((_DWORD *)a2 + 82) != 0;
    v10 = (char *)a2 + 8;
    v32 = *((_WORD *)a2 + 4);
    v33 = *((_WORD *)a2 + 5);
    v34 = *((_WORD *)a2 + 6);
    v36 = *((_WORD *)a2 + 135);
    v38 = *((_DWORD *)a2 + 68);
    v31 = 1;
    v11 = 16LL;
    v12 = v35;
    v13 = a2 - (const struct _MIT_KEYBOARD_INPUT_MESSAGE *)v35;
    v14 = 2LL;
    do
    {
      if ( v11 == -2147483630 )
        break;
      v15 = *(_WORD *)((char *)v12 + v13 + 276);
      if ( !v15 )
        break;
      *v12++ = v15;
      --v11;
    }
    while ( v11 );
    v16 = v12 - 1;
    if ( v11 )
      v16 = v12;
    *v16 = 0;
    v17 = v10 + 6;
    if ( v10 == (char *)-6LL )
    {
      memset_0(v37, 0, sizeof(v37));
      *(_DWORD *)_o__errno() = 22;
      invalid_parameter_noinfo();
    }
    else
    {
      v18 = v37;
      v19 = 2LL;
      do
      {
        *v18 = *v17;
        v18[1] = v17[1];
        v18[2] = v17[2];
        v18[3] = v17[3];
        v18[4] = v17[4];
        v18[5] = v17[5];
        v18[6] = v17[6];
        v18 += 8;
        *(v18 - 1) = v17[7];
        v17 += 8;
        --v19;
      }
      while ( v19 );
    }
    v20 = v27;
    do
    {
      *(_OWORD *)a3 = *v20;
      *((_OWORD *)a3 + 1) = v20[1];
      *((_OWORD *)a3 + 2) = v20[2];
      *((_OWORD *)a3 + 3) = v20[3];
      *((_OWORD *)a3 + 4) = v20[4];
      *((_OWORD *)a3 + 5) = v20[5];
      *((_OWORD *)a3 + 6) = v20[6];
      a3 = (struct KeyboardInputInfo *)((char *)a3 + 128);
      *((_OWORD *)a3 - 1) = v20[7];
      v20 += 8;
      --v14;
    }
    while ( v14 );
    *(_OWORD *)a3 = *v20;
    *((_OWORD *)a3 + 1) = v20[1];
    *((_OWORD *)a3 + 2) = v20[2];
    *((_OWORD *)a3 + 3) = v20[3];
    *((_OWORD *)a3 + 4) = v20[4];
    *((_OWORD *)a3 + 5) = v20[5];
    *((_OWORD *)a3 + 6) = v20[6];
    return 1;
  }
  v24 = *(_QWORD *)v25;
  if ( *(_QWORD *)v25 )
  {
    *(_QWORD *)v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  return 0;
}
