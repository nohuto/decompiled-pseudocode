/*
 * XREFs of ??0MDCOBJA@@QEAA@PEAUHDC__@@W4HandleLockOptions@@@Z @ 0x140175244
 * Callers:
 *     NtGdiResizePalette @ 0x140142990 (NtGdiResizePalette.c)
 *     DxgkEngGetDC @ 0x1401AD150 (DxgkEngGetDC.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1401B0310 (NtGdiDdDDICreateDCFromMemory.c)
 *     GreSetPaletteEntries @ 0x14021B190 (GreSetPaletteEntries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MDCOBJA::MDCOBJA(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx

  *(_QWORD *)(a1 + 16) = Gre::Base::Globals((Gre::Base *)a1);
  LOBYTE(v4) = 1;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = HmgShareLockEx(a2, v4, 0LL);
  return a1;
}
