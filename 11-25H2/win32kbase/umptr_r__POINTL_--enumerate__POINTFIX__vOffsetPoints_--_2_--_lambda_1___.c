/*
 * XREFs of umptr_r__POINTL_::enumerate__POINTFIX__vOffsetPoints_::_2_::_lambda_1___ @ 0x1400F8DF4
 * Callers:
 *     vOffsetPoints @ 0x1400F8DC0 (vOffsetPoints.c)
 * Callees:
 *     umptr_inpage_warning @ 0x1401C6E80 (umptr_inpage_warning.c)
 */

char __fastcall umptr_r__POINTL_::enumerate__POINTFIX__vOffsetPoints_::_2_::_lambda_1___(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4)
{
  unsigned __int64 v5; // r10
  char v6; // al
  unsigned __int64 v7; // rdx
  __int64 v9; // [rsp+60h] [rbp+18h]

  if ( a3 > *(_QWORD *)(a1 + 8) - *(_QWORD *)(a1 + 16) )
  {
    v5 = 0LL;
    goto LABEL_10;
  }
  v5 = 0LL;
  if ( !is_mul_ok(a3, 8uLL) )
LABEL_10:
    *(_BYTE *)(a1 + 24) = 1;
  if ( *(_BYTE *)(a1 + 25) || (v6 = 0, *(_BYTE *)(a1 + 24)) )
    v6 = 1;
  if ( v6 )
    return 0;
  while ( v5 < a3 )
  {
    v7 = v5 + *(_QWORD *)(a1 + 16);
    LODWORD(v9) = a4 + *(_DWORD *)(*(_QWORD *)a1 + 8 * v7);
    HIDWORD(v9) = HIDWORD(a4) + *(_DWORD *)(*(_QWORD *)a1 + 8 * v7 + 4);
    *(_QWORD *)(a2 + 8 * v5++) = v9;
  }
  return 1;
}
