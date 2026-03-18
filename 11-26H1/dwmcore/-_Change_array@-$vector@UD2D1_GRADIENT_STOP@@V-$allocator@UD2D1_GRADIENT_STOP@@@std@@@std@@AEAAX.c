/*
 * XREFs of ?_Change_array@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAXQEAUD2D1_GRADIENT_STOP@@_K1@Z @ 0x1801BBD2C
 * Callers:
 *     ??$_Reallocate@$0A@@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAXAEA_K@Z @ 0x1801B7400 (--$_Reallocate@$0A@@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@.c)
 *     ??$_Emplace_reallocate@AEBUD2D1_GRADIENT_STOP@@@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAPEAUD2D1_GRADIENT_STOP@@QEAU2@AEBU2@@Z @ 0x18027E7CC (--$_Emplace_reallocate@AEBUD2D1_GRADIENT_STOP@@@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<D2D1_GRADIENT_STOP>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16>(v6, 4 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 2));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 20 * a3;
  result = 5 * a4;
  *(_QWORD *)(a1 + 16) = a2 + 20 * a4;
  return result;
}
