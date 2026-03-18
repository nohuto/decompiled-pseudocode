/*
 * XREFs of ?IsReadyToDraw@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z @ 0x1801615D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_BOOL8 __fastcall CBitmapRenderStrategy::IsReadyToDraw(
        CBitmapRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        struct CDrawingContext *a3,
        bool *a4)
{
  void (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  bool v5; // bl
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  *a4 = 0;
  v4 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a2 + 23);
  v7 = 0LL;
  (**v4)(v4, &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c, &v7);
  v8 = 0LL;
  v5 = (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 64LL))(v7, &v8) >= 0;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v5;
}
