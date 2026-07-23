/*
 * XREFs of IopLiveDumpMarkProcessorData @ 0x1405D2E50
 * Callers:
 *     IopLiveDumpMarkRequiredDumpData @ 0x1405D2F88 (IopLiveDumpMarkRequiredDumpData.c)
 * Callees:
 *     KeGetProcessorIdtSize @ 0x1405EE348 (KeGetProcessorIdtSize.c)
 *     MiAddRangeToCrashDump @ 0x1406FAE2C (MiAddRangeToCrashDump.c)
 */

__int64 __fastcall IopLiveDumpMarkProcessorData(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  unsigned int ProcessorIdtSize; // eax

  v3 = KiProcessorBlock[a2];
  result = MiAddRangeToCrashDump(a1, v3 - 384, 53376LL, 0LL);
  if ( (int)result >= 0 )
  {
    result = MiAddRangeToCrashDump(a1, *(_QWORD *)(v3 + 8), 1944LL, 0LL);
    if ( (int)result >= 0 )
    {
      result = MiAddRangeToCrashDump(a1, *(_QWORD *)(*(_QWORD *)(v3 + 8) + 184LL), 2112LL, 0LL);
      if ( (int)result >= 0 )
      {
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
  }
  return result;
}
