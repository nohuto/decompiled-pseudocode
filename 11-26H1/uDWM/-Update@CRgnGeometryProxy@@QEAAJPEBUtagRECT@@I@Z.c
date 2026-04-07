/*
 * XREFs of ?Update@CRgnGeometryProxy@@QEAAJPEBUtagRECT@@I@Z @ 0x180058BC4
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x1800151F0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x18005897C (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRgnGeometryProxy::Update(CRgnGeometryProxy *this, const struct tagRECT *a2, unsigned int a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct tagRECT *, _QWORD, _DWORD, _DWORD))(**((_QWORD **)this + 2) + 488LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           a2,
           a3,
           0,
           0);
}
