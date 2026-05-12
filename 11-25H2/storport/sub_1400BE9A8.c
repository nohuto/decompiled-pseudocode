/*
 * XREFs of sub_1400BE9A8 @ 0x1400BE9A8
 * Callers:
 *     sub_1400BEB50 @ 0x1400BEB50 (sub_1400BEB50.c)
 * Callees:
 *     sub_14008FC40 @ 0x14008FC40 (sub_14008FC40.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400BE9A8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  unsigned int v4; // ebx
  int v6; // r9d
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // r10
  __int64 v11; // rax
  unsigned int v12; // edi
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned __int64 v15; // rdx
  char v16; // al

  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  v6 = 0;
  v7 = *(_QWORD *)(*(_QWORD *)(v3 + 24) + 6000LL);
  v8 = *(_QWORD *)(v3 + 3552);
  v9 = v8 + 104;
  v10 = (_QWORD *)(v8 + 120);
  v11 = *(_QWORD *)(v8 + 104);
  if ( !v11 )
    v11 = *(_QWORD *)(v9 + 8);
  if ( v11 )
  {
    v12 = 40;
    v13 = 16;
LABEL_7:
    v6 = sub_14008FC40(v9, v13, a3, v12);
    goto LABEL_9;
  }
  if ( *v10 )
  {
    v12 = 20;
    v9 = (__int64)v10;
    v13 = 8;
    goto LABEL_7;
  }
  v12 = 30;
  *(_OWORD *)a3 = *(_OWORD *)(v7 + 4);
  *(_DWORD *)(a3 + 16) = *(_DWORD *)(v7 + 20);
  qmemcpy((void *)(a3 + 20), "_00", 3);
  v14 = (unsigned __int8)*(_WORD *)(a1 + 6);
  *(_BYTE *)(a3 + 24) = a0123456789abcd[*(_WORD *)(a1 + 6) & 0xF];
  *(_BYTE *)(a3 + 23) = a0123456789abcd[(unsigned __int64)v14 >> 4];
  v15 = *(unsigned __int16 *)(a1 + 4);
  LOBYTE(v14) = a0123456789abcd[(v15 >> 8) & 0xF];
  *(_BYTE *)(a3 + 28) = a0123456789abcd[*(_WORD *)(a1 + 4) & 0xF];
  *(_BYTE *)(a3 + 26) = v14;
  v16 = a0123456789abcd[(unsigned __int8)v15 >> 4];
  *(_BYTE *)(a3 + 25) = a0123456789abcd[v15 >> 12];
  *(_BYTE *)(a3 + 27) = v16;
  *(_BYTE *)(a3 + 29) = 46;
LABEL_9:
  if ( v6 >= 0 )
    return v12;
  return v4;
}
