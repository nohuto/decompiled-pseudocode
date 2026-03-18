/*
 * XREFs of ?IsCrossAdapter@CD2DBitmap@@UEBA_NPEAU_LUID@@@Z @ 0x1801BDAF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CD2DBitmap::IsCrossAdapter(CD2DBitmap *this, struct _LUID *a2)
{
  if ( a2 )
    *a2 = *(struct _LUID *)((*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 11) + 40LL))((char *)this - 88) + 944);
  return *((_BYTE *)this + 149);
}
