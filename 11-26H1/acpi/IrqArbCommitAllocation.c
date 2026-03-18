/*
 * XREFs of IrqArbCommitAllocation @ 0x1400C38C0
 * Callers:
 *     <none>
 * Callees:
 *     IcCopyData @ 0x1400C3674 (IcCopyData.c)
 *     PcisuppIsPciDevice @ 0x1400C3ACC (PcisuppIsPciDevice.c)
 *     PcisuppWriteIntLine @ 0x1400C3C28 (PcisuppWriteIntLine.c)
 *     IrtClearDeletedMsiMappings @ 0x1400C3CBC (IrtClearDeletedMsiMappings.c)
 *     IrqArbClearStaleAllocations @ 0x1400C3EB8 (IrqArbClearStaleAllocations.c)
 *     ProcessorCopyData @ 0x1400C3F28 (ProcessorCopyData.c)
 *     LinkNodeClearPossibleData @ 0x1400C42AC (LinkNodeClearPossibleData.c)
 *     ProcessorpClearData @ 0x1400C42E8 (ProcessorpClearData.c)
 *     IcClearPossibleData @ 0x1400C4400 (IcClearPossibleData.c)
 *     IrtRemapNewMsiAssignments @ 0x1400C44B0 (IrtRemapNewMsiAssignments.c)
 *     IcRemapInputs @ 0x1400C46B0 (IcRemapInputs.c)
 *     IcCopyInputStateToDeviceState @ 0x1400C4888 (IcCopyInputStateToDeviceState.c)
 *     LinkNodeWriteStateToHardware @ 0x1400C49DC (LinkNodeWriteStateToHardware.c)
 *     IrqArbpSetDeviceProperties @ 0x1400C4C18 (IrqArbpSetDeviceProperties.c)
 */

__int64 __fastcall IrqArbCommitAllocation(__int64 a1)
{
  int IsPciDevice; // ebx
  __int64 *i; // rax
  __int64 v5; // rcx
  PRTL_RANGE v6; // rcx
  char *UserData; // r14
  _DWORD *v8; // rdi
  __int64 v9; // rdx
  struct _RTL_RANGE_LIST *v10; // rcx
  __int64 v11; // rcx
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-40h] BYREF
  struct _RANGE_LIST_ITERATOR v13; // [rsp+40h] [rbp-20h] BYREF
  char v14; // [rsp+98h] [rbp+38h] BYREF
  PRTL_RANGE Range; // [rsp+A0h] [rbp+40h] BYREF

  Range = 0LL;
  memset(&Iterator, 0, sizeof(Iterator));
  v14 = 0;
  IrqArbClearStaleAllocations();
  IrtClearDeletedMsiMappings(a1);
  IsPciDevice = ProcessorCopyData(0LL);
  if ( IsPciDevice < 0 )
    goto LABEL_2;
  IsPciDevice = IcRemapInputs();
  if ( IsPciDevice < 0 )
    goto LABEL_2;
  IcCopyInputStateToDeviceState(a1, 1LL);
  IsPciDevice = IcCopyData(0);
  if ( IsPciDevice < 0 )
    goto LABEL_2;
  ProcessorpClearData(1LL);
  IcClearPossibleData();
  IsPciDevice = LinkNodeWriteStateToHardware();
  if ( IsPciDevice < 0 )
    goto LABEL_2;
  v5 = LinkNodeListHead - 56;
  for ( i = (__int64 *)LinkNodeListHead; &LinkNodeListHead != i; v5 = (__int64)(i - 7) )
  {
    *(_DWORD *)(v5 + 32) = *(_DWORD *)(v5 + 36);
    *(_DWORD *)(v5 + 24) = *(_DWORD *)(v5 + 28);
    i = *(__int64 **)(v5 + 56);
  }
  LinkNodeClearPossibleData(v5);
  IsPciDevice = IrtRemapNewMsiAssignments(a1);
  if ( IsPciDevice < 0 )
    goto LABEL_2;
  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 48), &Iterator, &Range);
  while ( 1 )
  {
    v6 = Range;
    if ( !Range )
      break;
    if ( Range->Owner && (Range->Attributes & 1) == 0 )
    {
      UserData = (char *)Range->UserData;
      v8 = UserData + 4;
      if ( !UserData || (*v8 & 0x10) == 0 )
      {
        IsPciDevice = PcisuppIsPciDevice(Range->Owner, &v14);
        if ( IsPciDevice >= 0 && v14 )
        {
          if ( Range->Start <= 0xFF )
            LOBYTE(v9) = Range->Start;
          else
            LOBYTE(v9) = 0;
          PcisuppWriteIntLine(Range->Owner, v9);
        }
        v6 = Range;
      }
      if ( UserData )
      {
        if ( (*v8 & 1) != 0 )
        {
          v13 = Iterator;
          IsPciDevice = IrqArbpSetDeviceProperties(v6, &v13);
          if ( IsPciDevice < 0 )
            goto LABEL_2;
        }
      }
    }
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  v10 = *(struct _RTL_RANGE_LIST **)(a1 + 40);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = v10;
  RtlFreeRangeList(v10);
  ProcessorpClearData(1LL);
  IcClearPossibleData();
  LinkNodeClearPossibleData(v11);
  if ( IsPciDevice < 0 )
LABEL_2:
    byte_14008F5E8 = 0;
  return (unsigned int)IsPciDevice;
}
