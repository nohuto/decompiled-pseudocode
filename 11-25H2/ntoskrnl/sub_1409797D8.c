/*
 * XREFs of sub_1409797D8 @ 0x1409797D8
 * Callers:
 *     ntoskrnl_20 @ 0x140978FD0 (ntoskrnl_20.c)
 *     sub_1409791EC @ 0x1409791EC (sub_1409791EC.c)
 *     ntoskrnl_21 @ 0x140979240 (ntoskrnl_21.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     sub_140979340 @ 0x140979340 (sub_140979340.c)
 *     sub_140979440 @ 0x140979440 (sub_140979440.c)
 *     sub_140979520 @ 0x140979520 (sub_140979520.c)
 *     sub_140979600 @ 0x140979600 (sub_140979600.c)
 *     sub_140979700 @ 0x140979700 (sub_140979700.c)
 *     sub_140979C70 @ 0x140979C70 (sub_140979C70.c)
 */

__int64 __fastcall sub_1409797D8(__int64 *a1)
{
  unsigned __int8 *v1; // r15
  unsigned __int8 *v2; // rsi
  unsigned __int64 v3; // r14
  __int64 v4; // r12
  unsigned int v5; // edi
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 (__fastcall *v8)(char, unsigned __int64, unsigned __int64, unsigned __int64, int, __int64, unsigned int); // rax
  int v9; // ecx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rax
  __int64 (__fastcall *v15)(unsigned __int64, __int64, unsigned __int64, unsigned __int64, int, __int64, unsigned int); // rax
  int v16; // ecx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // ebx
  int v22; // ecx
  int v23; // eax
  __int64 result; // rax
  __int64 v26; // [rsp+48h] [rbp-18h] BYREF
  __int64 v27; // [rsp+50h] [rbp-10h]

  v1 = (unsigned __int8 *)&unk_140FD7D4E;
  v2 = (unsigned __int8 *)&unk_140FD7D2E;
  v27 = *a1;
  v3 = 30LL;
  v4 = 16LL;
  v5 = BYTE3(v27) | ((BYTE2(v27) | ((BYTE1(v27) | ((unsigned __int8)v27 << 8)) << 8)) << 8);
  v26 = qword_140FD7290;
  v6 = HIBYTE(v27) | ((BYTE6(v27) | ((BYTE5(v27) | (BYTE4(v27) << 8)) << 8)) << 8);
  do
  {
    v7 = v1[1];
    if ( (unsigned __int8)v7 < 0x1Fu )
    {
      v8 = (__int64 (__fastcall *)(char, unsigned __int64, unsigned __int64, unsigned __int64, int, __int64, unsigned int))off_140FD74B0[v7];
      v9 = v2[1];
      v10 = *v2;
      v11 = *(v2 - 1);
      v12 = *(v2 - 2);
      if ( (char *)v8 == (char *)sub_140979700 )
      {
        v13 = sub_140979700(v3 + 1, v12, v11, v10, v9, (__int64)&v26, v5);
      }
      else if ( v8 == sub_140979600 )
      {
        v13 = sub_140979600((unsigned __int8)v3 + 1, v12, v11, v10, v9, (__int64)&v26, v5);
      }
      else if ( v8 == sub_140979340 )
      {
        v13 = sub_140979340((unsigned __int8)v3 + 1, v12, v11, v10, v9, (__int64)&v26, v5);
      }
      else
      {
        v13 = guard_dispatch_icall_no_overrides(v3 + 1);
      }
      v6 ^= v13;
    }
    v14 = *v1;
    if ( (unsigned __int8)v14 < 0x1Fu )
    {
      v15 = (__int64 (__fastcall *)(unsigned __int64, __int64, unsigned __int64, unsigned __int64, int, __int64, unsigned int))off_140FD74B0[v14];
      v16 = *(v2 - 3);
      v17 = *(v2 - 4);
      v18 = *(v2 - 5);
      v19 = *(v2 - 6);
      if ( (char *)v15 == (char *)sub_140979C70 )
      {
        v20 = sub_140979C70(v3, v19, v18, v17, v16, (__int64)&v26, v6);
      }
      else if ( (char *)v15 == (char *)sub_140979520 )
      {
        v20 = sub_140979520(v3, v19, v18, v17, v16, (__int64)&v26, v6);
      }
      else if ( v15 == sub_140979440 )
      {
        v20 = sub_140979440(v3, v19, v18, v17, v16, (__int64)&v26, v6);
      }
      else
      {
        v20 = guard_dispatch_icall_no_overrides(v3);
      }
      v5 ^= v20;
    }
    v3 -= 2LL;
    v1 -= 2;
    v2 -= 8;
    --v4;
  }
  while ( v4 );
  v21 = ~v6;
  BYTE3(v26) = v5;
  HIBYTE(v26) = v21;
  BYTE2(v26) = BYTE1(v5);
  v22 = __ROR4__((v5 >> 8) | (v5 << 24), 8);
  BYTE1(v26) = v22;
  BYTE6(v26) = BYTE1(v21);
  v23 = __ROR4__((v21 >> 8) | (v21 << 24), 8);
  BYTE5(v26) = v23;
  BYTE4(v26) = __ROR4__(v23, 8);
  LOBYTE(v26) = __ROR4__(v22, 8);
  result = v26;
  *a1 = v26;
  return result;
}
