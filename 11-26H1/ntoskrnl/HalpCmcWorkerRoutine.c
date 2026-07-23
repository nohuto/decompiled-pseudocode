/*
 * XREFs of HalpCmcWorkerRoutine @ 0x140AD17A0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     HalpCmcPollProcessor @ 0x14044B678 (HalpCmcPollProcessor.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     HalpCmciInit @ 0x140C0F0DC (HalpCmciInit.c)
 */

void __fastcall HalpCmcWorkerRoutine(__int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  ULONG ActiveProcessorCount; // r13d
  ULONG v8; // r14d
  __int64 v9; // r12
  unsigned int v10; // edx
  _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 v12; // r15
  unsigned int v13; // eax
  unsigned int v14; // edx
  bool v15; // cf
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-60h] BYREF
  __int128 Src; // [rsp+30h] [rbp-50h] BYREF
  __int128 v18; // [rsp+40h] [rbp-40h]
  __int128 v19; // [rsp+50h] [rbp-30h]
  _GROUP_AFFINITY PreviousAffinity; // [rsp+60h] [rbp-20h] BYREF

  ++*(_DWORD *)(a1 + 184);
  Affinity = 0LL;
  v2 = 0;
  PreviousAffinity = 0LL;
  Src = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v8 = 0;
  if ( ActiveProcessorCount )
  {
    v9 = 0LL;
    do
    {
      *(_DWORD *)Affinity.Reserved = 0;
      Affinity.Reserved[2] = 0;
      v10 = *(volatile LONG *)((char *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + v9);
      *(_DWORD *)&Affinity.Group = (unsigned __int16)(v10 >> 6);
      Affinity.Mask = 1LL << v10;
      if ( v8 )
        p_PreviousAffinity = 0LL;
      else
        p_PreviousAffinity = &PreviousAffinity;
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
      v12 = *(_QWORD *)&KeGetPcr()->HalReserved[6];
      while ( v12 )
      {
        LOBYTE(v3) = HalpCmciEnabled;
        HalpCmcPollProcessor(HalpCmcErrorPacket, v3, *(_QWORD *)(v12 + 172), v12);
        v13 = *(_DWORD *)(v12 + 164);
        v12 = *(_QWORD *)(v12 + 184);
        if ( v13 <= v2 )
          v13 = v2;
        v2 = v13;
      }
      ++v8;
      v9 += 4LL;
    }
    while ( v8 < ActiveProcessorCount );
  }
  if ( HalpCmciRevertToPolledMode
    && *(_BYTE *)(a1 + 172)
    && *(_DWORD *)(a1 + 184) > 1u
    && *(_DWORD *)(a1 + 188) < *(_DWORD *)(a1 + 180)
    && v2 < *(_DWORD *)(a1 + 176) )
  {
    HalpCmciRevertToPolledMode = 0;
    *((_BYTE *)HalpCmcErrorSource + 48) = 5;
    HalpCmciInit(
      v4,
      v3,
      v5,
      v6,
      Affinity.Mask,
      *(_QWORD *)&Affinity.Group,
      Src,
      *((_QWORD *)&Src + 1),
      v18,
      *((_QWORD *)&v18 + 1));
    if ( HalpMcaPollForCmc )
    {
      *((_BYTE *)HalpCmcErrorSource + 48) = 0;
    }
    else
    {
      ++*(_DWORD *)(a1 + 188);
      KeCancelTimer((PKTIMER)(a1 + 8));
      v14 = *(_DWORD *)(a1 + 180);
      v15 = *(_DWORD *)(a1 + 188) < v14;
      LODWORD(v19) = *(_DWORD *)(a1 + 188);
      HalpCmcPollingStarted = 0;
      *(_DWORD *)(a1 + 184) = 0;
      DWORD1(v18) = -v15 - 2147483620;
      HIDWORD(v19) = *(_DWORD *)(a1 + 176);
      *(_QWORD *)&Src = 0x1674C6857LL;
      *((_QWORD *)&Src + 1) = 48LL;
      LODWORD(v18) = 541868360;
      *((_QWORD *)&v18 + 1) = 0x1000000002LL;
      *(_QWORD *)((char *)&v19 + 4) = __PAIR64__(v2, v14);
      WheaLogInternalEvent(&Src);
    }
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  _InterlockedExchange((volatile __int32 *)(a1 + 168), 0);
}
