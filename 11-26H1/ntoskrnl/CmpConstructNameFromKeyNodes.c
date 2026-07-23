/*
 * XREFs of CmpConstructNameFromKeyNodes @ 0x1408DEAD0
 * Callers:
 *     CmCallbackGetKeyObjectIDEx @ 0x1408C6620 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpConstructNameWithStatus @ 0x1408C7C30 (CmpConstructNameWithStatus.c)
 *     CmpConstructName @ 0x1408CB970 (CmpConstructName.c)
 * Callees:
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpCopyCompressedName @ 0x1408C82E0 (CmpCopyCompressedName.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpConstructNameFromKeyNodes(__int64 a1, __int64 *a2)
{
  unsigned int v2; // r15d
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rbp
  struct _PRIVILEGE_SET *v7; // r12
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 *v10; // rdx
  __int64 v11; // rax
  int v12; // ecx
  unsigned int v13; // ebx
  __int64 Pool; // rax
  __int64 v16; // r14
  unsigned __int16 v17; // bx
  __int64 v18; // rax
  unsigned __int16 v19; // di
  __int64 v20; // rax
  unsigned __int16 v21; // bx
  unsigned __int16 v22; // ax
  __int64 j; // rsi
  const void *v24; // rdx
  ULONG_PTR v25; // rcx
  __int64 v26; // rdx
  __int64 CellFlat; // rax
  __int64 v28; // r10
  __int64 v29; // rax
  _WORD *v30; // r9
  unsigned int v31; // edx
  unsigned __int8 *v32; // rax
  __int64 v33; // rcx
  __int64 i; // rcx
  __int64 v35; // rdx
  void *v36; // rcx
  __int64 v37; // rdx
  __int128 v38; // [rsp+20h] [rbp-48h]
  __int128 v39; // [rsp+30h] [rbp-38h]
  __int64 v40; // [rsp+70h] [rbp+8h] BYREF

  v2 = 0;
  v38 = 0LL;
  v40 = 0LL;
  v39 = 0LL;
  HvpGetCellContextInitialize(&v40);
  v5 = *(__int16 *)(v4 + 2);
  _mm_lfence();
  if ( (int)v5 >= 2 )
    v6 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 8 * v5 - 16);
  else
    v6 = *(_QWORD *)(v4 + 8 * v5 + 8);
  v7 = 0LL;
  if ( *(__int16 *)(v6 + 66) < 2 || (v7 = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL)) != 0LL )
  {
    *((_QWORD *)&v39 + 1) = v7;
    v8 = 0;
    v9 = v6;
    do
    {
      while ( 1 )
      {
        v10 = (__int64 *)(v9 + 72);
        if ( (*(_DWORD *)(v9 + 184) & 0x40000) == 0 || !*v10 )
          break;
        v9 = *v10;
      }
      v11 = *(_QWORD *)(v9 + 80);
      v12 = *(unsigned __int16 *)(v11 + 24);
      if ( (*(_DWORD *)(v11 + 12) & 1) != 0 )
        v13 = v8 + 2 * v12;
      else
        v13 = v12 + v8;
      v9 = *v10;
      v8 = v13 + 2;
    }
    while ( *v10 );
    if ( v8 <= 0xFFFF )
    {
      Pool = CmpAllocatePool(0x100uLL);
      v16 = Pool;
      if ( Pool )
      {
        *(_WORD *)Pool = v8;
        *(_WORD *)(Pool + 2) = v8;
        *(_QWORD *)(Pool + 8) = Pool + 16;
        v17 = (unsigned __int16)v8 >> 1;
        do
        {
          while ( (*(_DWORD *)(v6 + 184) & 0x40000) != 0 && *(_QWORD *)(v6 + 72) )
            v6 = *(_QWORD *)(v6 + 72);
          v18 = *(_QWORD *)(v6 + 80);
          v19 = *(_WORD *)(v18 + 24);
          if ( (*(_DWORD *)(v18 + 12) & 1) == 0 )
            v19 >>= 1;
          v20 = *(__int16 *)(v6 + 66);
          v21 = v17 - v19;
          if ( (_WORD)v20 )
          {
            for ( i = *(_QWORD *)(v6 + 192); i; LOWORD(v20) = v20 - 1 )
            {
              v35 = *(_QWORD *)(i + 16);
              if ( (__int16)v20 >= 2 )
              {
                *((_QWORD *)v7 + (__int16)v20 - 2) = v35;
              }
              else
              {
                *((_QWORD *)&v38 + (__int16)v20 + 1) = v35;
                v7 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v39 + 1);
              }
              i = *(_QWORD *)(i + 24);
            }
          }
          else
          {
            *((_QWORD *)&v38 + v20 + 1) = v6;
            v7 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v39 + 1);
          }
          v22 = *(_WORD *)(v6 + 66);
          for ( j = 0LL; (v22 & 0x8000u) == 0; --v22 )
          {
            if ( v22 >= 2u )
              j = *((_QWORD *)v7 + v22 - 2);
            else
              j = *((_QWORD *)&v38 + v22 + 1);
            if ( *(_QWORD *)(j + 200) )
              break;
            if ( *(_DWORD *)(j + 40) != -1 )
              break;
          }
          v24 = *(const void **)(j + 200);
          if ( v24 )
          {
            v36 = (void *)(*(_QWORD *)(v16 + 8) + 2LL * v21);
            if ( v24 == (const void *)1 )
            {
              v37 = *(_QWORD *)(j + 80);
              if ( (*(_DWORD *)(v37 + 12) & 1) != 0 )
                CmpCopyCompressedName((unsigned __int64)v36, 2 * v19, v37 + 26, v19);
              else
                memmove(v36, (const void *)(v37 + 26), 2LL * v19);
            }
            else
            {
              memmove(v36, v24, 2LL * v19);
            }
          }
          else
          {
            v25 = *(_QWORD *)(j + 32);
            v26 = *(unsigned int *)(j + 40);
            if ( (*(_BYTE *)(v25 + 140) & 1) != 0 )
              CellFlat = HvpGetCellFlat(v25, v26, (unsigned int *)&v40);
            else
              CellFlat = HvpGetCellPaged(v25, v26);
            v28 = CellFlat;
            v29 = *(_QWORD *)(v16 + 8);
            v30 = (_WORD *)(v29 + 2LL * v21);
            if ( (*(_BYTE *)(v28 + 2) & 0x20) != 0 )
            {
              v31 = 0;
              if ( v19 )
              {
                v32 = (unsigned __int8 *)(v28 + 76);
                do
                {
                  ++v31;
                  *v30++ = *v32++;
                }
                while ( v31 < v19 );
              }
            }
            else
            {
              memmove((void *)(v29 + 2LL * v21), (const void *)(v28 + 76), 2LL * v19);
            }
            v33 = *(_QWORD *)(j + 32);
            if ( (*(_BYTE *)(v33 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v33, (__int64)&v40);
            else
              HvpReleaseCellPaged(v33, (unsigned int *)&v40);
          }
          v17 = v21 - 1;
          *(_WORD *)(*(_QWORD *)(v16 + 8) + 2LL * v17) = 92;
          v6 = *(_QWORD *)(v6 + 72);
        }
        while ( v6 );
        *a2 = v16;
      }
      else
      {
        v2 = -1073741670;
      }
    }
    else
    {
      v2 = -1073741811;
    }
  }
  else
  {
    v7 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v39 + 1);
    v2 = -1073741670;
  }
  if ( v7 )
    CmSiFreeMemory(v7);
  return v2;
}
