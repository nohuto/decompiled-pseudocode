/*
 * XREFs of send_tree @ 0x14063A124
 * Callers:
 *     send_all_trees @ 0x140639ECC (send_all_trees.c)
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
  int v15; // ecx
  unsigned __int16 v16; // r8
  int v17; // r11d
  __int16 v18; // dx
  __int64 v19; // rcx
  int v20; // r11d
  __int16 v21; // r8
  _WORD *v22; // r8
  int *v23; // r11
  unsigned __int16 v24; // r10
  int v25; // edi
  __int64 v26; // rcx
  int v27; // eax
  int v28; // edi
  __int16 v29; // r10
  unsigned __int16 v30; // si
  int v31; // edi
  __int64 v32; // rcx
  int v33; // eax
  int v34; // edi
  __int16 v35; // si
  unsigned __int16 v36; // r10
  __int64 v37; // rcx
  int v38; // edx
  __int16 v39; // r10
  int v40; // ecx
  unsigned __int16 v41; // r11
  int v42; // edi
  __int16 v43; // dx
  __int64 v44; // rcx
  int v45; // eax
  int v46; // edi
  __int16 v47; // r11
  unsigned __int16 v48; // r10
  __int64 v49; // rcx
  int v50; // edx
  unsigned __int16 v51; // di
  int v52; // r11d
  __int16 v53; // dx
  __int64 v54; // rcx
  int v55; // eax
  int v56; // r11d
  __int16 v57; // di
  unsigned __int16 v58; // r10
  __int16 v59; // ax
  int v60; // eax
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
        goto LABEL_46;
      if ( v6 >= v11 )
      {
        v22 = (_WORD *)(a1 + 5980);
        if ( (_DWORD)v13 )
        {
          v23 = (int *)(a1 + 5984);
          if ( v14 != v5 )
          {
            v24 = *(_WORD *)(a1 + 4 * v13 + 2804);
            v25 = *(unsigned __int16 *)(a1 + 4 * v13 + 2806);
            if ( *v23 <= 16 - v25 )
            {
              v28 = *v23 + v25;
              v29 = *v22 | (v24 << *v23);
            }
            else
            {
              v26 = *(_QWORD *)(a1 + 16);
              *v22 |= v24 << *v23;
              *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + v26) = *(_BYTE *)v22;
              *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
              v27 = *v23;
              v28 = *v23 + v25 - 16;
              ++*(_DWORD *)(a1 + 40);
              v29 = v24 >> (16 - v27);
            }
            *v22 = v29;
            LOWORD(v6) = v12;
            *v23 = v28;
          }
          v30 = *(_WORD *)(a1 + 2868);
          v31 = *(unsigned __int16 *)(a1 + 2870);
          if ( *v23 <= 16 - v31 )
          {
            v34 = *v23 + v31;
            v35 = *v22 | (v30 << *v23);
          }
          else
          {
            v32 = *(_QWORD *)(a1 + 16);
            *v22 |= v30 << *v23;
            *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + v32) = *(_BYTE *)v22;
            *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
            v33 = *v23;
            v34 = *v23 + v31 - 16;
            ++*(_DWORD *)(a1 + 40);
            v35 = v30 >> (16 - v33);
          }
          v36 = v6 - 3;
          *v23 = v34;
          if ( v34 <= 14 )
          {
            result = (unsigned int)(v34 + 2);
            v39 = v35 | (v36 << v34);
          }
          else
          {
            v37 = *(_QWORD *)(a1 + 16);
            *v22 = v35 | (v36 << v34);
            *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + v37) = *(_BYTE *)v22;
            *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
            v38 = *v23;
            ++*(_DWORD *)(a1 + 40);
            v39 = v36 >> (16 - v38);
            result = (unsigned int)(v38 - 14);
          }
          *v23 = result;
          goto LABEL_32;
        }
        v40 = *(_DWORD *)(a1 + 5984);
        if ( v6 <= 10 )
        {
          v41 = *(_WORD *)(a1 + 2872);
          v42 = *(unsigned __int16 *)(a1 + 2874);
          v43 = *v22 | (v41 << v40);
          if ( v40 <= 16 - v42 )
          {
            v46 = v40 + v42;
            v47 = *v22 | (v41 << v40);
          }
          else
          {
            v44 = *(_QWORD *)(a1 + 16);
            *v22 = v43;
            *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + v44) = *(_BYTE *)v22;
            *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
            v45 = *(_DWORD *)(a1 + 5984);
            v46 = v45 + v42 - 16;
            ++*(_DWORD *)(a1 + 40);
            v47 = v41 >> (16 - v45);
          }
          v48 = v6 - 3;
          *(_WORD *)(a1 + 5980) = v47;
          *(_DWORD *)(a1 + 5984) = v46;
          if ( v46 <= 13 )
          {
            result = (unsigned int)(v46 + 3);
            v39 = v47 | (v48 << v46);
          }
          else
          {
            v49 = *(_QWORD *)(a1 + 16);
            *v22 = v47 | (v48 << v46);
            *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + v49) = *(_BYTE *)v22;
            *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
            v50 = *(_DWORD *)(a1 + 5984);
            ++*(_DWORD *)(a1 + 40);
            v39 = v48 >> (16 - v50);
            result = (unsigned int)(v50 - 13);
          }
          *(_DWORD *)(a1 + 5984) = result;
LABEL_32:
          *v22 = v39;
          goto LABEL_40;
        }
        v51 = *(_WORD *)(a1 + 2876);
        v52 = *(unsigned __int16 *)(a1 + 2878);
        v53 = *v22 | (v51 << v40);
        if ( v40 <= 16 - v52 )
        {
          v56 = v40 + v52;
          v57 = *v22 | (v51 << v40);
        }
        else
        {
          v54 = *(_QWORD *)(a1 + 16);
          *v22 = v53;
          *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + v54) = *(_BYTE *)v22;
          *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
          v55 = *(_DWORD *)(a1 + 5984);
          v56 = v55 + v52 - 16;
          ++*(_DWORD *)(a1 + 40);
          v57 = v51 >> (16 - v55);
        }
        v58 = v6 - 11;
        *(_WORD *)(a1 + 5980) = v57;
        *(_DWORD *)(a1 + 5984) = v56;
        v59 = v57 | (v58 << v56);
        *v22 = v59;
        if ( v56 <= 9 )
        {
          result = (unsigned int)(v56 + 7);
        }
        else
        {
          *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + *(_QWORD *)(a1 + 16)) = v59;
          *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
          v60 = *(_DWORD *)(a1 + 5984);
          ++*(_DWORD *)(a1 + 40);
          *v22 = v58 >> (16 - v60);
          result = (unsigned int)(v60 - 9);
        }
        *(_DWORD *)(a1 + 5984) = result;
      }
      else
      {
        do
        {
          v15 = *(_DWORD *)(a1 + 5984);
          v16 = *(_WORD *)(a1 + 4 * v13 + 2804);
          v17 = *(unsigned __int16 *)(a1 + 4 * v13 + 2806);
          result = (unsigned int)(16 - v17);
          v18 = *(_WORD *)(a1 + 5980) | (v16 << v15);
          if ( v15 <= (int)result )
          {
            v20 = v15 + v17;
            v21 = *(_WORD *)(a1 + 5980) | (v16 << v15);
          }
          else
          {
            v19 = *(_QWORD *)(a1 + 16);
            *(_WORD *)(a1 + 5980) = v18;
            *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + v19) = *(_BYTE *)(a1 + 5980);
            *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
            result = *(unsigned int *)(a1 + 5984);
            v20 = result + v17 - 16;
            ++*(_DWORD *)(a1 + 40);
            v21 = v16 >> (16 - result);
          }
          *(_WORD *)(a1 + 5980) = v21;
          *(_DWORD *)(a1 + 5984) = v20;
          --v6;
        }
        while ( v6 );
      }
LABEL_40:
      v6 = 0;
      v5 = v14;
      if ( v4 )
      {
        if ( (_DWORD)v13 != v4 )
        {
          v10 = 7;
          v11 = 4;
          goto LABEL_46;
        }
        v10 = 6;
      }
      else
      {
        v10 = 138;
      }
      v11 = 3;
LABEL_46:
      v8 += 2;
      --v9;
    }
    while ( v9 );
  }
  return result;
}
