/*
 * XREFs of KiUpdateNodeAffinitizedFlag @ 0x14022BCC0
 * Callers:
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 *     KiComputeThreadAffinity @ 0x14022B520 (KiComputeThreadAffinity.c)
 *     KiSetUserAffinityThread @ 0x14022C114 (KiSetUserAffinityThread.c)
 *     KiSetSystemAffinityThread @ 0x14037E3D0 (KiSetSystemAffinityThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUpdateNodeAffinitizedFlag(__int64 a1)
{
  unsigned __int16 *v1; // r11
  unsigned __int16 v2; // r9
  _KWAIT_STATUS_REGISTER *p_WaitRegister; // rbx
  __int64 result; // rax
  unsigned __int16 i; // r8
  unsigned __int16 j; // r8
  unsigned __int64 k; // r9
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx

  v1 = *(unsigned __int16 **)(a1 + 576);
  v2 = *v1;
  if ( *v1 >= *(_WORD *)&stru_140FC11F0.WaitRegister.Flags )
  {
    p_WaitRegister = *(_KWAIT_STATUS_REGISTER **)(a1 + 576);
    v2 = *(_WORD *)&stru_140FC11F0.WaitRegister.Flags;
  }
  else
  {
    p_WaitRegister = &stru_140FC11F0.WaitRegister;
  }
  result = 0LL;
  for ( i = 0; ; ++i )
  {
    if ( i >= v2 )
    {
      while ( i < *(_WORD *)&p_WaitRegister->Flags )
      {
        if ( *(_QWORD *)&p_WaitRegister[8 * i + 8].Flags )
          goto LABEL_13;
        ++i;
      }
      goto LABEL_8;
    }
    if ( *(_QWORD *)&v1[4 * i + 4] != *(_QWORD *)((char *)&stru_140FC11F0.116 + 8 * i + 4) )
      break;
  }
LABEL_13:
  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    for ( j = 0; j < *v1; ++j )
    {
      for ( k = *(_QWORD *)&v1[4 * j + 4]; k; k &= ~v9 )
      {
        _BitScanReverse64(&v8, k);
        v9 = *(_QWORD *)(*(_QWORD *)(KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * j].Flink
                                                      + (int)v8)]
                                   + 192)
                       + 128LL);
        if ( (k & v9) != v9 )
          goto LABEL_9;
      }
    }
LABEL_8:
    result = 1LL;
  }
LABEL_9:
  if ( (_DWORD)result == ((*(unsigned __int8 *)(a1 + 2) >> 3) & 1) )
    _InterlockedXor((volatile signed __int32 *)a1, 0x80000u);
  return result;
}
