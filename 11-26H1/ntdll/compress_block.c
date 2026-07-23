/*
 * XREFs of compress_block @ 0x180156D28
 * Callers:
 *     _tr_flush_block @ 0x180156884 (_tr_flush_block.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall compress_block(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  int *v4; // r11
  __int64 v7; // rdx
  __int64 *v8; // rbx
  int v9; // r8d
  __int64 v10; // rsi
  int v11; // ecx
  __int64 v12; // rsi
  __int64 v13; // r15
  int v14; // r8d
  _DWORD *v15; // r10
  unsigned __int16 v16; // r8
  int v17; // ebp
  __int64 v18; // rcx
  int v19; // eax
  int v20; // ebp
  __int16 v21; // r8
  __int64 v22; // r13
  __int64 v23; // rax
  unsigned __int16 v24; // r14
  int v25; // ebp
  __int64 v26; // rcx
  int v27; // eax
  int v28; // edx
  __int16 v29; // r14
  int v30; // ebp
  unsigned __int16 v31; // r15
  int v32; // eax
  unsigned int v33; // r8d
  __int64 v34; // rax
  __int64 v35; // r13
  char v36; // cl
  int v37; // r15d
  unsigned __int16 v38; // bp
  __int64 v39; // rdx
  __int16 v40; // ax
  __int64 v41; // rcx
  __int16 v42; // ax
  int v43; // eax
  int v44; // r15d
  __int16 v45; // bp
  int v46; // r14d
  unsigned __int16 v47; // r8
  int v48; // eax
  char v49; // cl
  int v50; // eax
  unsigned __int16 v51; // si
  int v52; // ebp
  __int64 result; // rax
  __int64 v54; // r8
  int v55; // r8d
  __int16 v56; // si
  _DWORD *v57; // [rsp+60h] [rbp+8h]
  _QWORD *v58; // [rsp+68h] [rbp+10h]

  v3 = 0LL;
  v4 = (int *)(a1 + 5984);
  if ( *(_DWORD *)(a1 + 5956) )
  {
    do
    {
      v7 = *(_QWORD *)(a1 + 5944);
      v8 = (__int64 *)(a1 + 16);
      v9 = *(unsigned __int8 *)(v3 + v7);
      v10 = (unsigned int)(v3 + 1);
      v11 = *(unsigned __int8 *)(v10 + v7);
      v12 = (unsigned int)(v10 + 1);
      v13 = *(unsigned __int8 *)(v12 + v7);
      v3 = (unsigned int)(v12 + 1);
      v14 = (v11 << 8) + v9;
      if ( v14 )
      {
        v22 = length_code[v13];
        v23 = (unsigned int)(v22 + 257);
        v24 = *(_WORD *)(a2 + 4 * v23);
        v25 = *(unsigned __int16 *)(a2 + 4 * v23 + 2);
        if ( *v4 <= 16 - v25 )
        {
          v29 = *(_WORD *)(a1 + 5980) | (v24 << *v4);
          v28 = v25 + *v4;
          v15 = (_DWORD *)(a1 + 40);
        }
        else
        {
          v26 = *v8;
          *(_WORD *)(a1 + 5980) |= v24 << *v4;
          v15 = (_DWORD *)(a1 + 40);
          *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + v26) = *(_BYTE *)(a1 + 5980);
          *(_BYTE *)(*(unsigned int *)(a1 + 40) + *v8) = *(_BYTE *)(a1 + 5981);
          v27 = *v4;
          ++*(_DWORD *)(a1 + 40);
          v28 = v25 + v27 - 16;
          v29 = v24 >> (16 - v27);
        }
        *(_WORD *)(a1 + 5980) = v29;
        *v4 = v28;
        v30 = dword_180191A10[v22];
        v58 = (_QWORD *)(a1 + 16);
        v57 = v15;
        if ( v30 )
        {
          v31 = v13 - word_180191990[2 * v22];
          v29 |= v31 << v28;
          *(_WORD *)(a1 + 5980) = v29;
          if ( v28 > 16 - v30 )
          {
            *(_BYTE *)((unsigned int)(*v15)++ + *v8) = v29;
            *(_BYTE *)((unsigned int)*v15 + *v8) = *(_BYTE *)(a1 + 5981);
            v32 = *v4;
            ++*v15;
            v29 = v31 >> (16 - v32);
            *(_WORD *)(a1 + 5980) = v29;
            v28 = v32 - 16;
          }
          v28 += v30;
          *v4 = v28;
        }
        v33 = v14 - 1;
        if ( v33 >= 0x100 )
          v34 = (v33 >> 7) + 256;
        else
          v34 = v33;
        v35 = dist_code[v34];
        v36 = v28;
        v37 = *(unsigned __int16 *)(a3 + 4 * v35 + 2);
        v38 = *(_WORD *)(a3 + 4 * v35);
        if ( v28 <= 16 - v37 )
        {
          v44 = v28 + v37;
          v45 = v29 | (v38 << v28);
          v15 = (_DWORD *)(a1 + 40);
          v8 = (__int64 *)(a1 + 16);
        }
        else
        {
          v39 = (unsigned int)*v15;
          v40 = v38 << v36;
          v41 = *v8;
          v42 = v29 | v40;
          *(_WORD *)(a1 + 5980) = v42;
          *(_BYTE *)(v39 + v41) = v42;
          *(_BYTE *)((unsigned int)++*v15 + *v8) = *(_BYTE *)(a1 + 5981);
          v43 = *v4;
          v44 = *v4 + v37 - 16;
          ++*v15;
          v45 = v38 >> (16 - v43);
        }
        *(_WORD *)(a1 + 5980) = v45;
        *v4 = v44;
        v46 = dword_180191A90[v35];
        if ( v46 )
        {
          v47 = v33 - word_180191910[2 * v35];
          *(_WORD *)(a1 + 5980) = v45 | (v47 << v44);
          if ( v44 <= 16 - v46 )
          {
            v50 = v44 + v46;
          }
          else
          {
            v15 = v57;
            v8 = (__int64 *)(a1 + 16);
            *(_BYTE *)((unsigned int)(*v57)++ + *v58) = *(_BYTE *)(a1 + 5980);
            *(_BYTE *)((unsigned int)*v57 + *v58) = *(_BYTE *)(a1 + 5981);
            v48 = *v4;
            v49 = 16 - *v4;
            ++*v57;
            *(_WORD *)(a1 + 5980) = v47 >> v49;
            v50 = v46 + v48 - 16;
          }
          *v4 = v50;
        }
      }
      else
      {
        v15 = (_DWORD *)(a1 + 40);
        v16 = *(_WORD *)(a2 + 4 * v13);
        v17 = *(unsigned __int16 *)(a2 + 4 * v13 + 2);
        if ( *v4 <= 16 - v17 )
        {
          v20 = *v4 + v17;
          v21 = *(_WORD *)(a1 + 5980) | (v16 << *v4);
        }
        else
        {
          v18 = *v8;
          *(_WORD *)(a1 + 5980) |= v16 << *v4;
          *(_BYTE *)((unsigned int)(*v15)++ + v18) = *(_BYTE *)(a1 + 5980);
          *(_BYTE *)((unsigned int)*v15 + *v8) = *(_BYTE *)(a1 + 5981);
          v19 = *v4;
          v20 = *v4 + v17 - 16;
          ++*v15;
          v21 = v16 >> (16 - v19);
        }
        *(_WORD *)(a1 + 5980) = v21;
        *v4 = v20;
      }
    }
    while ( (unsigned int)v3 < *(_DWORD *)(a1 + 5956) );
  }
  else
  {
    v15 = (_DWORD *)(a1 + 40);
    v8 = (__int64 *)(a1 + 16);
  }
  v51 = *(_WORD *)(a2 + 1024);
  v52 = *(unsigned __int16 *)(a2 + 1026);
  result = (unsigned int)(16 - v52);
  if ( *v4 <= (int)result )
  {
    v55 = *v4 + v52;
    v56 = *(_WORD *)(a1 + 5980) | (v51 << *v4);
  }
  else
  {
    v54 = (unsigned int)*v15;
    *(_WORD *)(a1 + 5980) |= v51 << *v4;
    *(_BYTE *)(v54 + *v8) = *(_BYTE *)(a1 + 5980);
    *(_BYTE *)((unsigned int)++*v15 + *v8) = *(_BYTE *)(a1 + 5981);
    result = (unsigned int)*v4;
    v55 = result + v52 - 16;
    ++*v15;
    v56 = v51 >> (16 - result);
  }
  *(_WORD *)(a1 + 5980) = v56;
  *v4 = v55;
  return result;
}
