/*
 * XREFs of ?HasSwapChainContent@CNineGridBrush@@UEBA_NXZ @ 0x18027CEA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CNineGridBrush::HasSwapChainContent(CNineGridBrush *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 18);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 280LL))(v1) != 0;
  return v2;
}
