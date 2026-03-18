/*
 * XREFs of ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x14016EDB0
 * Callers:
 *     ??1DCOBJA@@QEAA@XZ @ 0x14009A8C8 (--1DCOBJA@@QEAA@XZ.c)
 *     NtGdiResizePalette @ 0x140142990 (NtGdiResizePalette.c)
 *     DxgkEngGetDC @ 0x1401AD150 (DxgkEngGetDC.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1401B0310 (NtGdiDdDDICreateDCFromMemory.c)
 *     GreSetPaletteEntries @ 0x14021B190 (GreSetPaletteEntries.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z @ 0x14030EA60 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::vAltUnlockNoNullSet(__int64 **this)
{
  __int64 *v1; // rcx
  __int64 v2; // rbx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *this;
  if ( v1 )
  {
    v3 = 0;
    v2 = *v1;
    HmgDecrementShareReferenceCountEx(v1, &v3);
    if ( v3 )
      GrepDeleteDC(v2, 0x2000000LL);
  }
}
