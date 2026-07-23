/*
 * XREFs of ExpAllocateFannedOutPushLock @ 0x140492E50
 * Callers:
 *     ExpTryExpandAutoExpandPushLock @ 0x1405094AC (ExpTryExpandAutoExpandPushLock.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140275D20 (KeQueryMaximumProcessorCountEx.c)
 *     ExSaAllocate @ 0x140492F00 (ExSaAllocate.c)
 */

__int64 __fastcall ExpAllocateFannedOutPushLock(__int64 a1, char a2)
{
  __int64 v3; // rbx
  ULONG MaximumProcessorCount; // eax
  __int64 *SListFaultAddress; // r10
  unsigned int v6; // r9d
  __int64 v7; // r8
  __int64 v8; // r11
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rax

  v3 = ExSaAllocate(16LL, (a2 & 1) == 0);
  if ( v3 != -1 )
  {
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    if ( MaximumProcessorCount )
    {
      SListFaultAddress = (__int64 *)ExSaPageGroupDescriptorArrayLock.SListFaultAddress;
      v6 = ((unsigned int)v3 >> 13) & 0x3FFFF;
      v7 = ((unsigned int)v3 >> 4) & 0x1FF;
      v8 = MaximumProcessorCount;
      do
      {
        _BitScanReverse(&v9, v6);
        v10 = *SListFaultAddress++;
        v11 = *(_QWORD *)(*(_QWORD *)(v10 + 8LL * (v9 - 2)) + 8 * (v6 ^ (unsigned __int64)(unsigned int)(1 << v9)) + 8);
        *(_QWORD *)(v11 + 8 * v7) = 0LL;
        *(_QWORD *)(v11 + 8 * v7 + 8) = a1;
        --v8;
      }
      while ( v8 );
    }
  }
  return v3;
}
