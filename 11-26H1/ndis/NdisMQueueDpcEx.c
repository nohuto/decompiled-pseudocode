/*
 * XREFs of NdisMQueueDpcEx @ 0x14004B570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KAFFINITY __stdcall NdisMQueueDpcEx(
        NDIS_HANDLE NdisInterruptHandle,
        ULONG MessageId,
        PGROUP_AFFINITY TargetProcessors,
        PVOID MiniportDpcContext)
{
  __int64 v4; // rax
  unsigned int Number; // r14d
  __int64 v7; // rdi
  int v8; // r12d
  unsigned int v9; // r13d
  unsigned __int64 v10; // rbp
  KAFFINITY v11; // rsi
  unsigned __int64 Mask; // rbx
  int v13; // r12d
  ULONG ProcessorIndexFromNumber; // eax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+70h] [rbp+8h] BYREF
  PVOID SystemArgument1; // [rsp+78h] [rbp+10h]
  __int64 v18; // [rsp+80h] [rbp+18h]
  PVOID SystemArgument2; // [rsp+88h] [rbp+20h]

  SystemArgument2 = MiniportDpcContext;
  LODWORD(SystemArgument1) = MessageId;
  v4 = *((_QWORD *)NdisInterruptHandle + 12);
  Number = 0;
  v18 = 0LL;
  v7 = 1LL;
  v8 = 0;
  v9 = -1;
  if ( *(_DWORD *)(v4 + 48) || *(_DWORD *)(v4 + 80) )
  {
    v8 = *(_DWORD *)(v4 + 48);
    v18 = *(_QWORD *)(v4 + 40);
    if ( !v18 )
      v18 = *(_QWORD *)(v4 + 40);
  }
  if ( *((_BYTE *)NdisInterruptHandle + 193) )
    v10 = *((_QWORD *)NdisInterruptHandle + 28) + ((unsigned __int64)(MessageId * (ndisMaxNumberOfProcessors + 1)) << 6);
  else
    v10 = *((_QWORD *)NdisInterruptHandle + 14);
  v11 = 0LL;
  Mask = TargetProcessors->Mask;
  ProcNumber.Group = TargetProcessors->Group;
  *(_WORD *)&ProcNumber.Number = 0;
  v13 = v8 & 0x1000000;
  if ( v13 )
    Number = KeGetPcr()->Prcb.Number;
  for ( ; Mask; Mask >>= 1 )
  {
    if ( (Mask & 1) != 0 )
    {
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
      if ( ProcessorIndexFromNumber != -1 )
      {
        if ( ProcessorIndexFromNumber != Number && v13 )
        {
          if ( v9 == -1 )
            v9 = KeGetPcr()->Prcb.Number;
          ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + ndisPcwPerCpuDataStride * v9 + v18 + 96);
        }
        _InterlockedIncrement((volatile signed __int32 *)NdisInterruptHandle + 26);
        if ( KeInsertQueueDpc(
               (PRKDPC)(v10 + ((unsigned __int64)ProcessorIndexFromNumber << 6)),
               (PVOID)(unsigned int)SystemArgument1,
               SystemArgument2) )
        {
          v11 |= v7;
        }
        else
        {
          _InterlockedDecrement((volatile signed __int32 *)NdisInterruptHandle + 26);
        }
      }
    }
    ++ProcNumber.Number;
    v7 *= 2LL;
  }
  return v11;
}
