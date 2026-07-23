/*
 * XREFs of MiAllocateMostlyContiguousPagesForMdl @ 0x14033A374
 * Callers:
 *     MiFindPagesForMdl @ 0x140339E68 (MiFindPagesForMdl.c)
 * Callees:
 *     MiFindContiguousPagesEx @ 0x14028E660 (MiFindContiguousPagesEx.c)
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 *     MiAllocateSlabPageForMdl @ 0x14033C100 (MiAllocateSlabPageForMdl.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 */

unsigned __int64 __fastcall MiAllocateMostlyContiguousPagesForMdl(__int64 a1, int a2, int a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r14
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r15
  __int64 v9; // r13
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbp
  unsigned __int64 *v12; // r15
  unsigned int v13; // r12d
  unsigned __int8 v14; // al
  unsigned __int64 SlabPageForMdl; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // edx
  unsigned __int64 result; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // [rsp+70h] [rbp-78h]
  __int64 v24; // [rsp+78h] [rbp-70h] BYREF
  unsigned __int64 v25; // [rsp+80h] [rbp-68h]
  __int128 v26; // [rsp+88h] [rbp-60h] BYREF
  int v27; // [rsp+F0h] [rbp+8h]
  int v28; // [rsp+F8h] [rbp+10h] BYREF
  int v29; // [rsp+100h] [rbp+18h]
  unsigned __int64 v30; // [rsp+108h] [rbp+20h]

  v29 = a3;
  v3 = *(_QWORD *)a1;
  v4 = 0LL;
  v28 = 0;
  v7 = *(_QWORD *)(v3 + 22280);
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)(a1 + 64);
  v10 = *(_QWORD *)(a1 + 16);
  v23 = v7;
  v27 = (*(_DWORD *)(a1 + 148) >> 2) & 1;
  v26 = 0LL;
  v30 = v8;
  v24 = -1LL;
  MiInitializePageColorBase(0LL, 3LL, (unsigned int)(a2 + 1), &v26);
  v25 = (unsigned __int64)*(unsigned int *)(v9 + 40) >> 12;
  v11 = v25;
  while ( 1 )
  {
    if ( (*(_DWORD *)(a1 + 148) & 2) == 0 )
    {
      v12 = (unsigned __int64 *)(v9 + 48 + 8 * v11);
      v13 = DWORD2(v26) & 0xFFFFFF00;
      while ( 1 )
      {
        v14 = _InterlockedExchangeAdd((volatile signed __int32 *)v26, 1u);
        SlabPageForMdl = MiAllocateSlabPageForMdl(*(_QWORD *)a1, v13 | v14, v29, v27, (__int64)&v28);
        if ( SlabPageForMdl == -1LL )
          break;
        if ( SlabPageForMdl > v10 )
        {
          MiReleaseFreshPage(48 * SlabPageForMdl - 0x220000000000LL, v16, v17);
          *(_DWORD *)(a1 + 148) |= 2u;
          break;
        }
        *v12 = SlabPageForMdl;
        ++v4;
        ++v12;
        v18 = *(_DWORD *)(v9 + 40) + 4096;
        ++v11;
        *(_DWORD *)(v9 + 40) = v18;
        if ( v11 == *(_QWORD *)(a1 + 32) )
          goto LABEL_10;
      }
      v7 = v23;
      v8 = v30;
    }
    MiFindContiguousPagesEx(
      *(_QWORD *)a1,
      v8,
      v10,
      0LL,
      0,
      *(_QWORD *)(a1 + 32) - v11,
      *(_DWORD *)(a1 + 144),
      a2,
      255,
      v29 | 0x60002000,
      0,
      v9,
      0LL,
      &v24);
    v18 = *(_DWORD *)(v9 + 40);
    v11 = (unsigned __int64)v18 >> 12;
    if ( v11 == *(_QWORD *)(a1 + 32) )
      break;
    v21 = *(_QWORD *)(a1 + 24);
    if ( !v21 )
      break;
    v22 = v21 + v8;
    if ( v21 + v8 <= v8 || v22 > v7 )
      break;
    v8 += v21;
    v30 = v22;
    if ( v21 + v10 <= v10 || v21 + v10 > v7 )
      v10 = v7;
    else
      v10 += v21;
  }
LABEL_10:
  result = *(unsigned int *)(a1 + 148);
  if ( (result & 2) == 0 )
  {
    result = ((unsigned __int64)v18 >> 12) - v25;
    if ( result )
    {
      v20 = *(_QWORD *)a1;
      _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)a1 + 17120LL), result);
      if ( v4 )
        _InterlockedAdd64((volatile signed __int64 *)(v20 + 17128), v4);
    }
  }
  return result;
}
