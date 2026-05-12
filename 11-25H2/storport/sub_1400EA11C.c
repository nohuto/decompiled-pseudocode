/*
 * XREFs of sub_1400EA11C @ 0x1400EA11C
 * Callers:
 *     sub_1400DEFC4 @ 0x1400DEFC4 (sub_1400DEFC4.c)
 *     sub_1400E9790 @ 0x1400E9790 (sub_1400E9790.c)
 *     sub_140194600 @ 0x140194600 (sub_140194600.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1400EA11C(__int64 a1)
{
  __int64 i; // rdi
  __int64 v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  if ( a1 && *(_QWORD *)(a1 + 1024) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)qword_140168E40 + 2); i = (unsigned int)(i + 1) )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 1024) + 8 * i + 24);
      if ( v3 )
      {
        v4 = *(void **)(v3 + 32);
        if ( v4 )
          ExFreePoolWithTag(v4, 0x4D4E6152u);
        v5 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 1024) + 8 * i + 24) + 56LL);
        if ( v5 )
          ExFreePoolWithTag(v5, 0x4D4E6152u);
        ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 1024) + 8 * i + 24), 0x4D4E6152u);
        *(_QWORD *)(*(_QWORD *)(a1 + 1024) + 8 * i + 24) = 0LL;
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 1024), 0x4D4E6152u);
    *(_QWORD *)(a1 + 1024) = 0LL;
  }
}
