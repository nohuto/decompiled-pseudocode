/*
 * XREFs of HalpInitializeMce @ 0x140BEFEA4
 * Callers:
 *     HalpInitializeErrSrc @ 0x140BEFE50 (HalpInitializeErrSrc.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 *     HalpMcaExtendedLogInitialize @ 0x14057D488 (HalpMcaExtendedLogInitialize.c)
 *     HalpMceInitializeRecovery @ 0x140590C68 (HalpMceInitializeRecovery.c)
 *     HalpInitializeGhesRecovery @ 0x1405917E4 (HalpInitializeGhesRecovery.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     HalpHandlePreviousMcaErrors @ 0x140BEFB88 (HalpHandlePreviousMcaErrors.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x140BEFCC8 (HalpHandlePreviousMcaErrorsOnProcessor.c)
 *     HalpMcaSetFeatureFlags @ 0x140BF0844 (HalpMcaSetFeatureFlags.c)
 *     HalpMceInit @ 0x140C10328 (HalpMceInit.c)
 *     HalpMceInitProcessor @ 0x140C10478 (HalpMceInitProcessor.c)
 */

__int64 __fastcall HalpInitializeMce(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  ULONG v10; // edi
  ULONG ActiveProcessorCount; // ebp
  __int64 v12; // rsi
  unsigned int v13; // edx
  _GROUP_AFFINITY *v14; // rdx
  __int64 i; // rbx
  __int64 v16; // r9
  signed __int32 v18[8]; // [rsp+0h] [rbp-58h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+30h] [rbp-28h] BYREF

  v20 = 0LL;
  Affinity = 0LL;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 1 )
    {
      HalpMceErrorSourceId = a2[7];
      HalpMceErrorSource = a2;
      HalpMceInit(a2);
      if ( HalpMcaExtendedLoggingSupported )
        HalpMcaExtendedLogInitialize();
      if ( !PshedIsSystemWheaEnabled() )
        HalpHandlePreviousMcaErrors(HalpMcaBanksValidOnBoot != 0);
      _InterlockedOr(v18, 0);
      if ( (unsigned __int8)PshedInitAvailable(v5, v4, v6) )
      {
        PshedInitGlobal(v8, v7, v9);
        v10 = 0;
        ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
        if ( ActiveProcessorCount )
        {
          v12 = 0LL;
          do
          {
            *(_DWORD *)Affinity.Reserved = 0;
            Affinity.Reserved[2] = 0;
            v13 = *(volatile LONG *)((char *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + v12);
            *(_DWORD *)&Affinity.Group = (unsigned __int16)(v13 >> 6);
            Affinity.Mask = 1LL << v13;
            if ( v10 )
              v14 = 0LL;
            else
              v14 = (_GROUP_AFFINITY *)&v20;
            KeSetSystemGroupAffinityThread(&Affinity, v14);
            for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; i; i = *(_QWORD *)(i + 184) )
              PshedInitProc(*(unsigned int *)(i + 172));
            ++v10;
            v12 += 4LL;
          }
          while ( v10 < ActiveProcessorCount );
        }
      }
      HalpMcaWheaReady = 1;
    }
    else
    {
      LODWORD(v20) = KeGetPcr()->Prcb.Number;
      HalpMceInitProcessor(a2);
      HalpHandlePreviousMcaErrorsOnProcessor(0LL, 0LL, v20, v16);
    }
  }
  else
  {
    HalpMceErrorSourceId = a2[7];
    HalpMceErrorSource = a2;
    HalpMcaSetFeatureFlags(a1, a2, a3);
    HalpInitializeGhesRecovery();
    HalpMceInitializeRecovery();
    HalpMceInit(a2);
  }
  return 0LL;
}
