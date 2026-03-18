/*
 * XREFs of ?MarkTransitional@CDDisplaySwapChainBuffer@@QEAAJPEAPEAUIDisplaySurfacePrivate@Core@Display@Devices@Windows@@@Z @ 0x18029ADA8
 * Callers:
 *     ?TransitionAwayCurrentPrimaries@CDDisplaySwapChain@@IEAAXXZ @ 0x18029B0AC (-TransitionAwayCurrentPrimaries@CDDisplaySwapChain@@IEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveResourceNotify@CDDisplaySwapChainBuffer@@QEAAXXZ @ 0x18029AFA0 (-RemoveResourceNotify@CDDisplaySwapChainBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplaySwapChainBuffer::MarkTransitional(
        CDDisplaySwapChainBuffer *this,
        struct Windows::Devices::Display::Core::IDisplaySurfacePrivate **a2)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, struct Windows::Devices::Display::Core::IDisplaySurfacePrivate **); // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::Devices::Display::Core::IDisplaySurfacePrivate *v10; // [rsp+30h] [rbp+8h] BYREF

  CDDisplaySwapChainBuffer::RemoveResourceNotify(this);
  v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct Windows::Devices::Display::Core::IDisplaySurfacePrivate **))*((_QWORD *)this + 25);
  v10 = 0LL;
  v5 = (**v4)(v4, &GUID_dc349291_8650_5167_a0ce_8c368a53e5d1, &v10);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(struct Windows::Devices::Display::Core::IDisplaySurfacePrivate *))(*(_QWORD *)v10 + 48LL))(v10);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v6 = 0;
      *a2 = v10;
      v10 = 0LL;
      goto LABEL_7;
    }
    v7 = 124LL;
  }
  else
  {
    v7 = 118LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"onecoreuap\\windows\\DWM\\dwmcore\\hw\\global\\DDisplaySwapChainBuffer.h",
    (const char *)(unsigned int)v5);
LABEL_7:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v10);
  return v6;
}
