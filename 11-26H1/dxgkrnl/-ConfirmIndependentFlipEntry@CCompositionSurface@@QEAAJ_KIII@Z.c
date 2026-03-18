/*
 * XREFs of ?ConfirmIndependentFlipEntry@CCompositionSurface@@QEAAJ_KIII@Z @ 0x140029A38
 * Callers:
 *     NtConfirmCompositionSurfaceIndependentFlipEntry @ 0x1400298F0 (NtConfirmCompositionSurfaceIndependentFlipEntry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CCompositionSurface::ConfirmIndependentFlipEntry(
        CCompositionSurface *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // r11d
  _QWORD **v6; // rcx
  _QWORD *i; // rax

  v5 = -1073741275;
  if ( *((_DWORD *)this + 30) )
  {
    v6 = (_QWORD **)((char *)this + 104);
    for ( i = *v6; i != v6; i = (_QWORD *)*i )
    {
      if ( *(i - 1) == a2 )
        return (*(unsigned int (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD))(*(i - 3) + 208LL))(i - 3, a3, a4, a5);
    }
  }
  return v5;
}
