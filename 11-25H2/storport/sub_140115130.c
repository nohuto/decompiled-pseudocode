/*
 * XREFs of sub_140115130 @ 0x140115130
 * Callers:
 *     sub_1400DEFC4 @ 0x1400DEFC4 (sub_1400DEFC4.c)
 *     sub_1400EE990 @ 0x1400EE990 (sub_1400EE990.c)
 *     sub_140114C80 @ 0x140114C80 (sub_140114C80.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140115130(__int64 a1)
{
  _DWORD *v2; // rsi
  __int64 v3; // rdi
  union _SLIST_HEADER *v4; // rcx
  PSLIST_ENTRY v5; // rax
  void *v6; // rcx

  v2 = qword_140168E40;
  if ( *(_QWORD *)(a1 + 896) )
  {
    v3 = 0LL;
    if ( *((_DWORD *)qword_140168E40 + 2) )
    {
      do
      {
        v4 = *(union _SLIST_HEADER **)(*(_QWORD *)(a1 + 896) + 8 * v3);
        if ( v4 )
        {
          while ( 1 )
          {
            v5 = ExpInterlockedPopEntrySList(v4);
            if ( !v5 )
              break;
            ExFreePoolWithTag(v5, 0x52436152u);
            v4 = *(union _SLIST_HEADER **)(*(_QWORD *)(a1 + 896) + 8 * v3);
          }
        }
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < v2[2] );
    }
    v6 = **(void ***)(a1 + 896);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0x52436152u);
      **(_QWORD **)(a1 + 896) = 0LL;
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 896), 0x52436152u);
    *(_QWORD *)(a1 + 896) = 0LL;
  }
}
