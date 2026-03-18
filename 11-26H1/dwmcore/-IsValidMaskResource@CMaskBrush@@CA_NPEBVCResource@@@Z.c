/*
 * XREFs of ?IsValidMaskResource@CMaskBrush@@CA_NPEBVCResource@@@Z @ 0x1801D32BC
 * Callers:
 *     ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18003E960 (-GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?SetMask@CMaskBrush@@QEAAJPEAVCBrush@@@Z @ 0x1801D3170 (-SetMask@CMaskBrush@@QEAAJPEAVCBrush@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CMaskBrush::IsValidMaskResource(const struct CResource *a1)
{
  char v1; // bl

  v1 = 0;
  if ( !a1
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 142LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 59LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 88LL) )
  {
    return 1;
  }
  return v1;
}
