/*
 * XREFs of NdisMQueueDpc @ 0x1400506D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall NdisMQueueDpc(
        NDIS_HANDLE NdisInterruptHandle,
        ULONG MessageId,
        ULONG TargetProcessors,
        PVOID MiniportDpcContext)
{
  __int64 v4; // rax
  unsigned int Number; // ebp
  unsigned __int64 v6; // rbx
  int v8; // esi
  int v9; // r12d
  unsigned int v10; // r13d
  unsigned __int64 v11; // r14
  ULONG v12; // edi
  int v13; // r12d
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v16; // [rsp+70h] [rbp+8h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+80h] [rbp+18h] BYREF
  PVOID SystemArgument2; // [rsp+88h] [rbp+20h]

  SystemArgument2 = MiniportDpcContext;
  v4 = *((_QWORD *)NdisInterruptHandle + 12);
  Number = 0;
  v6 = TargetProcessors;
  v8 = 1;
  v16 = 0LL;
  v9 = 0;
  v10 = -1;
  if ( *(_DWORD *)(v4 + 48) || *(_DWORD *)(v4 + 80) )
  {
    v9 = *(_DWORD *)(v4 + 48);
    v16 = *(_QWORD *)(v4 + 40);
    if ( !v16 )
      v16 = *(_QWORD *)(v4 + 40);
  }
  if ( *((_BYTE *)NdisInterruptHandle + 193) )
    v11 = *((_QWORD *)NdisInterruptHandle + 28) + ((unsigned __int64)(MessageId * (ndisMaxNumberOfProcessors + 1)) << 6);
  else
    v11 = *((_QWORD *)NdisInterruptHandle + 14);
  ProcNumber = 0;
  v12 = 0;
  v13 = v9 & 0x1000000;
  if ( v13 )
    Number = KeGetPcr()->Prcb.Number;
  if ( TargetProcessors )
  {
    do
    {
      if ( (v6 & 1) != 0 )
      {
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
        if ( ProcessorIndexFromNumber != -1 )
        {
          if ( ProcessorIndexFromNumber != Number && v13 )
          {
            if ( v10 == -1 )
              v10 = KeGetPcr()->Prcb.Number;
            ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + ndisPcwPerCpuDataStride * v10 + v16 + 96);
          }
          _InterlockedIncrement((volatile signed __int32 *)NdisInterruptHandle + 26);
          if ( KeInsertQueueDpc(
                 (PRKDPC)(v11 + ((unsigned __int64)ProcessorIndexFromNumber << 6)),
                 (PVOID)MessageId,
                 SystemArgument2) )
          {
            v12 |= v8;
          }
          else
          {
            _InterlockedDecrement((volatile signed __int32 *)NdisInterruptHandle + 26);
          }
        }
      }
      ++ProcNumber.Number;
      v8 *= 2;
      v6 >>= 1;
    }
    while ( v6 );
  }
  return v12;
}
