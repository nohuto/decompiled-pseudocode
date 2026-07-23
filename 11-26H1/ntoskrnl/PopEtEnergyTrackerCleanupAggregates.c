/*
 * XREFs of PopEtEnergyTrackerCleanupAggregates @ 0x1409CC764
 * Callers:
 *     PopEtEnergyTrackerCleanup @ 0x1407DFF80 (PopEtEnergyTrackerCleanup.c)
 *     PopEtEnergyTrackerQuery @ 0x140B69ED8 (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopEtAggregateKeyCleanup @ 0x1409CC898 (PopEtAggregateKeyCleanup.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char *__fastcall PopEtEnergyTrackerCleanupAggregates(__int64 a1)
{
  char *v1; // rdi
  char *v3; // rbx
  char *result; // rax
  char *v5; // rbp
  char *i; // rcx

  v1 = *(char **)(a1 + 56);
  v3 = v1;
  while ( v3 )
  {
    result = *(char **)v3;
    v3 = result;
    if ( ((unsigned __int8)result & 1) != 0 )
      break;
LABEL_8:
    if ( !result )
      return result;
    v5 = v3;
    for ( i = v1; (*(_QWORD *)i & 1) == 0; i = *(char **)i )
    {
      if ( *(char **)i == v3 )
      {
        *(_QWORD *)i = *(_QWORD *)v3;
        --*(_DWORD *)(a1 + 48);
        *(_QWORD *)v3 |= 0x8000000000000002uLL;
        v3 = i;
        goto LABEL_13;
      }
    }
    v5 = 0LL;
LABEL_13:
    if ( v5 == (char *)(a1 + 80) )
    {
      *(_DWORD *)(a1 + 644) &= ~4u;
      memset_0((void *)(a1 + 128), 0, 0x1B8uLL);
      *(_OWORD *)(a1 + 568) = 0LL;
      *(_QWORD *)(a1 + 584) = 0LL;
    }
    else
    {
      PopEtAggregateKeyCleanup(v5 + 16);
      ExFreePoolWithTag(v5, 0x54456F50u);
    }
  }
  v1 += 8;
  result = *(char **)(a1 + 56);
  while ( v1 < &result[8 * ((unsigned __int64)*(unsigned int *)(a1 + 52) >> 5)] )
  {
    v3 = *(char **)v1;
    if ( (*(_QWORD *)v1 & 1) == 0 )
    {
      result = *(char **)v1;
      goto LABEL_8;
    }
    v1 += 8;
  }
  return result;
}
