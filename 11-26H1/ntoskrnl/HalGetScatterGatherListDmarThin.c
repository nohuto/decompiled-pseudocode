/*
 * XREFs of HalGetScatterGatherListDmarThin @ 0x14048A750
 * Callers:
 *     <none>
 * Callees:
 *     HalpGetNumberOfSGElementsDmarThin @ 0x14048AAC8 (HalpGetNumberOfSGElementsDmarThin.c)
 *     HalpConstructScatterGatherListDmarThin @ 0x14048AB24 (HalpConstructScatterGatherListDmarThin.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalGetScatterGatherListDmarThin(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  __int64 *v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  __int64 Pool2; // rax
  void *v14; // rbp
  __int64 v15; // rsi
  int v16; // ebx

  v7 = a3;
  v8 = a4 - *((unsigned int *)a3 + 11) - a3[4];
  do
  {
    v11 = *((unsigned int *)v7 + 10);
    if ( v8 < v11 )
      break;
    v7 = (__int64 *)*v7;
    v8 -= v11;
  }
  while ( v7 );
  if ( v7 )
  {
    v12 = 3LL * (unsigned int)HalpGetNumberOfSGElementsDmarThin(v7, v8, a5);
    Pool2 = ExAllocatePool2(0x42uLL);
    v14 = (void *)Pool2;
    if ( Pool2 )
    {
      v15 = Pool2 + 8 * v12;
      *(_BYTE *)(v15 + 113) = 1;
      *(_QWORD *)(v15 + 40) = a1;
      *(_QWORD *)(v15 + 48) = a2;
      *(_QWORD *)(v15 + 56) = *(_QWORD *)(a2 + 32);
      *(_QWORD *)(v15 + 80) = a6;
      *(_QWORD *)(v15 + 88) = a7;
      *(_DWORD *)(v15 + 72) = a5;
      *(_QWORD *)(v15 + 64) = v7;
      *(_DWORD *)(v15 + 76) = v8;
      *(_QWORD *)(v15 + 96) = Pool2;
      *(_BYTE *)(v15 + 112) = 0;
      *(_DWORD *)(v15 + 32) = 1;
      *(_BYTE *)(v15 + 114) = 0;
      *(_QWORD *)(v15 + 104) = 0LL;
      v16 = HalpConstructScatterGatherListDmarThin(v15 + 16);
      if ( v16 < 0 && *(_BYTE *)(v15 + 113) )
        ExFreePoolWithTag(v14, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v16;
}
