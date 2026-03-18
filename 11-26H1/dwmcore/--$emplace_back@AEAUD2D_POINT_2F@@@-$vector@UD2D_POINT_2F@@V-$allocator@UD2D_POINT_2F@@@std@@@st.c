/*
 * XREFs of ??$emplace_back@AEAUD2D_POINT_2F@@@?$vector@UD2D_POINT_2F@@V?$allocator@UD2D_POINT_2F@@@std@@@std@@QEAAAEAUD2D_POINT_2F@@AEAU2@@Z @ 0x180228CEC
 * Callers:
 *     ?AddLines@CTransformedGeometryHelper@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x180197E80 (-AddLines@CTransformedGeometryHelper@@EEAAXPEBUD2D_POINT_2F@@I@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAUD2D_POINT_2F@@@?$vector@UD2D_POINT_2F@@V?$allocator@UD2D_POINT_2F@@@std@@@std@@AEAAPEAUD2D_POINT_2F@@QEAU2@AEAU2@@Z @ 0x1801B768C (--$_Emplace_reallocate@AEAUD2D_POINT_2F@@@-$vector@UD2D_POINT_2F@@V-$allocator@UD2D_POINT_2F@@@s.c)
 */

char *__fastcall std::vector<D2D_POINT_2F>::emplace_back<D2D_POINT_2F &>(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v5; // rdx
  __int64 v6; // rdx

  v5 = *(__int64 **)(a1 + 8);
  if ( v5 == *(__int64 **)(a1 + 16) )
    return std::vector<D2D_POINT_2F>::_Emplace_reallocate<D2D_POINT_2F &>((void **)a1, (__int64)v5, a2, a4);
  *v5 = *a2;
  v6 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v6 + 8;
  return (char *)v6;
}
