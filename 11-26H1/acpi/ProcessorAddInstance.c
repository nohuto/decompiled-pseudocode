/*
 * XREFs of ProcessorAddInstance @ 0x1400BC8AC
 * Callers:
 *     ProcessorpAddInstanceCallback @ 0x140071D50 (ProcessorpAddInstanceCallback.c)
 *     IrqLibpParseMadt @ 0x1400DC8F4 (IrqLibpParseMadt.c)
 * Callees:
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     ProcessorpIndexInstance @ 0x1400A9548 (ProcessorpIndexInstance.c)
 *     ProcessorpReserveUnownedRanges @ 0x1400D3D20 (ProcessorpReserveUnownedRanges.c)
 */

__int64 __fastcall ProcessorAddInstance(unsigned int a1, int a2)
{
  unsigned int v3; // r15d
  ULONG ProcessorIndexFromNumber; // eax
  unsigned int v5; // edi
  __int64 v7; // r14
  __int64 Pool2; // rbx
  int v9; // esi
  unsigned int v10; // edi
  bool v11; // cc
  void *v12; // rcx
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+20h] [rbp-30h] BYREF
  __int128 v14; // [rsp+28h] [rbp-28h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h]
  int v16; // [rsp+40h] [rbp-10h]

  v3 = a1;
  v15 = 0LL;
  v14 = 0LL;
  v16 = 0;
  if ( IrqLibInterruptModel == 1 )
  {
    if ( (int)HalGetInterruptTargetInformation(0LL, a1, &v14) < 0 )
      return 0LL;
    ProcNumber = (struct _PROCESSOR_NUMBER)DWORD1(v14);
    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
    v5 = ProcessorIndexFromNumber;
    if ( a2 != -1 && ProcessorIndexFromNumber != a2 )
      return 3221225496LL;
  }
  else
  {
    v3 = 0;
    ProcNumber = 0;
    v5 = 0;
  }
  v7 = v5;
  if ( *((_QWORD *)ProcessorByNtNumber + v5) )
    return 0LL;
  Pool2 = ExAllocatePool2(256LL, 112LL, 1232102209LL);
  if ( !Pool2 )
    return 3221225626LL;
  *(struct _PROCESSOR_NUMBER *)(Pool2 + 104) = ProcNumber;
  RtlInitializeRangeList((PRTL_RANGE_LIST)Pool2);
  RtlInitializeRangeList((PRTL_RANGE_LIST)(Pool2 + 32));
  v9 = ProcessorpReserveUnownedRanges((PRTL_RANGE_LIST)Pool2);
  if ( v9 < 0 )
    goto LABEL_18;
  if ( IrqLibInterruptModel == 1 )
  {
    *(_DWORD *)(Pool2 + 64) = v3;
    *(_OWORD *)(Pool2 + 68) = v14;
    *(_QWORD *)(Pool2 + 84) = v15;
    *(_DWORD *)(Pool2 + 92) = v16;
  }
  v9 = ProcessorpIndexInstance(v5, (__int64)&v14);
  if ( v9 < 0 )
  {
LABEL_18:
    v12 = (void *)*((_QWORD *)ProcessorByNtNumber + v5);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      *((_QWORD *)ProcessorByNtNumber + v5) = 0LL;
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
  else
  {
    v10 = v5 + 1;
    v11 = ProcessorInstanceCount <= v10;
    *((_QWORD *)ProcessorByNtNumber + v7) = Pool2;
    if ( v11 )
      ProcessorInstanceCount = v10;
    return 0;
  }
  return (unsigned int)v9;
}
