/*
 * XREFs of ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x18008DB30
 * Callers:
 *     ?EnsureLayoutSize@CVisual@@QEAAXXZ @ 0x18008E040 (-EnsureLayoutSize@CVisual@@QEAAXXZ.c)
 *     ?GetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1800D3710 (-GetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 *     ?SetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801112C0 (-SetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x1801B7C58 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x1801C1BC0 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 *     ?UpdateLayoutSize@CVisual@@IEAAXXZ @ 0x1801D2AA4 (-UpdateLayoutSize@CVisual@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct D2D_VECTOR_3F *__fastcall CVisual::GetRelativeOffsetInternal(
        CVisual *this,
        struct D2D_VECTOR_3F *__return_ptr retstr)
{
  FLOAT v2; // eax
  __int64 v4; // r8
  float v5; // ecx
  int *v6; // r8

  if ( (*(_DWORD *)(*((_QWORD *)this + 27) + 4LL) & 0x10000000) != 0 )
  {
    *(_QWORD *)&retstr->x = 0LL;
    retstr->z = 0.0;
    v4 = *((_QWORD *)this + 27);
    v5 = *(float *)(v4 + 12);
    v6 = (int *)(v4 + 12);
    if ( (LODWORD(v5) & 0x7F000000) != 0x4000000 )
    {
      do
      {
        v6 = (int *)((char *)v6 + (LODWORD(v5) & 0xFFFFFF) + 4);
        v5 = *(float *)v6;
      }
      while ( (*v6 & 0x7F000000) != 0x4000000 );
    }
    *(_QWORD *)&retstr->x = *(_QWORD *)(v6 + 1);
    v2 = *((float *)v6 + 3);
  }
  else
  {
    v2 = 0.0;
    *(_QWORD *)&retstr->x = 0LL;
  }
  retstr->z = v2;
  return retstr;
}
