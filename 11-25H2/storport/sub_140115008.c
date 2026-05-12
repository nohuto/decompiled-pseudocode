/*
 * XREFs of sub_140115008 @ 0x140115008
 * Callers:
 *     sub_1400DEFC4 @ 0x1400DEFC4 (sub_1400DEFC4.c)
 *     sub_1400EE990 @ 0x1400EE990 (sub_1400EE990.c)
 * Callees:
 *     sub_140088234 @ 0x140088234 (sub_140088234.c)
 */

void __fastcall sub_140115008(__int64 a1)
{
  _QWORD *v1; // rax
  unsigned int v3; // edi
  int i; // r14d
  __int64 j; // rbp
  PSLIST_ENTRY v6; // rax
  _QWORD *p_Next; // rsi

  v1 = *(_QWORD **)(a1 + 880);
  if ( v1 )
  {
    if ( *v1 )
    {
      v3 = 0;
      for ( i = dword_1401687C0
              * (((unsigned __int64)(unsigned int)(dword_1401687C0 - 1) + 32)
               / (unsigned int)dword_1401687C0); v3 < dword_1401688B0; ++v3 )
      {
        for ( j = **(_QWORD **)(a1 + 880) + i * v3; ; --*(_DWORD *)(j + 16) )
        {
          v6 = ExpInterlockedPopEntrySList((PSLIST_HEADER)j);
          p_Next = &v6->Next;
          if ( !v6 )
            break;
          if ( v6[1].Next )
          {
            sub_140088234(*(_QWORD *)(a1 + 128));
            p_Next[2] = 0LL;
          }
          ExFreePoolWithTag(p_Next, 0x4D4E6152u);
        }
      }
      ExFreePoolWithTag(**(PVOID **)(a1 + 880), 0x4D4E6152u);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 880), 0x4D4E6152u);
    *(_QWORD *)(a1 + 880) = 0LL;
  }
}
