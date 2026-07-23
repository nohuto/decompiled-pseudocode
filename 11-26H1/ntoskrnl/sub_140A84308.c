/*
 * XREFs of sub_140A84308 @ 0x140A84308
 * Callers:
 *     ntoskrnl_20 @ 0x140A83F40 (ntoskrnl_20.c)
 *     sub_140A84198 @ 0x140A84198 (sub_140A84198.c)
 *     ntoskrnl_21 @ 0x140A841F0 (ntoskrnl_21.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall sub_140A84308(__int64 *a1)
{
  _BYTE *v1; // r14
  char *v2; // rsi
  __int64 v3; // r15
  __int64 v4; // r12
  int v5; // edi
  int v6; // ebx
  int v7; // ebx
  __int64 result; // rax
  __int64 v10; // [rsp+50h] [rbp-10h]
  __int64 v11; // [rsp+50h] [rbp-10h]

  v1 = &unk_140FD6D1E;
  v2 = (char *)&unk_140FD6CFE;
  v10 = *a1;
  v3 = 30LL;
  v4 = 16LL;
  v5 = BYTE3(v10) | ((BYTE2(v10) | ((BYTE1(v10) | ((unsigned __int8)*a1 << 8)) << 8)) << 8);
  v6 = HIBYTE(v10) | ((BYTE6(v10) | ((BYTE5(v10) | (BYTE4(v10) << 8)) << 8)) << 8);
  do
  {
    if ( v1[1] < 0x1Fu )
      v6 ^= guard_dispatch_icall_no_overrides(v3 + 1, (unsigned __int8)*(v2 - 2));
    if ( *v1 < 0x1Fu )
      v5 ^= guard_dispatch_icall_no_overrides(v3, (unsigned __int8)*(v2 - 6));
    v3 -= 2LL;
    v1 -= 2;
    v2 -= 8;
    --v4;
  }
  while ( v4 );
  v7 = ~v6;
  BYTE3(v11) = v5;
  BYTE2(v11) = __ROR4__(v5, 8);
  BYTE6(v11) = __ROR4__(v7, 8);
  BYTE1(v11) = __ROR4__(v5, 16);
  HIBYTE(v11) = v7;
  BYTE4(v11) = __ROR4__(v7, 24);
  BYTE5(v11) = __ROR4__(v7, 16);
  LOBYTE(v11) = __ROR4__(v5, 24);
  result = v11;
  *a1 = v11;
  return result;
}
