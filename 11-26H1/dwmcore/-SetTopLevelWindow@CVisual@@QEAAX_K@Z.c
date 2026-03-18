/*
 * XREFs of ?SetTopLevelWindow@CVisual@@QEAAX_K@Z @ 0x1801BC928
 * Callers:
 *     ?ProcessTopLevelNode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_TOPLEVELNODE@@@Z @ 0x1801BC8F4 (-ProcessTopLevelNode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_TOPLEVELNODE@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1801107DC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 */

void __fastcall CVisual::SetTopLevelWindow(CVisual *this, __int64 a2)
{
  int v3; // eax
  struct CSparseStorage::AllocatedStorage **v4; // rcx
  __int64 Buf1; // [rsp+38h] [rbp+10h] BYREF

  Buf1 = a2;
  v3 = memcmp_0(&Buf1, &`CVisual::SetTopLevelWindow'::`2'::sc_defaultValue, 8uLL);
  v4 = (struct CSparseStorage::AllocatedStorage **)((char *)this + 216);
  if ( v3 )
    CSparseStorage::SetData(v4, 1, 8u, &Buf1);
  else
    *((_DWORD *)*v4 + 1) &= ~0x80000000;
}
