/*
 * XREFs of IopMarkPagesForProcessorData @ 0x1405D849C
 * Callers:
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x1405D73D0 (IopAddLiveDumpPagesToPartialKernelDump.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
 *     KeGetNextKernelStackSegment @ 0x140428EF0 (KeGetNextKernelStackSegment.c)
 *     IopAddStackSegmentKernelShadowStackToDump @ 0x1405D7B10 (IopAddStackSegmentKernelShadowStackToDump.c)
 *     KeGetProcessorIdtSize @ 0x1405EE348 (KeGetProcessorIdtSize.c)
 *     MiAddRangeToCrashDump @ 0x1406FAE2C (MiAddRangeToCrashDump.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall IopMarkPagesForProcessorData(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rbp
  int v7; // esi
  unsigned int ProcessorIdtSize; // eax
  __int64 v9; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+28h] [rbp-40h]

  v3 = KiProcessorBlock[a2];
  result = MiAddRangeToCrashDump(a1, v3 - 384, 53376LL, 0LL);
  if ( (int)result >= 0 )
  {
    v5 = *(_QWORD *)(v3 + 8);
    if ( !v5 || !MmIsAddressValidEx(v5) )
      goto LABEL_13;
    result = MiAddRangeToCrashDump(a1, *(_QWORD *)(v3 + 8), 1944LL, 0LL);
    if ( (int)result < 0 )
      return result;
    result = MiAddRangeToCrashDump(a1, *(_QWORD *)(*(_QWORD *)(v3 + 8) + 184LL), 2112LL, 0LL);
    if ( (int)result < 0 )
      return result;
    if ( (PartialDumpControl & 2) != 0 && (v6 = *(_QWORD *)(v3 + 8), (*(_DWORD *)(v6 + 120) & 0x20000) != 0) )
    {
      memset_0(&v9, 0, 0x40uLL);
      v7 = 0;
      KeGetNextKernelStackSegment((_QWORD *)v6, &v9, 1);
      while ( 1 )
      {
        result = MiAddRangeToCrashDump(a1, v10, v9 - v10, 0LL);
        if ( (int)result < 0 )
          break;
        result = IopAddStackSegmentKernelShadowStackToDump(a1, (__int64)&v9);
        if ( (int)result < 0 )
          break;
        if ( (unsigned int)++v7 >= 0x64 || !KeGetNextKernelStackSegment(*(_QWORD **)(v3 + 8), &v9, 0) )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      result = MiAddRangeToCrashDump(a1, *(_QWORD *)(v3 + 36864), 1232LL, 0LL);
      if ( (int)result >= 0 )
      {
        result = MiAddRangeToCrashDump(a1, *(_QWORD *)(*(_QWORD *)(v3 + 36864) + 152LL), 0x2000LL, 0LL);
        if ( (int)result >= 0 )
        {
          result = MiAddRangeToCrashDump(a1, *(_QWORD *)(*(_QWORD *)(v3 + 36864) + 248LL) - 4096LL, 0x2000LL, 0LL);
          if ( (int)result >= 0 )
          {
            result = MiAddRangeToCrashDump(a1, *(_QWORD *)(v3 + 344), *(unsigned __int16 *)(v3 + 342) + 1LL, 0LL);
            if ( (int)result >= 0 )
            {
              ProcessorIdtSize = KeGetProcessorIdtSize(v3);
              return MiAddRangeToCrashDump(a1, *(_QWORD *)(v3 + 360), ProcessorIdtSize, 0LL);
            }
          }
        }
      }
    }
  }
  return result;
}
