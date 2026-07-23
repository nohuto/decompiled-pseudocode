/*
 * XREFs of IopLiveDumpMarkRequiredDumpData @ 0x1405D2F88
 * Callers:
 *     IopLiveDumpCollectPages @ 0x1405D1168 (IopLiveDumpCollectPages.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x1404DDE60 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpMarkDeviceNode @ 0x1405D2B04 (IopLiveDumpMarkDeviceNode.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x1405D2CE8 (IopLiveDumpMarkLoadedModuleList.c)
 *     IopLiveDumpMarkProcessorData @ 0x1405D2E50 (IopLiveDumpMarkProcessorData.c)
 *     IopLiveDumpTraceMarkRequiredDumpDataDuration @ 0x1405D4EAC (IopLiveDumpTraceMarkRequiredDumpDataDuration.c)
 *     MiAddRangeToCrashDump @ 0x1406FAE2C (MiAddRangeToCrashDump.c)
 *     MmAddPrivateDataToCrashDump @ 0x1406FB3EC (MmAddPrivateDataToCrashDump.c)
 */

__int64 __fastcall IopLiveDumpMarkRequiredDumpData(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 MillisecondCounter; // rsi
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int16 *v11[2]; // [rsp+20h] [rbp-50h] BYREF
  __int16 v12; // [rsp+30h] [rbp-40h]
  int v13; // [rsp+32h] [rbp-3Eh]
  __int16 v14; // [rsp+36h] [rbp-3Ah]
  _QWORD v15[5]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v16; // [rsp+60h] [rbp-10h]
  int v17; // [rsp+90h] [rbp+20h] BYREF

  v2 = *(_DWORD *)(a1 + 80);
  v15[3] = 0LL;
  v16 = 0LL;
  v13 = 0;
  MillisecondCounter = 0LL;
  v14 = 0;
  v17 = 0;
  if ( (v2 & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  LODWORD(v16) = v16 | 1;
  v15[2] = a1 + 544;
  v15[4] = a2;
  v15[0] = IoSetDumpRange;
  v15[1] = 0LL;
  result = MiAddRangeToCrashDump(v15, &KdDebuggerDataBlock, 936LL, 0LL);
  if ( (int)result >= 0 )
  {
    result = MiAddRangeToCrashDump(v15, KiProcessorBlock, 8LL * (unsigned int)KeNumberProcessors_0, 0LL);
    if ( (int)result >= 0 )
    {
      result = IopLiveDumpMarkLoadedModuleList((__int64)v15);
      if ( (int)result >= 0 )
      {
        v11[1] = *(unsigned __int16 **)((char *)&stru_140FC11F0.116 + 4);
        v11[0] = (unsigned __int16 *)&stru_140FC11F0.WaitRegister.Flags;
        v12 = 0;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v17, v11) )
        {
          result = IopLiveDumpMarkProcessorData((__int64)v15, v17);
          if ( (int)result < 0 )
            return result;
        }
        result = MmAddPrivateDataToCrashDump(v15, 2LL);
        if ( (int)result >= 0 )
        {
          result = MiAddRangeToCrashDump(v15, 0xFFFFF78000000000uLL, 2720LL, 0LL);
          if ( (int)result >= 0 )
          {
            result = MmAddPrivateDataToCrashDump(v15, 4LL);
            if ( (int)result >= 0 )
            {
              result = MmAddPrivateDataToCrashDump(v15, 8LL);
              v7 = result;
              if ( (int)result >= 0 )
              {
                if ( *(_DWORD *)a1 != 351
                  || *(_QWORD *)(a1 + 8) != 2LL
                  || (v8 = *(_QWORD *)(a1 + 16), result = MiAddRangeToCrashDump(v15, v8, 56LL, 0LL), (int)result >= 0)
                  && (result = IopLiveDumpMarkDeviceNode((__int64)v15, *(_QWORD *)(v8 + 48)),
                      v7 = result,
                      (int)result >= 0)
                  && ((v9 = *(_QWORD *)(a1 + 32)) == 0
                   || (result = IopLiveDumpMarkDeviceNode((__int64)v15, v9), v7 = result, (int)result >= 0)) )
                {
                  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
                  {
                    v10 = IopLiveDumpGetMillisecondCounter(0);
                    IopLiveDumpTraceMarkRequiredDumpDataDuration(a1, v10 - MillisecondCounter);
                  }
                  return v7;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
