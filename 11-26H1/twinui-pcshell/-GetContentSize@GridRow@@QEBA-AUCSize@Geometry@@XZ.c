/*
 * XREFs of ?GetContentSize@GridRow@@QEBA?AUCSize@Geometry@@XZ @ 0x1804D5130
 * Callers:
 *     ?LayoutRow@GridRow@@QEAAXAEBUCRect@Geometry@@@Z @ 0x1804D5408 (-LayoutRow@GridRow@@QEAAXAEBUCRect@Geometry@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall GridRow::GetContentSize(__int64 a1, _DWORD *a2)
{
  _QWORD *v3; // r14
  __int64 v5; // rax
  _QWORD *v6; // rbp
  int v7; // ebx

  v3 = *(_QWORD **)(a1 + 24);
  a2[1] = *(_DWORD *)(a1 + 4);
  v5 = *(_QWORD *)(a1 + 32);
  *a2 = 0;
  v6 = &v3[v5];
  if ( v3 != v6 )
  {
    v7 = 0;
    do
    {
      if ( v7 )
      {
        v7 += *(_DWORD *)a1;
        *a2 = v7;
      }
      v7 += (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 72LL))(*v3, *(unsigned int *)(a1 + 4));
      ++v3;
      *a2 = v7;
    }
    while ( v3 != v6 );
  }
  return a2;
}
