/*
 * XREFs of ?vPatNotRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1403396E0
 * Callers:
 *     <none>
 * Callees:
 *     vFetchNotAndCopy @ 0x140237D9C (vFetchNotAndCopy.c)
 *     vFetchShiftNotAndCopy @ 0x1403432EC (vFetchShiftNotAndCopy.c)
 */

void __fastcall vPatNotRow8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  _DWORD *v3; // r11
  int v4; // eax
  int v5; // r12d
  __int64 v7; // r14
  int v8; // r9d
  int v9; // edi
  __int64 v10; // r9
  int v11; // r8d
  int v12; // r13d
  int v13; // r8d
  char v14; // al
  __int64 v15; // r13
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  unsigned int v19; // r15d
  unsigned int v20; // r10d
  unsigned int v21; // esi
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int128 v24; // [rsp+20h] [rbp-30h] BYREF
  __int128 v25; // [rsp+30h] [rbp-20h]
  __int64 v26; // [rsp+40h] [rbp-10h]
  _DWORD *v27; // [rsp+90h] [rbp+40h]
  __int64 v28; // [rsp+A8h] [rbp+58h]

  v3 = (_DWORD *)*((_QWORD *)a1 + 3);
  v26 = 0LL;
  v27 = v3;
  v4 = *((_DWORD *)a1 + 4) * a2;
  v5 = a3;
  v24 = 0LL;
  v25 = 0LL;
  v7 = *(_QWORD *)a1 + v4;
  v8 = a2 - *((_DWORD *)a1 + 9);
  if ( v8 >= 0 )
    v9 = (unsigned int)v8 % *((_DWORD *)a1 + 11);
  else
    v9 = *((_DWORD *)a1 + 11) - (unsigned int)~v8 % *((_DWORD *)a1 + 11) - 1;
  v10 = *((_QWORD *)a1 + 1) + *((_DWORD *)a1 + 5) * v9;
  *((_QWORD *)&v24 + 1) = v10;
  if ( a3 )
  {
    do
    {
      v11 = *((_DWORD *)a1 + 12);
      v12 = v3[1] * v11;
      v13 = *v3 * v11;
      v14 = v12;
      v15 = v12 & 0xFFFFFFFC;
      v16 = v13 & 3;
      v28 = v14 & 3;
      v17 = v13 & 0xFFFFFFFC;
      v18 = v17 - *((_DWORD *)a1 + 8);
      v19 = ~dword_1403625F0[v28];
      v20 = dword_1403625F0[v16];
      if ( v18 >= 0 )
        v21 = (unsigned int)v18 % *((_DWORD *)a1 + 10);
      else
        v21 = *((_DWORD *)a1 + 10) - (unsigned int)~v18 % *((_DWORD *)a1 + 10) - 1;
      if ( (_DWORD)v17 == (_DWORD)v15 )
      {
        LODWORD(v25) = v21;
        *(_DWORD *)(v17 + v7) = *(_DWORD *)(v17 + v7) & ~(v20 & v19) | v20 & v19 & *(_DWORD *)(v21 + v10);
      }
      else
      {
        if ( (_DWORD)v16 )
        {
          LODWORD(v25) = v21;
          *(_DWORD *)(v17 + v7) = *(_DWORD *)(v17 + v7) & ~v20 | v20 & ~*(_DWORD *)(v21 + v10);
          LODWORD(v17) = v17 + 4;
          v21 += 4;
        }
        DWORD2(v25) = (unsigned int)(v15 - v17) >> 2;
        if ( DWORD2(v25) )
        {
          v22 = *((_DWORD *)a1 + 10);
          *(_QWORD *)&v24 = v7 + (unsigned int)v17;
          v21 %= v22;
          *(_QWORD *)&v25 = __PAIR64__(v22, v21);
          HIDWORD(v25) = v22;
          if ( (((unsigned __int8)v22 | (unsigned __int8)v21) & 3) != 0 )
          {
            vFetchShiftNotAndCopy(&v24);
          }
          else
          {
            HIDWORD(v25) = v22 >> 2;
            vFetchNotAndCopy((__int64)&v24);
          }
          v3 = v27;
          v10 = *((_QWORD *)&v24 + 1);
        }
        if ( (_DWORD)v28 )
        {
          LODWORD(v25) = ((int)v21 + 4 * (unsigned __int64)DWORD2(v25)) % *((unsigned int *)a1 + 10);
          *(_DWORD *)(v15 + v7) = *(_DWORD *)(v15 + v7) & ~v19 | v19 & ~*(_DWORD *)((unsigned int)v25 + v10);
        }
      }
      if ( ++v9 == *((_DWORD *)a1 + 11) )
      {
        v10 = *((_QWORD *)a1 + 1);
        v9 = 0;
      }
      else
      {
        v10 += *((int *)a1 + 5);
      }
      v23 = *((int *)a1 + 4);
      v3 += 2;
      *((_QWORD *)&v24 + 1) = v10;
      v7 += v23;
      v27 = v3;
      --v5;
    }
    while ( v5 );
  }
}
