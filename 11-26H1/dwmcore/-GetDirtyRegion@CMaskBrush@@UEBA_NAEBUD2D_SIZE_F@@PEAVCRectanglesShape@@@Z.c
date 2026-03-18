/*
 * XREFs of ?GetDirtyRegion@CMaskBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x18019AE70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CMaskBrush::GetDirtyRegion(CMaskBrush *this, const struct D2D_SIZE_F *a2, struct CRectanglesShape *a3)
{
  int (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  int (__fastcall **v6)(_QWORD, GUID *, __int64 *); // rax
  char v7; // bl
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this - 2);
  if ( !v3 )
    return 0;
  v6 = *v3;
  v9 = 0LL;
  if ( (*v6)(v3, &GUID_c155b649_2c5b_416a_b836_bbda56b2ec27, &v9) < 0 )
  {
    if ( v9 )
      (*(void (**)(void))(*(_QWORD *)v9 + 16LL))();
    return 0;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, const struct D2D_SIZE_F *, struct CRectanglesShape *))(*(_QWORD *)v9 + 24LL))(
         v9,
         a2,
         a3);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return v7;
}
