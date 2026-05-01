/*
 * XREFs of std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Windows::Foundation::Rect______std::back_insert_iterator_std::vector_tagRECT_std::allocator_tagRECT_______lambda_4c658d99aeacf5e09ef3fae70976934f___ @ 0x18059CCC8
 * Callers:
 *     ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x1805A0510 (-OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 * Callees:
 *     ??$_Emplace_one_at_back@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAAEAUtagRECT@@$$QEAU2@@Z @ 0x180219984 (--$_Emplace_one_at_back@UtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAAEA.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 *__fastcall std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Windows::Foundation::Rect______std::back_insert_iterator_std::vector_tagRECT_std::allocator_tagRECT_______lambda_4c658d99aeacf5e09ef3fae70976934f___(
        __int64 *a1,
        float *a2,
        float *a3,
        __int64 a4)
{
  float *v7; // rsi
  float v8; // xmm0_4
  float v9; // xmm1_4
  int v10; // eax
  float v11; // xmm0_4
  int v12; // eax
  float v13; // xmm1_4
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 != a3 )
  {
    v7 = a2 + 2;
    do
    {
      v8 = *(v7 - 2);
      v9 = *(v7 - 1);
      v10 = (int)v8;
      v11 = v8 + *v7;
      LODWORD(v15) = v10;
      v12 = (int)v9;
      v13 = v9 + v7[1];
      DWORD1(v15) = v12;
      DWORD2(v15) = (int)v11;
      HIDWORD(v15) = (int)v13;
      std::vector<tagRECT>::_Emplace_one_at_back<tagRECT>(a4, &v15);
      v7 += 4;
    }
    while ( v7 - 2 != a3 );
  }
  *a1 = a4;
  return a1;
}
