/*
 * XREFs of sub_1401133D8 @ 0x1401133D8
 * Callers:
 *     sub_1400FD098 @ 0x1400FD098 (sub_1400FD098.c)
 * Callees:
 *     sub_1400E5218 @ 0x1400E5218 (sub_1400E5218.c)
 *     sub_140112680 @ 0x140112680 (sub_140112680.c)
 */

__int64 __fastcall sub_1401133D8(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // ebx
  _BYTE *v5; // rsi
  bool v6; // zf
  __int64 v9; // rbp
  char v10; // r11
  unsigned int v11; // edi
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rcx
  unsigned int v18; // edx
  unsigned int v19; // r8d
  int v20; // eax
  unsigned int v21; // eax
  _BYTE *v22; // rdi
  __int64 v23; // rcx
  __int64 v25; // [rsp+28h] [rbp-50h]
  __int64 v26; // [rsp+30h] [rbp-48h]
  __int64 v27; // [rsp+38h] [rbp-40h]
  __int64 v28; // [rsp+40h] [rbp-38h]
  __int64 v29; // [rsp+48h] [rbp-30h]
  __int64 v30; // [rsp+50h] [rbp-28h]
  __int64 v31; // [rsp+88h] [rbp+10h] BYREF

  v31 = a2;
  v4 = 0;
  v5 = (_BYTE *)a4;
  v6 = *(_BYTE *)(a3 + 2) == 40;
  LOWORD(v31) = 0;
  v9 = 0LL;
  if ( v6 )
  {
    v10 = 0;
    if ( !*(_DWORD *)(a3 + 20) )
    {
      v11 = *(_DWORD *)(a3 + 56);
      v12 = 0;
      if ( v11 )
      {
        while ( 1 )
        {
          v13 = *(unsigned int *)(a3 + 4LL * v12 + 120);
          if ( (unsigned int)v13 >= 0x80 )
          {
            a4 = *(unsigned int *)(a3 + 16);
            if ( (unsigned int)v13 < (unsigned int)a4 )
              break;
          }
LABEL_11:
          if ( ++v12 >= v11 )
            goto LABEL_12;
        }
        v14 = (unsigned int)v13;
        v15 = *(_DWORD *)(v13 + a3) - 64;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( !v16 )
          {
            if ( v14 + 56 <= a4 )
              v10 = 1;
            goto LABEL_10;
          }
          if ( v16 != 1 )
            goto LABEL_10;
        }
        if ( v14 + 40 <= a4 )
          goto LABEL_12;
LABEL_10:
        if ( v10 )
          goto LABEL_12;
        goto LABEL_11;
      }
    }
LABEL_12:
    v17 = *(_QWORD *)(a3 + 64);
    v18 = *(_DWORD *)(a3 + 60);
  }
  else
  {
    v17 = *(_QWORD *)(a3 + 24);
    v18 = *(_DWORD *)(a3 + 16);
  }
  LOBYTE(a4) = *v5;
  v19 = 4;
  if ( *v5 != 21 )
    v19 = 8;
  if ( (v5[1] & 0x10) != 0 )
  {
    if ( v17
      && v18 >= v19
      && ((_BYTE)a4 != 21
        ? (BYTE1(v31) = *(_BYTE *)MEMORY[3], LOBYTE(v31) = *(_BYTE *)(MEMORY[3] + 1LL), v20 = (unsigned __int16)v31)
        : (v20 = *(unsigned __int8 *)(v17 + 3), v9 = v17),
          (v21 = v19 + v20, v22 = (_BYTE *)(v9 + v21), v18 - v21 >= 0xC)
       && (*v22 & 0x3F) == 8
       && v22[1] == 10
       && (v23 = *(_QWORD *)(a1 + 16), (*(_BYTE *)(*(_QWORD *)(v23 + 592) + 525LL) & 1) != 0)) )
    {
      sub_1400E5218(
        v23,
        *(_DWORD *)(a1 + 56),
        6,
        a4,
        ((unsigned __int8)v22[2] >> 2) & 1,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30,
        &v31);
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 136LL) = ((unsigned __int64)(unsigned __int8)v22[2] << 17) ^ (*(_QWORD *)(*(_QWORD *)(a1 + 16) + 136LL) ^ ((unsigned __int64)(unsigned __int8)v22[2] << 17)) & 0xFFFFFFFFFFF7FFFFuLL;
    }
    else
    {
      sub_140112680(a3, 6, 5, 36, 0);
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    sub_140112680(a3, 6, 5, 36, 0);
    return (unsigned int)-1073741808;
  }
  return v4;
}
