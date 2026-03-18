/*
 * XREFs of ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x18008DBC0
 * Callers:
 *     ?EnsureLayoutSize@CVisual@@QEAAXXZ @ 0x18008E040 (-EnsureLayoutSize@CVisual@@QEAAXXZ.c)
 *     ?GetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1800D3710 (-GetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 *     ?SetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801112C0 (-SetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x1801B32D0 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x1801C1BC0 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 *     ?UpdateLayoutSize@CVisual@@IEAAXXZ @ 0x1801D2AA4 (-UpdateLayoutSize@CVisual@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct D2D_SIZE_F __fastcall CVisual::GetRelativeLayoutSizeInternal(CVisual *this, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  int v5; // ecx
  int *v6; // r8

  if ( (*(_DWORD *)(*((_QWORD *)this + 27) + 4LL) & 0x20000000) != 0 )
  {
    *a2 = 0LL;
    v4 = *((_QWORD *)this + 27);
    v5 = *(_DWORD *)(v4 + 12);
    v6 = (int *)(v4 + 12);
    if ( (v5 & 0x7F000000) != 0x3000000 )
    {
      do
      {
        v6 = (int *)((char *)v6 + (v5 & 0xFFFFFF) + 4);
        v5 = *v6;
      }
      while ( (*v6 & 0x7F000000) != 0x3000000 );
    }
    v2 = *(_QWORD *)(v6 + 1);
  }
  else
  {
    v2 = 0LL;
  }
  *a2 = v2;
  return (struct D2D_SIZE_F)a2;
}
