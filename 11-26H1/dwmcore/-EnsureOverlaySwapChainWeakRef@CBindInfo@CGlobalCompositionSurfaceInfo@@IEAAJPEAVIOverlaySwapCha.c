/*
 * XREFs of ?EnsureOverlaySwapChainWeakRef@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJPEAVIOverlaySwapChain@@@Z @ 0x180127B2C
 * Callers:
 *     ?EnableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJPEAVIOverlaySwapChain@@@Z @ 0x1801BF858 (-EnableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJPEAVIOverlaySwapChain@@@Z.c)
 *     ?EnableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_NPEAVIOverlaySwapChain@@@Z @ 0x1801DC4FC (-EnableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_NPEAVIOverlaySwapChain@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::EnsureOverlaySwapChainWeakRef(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        struct IOverlaySwapChain *a2)
{
  unsigned int v2; // ebx
  __int64 *v3; // rbp
  __int64 (__fastcall **v6)(struct IOverlaySwapChain *, GUID *, __int64 *); // rax
  int v7; // eax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64 *); // rdi
  int v10; // eax
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  char v13; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  v3 = (__int64 *)((char *)this + 192);
  if ( !*((_QWORD *)this + 24) )
  {
    v6 = *(__int64 (__fastcall ***)(struct IOverlaySwapChain *, GUID *, __int64 *))a2;
    v12 = 0LL;
    v7 = (*v6)(a2, &GUID_73f2a332_aba0_4b29_88bc_6ee79b3941bc, &v12);
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x78Bu, 0LL);
    }
    else
    {
      v8 = v12;
      v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 24LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v3);
      v10 = v9(v8, v3);
      v2 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x78Du, 0LL);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v12);
        return v2;
      }
      *((_QWORD *)this + 25) = *(_QWORD *)(*(__int64 (__fastcall **)(struct IOverlaySwapChain *, char *))(*(_QWORD *)a2 + 232LL))(
                                            a2,
                                            &v13);
      *((_DWORD *)this + 52) = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *))(*(_QWORD *)a2 + 240LL))(a2);
    }
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v2;
}
