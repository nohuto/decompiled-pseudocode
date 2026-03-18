/*
 * XREFs of ?IsOpaque@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@@Z @ 0x180199240
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CBitmapRenderStrategy::IsOpaque(CBitmapRenderStrategy *this, const struct CSurfaceBrush *a2)
{
  void (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  char v3; // bl
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a2 + 23);
  v5 = 0LL;
  (**v2)(v2, &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c, &v5);
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v3;
}
