/*
 * XREFs of IopAddTriageDumpDataBlock @ 0x140442DE0
 * Callers:
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x1405CB11C (IopAddRunTimeTriageDataBlocks.c)
 * Callees:
 *     IopIsAddressRangeValid @ 0x1404E57CC (IopIsAddressRangeValid.c)
 */

char __fastcall IopAddTriageDumpDataBlock(
        unsigned int a1,
        __int64 a2,
        unsigned int *a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v9; // r8
  unsigned int i; // ecx
  unsigned int v11; // r10d
  unsigned __int64 *v12; // rdx
  unsigned __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx

  v6 = a4;
  if ( a5 - 1 > 0x3FFFE || !(unsigned __int8)IopIsAddressRangeValid(a4, a5, a5) )
    return 0;
  v9 = a5 + v6;
  for ( i = 0; i < a1; ++i )
  {
    v11 = 0;
    v12 = *(unsigned __int64 **)(a2 + 16LL * i + 8);
    while ( v11 < *(_DWORD *)(a2 + 16LL * i) )
    {
      v13 = v12[1];
      if ( v6 < v13 && v9 > *v12 )
      {
        if ( v6 < *v12 )
        {
          if ( v9 <= v13 )
            v9 = *v12;
        }
        else
        {
          if ( v9 <= v13 )
            return 1;
          v6 = v12[1];
        }
      }
      ++v11;
      v12 += 2;
    }
  }
  if ( !a3 )
    return 0;
  v14 = *a3;
  if ( *a3 >= a3[1] )
    return 0;
  v15 = *((_QWORD *)a3 + 1);
  v16 = 2LL * v14;
  *a3 = v14 + 1;
  *(_QWORD *)(v15 + 8 * v16) = v6;
  *(_QWORD *)(v15 + 8 * v16 + 8) = v9;
  return 1;
}
