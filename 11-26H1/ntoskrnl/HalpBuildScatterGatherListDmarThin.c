/*
 * XREFs of HalpBuildScatterGatherListDmarThin @ 0x14048A918
 * Callers:
 *     HalBuildScatterGatherListDmarThinEx @ 0x14048A6A0 (HalBuildScatterGatherListDmarThinEx.c)
 *     HalBuildScatterGatherListDmarThin @ 0x14048A8A0 (HalBuildScatterGatherListDmarThin.c)
 *     HalGetScatterGatherListDmarThinEx @ 0x14058DE30 (HalGetScatterGatherListDmarThinEx.c)
 * Callees:
 *     HalpGetNumberOfSGElementsDmarThin @ 0x14048AAC8 (HalpGetNumberOfSGElementsDmarThin.c)
 *     HalpConstructScatterGatherListDmarThin @ 0x14048AB24 (HalpConstructScatterGatherListDmarThin.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpBuildScatterGatherListDmarThin(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned __int64 a5,
        unsigned int a6,
        char a7,
        __int64 a8,
        __int64 a9,
        int a10,
        char *P,
        unsigned int a12,
        _QWORD *a13)
{
  __int64 *v13; // rbx
  unsigned __int64 v16; // rax
  unsigned int NumberOfSGElementsDmarThin; // eax
  __int64 v18; // rdi
  char *Pool2; // rbp
  char *v20; // rdi
  int v21; // ebx

  v13 = a4;
  if ( !a4 )
    return (unsigned int)-1073741811;
  if ( a13 )
    *a13 = 0LL;
  while ( 1 )
  {
    v16 = *((unsigned int *)v13 + 10);
    if ( a5 < v16 )
      break;
    v13 = (__int64 *)*v13;
    a5 -= v16;
    if ( !v13 )
      return (unsigned int)-1073741811;
  }
  NumberOfSGElementsDmarThin = HalpGetNumberOfSGElementsDmarThin(v13, a5, a6);
  v18 = 3LL * NumberOfSGElementsDmarThin;
  if ( P )
  {
    if ( a12 < 24 * (unsigned __int64)NumberOfSGElementsDmarThin + 120 )
      return (unsigned int)-1073741789;
    Pool2 = P;
  }
  else
  {
    Pool2 = (char *)ExAllocatePool2(0x42uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
  }
  v20 = &Pool2[8 * v18 + 16];
  v20[97] = P == 0LL;
  *((_QWORD *)v20 + 3) = a1;
  *((_QWORD *)v20 + 4) = a2;
  *((_QWORD *)v20 + 5) = *(_QWORD *)(a2 + 32);
  *((_QWORD *)v20 + 8) = a8;
  *((_QWORD *)v20 + 9) = a9;
  *((_DWORD *)v20 + 15) = a5;
  *((_DWORD *)v20 + 14) = a6;
  *((_QWORD *)v20 + 6) = v13;
  *((_QWORD *)v20 + 10) = Pool2;
  v20[96] = a7 & 1;
  *((_DWORD *)v20 + 4) = 1;
  v20[98] = 0;
  *((_QWORD *)v20 + 11) = 0LL;
  if ( a3 )
  {
    *(_QWORD *)(a3 + 88) = v20;
    *((_QWORD *)v20 + 11) = a3 + 8;
  }
  v21 = HalpConstructScatterGatherListDmarThin(v20);
  if ( v21 < 0 )
  {
    if ( v20[97] )
      ExFreePoolWithTag(Pool2, 0);
  }
  else if ( a13 )
  {
    *a13 = Pool2;
  }
  return (unsigned int)v21;
}
