/*
 * XREFs of sub_140886560 @ 0x140886560
 * Callers:
 *     sub_140886514 @ 0x140886514 (sub_140886514.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall sub_140886560(__int64 *a1)
{
  _BYTE *v1; // r14
  char *v2; // rsi
  int v3; // edi
  __int64 v4; // r15
  int v5; // ebx
  __int64 v6; // r12
  __int64 result; // rax
  __int64 v9; // [rsp+50h] [rbp-10h]
  __int64 v10; // [rsp+50h] [rbp-10h]

  v1 = &unk_140FD6D01;
  v2 = (char *)&unk_140FD6C82;
  v9 = *a1;
  v3 = BYTE3(v9) | ((BYTE2(v9) | ((BYTE1(v9) | ((unsigned __int8)*a1 << 8)) << 8)) << 8);
  v4 = 0LL;
  v5 = ~(HIBYTE(v9) | ((BYTE6(v9) | ((BYTE5(v9) | (BYTE4(v9) << 8)) << 8)) << 8));
  v6 = 16LL;
  do
  {
    if ( *(v1 - 1) < 0x1Fu )
      v3 ^= guard_dispatch_icall_no_overrides(v4, (unsigned __int8)*(v2 - 2));
    if ( *v1 < 0x1Fu )
      v5 ^= guard_dispatch_icall_no_overrides(v4 + 1, (unsigned __int8)v2[2]);
    v4 += 2LL;
    v1 += 2;
    v2 += 8;
    --v6;
  }
  while ( v6 );
  BYTE2(v10) = __ROR4__(v3, 8);
  BYTE6(v10) = __ROR4__(v5, 8);
  BYTE1(v10) = __ROR4__(v3, 16);
  BYTE3(v10) = v3;
  HIBYTE(v10) = v5;
  BYTE4(v10) = __ROR4__(v5, 24);
  BYTE5(v10) = __ROR4__(v5, 16);
  LOBYTE(v10) = __ROR4__(v3, 24);
  result = v10;
  *a1 = v10;
  return result;
}
