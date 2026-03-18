/*
 * XREFs of ?ReadyWakeupFence@CComputeScribbleScheduler@@AEAAJ_K@Z @ 0x18021BC18
 * Callers:
 *     ?Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@II@Z @ 0x180132D2C (-Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@II@Z.c)
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x180193604 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1800F8600 (McTemplateU0x_EventWriteTransfer.c)
 *     ??4?$com_ptr_t@VIBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801044B4 (--4-$com_ptr_t@VIBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComputeScribbleScheduler::ReadyWakeupFence(CComputeScribbleScheduler *this, __int64 a2)
{
  __int64 *v4; // rdi
  _QWORD *v5; // rsi
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 216) )
  {
    v4 = (__int64 *)((char *)this + 120);
    v5 = (_QWORD *)((char *)this + 112);
    if ( *((_QWORD *)this + 15) )
    {
      wil::com_ptr_t<IBitmapLock,wil::err_returncode_policy>::operator=((__int64 *)this + 14, (__int64 *)this + 15);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v4);
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v5 + 72LL))(*v5, a2, *((_QWORD *)this + 11));
    v8 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A7,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
        (const char *)(unsigned int)v6);
      return v8;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      McTemplateU0x_EventWriteTransfer(v7, &EVTDESC_COMPUTESCRIBBLE_WAKEUPEVENTREADY, a2);
  }
  return 0LL;
}
