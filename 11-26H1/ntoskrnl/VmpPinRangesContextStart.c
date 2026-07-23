/*
 * XREFs of VmpPinRangesContextStart @ 0x140823A80
 * Callers:
 *     VmPinMemoryRanges @ 0x1408234A0 (VmPinMemoryRanges.c)
 *     VmpUnpinMemoryRanges @ 0x140823DB8 (VmpUnpinMemoryRanges.c)
 *     VmpUnpinRangeSinglePages @ 0x140823F6C (VmpUnpinRangeSinglePages.c)
 * Callees:
 *     qsort @ 0x140539380 (qsort.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall VmpPinRangesContextStart(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 *a4,
        unsigned __int64 a5,
        int a6,
        __int64 a7,
        int a8)
{
  unsigned int v8; // edi
  unsigned __int64 *v9; // rbp
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rsi
  unsigned __int64 *v13; // rax
  _QWORD *v14; // r15
  unsigned __int64 v15; // rax
  void **v16; // rcx
  __int64 v17; // rbx
  __int64 Pool2; // rax
  __int64 *v19; // rbx
  unsigned __int64 v20; // r8
  __int64 v21; // r10
  _QWORD *v22; // rdx
  __int64 v23; // r9
  unsigned __int64 v24; // r11
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // r8
  unsigned __int64 v28; // rax

  v8 = 0;
  v9 = a3;
  v11 = (unsigned __int64)&a3[2 * a5];
  if ( a8 )
  {
    v12 = 0LL;
    v13 = a3;
    if ( (unsigned __int64)a3 >= v11 )
    {
LABEL_7:
      v14 = (_QWORD *)(a1 + 56);
      memset_0((void *)(a1 + 56), 0, 0xC0uLL);
      memset_0((void *)(a1 + 248), 0, 0x40uLL);
      v15 = a1 + 312;
      *(_OWORD *)(a1 + 312) = 0LL;
      v16 = (void **)(a1 + 8);
      *(_OWORD *)(a1 + 328) = 0LL;
      *(_QWORD *)(a1 + 8) = v14;
      *(_QWORD *)(a1 + 24) = a1 + 248;
LABEL_12:
      *(_QWORD *)(a1 + 32) = v15;
      goto LABEL_13;
    }
    do
    {
      v12 += v13[1];
      v13 += 2;
    }
    while ( (unsigned __int64)v13 < v11 );
  }
  else
  {
    v12 = a5;
  }
  if ( v12 <= 4 )
    goto LABEL_7;
  v17 = 48 * v12;
  Pool2 = ExAllocatePool2(0x40uLL);
  *(_QWORD *)a1 = Pool2;
  v14 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v16 = (void **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = Pool2;
  if ( a6 )
  {
    *(_QWORD *)(a1 + 24) = v17 + Pool2;
    v15 = v17 + Pool2 + 16 * v12;
    goto LABEL_12;
  }
LABEL_13:
  *(_QWORD *)(a1 + 48) = a7;
  *(_QWORD *)(a1 + 16) = v12;
  *(_DWORD *)(a1 + 40) = a6;
  if ( (unsigned __int64)v9 < v11 )
  {
    v19 = a4;
    do
    {
      v20 = *v9;
      v21 = v9[1];
      v22 = *(_QWORD **)(a2 + 40);
      v23 = *v19;
      v24 = v21 + *v9 - 1;
      if ( !v22 || v20 > v22[7] || v20 < v22[6] )
      {
        v25 = *(_QWORD *)(a2 + 8);
        if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
        {
          if ( v25 )
            v25 ^= a2 + 8;
          else
            v25 = 0LL;
        }
        while ( v25 )
        {
          if ( v20 > *(_QWORD *)(v25 + 32) )
          {
            v26 = *(_QWORD *)(v25 + 8);
          }
          else
          {
            if ( v20 >= *(_QWORD *)(v25 + 24) )
              break;
            v26 = *(_QWORD *)v25;
          }
          if ( (*(_BYTE *)(a2 + 16) & 1) != 0 && v26 )
            v25 ^= v26;
          else
            v25 = v26;
        }
        if ( !v25 )
LABEL_35:
          NT_ASSERT("GpaMemoryRange != ((void *)0)");
        v22 = (_QWORD *)(v25 - 24);
        *(_QWORD *)(a2 + 40) = v25 - 24;
      }
      if ( !v22 )
        goto LABEL_35;
      if ( v22[7] < v24 )
        NT_ASSERT("GpaMemoryRange->LastGpn >= LastGpn");
      if ( *(_QWORD *)(v22[2] + 24LL) != v23 + v22[6] - v20 )
        NT_ASSERT("GpaMemoryRange->VaRange->StartVpn == (CurrentVpn - (CurrentGpn - GpaMemoryRange->StartGpn))");
      if ( a8 )
        v21 = 1LL;
      if ( v20 <= v24 )
      {
        v27 = v20 - v23;
        do
        {
          v14[1] = v21;
          *v14 = v27 + v23;
          v14[3] = v22;
          v28 = v23 ^ (v14[2] ^ v23) & 0xFFF0000000000000uLL;
          v23 += v21;
          v14[2] = v28;
          v14 += 6;
        }
        while ( v27 + v23 <= v24 );
      }
      v9 += 2;
      ++v19;
    }
    while ( (unsigned __int64)v9 < v11 );
    v16 = (void **)(a1 + 8);
  }
  if ( a6 && a5 != 1 )
    qsort(*v16, *(_QWORD *)(a1 + 16), 0x30uLL, (int (__cdecl *)(const void *, const void *))VmpPinRangeInfoSort);
  return v8;
}
