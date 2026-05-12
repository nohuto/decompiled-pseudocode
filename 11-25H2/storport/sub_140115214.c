/*
 * XREFs of sub_140115214 @ 0x140115214
 * Callers:
 *     sub_1400DEFC4 @ 0x1400DEFC4 (sub_1400DEFC4.c)
 *     sub_1400EE990 @ 0x1400EE990 (sub_1400EE990.c)
 *     sub_140114E3C @ 0x140114E3C (sub_140114E3C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140115214(__int64 a1)
{
  __int64 i; // rdi
  union _SLIST_HEADER *v3; // rcx
  PSLIST_ENTRY v4; // rax

  if ( a1 && *(_QWORD *)(a1 + 888) )
  {
    for ( i = 0LL; (unsigned int)i < dword_1401688B0; i = (unsigned int)(i + 1) )
    {
      v3 = *(union _SLIST_HEADER **)(*(_QWORD *)(a1 + 888) + 8 * i);
      if ( v3 )
      {
        while ( 1 )
        {
          v4 = ExpInterlockedPopEntrySList(v3);
          if ( !v4 )
            break;
          ExFreePoolWithTag(v4, 0x52436152u);
          v3 = *(union _SLIST_HEADER **)(*(_QWORD *)(a1 + 888) + 8 * i);
        }
        ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 888) + 8 * i), 0x52436152u);
        *(_QWORD *)(*(_QWORD *)(a1 + 888) + 8 * i) = 0LL;
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 888), 0x52436152u);
    *(_QWORD *)(a1 + 888) = 0LL;
  }
}
