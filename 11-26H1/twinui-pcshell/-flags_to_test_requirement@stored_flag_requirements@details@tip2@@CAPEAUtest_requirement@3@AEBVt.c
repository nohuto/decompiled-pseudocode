/*
 * XREFs of ?flags_to_test_requirement@stored_flag_requirements@details@tip2@@CAPEAUtest_requirement@3@AEBVtest_state@3@AEAV?$vector_nothrow@Utest_flag@tip2@@@3@AEAPEAU43@PEBU43@_K@Z @ 0x1803BCF54
 * Callers:
 *     ?evaluate@stored_flag_requirements@details@tip2@@QEAA_NAEBVtest_state@3@@Z @ 0x1803BC844 (-evaluate@stored_flag_requirements@details@tip2@@QEAA_NAEBVtest_state@3@@Z.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall tip2::details::stored_flag_requirements::flags_to_test_requirement(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3,
        unsigned __int64 a4,
        __int64 a5)
{
  __int64 v5; // r11
  _OWORD *v7; // r10
  __int64 v8; // rdx
  _OWORD *v9; // rcx
  __int64 v10; // r8
  _OWORD *result; // rax
  __int128 v12; // [rsp+0h] [rbp-18h]

  v5 = a2[2];
  if ( !v5 )
    return 0LL;
  v7 = (_OWORD *)*a3;
  if ( *a3 + 16 * a5 >= a4 )
  {
    if ( !*(_BYTE *)(a1 + 152) )
    {
      *(_BYTE *)(a1 + 152) = 3;
      *(_WORD *)(a1 + 154) = 16417;
      *(_QWORD *)(a1 + 160) = 0LL;
    }
    return 0LL;
  }
  v8 = *a2;
  v9 = (_OWORD *)*a3;
  v10 = v8 + 104 * v5;
  while ( v8 != v10 )
  {
    LOWORD(v12) = *(_WORD *)v8;
    *(_DWORD *)((char *)&v12 + 2) = 0;
    WORD3(v12) = 0;
    *((_QWORD *)&v12 + 1) = *(_QWORD *)(v8 + 8);
    *v9++ = v12;
    v8 += 104LL;
  }
  result = v7;
  *v9 = 0u;
  *a3 = v9 + 1;
  return result;
}
