/*
 * XREFs of ??0CDirectFlipInfo@@QEAA@AEBV0@@Z @ 0x1801976C8
 * Callers:
 *     ?ApplyConfiguration@COverlayContext@@QEAAX_NPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x1800F0094 (-ApplyConfiguration@COverlayContext@@QEAAX_NPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@.c)
 * Callees:
 *     ?reset@?$shared_ptr@VCRegion@@@std@@QEAAXXZ @ 0x180126C20 (-reset@-$shared_ptr@VCRegion@@@std@@QEAAXXZ.c)
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180154A34 (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CDirectFlipInfo *__fastcall CDirectFlipInfo::CDirectFlipInfo(CDirectFlipInfo *this, const struct CDirectFlipInfo *a2)
{
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
  wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
    (__int64 *)this + 2,
    (__int64 *)a2 + 2);
  *((_QWORD *)this + 3) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 64LL))(*((_QWORD *)a2 + 2));
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 1;
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 13);
  *((_QWORD *)this + 7) = 0LL;
  *((_OWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0x1000000;
  *((_WORD *)this + 54) = 0;
  std::shared_ptr<CRegion>::reset((_QWORD *)this + 4);
  return this;
}
