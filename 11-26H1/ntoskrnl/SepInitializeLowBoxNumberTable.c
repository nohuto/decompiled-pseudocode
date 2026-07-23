/*
 * XREFs of SepInitializeLowBoxNumberTable @ 0x14081CCE0
 * Callers:
 *     SepSetTokenLowboxNumber @ 0x140A3E100 (SepSetTokenLowboxNumber.c)
 * Callees:
 *     RtlClearAllBits @ 0x140478400 (RtlClearAllBits.c)
 *     RtlCreateHashTable @ 0x1404B21E0 (RtlCreateHashTable.c)
 *     RtlDeleteHashTable @ 0x1404B2340 (RtlDeleteHashTable.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall SepInitializeLowBoxNumberTable(__int64 a1)
{
  PRTL_DYNAMIC_HASH_TABLE *v1; // rsi
  unsigned int v3; // ebx
  __int64 Pool2; // rax

  v1 = (PRTL_DYNAMIC_HASH_TABLE *)(a1 + 24);
  v3 = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( !RtlCreateHashTable((PRTL_DYNAMIC_HASH_TABLE *)(a1 + 24), 0, 0) )
    return 3221225626LL;
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    *(_DWORD *)(a1 + 8) = 1024;
    *(_QWORD *)(a1 + 16) = Pool2;
    RtlClearAllBits((PRTL_BITMAP)(a1 + 8));
    *(_BYTE *)(a1 + 32) = 1;
  }
  else
  {
    RtlDeleteHashTable(*v1);
    return (unsigned int)-1073741670;
  }
  return v3;
}
