/*
 * XREFs of KeAddTriageDumpDataBlock @ 0x1405E8760
 * Callers:
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     PopBSDiagBugcheckCallback @ 0x140610A90 (PopBSDiagBugcheckCallback.c)
 *     PopWatchdogDumpControlRoutine @ 0x140616660 (PopWatchdogDumpControlRoutine.c)
 *     PspCriticalProcessDeathBugcheckCallback @ 0x140618EF0 (PspCriticalProcessDeathBugcheckCallback.c)
 *     IopInitializeTriageDumpData @ 0x140796670 (IopInitializeTriageDumpData.c)
 * Callees:
 *     KiIsAddressRangeValid @ 0x1404AA87C (KiIsAddressRangeValid.c)
 *     Feature_TriageDumpDataExtension__private_IsEnabledDeviceUsageNoInline @ 0x1405E86F8 (Feature_TriageDumpDataExtension__private_IsEnabledDeviceUsageNoInline.c)
 *     KiAddTriageDumpDataBlock @ 0x1405E9C18 (KiAddTriageDumpDataBlock.c)
 *     KiValidateTriageDumpDataArray @ 0x1405EB538 (KiValidateTriageDumpDataArray.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall KeAddTriageDumpDataBlock(
        PKTRIAGE_DUMP_DATA_ARRAY KtriageDumpDataArray,
        ULONG MaxDataSize,
        PVOID Address,
        SIZE_T Size)
{
  ULONG v4; // edi
  char *v6; // rsi
  ULONG NumBlocksUsed; // r9d
  char *v9; // rdx
  SIZE_T v10; // r8
  char *v11; // rcx
  struct _LIST_ENTRY *v13; // rdx

  v4 = 0;
  v6 = *(char **)&MaxDataSize;
  if ( !KtriageDumpDataArray
    || !(unsigned __int8)KiValidateTriageDumpDataArray(KtriageDumpDataArray, MaxDataSize, 0LL)
    || !KiIsAddressRangeValid((__int64)v6, (__int64)Address) )
  {
    return -1073741811;
  }
  if ( !Address )
    return 0;
  if ( !(unsigned int)Feature_TriageDumpDataExtension__private_IsEnabledDeviceUsageNoInline() )
  {
    NumBlocksUsed = KtriageDumpDataArray->NumBlocksUsed;
    v9 = (char *)Address + (_QWORD)v6;
    while ( v4 < NumBlocksUsed )
    {
      v10 = KtriageDumpDataArray->Blocks[v4].Size;
      v11 = (char *)(&KtriageDumpDataArray[1].List.Flink)[2 * v4] + v10;
      if ( v6 < v11 && (unsigned __int64)v9 > v10 )
      {
        if ( (unsigned __int64)v6 < v10 )
        {
          if ( v9 <= v11 )
            v9 = (char *)KtriageDumpDataArray->Blocks[v4].Size;
        }
        else
        {
          if ( v9 <= v11 )
            return 0;
          v6 = (char *)(&KtriageDumpDataArray[1].List.Flink)[2 * v4] + v10;
        }
      }
      ++v4;
    }
    if ( NumBlocksUsed == KtriageDumpDataArray->NumBlocksTotal )
      return -1073741789;
    v13 = (struct _LIST_ENTRY *)(v9 - v6);
    if ( (unsigned __int64)v13 > KtriageDumpDataArray->ComponentNameBufferLength - KtriageDumpDataArray->VirtMemSize )
      return -1073741670;
    (&KtriageDumpDataArray[1].List.Flink)[2 * v4] = v13;
    KtriageDumpDataArray->Blocks[v4].Size = (SIZE_T)v6;
    ++KtriageDumpDataArray->NumBlocksUsed;
    KtriageDumpDataArray->VirtMemSize += (unsigned int)v13;
    return 0;
  }
  return KiAddTriageDumpDataBlock(KtriageDumpDataArray, v6, Address, 0LL);
}
