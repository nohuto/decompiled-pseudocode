/*
 * XREFs of ?Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSectionBase@@III@Z @ 0x180288E48
 * Callers:
 *     ?Create@CGenericInkTipPointSource@@SAJPEAVCSharedSectionBase@@IIIPEAPEAV1@@Z @ 0x180288CEC (-Create@CGenericInkTipPointSource@@SAJPEAVCSharedSectionBase@@IIIPEAPEAV1@@Z.c)
 * Callees:
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z @ 0x180055550 (-ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z @ 0x1800E53B0 (--4-$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z.c)
 *     ?Create@CSharedCircularQueue@@SAJV?$span@$$CBE$0?0@gsl@@IPEAPEAV1@@Z @ 0x1802636EC (-Create@CSharedCircularQueue@@SAJV-$span@$$CBE$0-0@gsl@@IPEAPEAV1@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCSharedCircularQueue@@U?$default_delete@VCSharedCircularQueue@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180284A50 (--1-$out_param_t@V-$unique_ptr@VCSharedCircularQueue@@U-$default_delete@VCSharedCircularQueue@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGenericInkTipPointSource::Initialize(
        CGenericInkTipPointSource *this,
        struct CSharedSectionBase *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v8; // rsi
  const void *v9; // rdi
  __int64 result; // rax
  int v11; // edi
  int v12[2]; // [rsp+20h] [rbp-38h] BYREF
  const void *v13; // [rsp+28h] [rbp-30h]
  char *v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+38h] [rbp-20h] BYREF
  char v16; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = a4;
  v9 = CSharedSectionBase::ResolveAllocation(a2, a3, a4);
  if ( v9 )
  {
    v15 = 0LL;
    v14 = (char *)this + 24;
    v16 = 1;
    gsl::details::extent_type<-1>::extent_type<-1>(v12, v8);
    if ( *(_QWORD *)v12 == -1LL )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v13 = v9;
    v11 = CSharedCircularQueue::Create((unsigned int *)v12, a5, &v15);
    wil::details::out_param_t<std::unique_ptr<CSharedCircularQueue>>::~out_param_t<std::unique_ptr<CSharedCircularQueue>>((__int64)&v14);
    if ( v11 >= 0 )
    {
      Microsoft::WRL::ComPtr<CBaseExpression>::operator=((__int64 *)this + 2, (__int64)a2);
      result = 0LL;
      *((_DWORD *)this + 10) = a3;
      *((_DWORD *)this + 11) = v8;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericinktippointsource.cpp",
        (const char *)(unsigned int)v11);
      return (unsigned int)v11;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericinktippointsource.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  return result;
}
