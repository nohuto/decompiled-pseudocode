/*
 * XREFs of sub_1400F11DC @ 0x1400F11DC
 * Callers:
 *     sub_1400DEFC4 @ 0x1400DEFC4 (sub_1400DEFC4.c)
 *     sub_140194600 @ 0x140194600 (sub_140194600.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1400F11DC(__int64 a1)
{
  __int64 i; // rdi
  void *v3; // rcx

  if ( *(_QWORD *)(a1 + 1352) )
  {
    *(_DWORD *)(a1 + 1408) = -1;
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 1324); i = (unsigned int)(i + 1) )
    {
      v3 = *(void **)(*(_QWORD *)(a1 + 1352) + 8 * i);
      if ( v3 )
      {
        ExFreePoolWithTag(v3, 0x52436152u);
        *(_QWORD *)(*(_QWORD *)(a1 + 1352) + 8 * i) = 0LL;
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 1352), 0x52436152u);
    *(_QWORD *)(a1 + 1352) = 0LL;
  }
}
