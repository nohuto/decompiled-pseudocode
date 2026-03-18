/*
 * XREFs of ?IsValidSourceResource@CMaskBrush@@CA_NPEBVCResource@@@Z @ 0x18021C7D0
 * Callers:
 *     ?SetSource@CMaskBrush@@QEAAJPEAVCBrush@@@Z @ 0x1801D30E0 (-SetSource@CMaskBrush@@QEAAJPEAVCBrush@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CMaskBrush::IsValidSourceResource(const struct CResource *a1)
{
  char v1; // bl

  v1 = 0;
  if ( !a1
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 19LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 142LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 59LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 47LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 88LL) )
  {
    return 1;
  }
  return v1;
}
