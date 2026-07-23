/*
 * XREFs of IopAddBugcheckTriageDataFromParameters @ 0x1404424BC
 * Callers:
 *     IopUpdateMinidumpContext @ 0x140442108 (IopUpdateMinidumpContext.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x1404E57CC (IopIsAddressRangeValid.c)
 *     IopAddBugcheckDirectedTransitionTriageData @ 0x1405D649C (IopAddBugcheckDirectedTransitionTriageData.c)
 *     IopAddBugcheckPnpTriageData @ 0x1405D658C (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x1405D6604 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x1405D66C4 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1405D6918 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageThread @ 0x1405D6CDC (IopAddBugcheckTriageThread.c)
 *     PnpInitializeTriageBlock @ 0x1405DC1A4 (PnpInitializeTriageBlock.c)
 *     PnpSaveGlobalsToMinidump @ 0x1405DC220 (PnpSaveGlobalsToMinidump.c)
 *     PopInternalAddToDumpFile @ 0x1406032D4 (PopInternalAddToDumpFile.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall IopAddBugcheckTriageDataFromParameters(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v10; // r8
  unsigned __int64 v11; // rdi
  ULONG v12; // ecx
  ULONG *v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned int v18; // ecx
  ULONG MaxDataSize[20]; // [rsp+20h] [rbp-68h] BYREF

  IoAddTriageDumpDataBlock(a2 & 0xFFFFF000, (PVOID)0x1000);
  IoAddTriageDumpDataBlock(a3 & 0xFFFFF000, (PVOID)0x1000);
  IoAddTriageDumpDataBlock(a4 & 0xFFFFF000, (PVOID)0x1000);
  result = IoAddTriageDumpDataBlock((unsigned int)a5 & 0xFFFFF000, (PVOID)0x1000);
  if ( a1 == 205 || a1 == 214 )
    result = IoAddTriageDumpDataBlock((a2 - 4096) & 0xFFFFF000, (PVOID)0x1000);
  switch ( a1 )
  {
    case 412:
      if ( a3 )
      {
        v11 = a2 - 16;
        if ( v11 <= 0x40 && (v11 & 0xF) == 0 )
        {
          v12 = a3;
          return IopAddBugcheckTriageThread(v12);
        }
      }
      return result;
    case 159:
      switch ( a2 )
      {
        case 4LL:
          result = PnpSaveGlobalsToMinidump();
          if ( a4 )
            return IopAddBugcheckPnpTriageData(a4, a5);
          break;
        case 3LL:
          return IopAddBugcheckPowerTriageData(a3, a4, a5);
        case 5LL:
          return IopAddBugcheckDirectedTransitionTriageData(a3, a5);
      }
      return result;
    case 469:
      PnpSaveGlobalsToMinidump();
      LODWORD(v13) = a3;
      return IopAddBugcheckPnpWatchdogTriageData((ULONG)v13);
    case 160:
      if ( a2 == 1560 )
      {
        v12 = a4;
        return IopAddBugcheckTriageThread(v12);
      }
      if ( a2 == 1561 )
      {
        result = IopAddBugcheckTriageDeviceNode(*(_QWORD *)(a3 + 48));
        if ( a5 )
          return IopAddBugcheckTriageDeviceNode(a5);
        return result;
      }
      if ( a2 != 15 )
      {
        result = a2 - 240;
        if ( (unsigned __int64)(a2 - 240) > 1 )
          return result;
      }
      memset_0(MaxDataSize, 0, sizeof(MaxDataSize));
      PnpSaveGlobalsToMinidump();
      PnpInitializeTriageBlock(MaxDataSize);
      v13 = MaxDataSize;
      return IopAddBugcheckPnpWatchdogTriageData((ULONG)v13);
    case 257:
      if ( a3 )
        return result;
      result = IopIsAddressRangeValid(a4, 52992LL, v10);
      if ( !(_BYTE)result )
        return result;
      IoAddTriageDumpDataBlock(a4, (PVOID)0xCF00);
      IoAddTriageDumpDataBlock(*(_QWORD *)(a4 + 36864), (PVOID)0x4D0);
      v14 = *(_QWORD *)(a4 + 8);
      if ( (unsigned __int8)IopIsAddressRangeValid(v14, 1944LL, v15) )
        IopAddBugcheckTriageThread(v14);
      v16 = 0x2000LL;
      v17 = (*(_QWORD *)(*(_QWORD *)(a4 + 36864) + 152LL) - 4096LL) & 0xFFFFFFFFFFFFF000uLL;
      return IoAddTriageDumpDataBlock(v17, (PVOID)v16);
    case 416:
      IopAddBugcheckTriageThread(a4);
      return PopInternalAddToDumpFile(0LL, 0LL, 0LL);
    case 292:
      result = IopIsAddressRangeValid(a3, 128LL, v10);
      if ( (_BYTE)result )
      {
        v18 = *(_DWORD *)(a3 + 20);
        v16 = 72 * (unsigned int)*(unsigned __int16 *)(a3 + 10) + 128;
        if ( v18 >= (unsigned int)v16 )
          v16 = v18;
        LODWORD(v17) = a3;
        return IoAddTriageDumpDataBlock(v17, (PVOID)v16);
      }
      break;
  }
  return result;
}
