/*
 * XREFs of umptr_r__POINTL_::enumerate__POINTFIX__EXFORMOBJR::bXformRound_::_8_::_lambda_1___ @ 0x14009A87C
 * Callers:
 *     ?bXformRound@EXFORMOBJR@@QEBA_NAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x14009A520 (-bXformRound@EXFORMOBJR@@QEBA_NAEAV-$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z.c)
 * Callees:
 *     umptr_inpage_warning @ 0x1401C6E80 (umptr_inpage_warning.c)
 */

char __fastcall umptr_r__POINTL_::enumerate__POINTFIX__EXFORMOBJR::bXformRound_::_8_::_lambda_1___(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v4; // r9
  char v5; // al
  unsigned __int64 v6; // rcx
  __int64 v8; // [rsp+50h] [rbp+18h]

  if ( a3 > *(_QWORD *)(a1 + 8) - *(_QWORD *)(a1 + 16) )
  {
    v4 = 0LL;
    goto LABEL_10;
  }
  v4 = 0LL;
  if ( !is_mul_ok(a3, 8uLL) )
LABEL_10:
    *(_BYTE *)(a1 + 24) = 1;
  if ( *(_BYTE *)(a1 + 25) || (v5 = 0, *(_BYTE *)(a1 + 24)) )
    v5 = 1;
  if ( v5 )
    return 0;
  while ( v4 < a3 )
  {
    v6 = v4 + *(_QWORD *)(a1 + 16);
    LODWORD(v8) = 16 * *(_DWORD *)(*(_QWORD *)a1 + 8 * v6);
    HIDWORD(v8) = 16 * *(_DWORD *)(*(_QWORD *)a1 + 8 * v6 + 4);
    *(_QWORD *)(a2 + 8 * v4++) = v8;
  }
  return 1;
}
