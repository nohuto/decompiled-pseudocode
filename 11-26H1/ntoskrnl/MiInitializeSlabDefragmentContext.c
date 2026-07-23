/*
 * XREFs of MiInitializeSlabDefragmentContext @ 0x14070C20C
 * Callers:
 *     MiDefragmentAllSlabsHelper @ 0x14070AED0 (MiDefragmentAllSlabsHelper.c)
 *     MiDefragmentSlabAllocator @ 0x14070B024 (MiDefragmentSlabAllocator.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiInitializeSlabDefragmentContext(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rsi
  unsigned __int64 v8; // rax
  __int64 result; // rax

  v5 = a4;
  memset_0(a1, 0, 0x268uLL);
  if ( a3 )
  {
    *((_DWORD *)a1 + 17) = *(_DWORD *)(a3 + 132);
    v8 = *(unsigned __int16 *)(a3 + 136);
  }
  else
  {
    *((_DWORD *)a1 + 17) = -1;
    v8 = *(unsigned __int16 *)(232 * v5 + *(_QWORD *)(a2 + 16) + 14888);
  }
  *((_DWORD *)a1 + 19) = MiPageSizes[(v8 >> 3) & 3];
  *a1 = a2;
  a1[1] = (unsigned __int64)(a1 + 1) | 1;
  *((_DWORD *)a1 + 18) = v5;
  result = (unsigned __int64)(a1 + 2) | 1;
  a1[2] = result;
  *((_BYTE *)a1 + 80) = 17;
  return result;
}
