/*
 * XREFs of RtlpHpEnvTlsAlloc @ 0x14063C094
 * Callers:
 *     RtlpHpLfhContextEnable @ 0x14063C6BC (RtlpHpLfhContextEnable.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140275D20 (KeQueryMaximumProcessorCountEx.c)
 *     ExSaAllocate @ 0x140492F00 (ExSaAllocate.c)
 */

__int64 RtlpHpEnvTlsAlloc()
{
  __int64 v0; // rax
  unsigned int v1; // ebx
  ULONG MaximumProcessorCount; // eax
  __int64 *SListFaultAddress; // r10
  unsigned int v4; // r9d
  __int64 v5; // r11
  unsigned int v6; // ecx
  __int64 v7; // rax

  v0 = ExSaAllocate(8, 0);
  v1 = v0;
  if ( v0 == -1 )
  {
    return 0;
  }
  else
  {
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    if ( MaximumProcessorCount )
    {
      SListFaultAddress = (__int64 *)ExSaPageGroupDescriptorArrayLock.SListFaultAddress;
      v4 = (v1 >> 13) & 0x3FFFF;
      v5 = MaximumProcessorCount;
      do
      {
        _BitScanReverse(&v6, v4);
        v7 = *SListFaultAddress++;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8LL * (v6 - 2))
                              + 8 * (v4 ^ (unsigned __int64)(unsigned int)(1 << v6))
                              + 8)
                  + 8LL * ((v1 >> 4) & 0x1FF)) = 0LL;
        --v5;
      }
      while ( v5 );
    }
  }
  return v1;
}
