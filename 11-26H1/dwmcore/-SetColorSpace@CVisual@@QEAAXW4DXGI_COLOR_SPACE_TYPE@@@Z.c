/*
 * XREFs of ?SetColorSpace@CVisual@@QEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180211BF8
 * Callers:
 *     ?ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_FORCELOWCOLOR@@@Z @ 0x180211BC4 (-ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_FORCELOWCOLOR@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1801107DC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 */

void __fastcall CVisual::SetColorSpace(CVisual *this, enum DXGI_COLOR_SPACE_TYPE a2)
{
  int v3; // eax
  struct CSparseStorage::AllocatedStorage **v4; // rcx
  enum DXGI_COLOR_SPACE_TYPE Buf1; // [rsp+38h] [rbp+10h] BYREF

  Buf1 = a2;
  v3 = memcmp_0(&Buf1, &`CVisual::SetColorSpace'::`2'::sc_defaultValue, 4uLL);
  v4 = (struct CSparseStorage::AllocatedStorage **)((char *)this + 216);
  if ( v3 )
    CSparseStorage::SetData(v4, 6, 4u, &Buf1);
  else
    *((_DWORD *)*v4 + 1) &= ~0x4000000u;
}
