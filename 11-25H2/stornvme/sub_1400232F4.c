/*
 * XREFs of sub_1400232F4 @ 0x1400232F4
 * Callers:
 *     sub_140003520 @ 0x140003520 (sub_140003520.c)
 * Callees:
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 *     sub_1400292D8 @ 0x1400292D8 (sub_1400292D8.c)
 */

__int64 __fastcall sub_1400232F4(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rax
  __int64 v4; // r9
  _DWORD *v5; // rdi
  unsigned __int8 v6; // cl
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 result; // rax
  _DWORD *v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  v3 = (_DWORD *)sub_14000B900(a2, &v11);
  v5 = v3;
  if ( *v11 < 0x28u )
  {
    *(_BYTE *)(a2 + 3) = 21;
LABEL_22:
    result = 3238002694LL;
    goto LABEL_23;
  }
  if ( v3[8] < 0xCu || v3[7] != 1 )
    goto LABEL_21;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v6 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v6 = *(_BYTE *)(a2 + 7);
  if ( v6 == 255 )
  {
    *(_BYTE *)(a2 + 3) = 32;
    goto LABEL_22;
  }
  if ( (*(_BYTE *)(v4 + 3728) & 3) != 3 || *(unsigned __int8 *)(v4 + 3729) != v6 )
  {
    *(_BYTE *)(a2 + 3) = 6;
    result = 3238002695LL;
    goto LABEL_23;
  }
  v7 = v3[9];
  if ( !v7 || *(unsigned __int16 *)(v4 + 3730) < v7 || v7 > 0xFFFF )
  {
LABEL_21:
    *(_BYTE *)(a2 + 3) = 6;
    goto LABEL_22;
  }
  if ( (unsigned int)v6 < *(_DWORD *)(v4 + 224) && (v8 = *(_QWORD *)(v4 + 8LL * v6 + 1672)) != 0 )
    v9 = *(unsigned int *)(v8 + 16);
  else
    v9 = 0LL;
  result = sub_1400292D8(v4, v9, *((unsigned __int16 *)v3 + 18));
  *(_BYTE *)(a2 + 3) = (_DWORD)result != 0 ? 4 : 1;
LABEL_23:
  v5[6] = 0;
  return result;
}
