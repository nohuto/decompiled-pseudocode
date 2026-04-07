/*
 * XREFs of ?Update@CRgnGeometryProxy@@QEAAJPEBUtagRECT@@I@Z @ 0x180011C64
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18000AA50 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x180011A18 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ?SetBorderRegion@CLegacyNonClientBackground@@QEAAJAEBUtagRECT@@@Z @ 0x18006A454 (-SetBorderRegion@CLegacyNonClientBackground@@QEAAJAEBUtagRECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRgnGeometryProxy::Update(CRgnGeometryProxy *this, const struct tagRECT *a2, unsigned int a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct tagRECT *, _QWORD, _DWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 640LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2,
           a3,
           0,
           0);
}
