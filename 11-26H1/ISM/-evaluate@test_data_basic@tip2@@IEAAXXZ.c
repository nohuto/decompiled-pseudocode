/*
 * XREFs of ?evaluate@test_data_basic@tip2@@IEAAXXZ @ 0x18010A564
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_HapticTouchpadAttachedTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@EEAAXXZ @ 0x18010A550 (-evaluate@-$merged_data@U_tip_HapticTouchpadAttachedTipTest_attributes@@Vtest_data_basic@tip2@@@.c)
 * Callees:
 *     <none>
 */

void __fastcall tip2::test_data_basic::evaluate(tip2::test_data_basic *this)
{
  __int64 v1; // rax
  int v2; // ecx

  v1 = *(_QWORD *)this;
  v2 = *(_DWORD *)(*(_QWORD *)this + 56LL) & 0x200;
  if ( !*(_BYTE *)(v1 + 152) )
  {
    *(_QWORD *)(v1 + 160) = 0LL;
    if ( v2 )
    {
      *(_BYTE *)(v1 + 152) = 1;
      *(_WORD *)(v1 + 154) = 0x8000;
    }
    else
    {
      *(_BYTE *)(v1 + 152) = 3;
      *(_WORD *)(v1 + 154) = 16385;
    }
  }
}
