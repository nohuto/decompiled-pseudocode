/*
 * XREFs of RtlpHpLfhContextCompact @ 0x140347628
 * Callers:
 *     RtlpHpHeapCompact @ 0x1403473E4 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlpHpLfhHeatMapQuery @ 0x140347720 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhOwnerCompact @ 0x140347910 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpEnvCompactionSchedule @ 0x14034D650 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpLfhPrivateSlotsCompact @ 0x140639C2C (RtlpHpLfhPrivateSlotsCompact.c)
 */

void __fastcall RtlpHpLfhContextCompact(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebp
  __int64 *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rsi
  unsigned int SystemCallNumber; // eax
  __int64 v10; // rbx

  if ( *((_DWORD *)a1 + 21) )
  {
    v5 = 0;
    if ( (a1[10] & 1) != 0 )
      v5 = RtlpHpLfhPrivateSlotsCompact();
    v6 = a1 + 56;
    v7 = 128LL;
    do
    {
      v8 = 0LL;
      if ( (*v6 & 1) == 0 )
        v8 = *v6;
      if ( v8 )
      {
        if ( *(_BYTE *)(v8 + 92) )
        {
          *(_BYTE *)(v8 + 92) = 0;
          v10 = (unsigned int)RtlpHpLfhHeatMapQuery(a1, a1 + 24, v8);
          RtlpHpLfhOwnerCompact(a1, v8, v10);
          if ( (int)v10 >= 1 )
          {
            *(_BYTE *)(v8 + 92) = 1;
            ++v5;
          }
        }
      }
      ++v6;
      --v7;
    }
    while ( v7 );
    if ( v5 )
    {
      if ( BYTE1(**(_QWORD **)(*a1 + 56)) == 1 )
        SystemCallNumber = *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.Tag;
      else
        SystemCallNumber = ExSaPageGroupDescriptorArrayLock.SystemCallNumber;
      if ( !SystemCallNumber )
        RtlpHpEnvCompactionSchedule(*(_QWORD *)(*a1 + 56), a2, a3, a4);
    }
  }
}
