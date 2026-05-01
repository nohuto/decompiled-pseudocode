/*
 * XREFs of ?get_or_add_flag_under_lock@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEAUtest_flag@3@GPEBD@Z @ 0x18069AC3C
 * Callers:
 *     ??$set_flag_value@J@?$shared_data@$0A@$0A@$00@details@tip2@@QEAAXGPEBDJ@Z @ 0x18068B958 (--$set_flag_value@J@-$shared_data@$0A@$0A@$00@details@tip2@@QEAAXGPEBDJ@Z.c)
 *     GetEnterprisePinDataFromRegistry @ 0x18068FFBC (GetEnterprisePinDataFromRegistry.c)
 *     GetPidlsFromTaskbarLayout @ 0x180690384 (GetPidlsFromTaskbarLayout.c)
 *     PersistEnterprisePinDataToRegistry @ 0x180694EC8 (PersistEnterprisePinDataToRegistry.c)
 *     ShouldAddEnterprisePinToOutput @ 0x180696EE8 (ShouldAddEnterprisePinToOutput.c)
 * Callees:
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?push_back@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAA_N$$QEAUtest_flag@2@@Z @ 0x180332568 (-push_back@-$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAA_N$$QEAUtest_flag@2@@Z.c)
 */

__int64 __fastcall tip2::details::shared_data<0,0,1>::get_or_add_flag_under_lock(__int64 a1, __int16 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 result; // rax
  __int64 v7; // rcx
  char v8; // bl
  _BYTE v9[16]; // [rsp+20h] [rbp-78h] BYREF
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v11; // [rsp+40h] [rbp-58h]
  _BYTE v12[72]; // [rsp+48h] [rbp-50h] BYREF

  v3 = (_QWORD *)(a1 + 120);
  result = *(_QWORD *)(a1 + 120);
  v7 = result + 104LL * *(_QWORD *)(a1 + 136);
  while ( result != v7 )
  {
    if ( *(_WORD *)result == a2 )
      return result;
    result += 104LL;
  }
  memset_0(v9, 0, 0x68uLL);
  v11 = 0LL;
  *(_OWORD *)pvar = 0LL;
  memset_0(v12, 0, 0x40uLL);
  v8 = tip2::vector_nothrow<tip2::test_flag>::push_back(v3, (__int64)v9);
  PropVariantClear(pvar);
  if ( !v8 )
    return 0LL;
  result = 104LL * v3[2] + *v3 - 104LL;
  *(_WORD *)result = a2;
  *(_QWORD *)(result + 8) = a3;
  return result;
}
