/*
 * XREFs of send_tree @ 0x14063711C
 * Callers:
 *     send_all_trees @ 0x140636EC4 (send_all_trees.c)
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
  int v10; // ecx
  int v11; // edx
  __int16 v12; // si
  unsigned int v13; // ebp
  int v14; // r15d
  unsigned __int64 v15; // rdi
  int v16; // ecx
  unsigned __int16 v17; // r8
  int v18; // r11d
  __int16 v19; // dx
  __int64 v20; // rcx
  int v21; // r11d
  __int16 v22; // r8
  _WORD *v23; // r8
  int *v24; // r11
  unsigned __int16 v25; // r10
  int v26; // edi
  __int64 v27; // rcx
  int v28; // eax
  int v29; // edi
  __int16 v30; // r10
  unsigned __int16 v31; // si
  int v32; // edi
  __int64 v33; // rcx
  int v34; // eax
  int v35; // edi
  __int16 v36; // si
  unsigned __int16 v37; // r10
  __int64 v38; // rcx
  int v39; // edx
  __int16 v40; // r10
  int v41; // ecx
  unsigned __int16 v42; // r11
  int v43; // edi
  __int16 v44; // dx
  __int64 v45; // rcx
  int v46; // eax
  int v47; // edi
  __int16 v48; // r11
  unsigned __int16 v49; // r10
  __int64 v50; // rcx
  int v51; // edx
  unsigned __int16 v52; // di
  int v53; // r11d
  __int16 v54; // dx
  __int64 v55; // rcx
  int v56; // eax
  int v57; // r11d
  __int16 v58; // di
  unsigned __int16 v59; // r10
  __int16 v60; // ax
  int v61; // eax
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
    v11 = (v4 != 0) + 3;
    do
    {
      v12 = v6;
      result = v4;
      ++v6;
      v13 = v4;
      v14 = v4;
      v4 = *v8;
      if ( v6 < v10 && v14 == v4 )
        goto LABEL_47;
      if ( v6 >= v11 )
      {
        v23 = (_WORD *)(a1 + 5980);
        if ( v13 )
        {
          v24 = (int *)(a1 + 5984);
          if ( v14 != v5 )
          {
            v25 = *(_WORD *)(a1 + 4 * result + 2804);
            v26 = *(unsigned __int16 *)(a1 + 4 * result + 2806);
            if ( *v24 <= 16 - v26 )
            {
              v29 = *v24 + v26;
              v30 = *v23 | (v25 << *v24);
            }
            else
            {
              v27 = *(_QWORD *)(a1 + 16);
              *v23 |= v25 << *v24;
              *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + v27) = *(_BYTE *)v23;
              *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
              v28 = *v24;
              v29 = *v24 + v26 - 16;
              ++*(_DWORD *)(a1 + 40);
              v30 = v25 >> (16 - v28);
            }
            *v23 = v30;
            LOWORD(v6) = v12;
            *v24 = v29;
          }
          v31 = *(_WORD *)(a1 + 2868);
          v32 = *(unsigned __int16 *)(a1 + 2870);
          if ( *v24 <= 16 - v32 )
          {
            v35 = *v24 + v32;
            v36 = *v23 | (v31 << *v24);
          }
          else
          {
            v33 = *(_QWORD *)(a1 + 16);
            *v23 |= v31 << *v24;
            *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + v33) = *(_BYTE *)v23;
            *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
            v34 = *v24;
            v35 = *v24 + v32 - 16;
            ++*(_DWORD *)(a1 + 40);
            v36 = v31 >> (16 - v34);
          }
          v37 = v6 - 3;
          *v24 = v35;
          if ( v35 <= 14 )
          {
            result = (unsigned int)(v35 + 2);
            v40 = v36 | (v37 << v35);
          }
          else
          {
            v38 = *(_QWORD *)(a1 + 16);
            *v23 = v36 | (v37 << v35);
            *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + v38) = *(_BYTE *)v23;
            *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
            v39 = *v24;
            ++*(_DWORD *)(a1 + 40);
            v40 = v37 >> (16 - v39);
            result = (unsigned int)(v39 - 14);
          }
          *v24 = result;
          goto LABEL_33;
        }
        v41 = *(_DWORD *)(a1 + 5984);
        if ( v6 <= 10 )
        {
          v42 = *(_WORD *)(a1 + 2872);
          v43 = *(unsigned __int16 *)(a1 + 2874);
          v44 = *v23 | (v42 << v41);
          if ( v41 <= 16 - v43 )
          {
            v47 = v41 + v43;
            v48 = *v23 | (v42 << v41);
          }
          else
          {
            v45 = *(_QWORD *)(a1 + 16);
            *v23 = v44;
            *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + v45) = *(_BYTE *)v23;
            *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
            v46 = *(_DWORD *)(a1 + 5984);
            v47 = v46 + v43 - 16;
            ++*(_DWORD *)(a1 + 40);
            v48 = v42 >> (16 - v46);
          }
          v49 = v6 - 3;
          *(_WORD *)(a1 + 5980) = v48;
          *(_DWORD *)(a1 + 5984) = v47;
          if ( v47 <= 13 )
          {
            result = (unsigned int)(v47 + 3);
            v40 = v48 | (v49 << v47);
          }
          else
          {
            v50 = *(_QWORD *)(a1 + 16);
            *v23 = v48 | (v49 << v47);
            *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + v50) = *(_BYTE *)v23;
            *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
            v51 = *(_DWORD *)(a1 + 5984);
            ++*(_DWORD *)(a1 + 40);
            v40 = v49 >> (16 - v51);
            result = (unsigned int)(v51 - 13);
          }
          *(_DWORD *)(a1 + 5984) = result;
LABEL_33:
          *v23 = v40;
          goto LABEL_41;
        }
        v52 = *(_WORD *)(a1 + 2876);
        v53 = *(unsigned __int16 *)(a1 + 2878);
        v54 = *v23 | (v52 << v41);
        if ( v41 <= 16 - v53 )
        {
          v57 = v41 + v53;
          v58 = *v23 | (v52 << v41);
        }
        else
        {
          v55 = *(_QWORD *)(a1 + 16);
          *v23 = v54;
          *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + v55) = *(_BYTE *)v23;
          *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
          v56 = *(_DWORD *)(a1 + 5984);
          v57 = v56 + v53 - 16;
          ++*(_DWORD *)(a1 + 40);
          v58 = v52 >> (16 - v56);
        }
        v59 = v6 - 11;
        *(_WORD *)(a1 + 5980) = v58;
        *(_DWORD *)(a1 + 5984) = v57;
        v60 = v58 | (v59 << v57);
        *v23 = v60;
        if ( v57 <= 9 )
        {
          result = (unsigned int)(v57 + 7);
        }
        else
        {
          *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + *(_QWORD *)(a1 + 16)) = v60;
          *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
          v61 = *(_DWORD *)(a1 + 5984);
          ++*(_DWORD *)(a1 + 40);
          *v23 = v59 >> (16 - v61);
          result = (unsigned int)(v61 - 9);
        }
        *(_DWORD *)(a1 + 5984) = result;
      }
      else
      {
        v15 = result;
        do
        {
          v16 = *(_DWORD *)(a1 + 5984);
          v17 = *(_WORD *)(a1 + 4 * v15 + 2804);
          v18 = *(unsigned __int16 *)(a1 + 4 * v15 + 2806);
          result = (unsigned int)(16 - v18);
          v19 = *(_WORD *)(a1 + 5980) | (v17 << v16);
          if ( v16 <= (int)result )
          {
            v21 = v16 + v18;
            v22 = *(_WORD *)(a1 + 5980) | (v17 << v16);
          }
          else
          {
            v20 = *(_QWORD *)(a1 + 16);
            *(_WORD *)(a1 + 5980) = v19;
            *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + v20) = *(_BYTE *)(a1 + 5980);
            *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
            result = *(unsigned int *)(a1 + 5984);
            v21 = result + v18 - 16;
            ++*(_DWORD *)(a1 + 40);
            v22 = v17 >> (16 - result);
          }
          *(_WORD *)(a1 + 5980) = v22;
          *(_DWORD *)(a1 + 5984) = v21;
          --v6;
        }
        while ( v6 );
      }
LABEL_41:
      v6 = 0;
      v5 = v14;
      if ( v4 )
      {
        if ( v13 != v4 )
        {
          v10 = 7;
          v11 = 4;
          goto LABEL_47;
        }
        v10 = 6;
      }
      else
      {
        v10 = 138;
      }
      v11 = 3;
LABEL_47:
      v8 += 2;
      --v9;
    }
    while ( v9 );
  }
  return result;
}
