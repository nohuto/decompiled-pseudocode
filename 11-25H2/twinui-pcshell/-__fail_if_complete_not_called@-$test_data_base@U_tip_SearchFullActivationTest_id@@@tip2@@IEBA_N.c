/*
 * XREFs of ?__fail_if_complete_not_called@?$test_data_base@U_tip_SearchFullActivationTest_id@@@tip2@@IEBA_NXZ @ 0x1803B2218
 * Callers:
 *     ?evaluate@_tip_SearchFullActivationTest@@QEAAXXZ @ 0x1803B3284 (-evaluate@_tip_SearchFullActivationTest@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall tip2::test_data_base<_tip_SearchFullActivationTest_id>::__fail_if_complete_not_called(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(v1 + 56) & 0x200) != 0 )
    return 0;
  if ( !*(_BYTE *)(v1 + 152) )
  {
    *(_QWORD *)(v1 + 160) = 0LL;
    *(_BYTE *)(v1 + 152) = 3;
    *(_WORD *)(v1 + 154) = 16385;
  }
  return 1;
}
