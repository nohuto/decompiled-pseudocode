/*
 * XREFs of ?vPatNotRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x140316B70
 * Callers:
 *     <none>
 * Callees:
 *     vFetchNotAndCopy @ 0x14022CD10 (vFetchNotAndCopy.c)
 *     vFetchShiftNotAndCopy @ 0x14032094C (vFetchShiftNotAndCopy.c)
 */

void __fastcall vPatNotRow8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  _DWORD *v3; // r11
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // r15d
  __int64 v8; // r14
  int v9; // r9d
  int v10; // ebx
  __int64 v11; // r9
  int v12; // r10d
  int v13; // r12d
  int v14; // r10d
  char v15; // dl
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r10
  int v20; // eax
  unsigned int v21; // r8d
  unsigned int v22; // r13d
  unsigned int v23; // esi
  unsigned int v24; // esi
  unsigned int v25; // ecx
  __int64 v26; // rax
  __int128 v27; // [rsp+20h] [rbp-30h] BYREF
  __int128 v28; // [rsp+30h] [rbp-20h]
  __int64 v29; // [rsp+40h] [rbp-10h]
  _DWORD *v30; // [rsp+90h] [rbp+40h]
  int v31; // [rsp+98h] [rbp+48h]

  v3 = (_DWORD *)*((_QWORD *)a1 + 3);
  v4 = *((_DWORD *)a1 + 11);
  v29 = 0LL;
  v30 = v3;
  v5 = *((_DWORD *)a1 + 4) * a2;
  v6 = a3;
  v27 = 0LL;
  v28 = 0LL;
  v8 = *(_QWORD *)a1 + v5;
  v9 = a2 - *((_DWORD *)a1 + 9);
  if ( v9 >= 0 )
    v10 = v9 % v4;
  else
    v10 = v4 - ~v9 % v4 - 1;
  v11 = *((_QWORD *)a1 + 1) + *((_DWORD *)a1 + 5) * v10;
  *((_QWORD *)&v27 + 1) = v11;
  if ( a3 )
  {
    do
    {
      v12 = *((_DWORD *)a1 + 12);
      v13 = v3[1] * v12;
      v14 = *v3 * v12;
      v15 = v13;
      v16 = v13 & 0xFFFFFFFC;
      v17 = v15 & 3;
      v18 = v14 & 3;
      v31 = v17;
      v19 = v14 & 0xFFFFFFFC;
      v20 = v19 - *((_DWORD *)a1 + 8);
      v21 = dword_140355968[v18];
      v22 = ~dword_140355968[v17];
      v23 = *((_DWORD *)a1 + 10);
      if ( v20 >= 0 )
        v24 = v20 % v23;
      else
        v24 = v23 - ~v20 % v23 - 1;
      if ( (_DWORD)v19 == (_DWORD)v16 )
      {
        LODWORD(v28) = v24;
        *(_DWORD *)(v19 + v8) = *(_DWORD *)(v19 + v8) & ~(v22 & v21) | v22 & v21 & *(_DWORD *)(v24 + v11);
      }
      else
      {
        if ( (_DWORD)v18 )
        {
          LODWORD(v28) = v24;
          *(_DWORD *)(v19 + v8) = *(_DWORD *)(v19 + v8) & ~v21 | v21 & ~*(_DWORD *)(v24 + v11);
          LODWORD(v19) = v19 + 4;
          v24 += 4;
        }
        DWORD2(v28) = (unsigned int)(v16 - v19) >> 2;
        if ( (unsigned int)(v16 - v19) >= 4 )
        {
          v25 = *((_DWORD *)a1 + 10);
          *(_QWORD *)&v27 = v8 + (unsigned int)v19;
          v24 %= v25;
          *(_QWORD *)&v28 = __PAIR64__(v25, v24);
          HIDWORD(v28) = v25;
          if ( (((unsigned __int8)v24 | (unsigned __int8)v25) & 3) != 0 )
          {
            vFetchShiftNotAndCopy(&v27);
          }
          else
          {
            HIDWORD(v28) = v25 >> 2;
            vFetchNotAndCopy((__int64)&v27);
          }
          v3 = v30;
          v11 = *((_QWORD *)&v27 + 1);
        }
        if ( v31 )
        {
          LODWORD(v28) = ((int)v24 + 4 * (unsigned __int64)DWORD2(v28)) % *((unsigned int *)a1 + 10);
          *(_DWORD *)(v16 + v8) = *(_DWORD *)(v16 + v8) & ~v22 | v22 & ~*(_DWORD *)((unsigned int)v28 + v11);
        }
      }
      if ( ++v10 == *((_DWORD *)a1 + 11) )
      {
        v11 = *((_QWORD *)a1 + 1);
        v10 = 0;
      }
      else
      {
        v11 += *((int *)a1 + 5);
      }
      v26 = *((int *)a1 + 4);
      v3 += 2;
      *((_QWORD *)&v27 + 1) = v11;
      v8 += v26;
      v30 = v3;
      --v6;
    }
    while ( v6 );
  }
}
