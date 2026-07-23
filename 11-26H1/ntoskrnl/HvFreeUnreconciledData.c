/*
 * XREFs of HvFreeUnreconciledData @ 0x140AE3454
 * Callers:
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     HvFoldBackUnreconciledData @ 0x140AE33FC (HvFoldBackUnreconciledData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall HvFreeUnreconciledData(__int64 a1)
{
  void *v2; // rcx
  __int64 i; // rdi
  void *v4; // rcx

  v2 = *(void **)(a1 + 1784);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 1784) = 0LL;
    *(_BYTE *)(a1 + 1736) = 0;
  }
  if ( *(_QWORD *)(a1 + 1752) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 1776); i = (unsigned int)(i + 1) )
    {
      v4 = *(void **)(*(_QWORD *)(a1 + 1768) + 24 * i + 8);
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 1768), 0);
    ExFreePoolWithTag(*(PVOID *)(a1 + 1752), 0);
    *(_QWORD *)(a1 + 1768) = 0LL;
    *(_DWORD *)(a1 + 1776) = 0;
    *(_DWORD *)(a1 + 1744) = 0;
    *(_QWORD *)(a1 + 1752) = 0LL;
  }
}
