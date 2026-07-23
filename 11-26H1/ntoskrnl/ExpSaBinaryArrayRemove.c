/*
 * XREFs of ExpSaBinaryArrayRemove @ 0x14052840C
 * Callers:
 *     ExpSaPageGroupDescriptorAllocate @ 0x1404932FC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaPageGroupDescriptorFree @ 0x140493784 (ExpSaPageGroupDescriptorFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpSaBinaryArrayRemove(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ecx
  __int64 v4; // r11
  _QWORD *v5; // r9

  _BitScanReverse(&v3, a2);
  v4 = v3 - 2;
  v5 = *(_QWORD **)(a1 + 8 * v4);
  v5[(a2 ^ (unsigned __int64)(unsigned int)(1 << v3)) + 1] = 0LL;
  if ( (*v5)-- == 1LL )
  {
    *(_QWORD *)(a1 + 8 * v4) = 0LL;
    ExFreePoolWithTag(v5, 0);
  }
}
