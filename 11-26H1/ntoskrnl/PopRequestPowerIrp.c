/*
 * XREFs of PopRequestPowerIrp @ 0x14026F334
 * Callers:
 *     PopFxReleasePowerIrp @ 0x1403BFFD8 (PopFxReleasePowerIrp.c)
 *     PopScanIdleList @ 0x1404BFF50 (PopScanIdleList.c)
 *     PoRequestPowerIrp @ 0x1404C70C0 (PoRequestPowerIrp.c)
 *     DifPoRequestPowerIrpWrapper @ 0x140697F10 (DifPoRequestPowerIrpWrapper.c)
 * Callees:
 *     PopAllocateIrp @ 0x14026ED9C (PopAllocateIrp.c)
 *     PopQueueQuerySetIrp @ 0x1403BC828 (PopQueueQuerySetIrp.c)
 *     PopPepUpdateConstraints @ 0x1403BD4FC (PopPepUpdateConstraints.c)
 *     PopDiagTraceIrpStart @ 0x1403BD9D4 (PopDiagTraceIrpStart.c)
 *     PopFxDereferenceDevice @ 0x1403C00F4 (PopFxDereferenceDevice.c)
 *     PopLogNotifyDevice @ 0x1404643C8 (PopLogNotifyDevice.c)
 *     PopFxGetDeviceDStateReason @ 0x1404BDBEC (PopFxGetDeviceDStateReason.c)
 *     IofCallDriverSpecifyReturn @ 0x1404D5EB0 (IofCallDriverSpecifyReturn.c)
 *     PopFxNotifyPreDIrpIssue @ 0x1405123F4 (PopFxNotifyPreDIrpIssue.c)
 */

__int64 __fastcall PopRequestPowerIrp(
        struct _LIST_ENTRY *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        struct _LIST_ENTRY *a5,
        char a6,
        PIRP Irp)
{
  volatile __int64 *p_Type; // rbp
  char v9; // r14
  char v11; // cl
  __int64 result; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  PIRP v15; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  volatile signed __int32 *v17; // rcx
  struct _LIST_ENTRY *v18; // rsi
  struct _IO_STACK_LOCATION *v19; // rbp
  struct _LIST_ENTRY *Blink; // rcx
  int v21; // ecx
  int v22; // eax
  struct _LIST_ENTRY *v23; // rdx
  signed __int32 Flink; // eax
  signed __int32 v25; // ett
  char v26; // al
  struct _LIST_ENTRY *v27; // rcx
  struct _LIST_ENTRY *v28; // [rsp+60h] [rbp-28h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  p_Type = (volatile __int64 *)&Irp->Type;
  v28 = 0LL;
  v9 = a2;
  if ( Irp )
    _InterlockedExchange64((volatile __int64 *)&Irp->Type, 0LL);
  Irp = 0LL;
  if ( !(_BYTE)a2 )
    goto LABEL_4;
  if ( (unsigned __int8)(a2 - 2) > 1u )
    return 3221225712LL;
  if ( (_BYTE)PopCurrentBroadcast )
    v11 = 1;
  else
LABEL_4:
    v11 = 0;
  result = PopAllocateIrp(a1, a2, a2, (_BYTE)a2 != 0, a3, v11, a6, a4, a5, &Irp, &v28);
  if ( (int)result >= 0 && (_DWORD)result != 259 )
  {
    v15 = Irp;
    if ( Irp )
    {
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      v17 = (volatile signed __int32 *)&PopRequestCompletion;
      v18 = v28;
      CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&PopRequestCompletion;
      CurrentStackLocation[-1].Context = v18;
      CurrentStackLocation[-1].Control = -32;
      if ( p_Type )
        _InterlockedExchange64(p_Type, (__int64)v15);
      v19 = v15->Tail.Overlay.CurrentStackLocation;
      if ( v9 )
      {
        v19[-1].Parameters.Create.Options = 1;
        v19[-1].Parameters.Read.ByteOffset.LowPart = a3;
        if ( (_BYTE)PopCurrentBroadcast && (!v18[12].Blink || (unsigned int)PopFxGetDeviceDStateReason() == 1) )
        {
          v21 = 3;
          v22 = WORD2(PopCurrentBroadcast) >> 12;
          if ( DWORD2(PopCurrentBroadcast) == 7 )
          {
            v21 = 3 - (v22 != 5);
          }
          else if ( v22 != 5 )
          {
            v21 = DWORD2(PopCurrentBroadcast);
          }
          v19[-1].Parameters.Create.EaLength = v21;
          v19[-1].Parameters.Read.Length = DWORD1(PopCurrentBroadcast);
        }
        if ( (xmmword_140FC0C10 & 0x8000) != 0 )
          PopLogNotifyDevice(a1, 0LL, v15);
        Blink = v18[12].Blink;
        if ( !Blink || v9 != 2 || (unsigned __int8)PopFxNotifyPreDIrpIssue(Blink, v15) )
          PopQueueQuerySetIrp(v15);
      }
      else
      {
        v23 = v18[12].Blink;
        if ( v23 )
        {
          _m_prefetchw(&v23[2]);
          Flink = (signed __int32)v23[2].Flink;
          do
          {
            v25 = Flink;
            Flink = _InterlockedCompareExchange((volatile signed __int32 *)&v23[2], Flink, Flink);
          }
          while ( v25 != Flink );
          v26 = Flink & 1;
          LOBYTE(v18[13].Flink) = v26;
          v26 ^= 1u;
          BYTE1(v18[13].Flink) = v26;
          v27 = v18[12].Blink;
          if ( v26 )
          {
            v17 = (volatile signed __int32 *)v27[3].Blink;
            if ( _InterlockedIncrement(v17 + 32) == 1 )
              PopPepUpdateConstraints(v17, 5LL, 0LL);
          }
          else
          {
            PopFxDereferenceDevice(v27, 0LL, v13, v14);
            v18[12].Blink = 0LL;
          }
        }
        v19[-1].Parameters.Read.Length = a3;
        PopDiagTraceIrpStart(v17, v15);
        IofCallDriverSpecifyReturn(v19[-1].DeviceObject, v15, retaddr);
      }
      return 259LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
