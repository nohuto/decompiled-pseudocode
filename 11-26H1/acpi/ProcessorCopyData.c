/*
 * XREFs of ProcessorCopyData @ 0x1400C3F28
 * Callers:
 *     AcpiIrqLibSetupSciInterrupt @ 0x1400BBB64 (AcpiIrqLibSetupSciInterrupt.c)
 *     IrqArbBootAllocation @ 0x1400C35D0 (IrqArbBootAllocation.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1400C379C (IrqArbpPrepareForTestOrConflict.c)
 *     IrqArbCommitAllocation @ 0x1400C38C0 (IrqArbCommitAllocation.c)
 * Callees:
 *     ProcessorpInsertAssignment @ 0x1400C417C (ProcessorpInsertAssignment.c)
 *     ProcessorpClearData @ 0x1400C42E8 (ProcessorpClearData.c)
 */

__int64 __fastcall ProcessorCopyData(__int64 a1)
{
  unsigned int v1; // esi
  __int64 i; // rbx
  struct _RTL_RANGE_LIST *v3; // rcx
  struct _RTL_RANGE_LIST *v4; // rdx
  NTSTATUS v5; // edi
  __int64 j; // rbx
  struct _RTL_RANGE_LIST *v7; // rcx
  __int64 k; // rdi
  struct _RTL_RANGE_LIST *v9; // r14
  struct _RTL_RANGE_LIST *v10; // rcx
  _WORD *UserData; // rbx
  __int64 v12; // r14
  _OWORD *Pool2; // rax
  _OWORD *v14; // rdx
  struct _RANGE_LIST_ITERATOR v16; // [rsp+20h] [rbp-40h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+40h] [rbp-20h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+98h] [rbp+38h] BYREF
  PRTL_RANGE v19; // [rsp+A0h] [rbp+40h] BYREF
  PRTL_RANGE Range; // [rsp+A8h] [rbp+48h] BYREF

  Range = 0LL;
  v19 = 0LL;
  memset(&Iterator, 0, sizeof(Iterator));
  v1 = a1;
  ProcNumber = 0;
  memset(&v16, 0, sizeof(v16));
  ProcessorpClearData(a1);
  for ( i = 0LL; (unsigned int)i < ProcessorInstanceCount; i = (unsigned int)(i + 1) )
  {
    v3 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + i);
    if ( v3 )
    {
      v4 = v3 + 1;
      if ( v1 )
      {
        v4 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + i);
        ++v3;
      }
      v5 = RtlCopyRangeList(v3, v4);
      if ( v5 < 0 )
      {
LABEL_34:
        ProcessorpClearData(v1);
        return (unsigned int)v5;
      }
    }
  }
  for ( j = 0LL; (unsigned int)j < ProcessorInstanceCount; j = (unsigned int)(j + 1) )
  {
    v7 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + j);
    if ( v7 )
    {
      if ( v1 )
        ++v7;
      RtlGetFirstRange(v7, &v16, &v19);
      while ( v19 )
      {
        v19->UserData = 0LL;
        RtlGetNextRange(&v16, &v19, 1u);
      }
    }
  }
  for ( k = 0LL; (unsigned int)k < ProcessorInstanceCount; k = (unsigned int)(k + 1) )
  {
    v9 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + k);
    if ( v9 )
    {
      v10 = v9 + 1;
      if ( v1 )
        v10 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + k);
      RtlGetFirstRange(v10, &Iterator, &Range);
      if ( v1 )
        ++v9;
      RtlGetFirstRange(v9, &v16, &v19);
      while ( Range )
      {
        UserData = Range->UserData;
        if ( UserData )
        {
          v12 = *(_QWORD *)UserData;
          KeGetProcessorNumberFromIndex(k, &ProcNumber);
          if ( UserData[4] == ProcNumber.Group && ((1LL << ProcNumber.Number) & (v12 ^ (v12 - 1)) & v12) != 0 )
          {
            Pool2 = (_OWORD *)ExAllocatePool2(256LL, 32LL, 1232102209LL);
            if ( !Pool2 )
            {
              v5 = -1073741670;
              goto LABEL_34;
            }
            v14 = Range->UserData;
            *Pool2 = *v14;
            Pool2[1] = v14[1];
            ProcessorpInsertAssignment(Range->Owner, Pool2, v1);
          }
        }
        RtlGetNextRange(&Iterator, &Range, 1u);
        RtlGetNextRange(&v16, &v19, 1u);
      }
    }
  }
  return 0;
}
