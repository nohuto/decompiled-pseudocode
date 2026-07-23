/*
 * XREFs of PnprMapTargetSparePhysicalPages @ 0x140BF7CA0
 * Callers:
 *     <none>
 * Callees:
 *     PnprMapPhysicalPages @ 0x140BF7AD0 (PnprMapPhysicalPages.c)
 */

__int64 __fastcall PnprMapTargetSparePhysicalPages(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  __int64 v5; // rax
  int v6; // r10d
  __int64 v9; // rdi
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax

  LODWORD(v5) = KeGetPcr()->Prcb.Number;
  v6 = 0;
  v9 = 24 * v5;
  if ( a1 == 0x7FFFFFFFFFFFFFFFLL
    || (v6 = PnprMapPhysicalPages((PMDL *)(v9 + *(_QWORD *)(PnprContext + 136)), a1, a3, a4), v6 >= 0) )
  {
    if ( a2 != 0x7FFFFFFFFFFFFFFFLL )
    {
      v6 = PnprMapPhysicalPages((PMDL *)(v9 + *(_QWORD *)(PnprContext + 144)), a2, a3, a5);
      if ( v6 < 0 )
      {
        v13 = PnprContext;
        v14 = *(_DWORD *)(PnprContext + 33288);
        if ( !v14 )
          v14 = 3856;
        *(_DWORD *)(PnprContext + 33288) = v14;
        v15 = *(_DWORD *)(v13 + 33292);
        if ( !v15 )
          v15 = 10;
        *(_DWORD *)(v13 + 33292) = v15;
      }
    }
  }
  else
  {
    v10 = PnprContext;
    v11 = *(_DWORD *)(PnprContext + 33288);
    if ( !v11 )
      v11 = 3844;
    v12 = *(_DWORD *)(PnprContext + 33292);
    *(_DWORD *)(PnprContext + 33288) = v11;
    if ( !v12 )
      v12 = 10;
    *(_DWORD *)(v10 + 33292) = v12;
  }
  return (unsigned int)v6;
}
