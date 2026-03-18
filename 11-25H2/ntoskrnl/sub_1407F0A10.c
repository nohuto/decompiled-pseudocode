/*
 * XREFs of sub_1407F0A10 @ 0x1407F0A10
 * Callers:
 *     sub_1407F09C4 @ 0x1407F09C4 (sub_1407F09C4.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall sub_1407F0A10(__int64 *a1)
{
  _BYTE *v1; // r14
  char *v2; // rsi
  unsigned int v3; // edi
  __int64 v4; // r15
  unsigned int v5; // ebx
  __int64 v6; // r12
  int v7; // ecx
  int v8; // eax
  __int64 result; // rax
  __int64 v11; // [rsp+50h] [rbp-10h]
  __int64 v12; // [rsp+50h] [rbp-10h]

  v1 = &unk_140FD7D30;
  v2 = (char *)&unk_140FD7CB2;
  v11 = *a1;
  v3 = BYTE3(v11) | ((BYTE2(v11) | ((BYTE1(v11) | ((unsigned __int8)v11 << 8)) << 8)) << 8);
  v4 = 0LL;
  v5 = ~(HIBYTE(v11) | ((BYTE6(v11) | ((BYTE5(v11) | (BYTE4(v11) << 8)) << 8)) << 8));
  v6 = 16LL;
  do
  {
    if ( *v1 < 0x1Fu )
      v3 ^= guard_dispatch_icall_no_overrides(v4);
    if ( v1[1] < 0x1Fu )
      v5 ^= guard_dispatch_icall_no_overrides(v4 + 1);
    v4 += 2LL;
    v1 += 2;
    v2 += 8;
    --v6;
  }
  while ( v6 );
  BYTE3(v12) = v3;
  HIBYTE(v12) = v5;
  BYTE2(v12) = BYTE1(v3);
  v7 = __ROR4__((v3 >> 8) | (v3 << 24), 8);
  BYTE1(v12) = v7;
  BYTE6(v12) = BYTE1(v5);
  v8 = __ROR4__((v5 >> 8) | (v5 << 24), 8);
  BYTE5(v12) = v8;
  BYTE4(v12) = __ROR4__(v8, 8);
  LOBYTE(v12) = __ROR4__(v7, 8);
  result = v12;
  *a1 = v12;
  return result;
}
