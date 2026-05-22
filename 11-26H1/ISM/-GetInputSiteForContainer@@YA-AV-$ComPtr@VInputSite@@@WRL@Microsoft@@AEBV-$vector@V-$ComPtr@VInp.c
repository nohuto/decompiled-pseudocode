/*
 * XREFs of ?GetInputSiteForContainer@@YA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18004FA30
 * Callers:
 *     ?OnHitTest@CursorSuppressionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18014A4D0 (-OnHitTest@CursorSuppressionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualPro.c)
 *     ?OnHitTest@CursorProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18014B0E0 (-OnHitTest@CursorProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIniti.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall GetInputSiteForContainer(__int64 *a1, __int64 **a2)
{
  __int64 *v3; // rdi
  __int64 *v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rbp
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // r15
  int (__fastcall *v9)(_QWORD, GUID *, __int64 *); // r12
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v3 = *a2;
  v4 = a2[1];
  while ( 1 )
  {
    if ( v3 == v4 )
    {
      *a1 = 0LL;
      return a1;
    }
    v5 = 0LL;
    v11 = 0LL;
    v6 = *(_QWORD *)(*v3 + 488);
    v7 = *(_QWORD *)(*v3 + 496);
    if ( v6 != v7 )
    {
      while ( 1 )
      {
        v8 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v6 + 8);
        v9 = **v8;
        if ( v5 )
        {
          v11 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
        if ( v9(v8, &GUID_8ddffe9c_458e_6d51_c227_1374408f672c, &v11) >= 0 )
          break;
        v6 += 16LL;
        if ( v6 == v7 )
          break;
        v5 = v11;
      }
      if ( v11 )
        break;
    }
    ++v3;
  }
  *a1 = *v3;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(a1);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  return a1;
}
