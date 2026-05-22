/*
 * XREFs of ?EnsureCursorForPen@CursorProcessor@@AEAAXXZ @ 0x18014AD5C
 * Callers:
 *     ?OnHitTest@CursorProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18014B0E0 (-OnHitTest@CursorProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIniti.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?CursorProcessorCreateCursorForPen@Cursor@InputTraceLogging@@SAXXZ @ 0x18014AAF0 (-CursorProcessorCreateCursorForPen@Cursor@InputTraceLogging@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CursorProcessor::EnsureCursorForPen(CursorProcessor *this)
{
  __int64 *v2; // rbp
  __int64 v3; // rdi
  int (__fastcall *v4)(__int64, _QWORD, __int64, __int64); // rbx
  __int64 v5; // r9
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, int *, __int64, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+38h] [rbp-20h] BYREF
  __int64 v11; // [rsp+3Ch] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9 = 0LL;
  v2 = (__int64 *)((char *)this + 96);
  if ( !*((_QWORD *)this + 12) )
  {
    v3 = *((_QWORD *)this + 13);
    v4 = *(int (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v3 + 56LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
    LOBYTE(v5) = 1;
    if ( v4(v3, 0LL, 1LL, v5) < 0 )
    {
      v11 = 2LL;
      v10 = 0;
      v6 = *((_QWORD *)this + 13);
      v7 = *(__int64 (__fastcall **)(__int64, int *, __int64, __int64 *))(*(_QWORD *)v6 + 24LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
      v8 = v7(v6, &v10, 1LL, v2);
      if ( v8 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x17C,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\cursor\\system\\lib\\cursorprocessor.cpp",
          (const char *)(unsigned int)v8,
          (int)&v9);
      InputTraceLogging::Cursor::CursorProcessorCreateCursorForPen();
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
}
