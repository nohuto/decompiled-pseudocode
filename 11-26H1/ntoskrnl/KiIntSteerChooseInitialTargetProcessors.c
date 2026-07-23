/*
 * XREFs of KiIntSteerChooseInitialTargetProcessors @ 0x14043217C
 * Callers:
 *     KiIntSteerConnect @ 0x140431CC8 (KiIntSteerConnect.c)
 * Callees:
 *     KiIntPartGetLowestClassProcessorInMask @ 0x140256D68 (KiIntPartGetLowestClassProcessorInMask.c)
 *     KeIntSteerGetSteeringMode @ 0x1404322B0 (KeIntSteerGetSteeringMode.c)
 *     KiIntRedirectConnnect @ 0x140432334 (KiIntRedirectConnnect.c)
 */

__int64 __fastcall KiIntSteerChooseInitialTargetProcessors(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _DWORD *a7)
{
  __int64 v7; // rdi
  __int64 v8; // r14
  int v11; // esi
  int v12; // r9d
  int SteeringMode; // ebp
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned int v16; // ecx
  __int64 v18; // r8
  __int64 v19; // [rsp+20h] [rbp-28h]

  v7 = a3 + 24;
  v19 = a3 + 24;
  v8 = a3;
  v11 = 0;
  *(_OWORD *)a6 = 0LL;
  v12 = *(_DWORD *)(a3 + 16);
  LOBYTE(a3) = a5;
  SteeringMode = KeIntSteerGetSteeringMode(a1, a2, a3, v12, v19);
  if ( SteeringMode != 2 || (v11 = KiIntRedirectConnnect(a1, a2, v8), v11 >= 0) )
  {
    v14 = *(unsigned __int16 *)(v7 + 8);
    *(_WORD *)(a6 + 8) = v14;
    if ( SteeringMode )
    {
      v15 = *(_QWORD *)v7 & (__int64)*(&KsepShimDbLock.KernelShadowStackInitial + v14);
      *(_QWORD *)a6 = v15;
      if ( v15 )
        v7 = a6;
      v16 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock
            + (unsigned int)KiIntPartGetLowestClassProcessorInMask(v7));
      *(_DWORD *)(a6 + 10) = 0;
      *(_WORD *)(a6 + 14) = 0;
      *(_QWORD *)a6 = 1LL << v16;
      *(_WORD *)(a6 + 8) = v16 >> 6;
      goto LABEL_6;
    }
    v18 = *(_QWORD *)v7;
    *(_QWORD *)a6 = *(_QWORD *)v7;
    if ( KiIntSteerAffinitizedInterrupts.Count <= (unsigned __int16)v14 )
    {
      if ( KiIntSteerAffinitizedInterrupts.Size <= (unsigned __int16)v14 )
        goto LABEL_6;
      KiIntSteerAffinitizedInterrupts.Count = v14 + 1;
    }
    KiIntSteerAffinitizedInterrupts.Bitmap[v14] |= v18;
LABEL_6:
    *a7 = SteeringMode;
  }
  return (unsigned int)v11;
}
