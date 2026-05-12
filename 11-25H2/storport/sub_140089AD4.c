/*
 * XREFs of sub_140089AD4 @ 0x140089AD4
 * Callers:
 *     sub_1400610C8 @ 0x1400610C8 (sub_1400610C8.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14005A440 @ 0x14005A440 (sub_14005A440.c)
 */

__int64 __fastcall sub_140089AD4(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // rbp
  unsigned int v5; // edi
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  _BYTE *v11; // rax
  __int64 result; // rax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  v9 = (_DWORD *)sub_1400143E0(64LL, 44LL, 1918067026LL, *(_QWORD *)(a1 + 8));
  v10 = v9;
  if ( v9 )
  {
    v9[4] = 3004036;
    *v9 = 28;
    v9[3] = *(_DWORD *)(a1 + 4124);
    v9[6] = 16;
    v9[8] = 16;
    v9[7] = 1;
    v13 = *(_OWORD *)(v4 + 8);
    v11 = sub_14005A440(a1, &v13);
    if ( v11 )
    {
      v10[9] = 8;
      *((_BYTE *)v10 + 43) = v11[106];
      *((_BYTE *)v10 + 41) = v11[104];
      *((_BYTE *)v10 + 40) = 0;
      *((_BYTE *)v10 + 42) = v11[105];
    }
    else
    {
      v5 = -1073741632;
    }
  }
  else
  {
    v5 = -1073741670;
  }
  result = v5;
  *a3 = v10;
  *a4 = 44;
  return result;
}
