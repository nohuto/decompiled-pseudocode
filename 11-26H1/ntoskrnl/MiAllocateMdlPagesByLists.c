/*
 * XREFs of MiAllocateMdlPagesByLists @ 0x14033A004
 * Callers:
 *     MiFindPagesForMdl @ 0x140339E68 (MiFindPagesForMdl.c)
 * Callees:
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 *     MiAllocateSlabPageForMdl @ 0x14033C100 (MiAllocateSlabPageForMdl.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 */

__int64 __fastcall MiAllocateMdlPagesByLists(
        volatile signed __int64 *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        int a7)
{
  char v7; // r12
  unsigned __int64 v8; // r14
  int v12; // r15d
  unsigned int v13; // esi
  char v14; // al
  unsigned int v15; // ecx
  int v16; // r8d
  unsigned int v17; // edi
  int v18; // edx
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // r13
  ULONG_PTR *v21; // rdx
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // r8
  ULONG_PTR Page; // r15
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v31; // [rsp+30h] [rbp-68h]
  unsigned __int64 v32; // [rsp+38h] [rbp-60h]
  __int64 v33; // [rsp+40h] [rbp-58h]
  ULONG_PTR *v34; // [rsp+48h] [rbp-50h]
  __int128 v35; // [rsp+50h] [rbp-48h] BYREF
  int v38; // [rsp+B8h] [rbp+20h] BYREF

  v7 = a3;
  v38 = 0;
  v8 = 0LL;
  v12 = 3;
  v35 = 0LL;
  MiInitializePageColorBase(0LL, 3LL, (unsigned int)(a7 + 1), &v35);
  if ( *(_DWORD *)(a4 + 144) == 3 )
  {
    v12 = 19;
    v13 = DWORD2(v35) & 0xFFF3FFFF | 0x40000;
  }
  else
  {
    v13 = DWORD2(v35) & 0xFFF3FFFF | ((*(_DWORD *)(a4 + 144) & 3) << 18);
  }
  v14 = _InterlockedExchangeAdd((volatile signed __int32 *)v35, 1u);
  v15 = *(_DWORD *)(a4 + 148);
  v33 = 0LL;
  v16 = (v15 >> 2) & 1;
  a7 = v16;
  v17 = v13 ^ (unsigned __int8)(v13 ^ v14);
  v18 = (16 * (((v7 & 1) == 0) + 8)) | 1;
  if ( !v16 )
    v18 = 16 * (((v7 & 1) == 0) + 8);
  v19 = 0LL;
  v31 = v18;
  v20 = 0LL;
  v32 = 0LL;
  v21 = (ULONG_PTR *)(a2 + 8 * (((unsigned __int64)*(unsigned int *)(a2 + 40) >> 12) + 6));
  v22 = v12 | 8;
  v34 = v21;
  if ( (v15 & 2) != 0 )
    v22 = v12;
  while ( 1 )
  {
    if ( (v22 & 2) != 0 )
    {
      v22 &= ~2u;
      v38 = 0;
    }
    v22 &= ~4u;
    if ( (v22 & 8) == 0 || (Page = MiAllocateSlabPageForMdl((_DWORD)a1, v17, a3, v16, (__int64)&v38), Page == -1LL) )
    {
      Page = MiGetPage((__int64)a1, v17, v31);
      if ( Page == -1LL )
        goto LABEL_26;
    }
    else
    {
      v22 |= 4u;
    }
    if ( Page > a5 )
      break;
    v26 = MiPageToNode(Page);
    if ( v26 == ((v17 >> 9) & 0x3F)
      || (v29 = v33,
          v22 |= 2u,
          LOBYTE(v28) = !_bittest64(&v29, v26),
          LOBYTE(v27) = (v22 & 8) != 0,
          ((unsigned __int8)v28 & (unsigned __int8)v27) == 0) )
    {
      v19 = v32;
      if ( (v22 & 4) != 0 )
      {
        v19 = ++v32;
      }
      else if ( (v22 & 8) == 0 )
      {
        ++v20;
      }
      ++v8;
      *v34++ = Page;
      if ( v8 == a6 )
        goto LABEL_26;
      v17 = v13 ^ (unsigned __int8)(v13 ^ _InterlockedExchangeAdd((volatile signed __int32 *)v35, 1u));
    }
    else
    {
      v33 |= 1LL << v26;
      v13 ^= ((unsigned __int16)v13 ^ (unsigned __int16)((_WORD)v26 << 9)) & 0x7E00;
      MiReleaseFreshPage(48 * Page - 0x220000000000LL, v27, v28);
      v19 = v32;
    }
    v16 = a7;
  }
  MiReleaseFreshPage(48 * Page - 0x220000000000LL, v23, v24);
  v19 = v32;
  LOBYTE(v22) = -2;
LABEL_26:
  if ( v8 )
  {
    _InterlockedAdd64(a1 + 2137, v8);
    if ( v19 )
      _InterlockedAdd64(a1 + 2138, v19);
    if ( v20 )
      _InterlockedAdd64(a1 + 2139, v20);
  }
  *(_DWORD *)(a2 + 40) += (_DWORD)v8 << 12;
  return v22 & 1;
}
