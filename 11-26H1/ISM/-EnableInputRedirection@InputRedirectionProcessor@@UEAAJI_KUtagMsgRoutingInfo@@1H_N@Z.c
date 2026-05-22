/*
 * XREFs of ?EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z @ 0x1801B44F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@AEAHPEAVInputRedirectionTarget@@@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@QEAAAEAU?$pair@KPEAVInputRedirectionTarget@@@1@AEAH$$QEAPEAVInputRedirectionTarget@@@Z @ 0x1801B418C (--$emplace_back@AEAHPEAVInputRedirectionTarget@@@-$vector@U-$pair@KPEAVInputRedirectionTarget@@@.c)
 *     ?CallCallbackWithResult@InputRedirectionProcessor@@AEAAJUtagMsgRoutingInfo@@J@Z @ 0x1801B42B0 (-CallCallbackWithResult@InputRedirectionProcessor@@AEAAJUtagMsgRoutingInfo@@J@Z.c)
 *     ?erase@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KPEAVInputRedirectionTarget@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KPEAVInputRedirectionTarget@@@std@@@std@@@std@@@2@@Z @ 0x1801B47D0 (-erase@-$vector@U-$pair@KPEAVInputRedirectionTarget@@@std@@V-$allocator@U-$pair@KPEAVInputRedire.c)
 *     ?Create@InputRedirectionTarget@@SAJK_KPEAUtagMsgRoutingInfo@@PEAPEAV1@W4InputType@@_N@Z @ 0x1801B4900 (-Create@InputRedirectionTarget@@SAJK_KPEAUtagMsgRoutingInfo@@PEAPEAV1@W4InputType@@_N@Z.c)
 *     ?IsValid@InputRedirectionTarget@@QEAA_NXZ @ 0x1801B4DA0 (-IsValid@InputRedirectionTarget@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputRedirectionProcessor::EnableInputRedirection(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        char a7)
{
  unsigned __int8 v9; // al
  int v10; // edi
  signed int v11; // ebx
  __int64 i; // rbx
  InputRedirectionTarget *v13; // r15
  __int64 j; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v19; // [rsp+30h] [rbp-51h] BYREF
  __int64 v20; // [rsp+38h] [rbp-49h] BYREF
  __int64 v21; // [rsp+40h] [rbp-41h]
  _OWORD v22[2]; // [rsp+50h] [rbp-31h] BYREF
  __int64 v23; // [rsp+70h] [rbp-11h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+47h]

  v21 = a4;
  v20 = a3;
  v9 = IsEdition(8778LL);
  v10 = a6;
  if ( !v9 || a6 == 0x4000 )
  {
    for ( i = *(_QWORD *)(a1 + 72); i != *(_QWORD *)(a1 + 80); i += 16LL )
    {
      if ( (a6 & *(_DWORD *)i) != 0 )
      {
        v13 = *(InputRedirectionTarget **)(i + 8);
        if ( InputRedirectionTarget::IsValid(v13) )
          goto LABEL_3;
        std::vector<std::pair<unsigned long,InputRedirectionTarget *>>::erase(a1 + 72, &v19, i);
        (*(void (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)v13 + 16LL))(v13);
        break;
      }
    }
    v19 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    v11 = InputRedirectionTarget::Create(a2, v20, v21, &v19, v10, a7);
    if ( v11 >= 0 )
    {
      v11 = 0;
      for ( j = *(_QWORD *)(a1 + 72); j != *(_QWORD *)(a1 + 80); j += 16LL )
      {
        if ( *(_DWORD *)j == v10 )
        {
          v15 = v19;
          v19 = 0LL;
          *(_QWORD *)(j + 8) = v15;
          goto LABEL_19;
        }
        if ( (v10 & *(_DWORD *)j) != 0 )
        {
          v11 = -2147024809;
          goto LABEL_19;
        }
      }
      v16 = v19;
      v19 = 0LL;
      v20 = v16;
      std::vector<std::pair<unsigned long,InputRedirectionTarget *>>::emplace_back<int &,InputRedirectionTarget *>(
        (__int64 *)(a1 + 72),
        &a6,
        &v20);
    }
LABEL_19:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
  }
  else
  {
LABEL_3:
    v11 = -2147024891;
  }
  if ( *(_DWORD *)a5 )
  {
    v22[0] = *(_OWORD *)a5;
    v22[1] = *(_OWORD *)(a5 + 16);
    v23 = *(_QWORD *)(a5 + 32);
    v17 = InputRedirectionProcessor::CallCallbackWithResult(a1 - 8, (__int64)v22, v11);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF8,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib\\"
             "inputredirectionprocessor.cpp",
        (const char *)(unsigned int)v17);
  }
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x100,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib\\in"
           "putredirectionprocessor.cpp",
      (const char *)(unsigned int)v11);
  return 0LL;
}
