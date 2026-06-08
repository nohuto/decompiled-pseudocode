/*
 * XREFs of InitEnergyCounters @ 0x14002A270
 * Callers:
 *     <none>
 * Callees:
 *     PctGetIntelEsuType @ 0x14000523C (PctGetIntelEsuType.c)
 *     memset @ 0x140010740 (memset.c)
 *     InitEnergyCountersMsrEx @ 0x14002A440 (InitEnergyCountersMsrEx.c)
 *     ProbeFixedFunctionCounters @ 0x14002A500 (ProbeFixedFunctionCounters.c)
 *     ProbeMsr @ 0x14002A5FC (ProbeMsr.c)
 *     RetrieveModelParameters @ 0x14002A6A4 (RetrieveModelParameters.c)
 */

__int64 InitEnergyCounters()
{
  unsigned int Number; // edi
  unsigned int v1; // esi
  __int64 v2; // rdx
  int IntelEsuType; // ebx
  unsigned __int64 *p_Lock; // r8
  unsigned __int64 v5; // rax
  double v6; // xmm1_8
  __int64 SystemArgument1_low; // r9
  unsigned __int64 v8; // rax

  Number = KeGetPcr()->Prcb.Number;
  v1 = -1073741637;
  IntelEsuType = PctGetIntelEsuType();
  if ( IntelEsuType == 2 )
    return v1;
  if ( Number )
    goto LABEL_17;
  memset(&WPP_MAIN_CB.DeviceQueue.Size + 1, 0, 0xDCuLL);
  *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type = IntelEsuType & 1;
  RetrieveModelParameters(&WPP_MAIN_CB.Dpc.DeferredContext);
  if ( ((__int64)WPP_MAIN_CB.Dpc.DeferredContext & 1) != 0 && !(unsigned __int8)ProbeFixedFunctionCounters() )
  {
    memset(&WPP_MAIN_CB.Dpc.DeferredContext, 0, 0x98uLL);
    LODWORD(WPP_MAIN_CB.Dpc.DeferredContext) = 0;
    WPP_MAIN_CB.Dpc.SystemArgument1 = (void *)0x63900000001LL;
  }
  if ( (unsigned __int8)ProbeMsr(&WPP_MAIN_CB.Dpc.DeferredContext) )
  {
    v5 = __readmsr(0x606u);
    v2 = (unsigned __int64)HIDWORD(v5) << 32;
    p_Lock = (unsigned __int64 *)((unsigned int)v5 >> 8);
    *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type = *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type & 0xFFFFFFC1 | ((unsigned int)v5 >> 7) & 0x3E;
    LOBYTE(word_140019AA8) = BYTE1(v5) & 0x1F;
    if ( IntelEsuType )
    {
      HIBYTE(word_140019AA8) = 1;
      if ( IntelEsuType == 1 )
      {
        p_Lock = (unsigned __int64 *)(BYTE1(v5) & 0x1F);
        v2 = 1LL << (char)p_Lock;
        if ( 1LL << (char)p_Lock < 0 )
        {
          v2 = (1LL << (char)p_Lock) & 1;
          v6 = (double)(int)(v2 | ((unsigned __int64)(1LL << (char)p_Lock) >> 1))
             + (double)(int)(v2 | ((unsigned __int64)(1LL << (char)p_Lock) >> 1));
        }
        else
        {
          v6 = (double)(int)v2;
        }
        *(double *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink = 1.0 / v6;
      }
    }
    else
    {
      HIBYTE(word_140019AA8) = 2;
    }
    if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
    {
      p_Lock = &WPP_MAIN_CB.DeviceQueue.Lock;
      SystemArgument1_low = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
      do
      {
        v8 = __readmsr(*((_DWORD *)p_Lock + 15));
        v2 = (unsigned __int64)HIDWORD(v8) << 32;
        *(_DWORD *)p_Lock = v8;
        p_Lock = (unsigned __int64 *)((char *)p_Lock + 4);
        --SystemArgument1_low;
      }
      while ( SystemArgument1_low );
    }
LABEL_17:
    if ( ((__int64)WPP_MAIN_CB.Dpc.DeferredContext & 1) != 0 )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DeferredContext & 1) == 1 )
        InitEnergyCountersMsrEx(Number, v2, p_Lock);
    }
    else if ( !Number )
    {
      *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type &= ~0x40u;
      qword_140019998[0] = (__int64)ComputeProcessorEnergyMsr;
      qword_1400199A0[0] = 0LL;
    }
    return 0;
  }
  return v1;
}
