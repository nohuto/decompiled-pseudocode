/*
 * XREFs of umptr_r__POINTL_::enumerate__POINTFIX__EXFORMOBJR::bXformRound_::_8_::_lambda_1___ @ 0x1400C2524
 * Callers:
 *     ?bXformRound@EXFORMOBJR@@QEBA_NAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x1400C2360 (-bXformRound@EXFORMOBJR@@QEBA_NAEAV-$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z.c)
 * Callees:
 *     umptr_inpage_warning @ 0x1401F0FC0 (umptr_inpage_warning.c)
 */

char __fastcall umptr_r__POINTL_::enumerate__POINTFIX__EXFORMOBJR::bXformRound_::_8_::_lambda_1___(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rdx
  __int64 v7; // [rsp+50h] [rbp+18h]

  if ( a3 > *(_QWORD *)(a1 + 8) - *(_QWORD *)(a1 + 16) )
  {
    v4 = 0LL;
    goto LABEL_8;
  }
  v4 = 0LL;
  if ( !is_mul_ok(a3, 8uLL) )
LABEL_8:
    *(_BYTE *)(a1 + 24) = 1;
  if ( *(_BYTE *)(a1 + 25) || *(_BYTE *)(a1 + 24) )
    return 0;
  while ( v4 < a3 )
  {
    v5 = v4 + *(_QWORD *)(a1 + 16);
    LODWORD(v7) = 16 * *(_DWORD *)(*(_QWORD *)a1 + 8 * v5);
    HIDWORD(v7) = 16 * *(_DWORD *)(*(_QWORD *)a1 + 8 * v5 + 4);
    *(_QWORD *)(a2 + 8 * v4++) = v7;
  }
  return 1;
}
