/*
 * XREFs of KiIntSteerUpdateDeviceInterruptMask @ 0x140432D70
 * Callers:
 *     KiIntSteerConnect @ 0x140431CC8 (KiIntSteerConnect.c)
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 */

void __fastcall KiIntSteerUpdateDeviceInterruptMask(__int64 a1, int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // rdi
  unsigned int v5; // ecx
  unsigned __int64 v6; // rdx
  __int64 Prcb; // rax

  LOWORD(v2) = *(_WORD *)(a1 + 8);
  v4 = *(_QWORD *)a1;
LABEL_2:
  v5 = (unsigned __int16)v2 + 1;
  while ( 1 )
  {
    if ( v4 )
    {
      _BitScanForward64(&v6, v4);
      v4 &= ~(1LL << v6);
      Prcb = KeGetPrcb(*((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16
                                                                                                 * (unsigned __int16)v2].Flink
                       + (unsigned int)(unsigned __int8)v6));
      if ( a2 )
      {
        if ( a2 == 1 && (*(_DWORD *)(Prcb + 11672))-- == 1 )
          _interlockedbittestandset64(
            (volatile signed __int32 *)(*(_QWORD *)(Prcb + 192) + 112LL),
            *(unsigned __int8 *)(Prcb + 209));
      }
      else if ( ++*(_DWORD *)(Prcb + 11672) == 1 )
      {
        _interlockedbittestandreset64(
          (volatile signed __int32 *)(*(_QWORD *)(Prcb + 192) + 112LL),
          *(unsigned __int8 *)(Prcb + 209));
      }
      goto LABEL_2;
    }
    v2 = (unsigned __int16)(v2 + 1);
    if ( (unsigned int)v2 >= v5 )
      break;
    v4 = *(_QWORD *)(8 * v2 + 8);
  }
}
