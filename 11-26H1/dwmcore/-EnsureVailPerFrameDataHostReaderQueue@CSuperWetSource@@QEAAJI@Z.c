/*
 * XREFs of ?EnsureVailPerFrameDataHostReaderQueue@CSuperWetSource@@QEAAJI@Z @ 0x180263834
 * Callers:
 *     ?SendMessageToHostForCreation@CSuperWetSource@@QEAAJ_K@Z @ 0x1802639D8 (-SendMessageToHostForCreation@CSuperWetSource@@QEAAJ_K@Z.c)
 *     ?EnqueueComputeScribbleOnHost@CGenericInk@@UEAAJ_KPEAVCComputeScribble@@@Z @ 0x18026F7D0 (-EnqueueComputeScribbleOnHost@CGenericInk@@UEAAJ_KPEAVCComputeScribble@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCSharedCircularQueueProducer@@U?$default_delete@VCSharedCircularQueueProducer@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1802636B4 (--1-$out_param_t@V-$unique_ptr@VCSharedCircularQueueProducer@@U-$default_delete@VCSharedCircular.c)
 *     ?Create@CSharedCircularQueueProducer@@SAJV?$span@E$0?0@gsl@@IPEAPEAV1@@Z @ 0x1802637A4 (-Create@CSharedCircularQueueProducer@@SAJV-$span@E$0-0@gsl@@IPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSuperWetSource::EnsureVailPerFrameDataHostReaderQueue(CSuperWetSource *this)
{
  __int64 v2; // rax
  int v3; // edi
  void *v5; // rax
  void *v6; // rcx
  int v7[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h]
  char *v9; // [rsp+30h] [rbp-28h] BYREF
  volatile __int32 **v10; // [rsp+38h] [rbp-20h] BYREF
  char v11; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((_QWORD *)this + 14) )
    goto LABEL_14;
  v9 = (char *)this + 112;
  v2 = *((_QWORD *)this + 17);
  v10 = 0LL;
  v11 = 1;
  if ( !v2 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  *(_QWORD *)v7 = 4096LL;
  v8 = v2;
  v3 = CSharedCircularQueueProducer::Create((__int64 *)v7, 0x80u, &v10);
  wil::details::out_param_t<std::unique_ptr<CSharedCircularQueueProducer>>::~out_param_t<std::unique_ptr<CSharedCircularQueueProducer>>((__int64)&v9);
  if ( v3 >= 0 )
  {
LABEL_14:
    if ( *((_QWORD *)this + 15) )
      return 0LL;
    v5 = MIDL_user_allocate(0x80uLL);
    v6 = (void *)*((_QWORD *)this + 15);
    *((_QWORD *)this + 15) = v5;
    if ( v6 )
      operator delete(v6);
    if ( *((_QWORD *)this + 15) )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\superwetsource.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\superwetsource.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
}
