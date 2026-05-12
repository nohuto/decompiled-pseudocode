/*
 * XREFs of sub_14008EEFC @ 0x14008EEFC
 * Callers:
 *     sub_140100C20 @ 0x140100C20 (sub_140100C20.c)
 *     sub_140112C94 @ 0x140112C94 (sub_140112C94.c)
 *     sub_14019B4AC @ 0x14019B4AC (sub_14019B4AC.c)
 * Callees:
 *     sub_1400886B0 @ 0x1400886B0 (sub_1400886B0.c)
 *     sub_14008FC40 @ 0x14008FC40 (sub_14008FC40.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14008EEFC(__int64 a1, unsigned int a2, __int64 a3)
{
  int v3; // esi
  __int64 v4; // rdx
  char v7; // r12
  __int64 v8; // r15
  __int64 v9; // rax
  bool v10; // r14
  bool v11; // bp
  unsigned int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  int v20; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v21; // [rsp+24h] [rbp-64h]
  __int64 v22; // [rsp+28h] [rbp-60h] BYREF
  __int64 v23; // [rsp+30h] [rbp-58h]
  __int128 v24; // [rsp+38h] [rbp-50h]

  v3 = 0;
  v21 = a2;
  v4 = *(_QWORD *)(a1 + 176);
  v22 = 0LL;
  v20 = 0;
  v7 = 0;
  v8 = v4 + 104;
  v9 = *(_QWORD *)(v4 + 104);
  v23 = v4 + 120;
  v24 = 0LL;
  if ( !v9 )
    v9 = *(_QWORD *)(v4 + 112) - *((_QWORD *)&v24 + 1);
  v10 = v9 != 0;
  v11 = *(_QWORD *)(v4 + 120) != 0LL;
  if ( !v9 && !*(_QWORD *)(v4 + 120) || (*(_BYTE *)(v4 + 24) & 8) == 0 )
  {
    sub_1400886B0(a1, v4, &v22, &v20);
    if ( v20 == 16 )
    {
      v7 = 1;
LABEL_9:
      v12 = 40;
      v13 = 40;
      goto LABEL_13;
    }
  }
  if ( v10 )
    goto LABEL_9;
  v13 = 20;
  if ( !v11 )
    v13 = 30;
  v12 = v13;
LABEL_13:
  if ( v12 > v21 )
    return 0;
  if ( v7 )
  {
    v14 = v22;
    v15 = 16LL;
LABEL_20:
    v3 = sub_14008FC40(v14, v15, a3, v13);
    goto LABEL_22;
  }
  if ( v10 )
  {
    v15 = 16LL;
    v14 = v8;
    goto LABEL_20;
  }
  if ( v11 )
  {
    v14 = v23;
    v15 = 8LL;
    goto LABEL_20;
  }
  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 592LL);
  *(_OWORD *)a3 = *(_OWORD *)(v16 + 4);
  *(_DWORD *)(a3 + 16) = *(_DWORD *)(v16 + 20);
  *(_BYTE *)(a3 + 20) = 95;
  v17 = *(unsigned __int16 *)(a1 + 58);
  *(_BYTE *)(a3 + 24) = a0123456789abcd[*(_WORD *)(a1 + 58) & 0xF];
  *(_BYTE *)(a3 + 23) = a0123456789abcd[(unsigned __int8)v17 >> 4];
  *(_BYTE *)(a3 + 22) = a0123456789abcd[((unsigned int)v17 >> 8) & 0xF];
  *(_BYTE *)(a3 + 21) = a0123456789abcd[v17 >> 12];
  v18 = *(unsigned __int16 *)(a1 + 56);
  *(_BYTE *)(a3 + 28) = a0123456789abcd[*(_WORD *)(a1 + 56) & 0xF];
  *(_BYTE *)(a3 + 27) = a0123456789abcd[(unsigned __int8)v18 >> 4];
  *(_BYTE *)(a3 + 26) = a0123456789abcd[((unsigned int)v18 >> 8) & 0xF];
  *(_BYTE *)(a3 + 25) = a0123456789abcd[v18 >> 12];
  *(_BYTE *)(a3 + 29) = 46;
LABEL_22:
  if ( v3 < 0 )
    return 0;
  return v13;
}
