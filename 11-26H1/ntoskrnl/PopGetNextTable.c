/*
 * XREFs of PopGetNextTable @ 0x140609D24
 * Callers:
 *     PopCompressHiberBlocks @ 0x140BFFF94 (PopCompressHiberBlocks.c)
 *     PopWriteHiberImage @ 0x140C02AD4 (PopWriteHiberImage.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     MmMapMemoryDumpMdlEx2 @ 0x140514654 (MmMapMemoryDumpMdlEx2.c)
 */

__int64 __fastcall PopGetNextTable(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned __int64 a6)
{
  unsigned int v6; // ebp
  unsigned __int64 *v7; // r13
  __int64 v9; // r14
  __int64 v10; // r11
  unsigned __int16 v11; // r10
  unsigned int v12; // esi
  __int64 v13; // r12
  unsigned int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // ecx
  __int64 v18; // rdx
  unsigned int v19; // edi
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned int v24; // edi
  unsigned int *v25; // rax
  _QWORD *v26; // r11
  unsigned int v27; // ecx
  unsigned int v28; // edi
  __int64 v29; // r10
  __int64 v30; // r12
  unsigned int v31; // r8d
  unsigned __int64 v32; // rbp
  int v33; // r9d
  unsigned __int64 i; // rax
  unsigned int v35; // r9d
  __int64 v36; // rcx
  unsigned int v37; // r15d
  unsigned __int64 j; // rax
  unsigned int *v39; // rax
  int v40; // r8d
  unsigned __int64 v41; // r9
  unsigned __int16 v43; // [rsp+70h] [rbp+8h]
  _BYTE *v44; // [rsp+78h] [rbp+10h]
  BOOL v47; // [rsp+90h] [rbp+28h]

  v44 = (_BYTE *)a2;
  v6 = 0;
  v7 = (unsigned __int64 *)(a4 + 48);
  v43 = 0;
  v9 = a4;
  v10 = a3;
  v11 = 0;
  *(_DWORD *)a2 = 0;
  v12 = 0;
  v47 = a5 == 0;
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 4), 1, 0) )
  {
    do
      _mm_pause();
    while ( *(_DWORD *)(a1 + 4) );
  }
  v13 = a1 + 80;
  if ( *(_QWORD *)(a1 + 120) != a1 + 80 )
  {
    v14 = *(_DWORD *)(a1 + 316);
    if ( v14 )
    {
      do
      {
        v15 = *(_QWORD *)(a1 + 120);
        if ( v15 == v13 )
          break;
        v16 = *(_QWORD *)(a1 + 128);
        v17 = v14 - v12;
        v18 = v16 + *(_QWORD *)(v15 + 24);
        v19 = *(_DWORD *)(v15 + 32) - v18;
        v20 = *(_QWORD *)(v15 + 40) + (v16 << 12);
        if ( v19 <= v17 )
        {
          *(_QWORD *)(a1 + 120) = *(_QWORD *)v15;
          v21 = 0LL;
        }
        else
        {
          v19 = v17;
          v21 = v16 + v17;
        }
        *(_QWORD *)(a1 + 128) = v21;
        v22 = v11;
        a2 = (v19 - 1) ^ ((v19 - 1) ^ (unsigned __int64)(16 * v18)) & 0xFFFFFFFFFFFFFFF0uLL;
        v43 = ++v11;
        *(_QWORD *)(v10 + 8 * v22) = a2;
        if ( v19 )
        {
          v12 += v19;
          do
          {
            PhysicalAddress = MmGetPhysicalAddress((PVOID)(v20 + ((unsigned __int64)v6++ << 12)));
            *v7++ = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
            --v19;
          }
          while ( v19 );
          v11 = v43;
          v13 = a1 + 80;
          v10 = a3;
        }
        v14 = *(_DWORD *)(a1 + 316);
        v6 = 0;
      }
      while ( v12 < v14 );
      v9 = a4;
    }
  }
  while ( 1 )
  {
    v24 = *(_DWORD *)(a1 + 316);
    if ( v12 >= v24 )
      break;
    v25 = *(unsigned int **)(a1 + 112);
    v26 = (_QWORD *)(a1 + 128);
    v27 = *(_DWORD *)(a1 + 128);
    v28 = v24 - v12;
    v29 = *v25;
    if ( (unsigned int)v29 <= v27 )
      goto LABEL_39;
    v30 = *((_QWORD *)v25 + 1);
    v31 = 0;
    v32 = v30 + 4 * ((unsigned __int64)(unsigned int)(v29 - 1) >> 5);
    a2 = v30 + 4 * ((unsigned __int64)v27 >> 5);
    v33 = *(_DWORD *)a2 | ((1 << v27) - 1);
    for ( i = a2 + 4; ; i += 4LL )
    {
      v35 = ~v33;
      if ( v35 )
        break;
      if ( i > v32 )
        goto LABEL_23;
      a2 += 4LL;
      v33 = *(_DWORD *)a2;
    }
    _BitScanForward64((unsigned __int64 *)&v36, v35);
    v37 = v36 + 32 * ((__int64)(a2 - v30) >> 2);
    if ( v37 > (unsigned int)v29 )
    {
LABEL_23:
      v37 = v29;
      goto LABEL_35;
    }
    for ( j = ~(v35 | ((1 << v36) - 1)); !(_DWORD)j; j = *v39 )
    {
      if ( v31 > v28 || (v31 += 32, v39 = (unsigned int *)(a2 + 4), a2 + 4 > v32) )
      {
        LODWORD(j) = 32;
        goto LABEL_31;
      }
      a2 += 4LL;
    }
    _BitScanForward64(&j, j);
LABEL_31:
    a2 = 32 * (unsigned int)((__int64)(a2 - v30) >> 2);
    v40 = a2 + j;
    if ( (int)a2 + (int)j > (unsigned int)v29 )
      v40 = v29;
    v31 = v40 - v37;
    if ( v31 > v28 )
      v31 = v28;
LABEL_35:
    if ( !v31 )
    {
LABEL_39:
      *v26 = v29;
      break;
    }
    *v26 = v37 + v31;
    v12 += v31;
    v41 = v37;
    a2 = (v31 - 1) ^ ((v31 - 1) ^ (16LL * v37)) & 0xFFFFFFFFFFFFFFF0uLL;
    *(_QWORD *)(a3 + 8LL * v43++) = a2;
    do
    {
      *v7++ = v41++;
      --v31;
    }
    while ( v31 );
  }
  *(_DWORD *)(a1 + 4) = 0;
  if ( v12 )
  {
    *v44 = v43;
    *(_QWORD *)v9 = 0LL;
    *(_WORD *)(v9 + 10) = 0;
    *(_QWORD *)(v9 + 32) = 0LL;
    *(_DWORD *)(v9 + 44) = 0;
    *(_DWORD *)(v9 + 40) = v12 << 12;
    *(_WORD *)(v9 + 8) = 8 * (v12 + 6);
    MmMapMemoryDumpMdlEx2(a6, a2, v9, v47);
  }
  return v12;
}
