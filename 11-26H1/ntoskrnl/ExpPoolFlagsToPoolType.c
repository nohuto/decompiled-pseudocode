/*
 * XREFs of ExpPoolFlagsToPoolType @ 0x140C16F50
 * Callers:
 *     ExRemovePoolTag @ 0x140346850 (ExRemovePoolTag.c)
 *     ExpFreeHeapSpecialPool @ 0x140347BA8 (ExpFreeHeapSpecialPool.c)
 *     ExAllocateContiguousHeapPool @ 0x14034CAE0 (ExAllocateContiguousHeapPool.c)
 *     ExInsertPoolTag @ 0x14034CE1C (ExInsertPoolTag.c)
 *     ExpInsertPoolTracker @ 0x14034CF24 (ExpInsertPoolTracker.c)
 *     ExAllocateHeapPool @ 0x14039A530 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1403A9910 (ExFreeHeapPool.c)
 *     ExAllocateHeapSpecialPool @ 0x1405140E8 (ExAllocateHeapSpecialPool.c)
 *     ExPoolCleanupExpansionTable @ 0x140524D04 (ExPoolCleanupExpansionTable.c)
 *     VfHandlePoolAlloc @ 0x140C4A310 (VfHandlePoolAlloc.c)
 *     VerifierExAllocatePool2 @ 0x140C4AE10 (VerifierExAllocatePool2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpPoolFlagsToPoolType(__int64 a1, int a2, int *a3, _BYTE *a4, _BYTE *a5)
{
  int v5; // r11d
  int v7; // ecx
  __int64 result; // rax
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  int v13; // ecx

  v5 = 0;
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  if ( (a1 & 0xFFFFF000) != 0 )
    return 3221225485LL;
  v7 = a1 & 0x10;
  if ( v7 )
  {
    if ( !a2 )
      return 3221225485LL;
  }
  if ( (a1 & 0x1C0) == 0x40 )
  {
    v5 = 512;
  }
  else if ( (a1 & 0x1C0) != 0x80 )
  {
    if ( (a1 & 0x1C0) != 0x100 )
      return 3221225485LL;
    v5 = -2147483647;
    if ( !v7 )
      v5 = 1;
  }
  v9 = v5 | 0x20;
  if ( (a1 & 4) == 0 )
    v9 = v5;
  v10 = v9 | 0x400;
  if ( (a1 & 2) != 0 )
    v10 = v9;
  if ( (a1 & 0x100000629LL) != 0 )
  {
    v11 = v10 | 4;
    if ( (a1 & 8) == 0 )
      v11 = v10;
    v12 = v11 | 0x80;
    if ( (a1 & 0x200) == 0 )
      v12 = v11;
    v13 = v12 | 0x40;
    if ( (a1 & 0x400) == 0 )
      v13 = v12;
    v10 = v13;
    if ( (a1 & 1) != 0 )
    {
      v10 = v13 | 8;
      *a4 = 1;
      if ( (a1 & 0x20) != 0 )
        v10 = v13;
    }
    else if ( (a1 & 0x20) != 0 )
    {
      v10 = v13 | 0x10;
    }
    if ( (a1 & 0x100000000LL) != 0 )
      *a5 = 1;
  }
  result = 0LL;
  *a3 = v10;
  return result;
}
