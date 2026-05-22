/*
 * XREFs of ?GetInputForwardInputSite@InputForwardProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputType@@PEAUHitTestResult@@@Z @ 0x1801ABA7C
 * Callers:
 *     ?OnHitTest@InputForwardProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801ABD20 (-OnHitTest@InputForwardProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x18002DE18 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ??$As@UIInputForwardTargetInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputForwardTargetInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005A278 (--$As@UIInputForwardTargetInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrR.c)
 *     ??$As@UIInputForwardAreaInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputForwardAreaInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005BDC4 (--$As@UIInputForwardAreaInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180098FD8 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     memcmp_0 @ 0x18009CC56 (memcmp_0.c)
 *     ?ConvertInputTypeToCompositionInputType@HitTestHelper@@SA?BW4CompositionInputType@@W4InputType@@@Z @ 0x1801A1F00 (-ConvertInputTypeToCompositionInputType@HitTestHelper@@SA-BW4CompositionInputType@@W4InputType@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall InputForwardProcessor::GetInputForwardInputSite(__int64 a1, __int64 *a2, char a3, __int64 a4)
{
  bool v6; // r15
  __int64 v7; // rax
  __int64 *v8; // rsi
  __int64 *v9; // rax
  __int64 v10; // r13
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rbx
  _QWORD *v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // eax
  __int64 v29; // r8
  __int64 *v31; // [rsp+28h] [rbp-28h]
  GUID Buf1; // [rsp+38h] [rbp-18h] BYREF
  __int64 v33; // [rsp+90h] [rbp+40h] BYREF
  __int64 v34; // [rsp+A8h] [rbp+58h]

  v33 = a1;
  Buf1 = GUID_NULL;
  v6 = 0;
  v7 = *(_QWORD *)(a4 + 104);
  v8 = *(__int64 **)(v7 - 24);
  v9 = *(__int64 **)(v7 - 16);
  v31 = v9;
  v10 = *(_QWORD *)GUID_NULL.Data4;
  v34 = *(_QWORD *)&GUID_NULL.Data1;
  while ( v8 != v9 )
  {
    if ( v6 )
      goto LABEL_29;
    if ( !memcmp_0(&Buf1, &GUID_NULL, 0x10uLL) )
    {
      if ( !*(_BYTE *)(*v8 + 480) )
        goto LABEL_33;
      v11 = HitTestHelper::ConvertInputTypeToCompositionInputType(a3);
      if ( *(_DWORD *)LegacyInputSinkData::GetCompositionInputQueue(v12 + 48, v11) )
        break;
      v13 = 0LL;
      v33 = 0LL;
      v14 = *(_QWORD *)(*v8 + 488);
      v15 = *(_QWORD *)(*v8 + 496);
      if ( v14 != v15 )
      {
        do
        {
          if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputForwardAreaInputObjectProxy>(
                      (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v14 + 8),
                      &v33) >= 0 )
            break;
          v14 += 16LL;
        }
        while ( v14 != v15 );
        v13 = v33;
      }
      v16 = v13 - 8;
      v17 = -v13;
      v18 = (_QWORD *)(v16 & -(__int64)(v17 != 0));
      if ( v18 )
        (*(void (__fastcall **)(__int64))*v18)(v16 & -(__int64)(v17 != 0));
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
      if ( v18 )
      {
        v19 = (*(__int64 (__fastcall **)(_QWORD *))(v18[1] + 24LL))(v18 + 1);
        Buf1 = *(GUID *)v19;
        v10 = *(_QWORD *)(v19 + 8);
        v34 = *(_QWORD *)&Buf1.Data1;
        (*(void (__fastcall **)(_QWORD *))(*v18 + 8LL))(v18);
      }
    }
    if ( memcmp_0(&Buf1, &GUID_NULL, 0x10uLL) )
    {
      v20 = 0LL;
      v33 = 0LL;
      v21 = *(_QWORD *)(*v8 + 488);
      v22 = *(_QWORD *)(*v8 + 496);
      if ( v21 != v22 )
      {
        do
        {
          if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputForwardTargetInputObjectProxy>(
                      (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v21 + 8),
                      &v33) >= 0 )
            break;
          v21 += 16LL;
        }
        while ( v21 != v22 );
        v20 = v33;
      }
      v23 = v20 - 8;
      v24 = -v20;
      v25 = (_QWORD *)(v23 & -(__int64)(v24 != 0));
      if ( v25 )
        (*(void (__fastcall **)(__int64))*v25)(v23 & -(__int64)(v24 != 0));
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
      if ( v25 )
      {
        v26 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(v25[1] + 24LL))(v25 + 1);
        v27 = *v26 - v34;
        if ( *v26 == v34 )
          v27 = v26[1] - v10;
        v6 = v27 == 0;
      }
      if ( v25 )
        (*(void (__fastcall **)(_QWORD *))(*v25 + 8LL))(v25);
      if ( v6 )
      {
LABEL_29:
        if ( !*(_BYTE *)(*v8 + 480) )
LABEL_33:
          std::_Throw_bad_optional_access();
        v28 = HitTestHelper::ConvertInputTypeToCompositionInputType(a3);
        if ( *(_DWORD *)LegacyInputSinkData::GetCompositionInputQueue(v29 + 48, v28) )
        {
          *a2 = *v8;
          wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(a2);
          return a2;
        }
      }
    }
    ++v8;
    v9 = v31;
  }
  *a2 = 0LL;
  return a2;
}
