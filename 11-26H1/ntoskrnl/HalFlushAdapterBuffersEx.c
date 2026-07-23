/*
 * XREFs of HalFlushAdapterBuffersEx @ 0x1404379C0
 * Callers:
 *     HalPutScatterGatherListV3 @ 0x140437894 (HalPutScatterGatherListV3.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     HalpDmaFlushContiguousTransferV3 @ 0x140436D4C (HalpDmaFlushContiguousTransferV3.c)
 *     HalpDmaControllerFlushChannel @ 0x140437C44 (HalpDmaControllerFlushChannel.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14043832C (HalpDmaCheckMdlAccessibility.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x140438E00 (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x140439690 (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaFlushDriverMdl @ 0x14057B1D8 (HalpDmaFlushDriverMdl.c)
 *     HalpDmaFreeLa @ 0x14057B268 (HalpDmaFreeLa.c)
 */

__int64 __fastcall HalFlushAdapterBuffersEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        char a6)
{
  bool v7; // zf
  __int64 v8; // r15
  struct _MDL *v11; // rbx
  unsigned int v12; // esi
  unsigned int v14; // edx
  unsigned int v15; // ecx
  __int64 v16; // r9
  char v17; // r8
  unsigned __int64 v18; // rax
  char v19; // r13
  int AdapterCacheAlignment; // eax
  __int64 v21; // r8
  unsigned int v22; // r9d
  unsigned __int64 v23; // r10
  int v24; // r11d
  struct _MDL *Next; // rsi
  PMDL v26; // r12
  struct _MDL *v27; // rbx
  PMDL Mdl[9]; // [rsp+40h] [rbp-48h] BYREF
  char v29; // [rsp+90h] [rbp+8h] BYREF
  __int64 v30; // [rsp+A0h] [rbp+18h] BYREF

  v7 = *(_DWORD *)(a1 + 520) == 3;
  v8 = a3;
  v29 = 0;
  Mdl[0] = 0LL;
  v30 = 0LL;
  if ( v7 )
    HalpDmaFreeLa(a1, a3 + 24);
  v11 = *(struct _MDL **)(a1 + 552);
  if ( v11 )
  {
    do
    {
      Next = v11->Next;
      if ( (v11->MdlFlags & 1) != 0 )
        MmUnmapLockedPages(v11->MappedSystemVa, v11);
      IoFreeMdl(v11);
      v11 = Next;
    }
    while ( Next );
  }
  v12 = a5;
  *(_QWORD *)(a1 + 552) = 0LL;
  if ( !v12 )
  {
    if ( !*(_BYTE *)(a1 + 441) )
      HalpDmaControllerFlushChannel(*(_QWORD *)(a1 + 368), *(unsigned int *)(a1 + 380));
    return 0LL;
  }
  while ( 1 )
  {
    if ( !a2 )
      return 3221225485LL;
    v18 = *(unsigned int *)(a2 + 40);
    if ( a4 < v18 )
      break;
    a2 = *(_QWORD *)a2;
    a4 -= v18;
  }
  if ( !*(_BYTE *)(a1 + 441) )
    HalpDmaControllerFlushChannel(*(_QWORD *)(a1 + 368), *(unsigned int *)(a1 + 380));
  if ( !*(_BYTE *)(a1 + 440) )
    return 0LL;
  if ( v8 )
  {
    if ( *(_QWORD *)a2 )
    {
      v12 = *(_DWORD *)(v8 + 16);
    }
    else
    {
      AdapterCacheAlignment = HalpDmaGetAdapterCacheAlignment(a1);
      if ( ((AdapterCacheAlignment - 1) & (unsigned int)v21) != 0 && v23 >= (v21 & 0xFFFFFFFFFFFFF000uLL) )
      {
        v12 = v22;
      }
      else
      {
        v12 = (~(AdapterCacheAlignment - 1) & (v23 + AdapterCacheAlignment - 1)) - v24 - a4;
        if ( v12 > v22 )
          v12 = v22;
      }
    }
  }
  HalpDmaCheckMdlAccessibility(a1, a2, (unsigned int)a4, v12, &v29, Mdl);
  v17 = v29;
  v19 = a6;
  if ( v29 )
  {
    v26 = Mdl[0];
    if ( !a6 )
      HalpDmaFlushDriverMdl((ULONG_PTR)Mdl[0]);
    if ( v26 )
    {
      do
      {
        v27 = v26->Next;
        IoFreeMdl(v26);
        v26 = v27;
      }
      while ( v27 );
    }
    if ( !v8 )
      return 0LL;
    v17 = v29;
LABEL_10:
    *(_QWORD *)(v8 + 56) = v8;
    while ( v12 )
    {
      v14 = v12;
      if ( !a2 )
        break;
      v15 = v12;
      if ( *(_DWORD *)(a2 + 40) - (int)a4 <= v12 )
        v15 = *(_DWORD *)(a2 + 40) - a4;
      v16 = a4 + *(_QWORD *)(a2 + 32) + *(unsigned int *)(a2 + 44);
      v12 -= v15;
      if ( v12 && !*(_QWORD *)a2 )
      {
        v15 = v14;
        v12 = 0;
      }
      if ( *(_BYTE *)(a1 + 442) )
        HalpDmaFlushScatterTransferV3(a1, a2, v8, v16, v15, v19, v17, (__int64)&v30);
      else
        HalpDmaFlushContiguousTransferV3(a1, a2, v8, v16, v15, v19, v17, &v30);
      v8 = v30;
      a4 = 0LL;
      a2 = *(_QWORD *)a2;
      v17 = v29;
    }
    return 0LL;
  }
  if ( v8 )
    goto LABEL_10;
  return 3221225473LL;
}
