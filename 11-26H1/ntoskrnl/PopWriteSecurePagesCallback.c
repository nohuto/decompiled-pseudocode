/*
 * XREFs of PopWriteSecurePagesCallback @ 0x14060A100
 * Callers:
 *     HvlIterateSecurePagesForHibernation @ 0x1405C1A10 (HvlIterateSecurePagesForHibernation.c)
 * Callees:
 *     RtlClearBits @ 0x14035AF40 (RtlClearBits.c)
 *     PopWriteHiberPages @ 0x140C02C1C (PopWriteHiberPages.c)
 */

__int64 __fastcall PopWriteSecurePagesCallback(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbp
  __int64 v7; // rbx
  unsigned int i; // esi
  unsigned int j; // r12d
  __int64 result; // rax

  v3 = *a1;
  v5 = a3;
  if ( !*((_DWORD *)a1 + 2) )
  {
    v7 = a2;
    for ( i = 0; i < (unsigned int)v5; ++i )
    {
      for ( j = 0; j < *(unsigned __int16 *)(v7 + 8); ++j )
        RtlClearBits((PRTL_BITMAP)(v3 + 32), *(_DWORD *)(v7 + 8LL * j + 16), (*(_QWORD *)(v7 + 8LL * j + 16) >> 40) + 1);
      if ( *(_QWORD *)v7 == -1LL )
      {
        *((_DWORD *)a1 + 2) = 1;
        break;
      }
      v7 += 4096LL;
    }
  }
  result = PopWriteHiberPages(
             v3,
             a2,
             v5,
             *(_DWORD *)(v3 + 280)
           + ((unsigned int)((*(_DWORD *)(v3 + 32) >> 3) + 4095) >> 12)
           + *(_DWORD *)(v3 + 284)
           + 2);
  *(_DWORD *)(v3 + 284) += v5;
  return result;
}
