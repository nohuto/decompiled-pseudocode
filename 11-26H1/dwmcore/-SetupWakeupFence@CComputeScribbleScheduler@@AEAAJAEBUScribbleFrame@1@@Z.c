/*
 * XREFs of ?SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z @ 0x18021B8C8
 * Callers:
 *     ?Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@II@Z @ 0x180132D2C (-Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@II@Z.c)
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x180193604 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@VIBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801044B4 (--4-$com_ptr_t@VIBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180150EAC (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?CreateWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@PEAPEAUID3D12Fence@@@Z @ 0x1801DCA28 (-CreateWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@PEAPEAUID3D12Fence@@@Z.c)
 *     ?RequiresNewWakeupFence@CComputeScribbleScheduler@@AEBA_NAEBUScribbleFrame@1@@Z @ 0x18021F50C (-RequiresNewWakeupFence@CComputeScribbleScheduler@@AEBA_NAEBUScribbleFrame@1@@Z.c)
 */

__int64 __fastcall CComputeScribbleScheduler::SetupWakeupFence(
        wil::details **this,
        const struct CComputeScribbleScheduler::ScribbleFrame *a2)
{
  int v4; // eax
  unsigned int v5; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ID3D12Fence *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 216) )
  {
    if ( *((_BYTE *)this + 217) )
      wil::details::SetEvent(this[10], a2);
  }
  else if ( CComputeScribbleScheduler::RequiresNewWakeupFence((CComputeScribbleScheduler *)this, a2) )
  {
    v8 = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v8);
    v4 = CComputeScribbleScheduler::CreateWakeupFence((CComputeScribbleScheduler *)this, a2, &v8);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x184,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
        (const char *)(unsigned int)v4);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v8);
      return v5;
    }
    wil::com_ptr_t<IBitmapLock,wil::err_returncode_policy>::operator=(
      (__int64 *)((char *)this + (this[14] != 0LL ? 120LL : 112LL)),
      (__int64 *)&v8);
    this[23] = (wil::details *)*((_QWORD *)a2 + 2);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v8);
  }
  return 0LL;
}
