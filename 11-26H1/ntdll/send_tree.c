/*
 * XREFs of send_tree @ 0x180105DE8
 * Callers:
 *     send_all_trees @ 0x180157204 (send_all_trees.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall send_tree(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 result; // rax
  unsigned int v4; // ebx
  int v5; // edi
  int v6; // r10d
  unsigned __int16 *v8; // r14
  __int64 v9; // r12
  int v10; // edx
  int v11; // ecx
  __int16 v12; // si
  __int64 v13; // rbp
  int v14; // r15d
  _WORD *v15; // r8
  int v16; // ecx
  unsigned __int16 v17; // di
  int v18; // r11d
  __int16 v19; // dx
  __int64 v20; // rcx
  int v21; // eax
  int v22; // r11d
  __int16 v23; // di
  unsigned __int16 v24; // r10
  __int16 v25; // ax
  int v26; // eax
  int *v27; // r11
  unsigned __int16 v28; // si
  int v29; // edi
  __int64 v30; // rcx
  int v31; // eax
  int v32; // edi
  __int16 v33; // si
  unsigned __int16 v34; // r10
  __int64 v35; // rcx
  int v36; // edx
  __int16 v37; // r10
  unsigned __int16 v38; // r11
  int v39; // edi
  __int16 v40; // dx
  __int64 v41; // rcx
  int v42; // eax
  int v43; // edi
  __int16 v44; // r11
  unsigned __int16 v45; // r10
  __int64 v46; // rcx
  int v47; // edx
  int v48; // ecx
  unsigned __int16 v49; // r8
  int v50; // r11d
  __int16 v51; // dx
  __int64 v52; // rcx
  int v53; // r11d
  __int16 v54; // r8
  unsigned __int16 v55; // r10
  int v56; // edi
  __int64 v57; // rcx
  int v58; // eax
  int v59; // edi
  __int16 v60; // r10
  _UNKNOWN *retaddr; // [rsp+20h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v4 = *(unsigned __int16 *)(a2 + 2);
  v5 = -1;
  v6 = 0;
  if ( a3 >= 0LL )
  {
    v8 = (unsigned __int16 *)(a2 + 6);
    v9 = a3 + 1LL;
    v10 = v4 != 0 ? 7 : 138;
    result = -v4;
    v11 = (v4 != 0) + 3;
    do
    {
      v12 = v6;
      v13 = v4;
      ++v6;
      v14 = v4;
      v4 = *v8;
      if ( v6 < v10 && (_DWORD)v13 == v4 )
        goto LABEL_22;
      if ( v6 < v11 )
      {
        do
        {
          v48 = *(_DWORD *)(a1 + 5984);
          v49 = *(_WORD *)(a1 + 4 * v13 + 2804);
          v50 = *(unsigned __int16 *)(a1 + 4 * v13 + 2806);
          result = (unsigned int)(16 - v50);
          v51 = *(_WORD *)(a1 + 5980) | (v49 << v48);
          if ( v48 <= (int)result )
          {
            v53 = v48 + v50;
            v54 = *(_WORD *)(a1 + 5980) | (v49 << v48);
          }
          else
          {
            v52 = *(_QWORD *)(a1 + 16);
            *(_WORD *)(a1 + 5980) = v51;
            *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + v52) = *(_BYTE *)(a1 + 5980);
            *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
            result = *(unsigned int *)(a1 + 5984);
            v53 = result + v50 - 16;
            ++*(_DWORD *)(a1 + 40);
            v54 = v49 >> (16 - result);
          }
          *(_WORD *)(a1 + 5980) = v54;
          *(_DWORD *)(a1 + 5984) = v53;
          --v6;
        }
        while ( v6 );
      }
      else
      {
        v15 = (_WORD *)(a1 + 5980);
        if ( (_DWORD)v13 )
        {
          v27 = (int *)(a1 + 5984);
          if ( v14 != v5 )
          {
            v55 = *(_WORD *)(a1 + 4 * v13 + 2804);
            v56 = *(unsigned __int16 *)(a1 + 4 * v13 + 2806);
            if ( *v27 <= 16 - v56 )
            {
              v59 = *v27 + v56;
              v60 = *v15 | (v55 << *v27);
            }
            else
            {
              v57 = *(_QWORD *)(a1 + 16);
              *v15 |= v55 << *v27;
              *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + v57) = *(_BYTE *)v15;
              *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
              v58 = *v27;
              v59 = *v27 + v56 - 16;
              ++*(_DWORD *)(a1 + 40);
              v60 = v55 >> (16 - v58);
            }
            *v15 = v60;
            LOWORD(v6) = v12;
            *v27 = v59;
          }
          v28 = *(_WORD *)(a1 + 2868);
          v29 = *(unsigned __int16 *)(a1 + 2870);
          if ( *v27 <= 16 - v29 )
          {
            v32 = *v27 + v29;
            v33 = *v15 | (v28 << *v27);
          }
          else
          {
            v30 = *(_QWORD *)(a1 + 16);
            *v15 |= v28 << *v27;
            *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + v30) = *(_BYTE *)v15;
            *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
            v31 = *v27;
            v32 = *v27 + v29 - 16;
            ++*(_DWORD *)(a1 + 40);
            v33 = v28 >> (16 - v31);
          }
          v34 = v6 - 3;
          *v27 = v32;
          if ( v32 <= 14 )
          {
            result = (unsigned int)(v32 + 2);
            v37 = v33 | (v34 << v32);
          }
          else
          {
            v35 = *(_QWORD *)(a1 + 16);
            *v15 = v33 | (v34 << v32);
            *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + v35) = *(_BYTE *)v15;
            *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
            v36 = *v27;
            ++*(_DWORD *)(a1 + 40);
            v37 = v34 >> (16 - v36);
            result = (unsigned int)(v36 - 14);
          }
          *v27 = result;
          goto LABEL_18;
        }
        v16 = *(_DWORD *)(a1 + 5984);
        if ( v6 <= 10 )
        {
          v38 = *(_WORD *)(a1 + 2872);
          v39 = *(unsigned __int16 *)(a1 + 2874);
          v40 = *v15 | (v38 << v16);
          if ( v16 <= 16 - v39 )
          {
            v43 = v16 + v39;
            v44 = *v15 | (v38 << v16);
          }
          else
          {
            v41 = *(_QWORD *)(a1 + 16);
            *v15 = v40;
            *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + v41) = *(_BYTE *)v15;
            *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
            v42 = *(_DWORD *)(a1 + 5984);
            v43 = v42 + v39 - 16;
            ++*(_DWORD *)(a1 + 40);
            v44 = v38 >> (16 - v42);
          }
          v45 = v6 - 3;
          *(_WORD *)(a1 + 5980) = v44;
          *(_DWORD *)(a1 + 5984) = v43;
          if ( v43 <= 13 )
          {
            result = (unsigned int)(v43 + 3);
            v37 = v44 | (v45 << v43);
          }
          else
          {
            v46 = *(_QWORD *)(a1 + 16);
            *v15 = v44 | (v45 << v43);
            *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + v46) = *(_BYTE *)v15;
            *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
            v47 = *(_DWORD *)(a1 + 5984);
            ++*(_DWORD *)(a1 + 40);
            v37 = v45 >> (16 - v47);
            result = (unsigned int)(v47 - 13);
          }
          *(_DWORD *)(a1 + 5984) = result;
LABEL_18:
          *v15 = v37;
          goto LABEL_19;
        }
        v17 = *(_WORD *)(a1 + 2876);
        v18 = *(unsigned __int16 *)(a1 + 2878);
        v19 = *v15 | (v17 << v16);
        if ( v16 <= 16 - v18 )
        {
          v22 = v16 + v18;
          v23 = *v15 | (v17 << v16);
        }
        else
        {
          v20 = *(_QWORD *)(a1 + 16);
          *v15 = v19;
          *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + v20) = *(_BYTE *)v15;
          *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
          v21 = *(_DWORD *)(a1 + 5984);
          v22 = v21 + v18 - 16;
          ++*(_DWORD *)(a1 + 40);
          v23 = v17 >> (16 - v21);
        }
        v24 = v6 - 11;
        *(_WORD *)(a1 + 5980) = v23;
        *(_DWORD *)(a1 + 5984) = v22;
        v25 = v23 | (v24 << v22);
        *v15 = v25;
        if ( v22 <= 9 )
        {
          result = (unsigned int)(v22 + 7);
        }
        else
        {
          *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + *(_QWORD *)(a1 + 16)) = v25;
          *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
          v26 = *(_DWORD *)(a1 + 5984);
          ++*(_DWORD *)(a1 + 40);
          *v15 = v24 >> (16 - v26);
          result = (unsigned int)(v26 - 9);
        }
        *(_DWORD *)(a1 + 5984) = result;
      }
LABEL_19:
      v6 = 0;
      v5 = v14;
      if ( v4 )
      {
        if ( (_DWORD)v13 != v4 )
        {
          v10 = 7;
          v11 = 4;
          goto LABEL_22;
        }
        v10 = 6;
      }
      else
      {
        v10 = 138;
      }
      v11 = 3;
LABEL_22:
      v8 += 2;
      --v9;
    }
    while ( v9 );
  }
  return result;
}
