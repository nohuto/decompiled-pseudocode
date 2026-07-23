/*
 * XREFs of RaspInitializeGlyphData @ 0x140356A90
 * Callers:
 *     RaspLoadGlyphData @ 0x14071E3A0 (RaspLoadGlyphData.c)
 * Callees:
 *     FioFwReadUshortAtOffset @ 0x140356A58 (FioFwReadUshortAtOffset.c)
 *     FioFwReadBytesAtOffset @ 0x140356ED0 (FioFwReadBytesAtOffset.c)
 *     RaspAllocateMemory @ 0x140357710 (RaspAllocateMemory.c)
 *     RaspFreeMemory @ 0x140357B8C (RaspFreeMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall RaspInitializeGlyphData(__int64 a1, int a2, __int64 *a3, __int64 a4)
{
  __int64 v7; // rbx
  __int16 v8; // r15
  __int16 v9; // r13
  __int16 v10; // si
  __int16 v11; // bp
  unsigned __int16 v12; // r10
  __int16 v13; // di
  int v14; // ecx
  __int64 v15; // r14
  unsigned int v16; // eax
  __int64 v17; // r9
  unsigned int v18; // edx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int16 v24; // di
  signed int v25; // r12d
  char *Memory; // rax
  char *v27; // rsi
  int v28; // ecx
  _WORD *v29; // r15
  unsigned int v30; // edi
  unsigned int v31; // edi
  char *v32; // r15
  unsigned int v33; // ebx
  __int64 v34; // rax
  __int64 v35; // r13
  __int64 v36; // r8
  __int16 v37; // r9
  __int64 v38; // r10
  __int64 v39; // rdx
  char *v40; // r15
  unsigned int v41; // ebx
  __int16 v42; // bp
  char *v43; // rdi
  char v44; // dl
  __int16 v45; // bp
  __int64 v46; // rcx
  __int64 v47; // r13
  _DWORD *v48; // rdi
  char v49; // cl
  __int64 v51; // rax
  __int64 v52; // r11
  __int64 v53; // rdx
  __int16 v54; // [rsp+20h] [rbp-88h]
  unsigned __int16 v55; // [rsp+22h] [rbp-86h]
  __int64 v57; // [rsp+28h] [rbp-80h]
  __int64 v58; // [rsp+30h] [rbp-78h]
  __int64 Size; // [rsp+40h] [rbp-68h]
  __int64 v62; // [rsp+50h] [rbp-58h]

  v54 = 0;
  LOWORD(v7) = 0;
  v55 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( !a1 )
    return 3221225473LL;
  v14 = *(_DWORD *)(a1 + 60);
  if ( !v14 )
    return 3221225473LL;
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  v16 = v14 + a2;
  v17 = (unsigned int)(v14 + a2 + 2);
  v18 = *(_DWORD *)(v15 + 8);
  if ( (unsigned int)v17 <= v18 )
    LOWORD(v7) = __ROR2__(*(_WORD *)(v16 + *(_QWORD *)v15), 8);
  v19 = (unsigned int)(v17 + 2);
  if ( (unsigned int)v19 <= v18 )
    v8 = __ROR2__(*(_WORD *)(v17 + *(_QWORD *)v15), 8);
  v20 = (unsigned int)(v17 + 4);
  if ( (unsigned int)v20 <= v18 )
    v9 = __ROR2__(*(_WORD *)(v19 + *(_QWORD *)v15), 8);
  v21 = (unsigned int)(v19 + 4);
  if ( (unsigned int)v21 <= v18 )
  {
    v10 = __ROR2__(*(_WORD *)(v20 + *(_QWORD *)v15), 8);
    v54 = v10;
  }
  if ( (int)v20 + 4 <= v18 )
    v11 = __ROR2__(*(_WORD *)(v21 + *(_QWORD *)v15), 8);
  if ( (v7 & 0x8000u) != 0LL )
    return 3221225485LL;
  if ( (_WORD)v7 )
  {
    v22 = (unsigned int)(v21 + 2 * (__int16)v7);
    v23 = (unsigned int)(v22 + 2);
    if ( (unsigned int)v23 <= v18 )
      v13 = __ROR2__(*(_WORD *)(v22 + *(_QWORD *)v15), 8);
    v24 = v13 + 1;
    if ( (int)v22 + 4 <= v18 )
    {
      v12 = __ROR2__(*(_WORD *)(v23 + *(_QWORD *)v15), 8);
      v55 = v12;
    }
    v62 = v24;
    v25 = v24;
    v58 = 4LL * v24 + 8;
    Size = v24 + 66LL + v12 + 2 * (v58 + (__int16)v7);
    Memory = (char *)RaspAllocateMemory(Size, a4);
    v27 = Memory;
    if ( Memory )
    {
      memset_0(Memory, 0, Size);
      *(_DWORD *)(v27 + 6) = v9;
      *(_DWORD *)(v27 + 10) = v54;
      *(_DWORD *)(v27 + 14) = v11;
      *((_WORD *)v27 + 12) = v24;
      v28 = v8;
      *(_WORD *)v27 = v7;
      v29 = v27 + 66;
      *(_DWORD *)(v27 + 2) = v28;
      *(_DWORD *)(v27 + 18) = v28;
      *((_WORD *)v27 + 11) = v55;
      v30 = *(_DWORD *)(a1 + 60) + a2 + 10;
      *(_QWORD *)(v27 + 26) = v27 + 66;
      v7 = (unsigned __int16)v7;
      do
      {
        FioFwReadUshortAtOffset(v15, v30, v29);
        v30 += 2;
        ++v29;
        --v7;
      }
      while ( v7 );
      v31 = v30 + 2;
      *(_QWORD *)(v27 + 34) = v29;
      FioFwReadBytesAtOffset(v15, v31, v55, v29);
      v32 = (char *)v29 + v55;
      v33 = v31 + v55;
      *(_QWORD *)(v27 + 42) = v32;
      v34 = RaspAllocateMemory(v62, a4);
      v57 = v34;
      v35 = v34;
      if ( v34 )
      {
        FioFwReadBytesAtOffset(v15, v33, (unsigned int)v25, v34);
        LODWORD(v36) = 0;
        v37 = 0;
        if ( v25 )
        {
          do
          {
            v38 = (unsigned int)v36;
            v39 = v37++;
            *(_BYTE *)(v39 + *(_QWORD *)(v27 + 42)) = *(_BYTE *)((unsigned int)v36 + v35);
            if ( (*(_BYTE *)((unsigned int)v36 + v35) & 8) != 0 )
            {
              v36 = (unsigned int)(v36 + 1);
              if ( *(_BYTE *)(v36 + v35) )
              {
                v52 = *(unsigned __int8 *)(v36 + v35);
                do
                {
                  v53 = v37++;
                  *(_BYTE *)(v53 + *(_QWORD *)(v27 + 42)) = *(_BYTE *)(v38 + v35);
                  --v52;
                }
                while ( v52 );
              }
            }
            LODWORD(v36) = v36 + 1;
          }
          while ( v37 < v25 );
        }
        v40 = &v32[v62];
        v41 = v36 + v33;
        *(_QWORD *)(v27 + 50) = v40;
        v42 = 0;
        if ( v25 )
        {
          do
          {
            v43 = &v40[4 * v42];
            *(_DWORD *)v43 = 0;
            v44 = *(_BYTE *)(v42 + *(_QWORD *)(v27 + 42));
            if ( (v44 & 2) != 0 )
            {
              FioFwReadBytesAtOffset(v15, v41++, 1LL, &v40[4 * v42]);
              if ( (*(_BYTE *)(v42 + *(_QWORD *)(v27 + 42)) & 0x10) == 0 )
                *(_DWORD *)v43 = -*(_DWORD *)v43;
            }
            else if ( (v44 & 0x10) == 0 )
            {
              FioFwReadUshortAtOffset(v15, v41, &v40[4 * v42]);
              v41 += 2;
            }
            ++v42;
          }
          while ( v42 < v25 );
          v35 = v57;
        }
        v45 = 0;
        v46 = *(_QWORD *)(v27 + 50) + v58;
        *(_QWORD *)(v27 + 58) = v46;
        if ( v25 )
        {
          v47 = v46;
          do
          {
            v48 = (_DWORD *)(v47 + 4LL * v45);
            *v48 = 0;
            v49 = *(_BYTE *)(v45 + *(_QWORD *)(v27 + 42));
            if ( (v49 & 4) != 0 )
            {
              FioFwReadBytesAtOffset(v15, v41++, 1LL, v47 + 4LL * v45);
              if ( (*(_BYTE *)(v45 + *(_QWORD *)(v27 + 42)) & 0x20) == 0 )
                *v48 = -*v48;
            }
            else if ( (v49 & 0x20) == 0 )
            {
              FioFwReadUshortAtOffset(v15, v41, (_WORD *)(v47 + 4LL * v45));
              v41 += 2;
            }
            ++v45;
          }
          while ( v45 < v25 );
          v35 = v57;
        }
        *a3 = (__int64)v27;
        RaspFreeMemory(v35, a4);
        return 0LL;
      }
      RaspFreeMemory(v27, a4);
    }
  }
  else
  {
    v51 = RaspAllocateMemory(66LL, a4);
    if ( v51 )
    {
      *(_DWORD *)(v51 + 6) = v9;
      *(_DWORD *)(v51 + 10) = v10;
      *(_DWORD *)(v51 + 14) = v11;
      *(_WORD *)v51 = 0;
      *(_DWORD *)(v51 + 2) = v8;
      *(_QWORD *)(v51 + 18) = (unsigned int)v8;
      *a3 = v51;
      return 0LL;
    }
  }
  return 3221225626LL;
}
