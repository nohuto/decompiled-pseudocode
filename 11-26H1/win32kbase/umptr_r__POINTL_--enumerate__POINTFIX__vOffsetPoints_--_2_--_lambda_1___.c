/*
 * XREFs of umptr_r__POINTL_::enumerate__POINTFIX__vOffsetPoints_::_2_::_lambda_1___ @ 0x1400C246C
 * Callers:
 *     ?createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z @ 0x1400C2068 (-createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z.c)
 * Callees:
 *     umptr_inpage_warning @ 0x1401F0FC0 (umptr_inpage_warning.c)
 */

char __fastcall umptr_r__POINTL_::enumerate__POINTFIX__vOffsetPoints_::_2_::_lambda_1___(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4)
{
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r8
  __int64 v8; // [rsp+60h] [rbp+18h]

  if ( a3 > *(_QWORD *)(a1 + 8) - *(_QWORD *)(a1 + 16) )
  {
    v5 = 0LL;
    goto LABEL_10;
  }
  v5 = 0LL;
  if ( !is_mul_ok(a3, 8uLL) )
LABEL_10:
    *(_BYTE *)(a1 + 24) = 1;
  if ( *(_BYTE *)(a1 + 25) || *(_BYTE *)(a1 + 24) )
    return 0;
  while ( v5 < a3 )
  {
    v6 = v5 + *(_QWORD *)(a1 + 16);
    LODWORD(v8) = a4 + *(_DWORD *)(*(_QWORD *)a1 + 8 * v6);
    HIDWORD(v8) = HIDWORD(a4) + *(_DWORD *)(*(_QWORD *)a1 + 8 * v6 + 4);
    *(_QWORD *)(a2 + 8 * v5++) = v8;
  }
  return 1;
}
