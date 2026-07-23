/*
 * XREFs of HalpHvTimerInitialize @ 0x140599A80
 * Callers:
 *     <none>
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x1404362A0 (HalQueryMaximumProcessorCount.c)
 *     HalpHvTimerAcknowledgeInterrupt @ 0x140465370 (HalpHvTimerAcknowledgeInterrupt.c)
 *     HalSocRequestApi @ 0x1404E885C (HalSocRequestApi.c)
 *     HalMapIoSpace @ 0x14059C940 (HalMapIoSpace.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvTimerInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 result; // rax
  unsigned int MaximumProcessorCount; // edi
  __int64 v9; // rax
  PVOID v10; // rax
  __int64 *v11; // rcx
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rax

  LODWORD(a3) = KeGetPcr()->Prcb.Number;
  v4 = 3 * a3;
  if ( !*(_QWORD *)(a1 + 24 * a3 + 8) )
  {
    if ( HalpHvCpuManager )
    {
      v5 = __readmsr(0x40000083u);
      *(_QWORD *)(a1 + 24 * a3 + 16) = ((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5 & 0xFFFFF000;
      v6 = guard_dispatch_icall_no_overrides((unsigned int)a3, (unsigned __int64)HIDWORD(v5) << 32);
      *(_QWORD *)(a1 + 8 * v4 + 8) = v6;
      if ( v6 )
        return 0LL;
    }
    else
    {
      result = HalSocRequestApi(a1, 0LL, 4, 8LL, &HalpHvPhysicalMemoryApi);
      if ( (int)result < 0 )
        return result;
      MaximumProcessorCount = HalQueryMaximumProcessorCount();
      v9 = guard_dispatch_icall_no_overrides(-1LL, MaximumProcessorCount);
      if ( v9 )
      {
        *(_QWORD *)(a1 + 16) = v9;
        v10 = HalMapIoSpace((LARGE_INTEGER)v9, (unsigned __int64)MaximumProcessorCount << 12, MmCached);
        v11 = (__int64 *)(a1 + 8);
        *(_QWORD *)(a1 + 8) = v10;
        if ( v10 )
        {
          if ( MaximumProcessorCount > 1 )
          {
            v12 = (_QWORD *)(a1 + 32);
            v13 = MaximumProcessorCount - 1;
            do
            {
              v12[1] = v11[1] + 4096;
              v14 = *v11;
              v11 += 3;
              *v12 = v14 + 4096;
              v12 += 3;
              --v13;
            }
            while ( v13 );
          }
          return 0LL;
        }
      }
    }
    return 3221225626LL;
  }
  HalpHvTimerAcknowledgeInterrupt(a1);
  return 0LL;
}
