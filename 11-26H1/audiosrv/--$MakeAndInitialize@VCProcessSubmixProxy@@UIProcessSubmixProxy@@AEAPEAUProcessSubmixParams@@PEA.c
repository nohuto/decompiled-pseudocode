/*
 * XREFs of ??$MakeAndInitialize@VCProcessSubmixProxy@@UIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@AEAKAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAUIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@$$QEAPEAUPROCESS_SUBMIX_DESCRIPTOR@@$$QEAPEAUIStreamGroupProxy@@AEAKAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800F89C4
 * Callers:
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUIProcessSubmixProxy@@@Z @ 0x1800FDA20 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KAEBV-$vector@V-$com_ptr_.c)
 * Callees:
 *     ??0CProcessSubmixProxy@@QEAA@XZ @ 0x180074A40 (--0CProcessSubmixProxy@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@KAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800FF3FC (-RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CProcessSubmixProxy,IProcessSubmixProxy,ProcessSubmixParams * &,PROCESS_SUBMIX_DESCRIPTOR *,IStreamGroupProxy *,unsigned long &,std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>> const &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        CProcessSubmixProxy *a5)
{
  void *v9; // rax
  int v10; // edi
  CProcessSubmixProxy *v11; // rbx
  void *v13; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = operator new[](0xE0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v9;
  if ( v9 )
  {
    v11 = CProcessSubmixProxy::CProcessSubmixProxy((CProcessSubmixProxy *)v9);
    a5 = v11;
    v13 = 0LL;
    v10 = CProcessSubmixProxy::RuntimeClassInitialize((_DWORD)v11, *a2, *a3, *a4);
    if ( v10 >= 0 )
    {
      v10 = (**(__int64 (__fastcall ***)(CProcessSubmixProxy *, GUID *, _QWORD *))v11)(
              v11,
              &GUID_6fa8c0b3_a926_48af_a753_f702dad2b4f0,
              a1);
      (*(void (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    else if ( v11 )
    {
      (*(void (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  else
  {
    v10 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v13);
  return (unsigned int)v10;
}
