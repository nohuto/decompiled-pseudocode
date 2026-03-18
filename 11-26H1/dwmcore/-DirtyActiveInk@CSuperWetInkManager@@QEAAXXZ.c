/*
 * XREFs of ?DirtyActiveInk@CSuperWetInkManager@@QEAAXXZ @ 0x180125E40
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18002D828 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?DirtyOnNewData@CVisual@@QEAAXXZ @ 0x180125EE4 (-DirtyOnNewData@CVisual@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSuperWetInkManager::DirtyActiveInk(CSuperWetInkManager *this)
{
  _QWORD *v1; // rsi
  char v2; // dl
  _QWORD *v3; // rdi
  CVisual **v5; // rdi
  CVisual **i; // rbx

  v1 = (_QWORD *)*((_QWORD *)this + 5);
  v2 = 0;
  v3 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v3 == v1 )
    goto LABEL_2;
  do
  {
    if ( *((_QWORD *)g_pComposition + 110) - v3[11] < 0xAuLL )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v3 + 80LL))(*v3, 0LL, 0LL);
      v2 = 1;
    }
    v3 += 13;
  }
  while ( v3 != v1 );
  if ( !v2 )
  {
LABEL_2:
    v5 = (CVisual **)*((_QWORD *)this + 2);
    for ( i = (CVisual **)*((_QWORD *)this + 1); i != v5; ++i )
      CVisual::DirtyOnNewData(*i);
  }
}
