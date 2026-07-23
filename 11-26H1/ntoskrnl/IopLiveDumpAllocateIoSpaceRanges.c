/*
 * XREFs of IopLiveDumpAllocateIoSpaceRanges @ 0x1405D02E4
 * Callers:
 *     IopLiveDumpAllocateFromIOSpace @ 0x1405CFBBC (IopLiveDumpAllocateFromIOSpace.c)
 * Callees:
 *     MmAllocateMemoryRanges @ 0x14086E160 (MmAllocateMemoryRanges.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopLiveDumpAllocateIoSpaceRanges(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        _DWORD *a5,
        __int64 *a6)
{
  int MemoryRanges; // ebx
  __int64 v8; // rdi
  unsigned __int64 v9; // r10
  int v10; // r8d
  __int64 Pool2; // rdx
  unsigned __int64 v12; // r9
  __int64 v13; // r8
  _DWORD v15[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+28h] [rbp-38h]
  __int64 v17; // [rsp+30h] [rbp-30h]
  __int64 v18; // [rsp+38h] [rbp-28h]
  unsigned int v19; // [rsp+40h] [rbp-20h]
  _BYTE P[20]; // [rsp+44h] [rbp-1Ch]

  *(_DWORD *)&P[16] = 0;
  v16 = a1;
  *a6 = 0LL;
  *a5 = 0;
  v15[1] = 7;
  *a4 = 0LL;
  *(_OWORD *)P = 0LL;
  v15[0] = 1;
  v18 = 0x40000000LL;
  v19 = 0x80000000;
  v17 = a3;
  MemoryRanges = MmAllocateMemoryRanges(v15);
  if ( MemoryRanges >= 0 )
  {
    v8 = 0LL;
    v9 = 0LL;
    if ( !*(_QWORD *)&P[4] )
      goto LABEL_12;
    do
    {
      v10 = *(_DWORD *)(*(_QWORD *)&P[12] + 8 * v9++);
      v8 += (((((unsigned __int64)(v10 & 0x3FFFFFFF) << 30) + 0x40000000) >> 12) + 16777214) / 0xFFFFFF;
    }
    while ( v9 < *(_QWORD *)&P[4] );
    if ( v8 )
    {
      Pool2 = ExAllocatePool2(0x40uLL);
      if ( Pool2 )
      {
        v12 = 0LL;
        if ( *(_QWORD *)&P[4] )
        {
          v13 = *a6;
          do
          {
            v13 += ((*(_QWORD *)(*(_QWORD *)&P[12] + 8 * v12) & 0x3FFFFFFFLL) + 1) << 18;
            *(_QWORD *)(Pool2 + 8 * v12) = (((*(_QWORD *)(*(_QWORD *)&P[12] + 8 * v12) & 0x3FFFFFFFLL) + 1) << 58) | (*(_QWORD *)(*(_QWORD *)&P[12] + 8 * v12) >> 12) & 0xFFFFFFFFC0000LL;
            ++v12;
          }
          while ( v12 < *(_QWORD *)&P[4] );
          *a6 = v13;
        }
        *a4 = Pool2;
        *a5 = v8;
      }
      else
      {
        MemoryRanges = -1073741670;
      }
    }
    else
    {
LABEL_12:
      MemoryRanges = -1073741823;
    }
  }
  if ( *(_QWORD *)&P[12] )
    ExFreePoolWithTag(*(PVOID *)&P[12], 0);
  return (unsigned int)MemoryRanges;
}
