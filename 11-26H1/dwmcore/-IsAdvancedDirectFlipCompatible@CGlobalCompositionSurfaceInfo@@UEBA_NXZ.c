/*
 * XREFs of ?IsAdvancedDirectFlipCompatible@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x1801B1EC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CGlobalCompositionSurfaceInfo::IsAdvancedDirectFlipCompatible(CGlobalCompositionSurfaceInfo *this)
{
  int (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rcx
  bool v2; // bl
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 26);
  if ( !v1 )
    return 0;
  v4 = 0LL;
  v2 = (**v1)(v1, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, &v4) >= 0;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v2;
}
