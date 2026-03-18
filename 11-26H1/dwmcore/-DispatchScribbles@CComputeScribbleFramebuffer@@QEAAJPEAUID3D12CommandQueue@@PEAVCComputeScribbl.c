/*
 * XREFs of ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIDCompositionDirectInkSuperWetRenderer@@PEAUComputeScribbleLatencyData@@@Z @ 0x180193D7C
 * Callers:
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x180193604 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180199E68 (McTemplateU0xq_EventWriteTransfer.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801BB3E4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIDCompositionDirectInkSuperWetRenderer@@PEAUComputeScribbleLatencyData@@@Z @ 0x1801BDE24 (-BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIDComposi.c)
 *     ?GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ @ 0x1801C9BF0 (-GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ.c)
 *     ?WaitForCommandList@CComputeScribbleFramebuffer@@AEAAJPEAUID3D12CommandQueue@@@Z @ 0x1801FDACC (-WaitForCommandList@CComputeScribbleFramebuffer@@AEAAJPEAUID3D12CommandQueue@@@Z.c)
 *     ?LockForDraw@CComputeScribbleFramebuffer@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180214A94 (-LockForDraw@CComputeScribbleFramebuffer@@AEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_po.c)
 *     McTemplateU0xxxq_EventWriteTransfer @ 0x18025D960 (McTemplateU0xxxq_EventWriteTransfer.c)
 *     ?DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z @ 0x18028C9A4 (-DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComputeScribbleFramebuffer::DispatchScribbles(
        struct ID3D12Resource **this,
        struct ID3D12CommandQueue *a2,
        struct CComputeScribbleStopwatch *a3,
        __int64 a4,
        struct IDCompositionDirectInkSuperWetRenderer *a5,
        struct ComputeScribbleLatencyData *a6)
{
  int v6; // r15d
  unsigned int v10; // ebx
  struct ComputeScribbleLatencyData *v11; // r13
  int v12; // eax
  int v13; // esi
  int v15; // eax
  enum D3D12_RESOURCE_STATES v16; // r8d
  unsigned int v17; // esi
  __int64 v18; // rdi
  float ElapsedTimeMs; // xmm0_4
  unsigned __int64 v20; // rax
  float v21; // xmm0_4
  unsigned __int64 v22; // rbx
  int v23; // edx
  int v24; // ecx
  float v25; // xmm0_4
  struct ID3D12Resource *v26; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char v28; // [rsp+70h] [rbp+8h] BYREF

  v6 = a4;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
    McTemplateU0xq_EventWriteTransfer(
      this,
      &EVTDESC_COMPUTESCRIBBLE_FRAMEDISPATCH_Start,
      a4,
      *((unsigned int *)this + 65));
  CComputeScribbleFramebuffer::LockForDraw(this, &v28);
  v10 = 0;
  if ( !this[11] )
    goto LABEL_6;
  v11 = a6;
  v12 = CComputeScribbleFramebuffer::BuildCommandList((CComputeScribbleFramebuffer *)this, a3, a5, a6);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribbleframebuffer.cpp",
      (const char *)(unsigned int)v12);
    v10 = v13;
LABEL_6:
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v28);
    return v10;
  }
  v26 = this[5];
  ((void (__fastcall *)(struct ID3D12CommandQueue *, __int64, struct ID3D12Resource **))a2->lpVtbl->ExecuteCommandLists)(
    a2,
    1LL,
    &v26);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v28);
  v15 = CComputeScribbleFramebuffer::WaitForCommandList((CComputeScribbleFramebuffer *)this, a2);
  v17 = v15;
  if ( v15 >= 0 )
  {
    if ( g_LockAndReadComputeScribble )
      DebugInspectSurface(a2, this[3], v16);
    v18 = *((_QWORD *)a3 + 6);
    ElapsedTimeMs = CComputeScribbleStopwatch::GetElapsedTimeMs(a3);
    v20 = 0LL;
    v21 = (float)(ElapsedTimeMs / 1000.0) * *((float *)a3 + 2);
    if ( v21 >= 9.223372e18 )
    {
      v21 = v21 - 9.223372e18;
      if ( v21 < 9.223372e18 )
        v20 = 0x8000000000000000uLL;
    }
    v22 = *((_QWORD *)a3 + 6) + v20 + (unsigned int)(int)v21;
    *((_QWORD *)v11 + 4) = v22;
    v25 = CComputeScribbleStopwatch::GetElapsedTimeMs(a3) * 1000.0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      McTemplateU0xxxq_EventWriteTransfer(v24, v23, v6, v18, v22, (int)v25);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAD,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribbleframebuffer.cpp",
      (const char *)(unsigned int)v15);
    return v17;
  }
}
