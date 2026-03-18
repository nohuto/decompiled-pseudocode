/*
 * XREFs of ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x180193604
 * Callers:
 *     ?WorkerThreadMain@CComputeScribbleScheduler@@AEAAKXZ @ 0x18019337C (-WorkerThreadMain@CComputeScribbleScheduler@@AEAAKXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1800F8600 (McTemplateU0x_EventWriteTransfer.c)
 *     ?StopInternal@CComputeScribbleScheduler@@AEAAXXZ @ 0x1801932C8 (-StopInternal@CComputeScribbleScheduler@@AEAAXXZ.c)
 *     ?ClearScribbles@CComputeScribbleFramebuffer@@QEAAXXZ @ 0x180193324 (-ClearScribbles@CComputeScribbleFramebuffer@@QEAAXXZ.c)
 *     ?DecideBufferToDispatch@CComputeScribbleScheduler@@AEAAJPEAPEAVCComputeScribbleFramebuffer@@0@Z @ 0x180193914 (-DecideBufferToDispatch@CComputeScribbleScheduler@@AEAAJPEAPEAVCComputeScribbleFramebuffer@@0@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x180193D10 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIDCompositionDirectInkSuperWetRenderer@@PEAUComputeScribbleLatencyData@@@Z @ 0x180193D7C (-DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbl.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801BB3E4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z @ 0x18021B8C8 (-SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z.c)
 *     ?ReadyWakeupFence@CComputeScribbleScheduler@@AEAAJ_K@Z @ 0x18021BC18 (-ReadyWakeupFence@CComputeScribbleScheduler@@AEAAJ_K@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComputeScribbleScheduler::ProcessScribbleFrame(
        CComputeScribbleScheduler *this,
        __int64 a2,
        __int64 a3)
{
  LARGE_INTEGER *v4; // rbx
  unsigned int v5; // esi
  RTL_SRWLOCK *QuadPart; // rbx
  __int64 v7; // r15
  __int64 i; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  int ready; // edi
  __int64 v13; // rdx
  RTL_SRWLOCK *v14; // rdi
  int v15; // r15d
  CComputeScribbleFramebuffer *Ptr; // r12
  __int64 v17; // rbx
  __int64 v18; // rdi
  struct CComputeScribbleStopwatch *v19; // r8
  struct ID3D12CommandQueue *v20; // rdx
  struct IDCompositionDirectInkSuperWetRenderer *v21; // rax
  int v22; // eax
  int v23; // ebx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-29h] BYREF
  CComputeScribbleFramebuffer *v25; // [rsp+38h] [rbp-21h] BYREF
  _OWORD v26[3]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v27; // [rsp+70h] [rbp+17h]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+78h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_COMPUTESCRIBBLE_THREADWAKEUP_RAW,
      a3,
      1u,
      &v28);
  v4 = (LARGE_INTEGER *)*((_QWORD *)this + 12);
  v5 = 0;
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  v4[6] = PerformanceCount;
  QuadPart = (RTL_SRWLOCK *)((char *)this + 104);
  AcquireSRWLockExclusive((PSRWLOCK)this + 13);
  v7 = 0LL;
  PerformanceCount.QuadPart = (LONGLONG)this + 104;
  if ( !*((_BYTE *)this + 216) )
  {
    v10 = *((_QWORD *)this + 14);
    if ( !v10 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&PerformanceCount);
      return 0LL;
    }
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 64LL))(v10);
    v7 = v11;
    if ( !v11 )
    {
LABEL_7:
      if ( QuadPart )
        ReleaseSRWLockExclusive(QuadPart);
      return 0LL;
    }
    if ( v11 == -1 )
    {
      CComputeScribbleScheduler::StopInternal(this);
LABEL_35:
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&PerformanceCount);
      return v5;
    }
  }
  for ( i = *((_QWORD *)this + 16); ; i += 8LL )
  {
    if ( i == *((_QWORD *)this + 17) )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 14);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 15);
      goto LABEL_7;
    }
    if ( *(_BYTE *)(*(_QWORD *)i + 256LL) )
      break;
  }
  *((_QWORD *)this + 22) = 1LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
    McTemplateU0x_EventWriteTransfer(i, &EVTDESC_COMPUTESCRIBBLE_THREADWAKEUP, 1LL);
  v25 = 0LL;
  v28.Ptr = 0LL;
  ready = CComputeScribbleScheduler::DecideBufferToDispatch(this, (struct CComputeScribbleFramebuffer **)&v28, &v25);
  if ( ready >= 0 )
  {
    ready = CComputeScribbleScheduler::ReadyWakeupFence(this, v7 + 1);
    if ( ready < 0 )
    {
      v13 = 674LL;
      goto LABEL_18;
    }
    v14 = (RTL_SRWLOCK *)v25;
    v15 = 0;
    if ( v25 )
    {
      v15 = CComputeScribbleScheduler::SetupWakeupFence(
              this,
              (const struct CComputeScribbleScheduler::ScribbleFrame *)(*((_QWORD *)this + 19)
                                                                      + 32LL * *((unsigned int *)v25 + 65)));
      if ( v15 < 0 )
        CComputeScribbleFramebuffer::ClearScribbles(v14);
    }
    Ptr = (CComputeScribbleFramebuffer *)v28.Ptr;
    if ( v28.Ptr )
    {
      v17 = *((_QWORD *)this + 19);
      v18 = 32LL * *(unsigned int *)(v28.Ptr + 260);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        &PerformanceCount,
        0LL);
      v19 = (struct CComputeScribbleStopwatch *)*((_QWORD *)this + 12);
      v20 = (struct ID3D12CommandQueue *)*((_QWORD *)this + 2);
      v27 = 0LL;
      v21 = (struct IDCompositionDirectInkSuperWetRenderer *)*((_QWORD *)this + 26);
      memset(v26, 0, sizeof(v26));
      v22 = CComputeScribbleFramebuffer::DispatchScribbles(
              Ptr,
              v20,
              v19,
              *(_QWORD *)(v18 + v17),
              v21,
              (struct ComputeScribbleLatencyData *)v26);
      v23 = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2BE,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
          (const char *)(unsigned int)v22);
        v5 = v23;
        goto LABEL_35;
      }
      QuadPart = (RTL_SRWLOCK *)PerformanceCount.QuadPart;
    }
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2C6,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
        (const char *)(unsigned int)v15);
      v5 = v15;
      goto LABEL_35;
    }
    goto LABEL_7;
  }
  v13 = 671LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
    (const char *)(unsigned int)ready);
  if ( this != (CComputeScribbleScheduler *)-104LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 13);
  return (unsigned int)ready;
}
