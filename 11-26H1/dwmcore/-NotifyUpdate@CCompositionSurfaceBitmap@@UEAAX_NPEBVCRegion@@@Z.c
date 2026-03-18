/*
 * XREFs of ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_NPEBVCRegion@@@Z @ 0x18019A050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCompositionSurfaceBitmap::NotifyUpdate(
        CCompositionSurfaceBitmap *this,
        char a2,
        const struct CRegion *a3)
{
  _QWORD *v4; // rcx
  void (__fastcall *v5)(_QWORD *, __int64, _QWORD *); // rax

  v4 = (_QWORD *)((char *)this - 80);
  v5 = *(void (__fastcall **)(_QWORD *, __int64, _QWORD *))(*v4 + 80LL);
  if ( a2 )
  {
    v5(v4, 0LL, v4);
  }
  else
  {
    v4[13] = a3;
    v5(v4, 1LL, v4);
    *((_QWORD *)this + 3) = 0LL;
  }
}
