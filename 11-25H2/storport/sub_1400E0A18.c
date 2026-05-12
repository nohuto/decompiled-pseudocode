/*
 * XREFs of sub_1400E0A18 @ 0x1400E0A18
 * Callers:
 *     sub_1400DC2F8 @ 0x1400DC2F8 (sub_1400DC2F8.c)
 *     sub_1400DF7EC @ 0x1400DF7EC (sub_1400DF7EC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1400E0A18(__int64 a1)
{
  void *v2; // rcx
  unsigned int i; // edi
  unsigned __int64 v4; // rsi
  void *v5; // rcx

  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x52436152u);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 124); ++i )
    {
      v4 = (unsigned __int64)i << 7;
      v5 = *(void **)(*(_QWORD *)(a1 + 32) + v4 + 16);
      if ( v5 )
      {
        MmFreeContiguousMemory(v5);
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + v4 + 16) = 0LL;
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 32), 0x52436152u);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
}
