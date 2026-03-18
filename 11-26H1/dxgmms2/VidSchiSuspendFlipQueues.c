/*
 * XREFs of VidSchiSuspendFlipQueues @ 0x140106C98
 * Callers:
 *     ?EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x14009DCA0 (-EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     VidSchFlushPresentReferencesAndDisableOverlays @ 0x140106C20 (VidSchFlushPresentReferencesAndDisableOverlays.c)
 * Callees:
 *     VidSchWaitForEvents @ 0x14002FB1C (VidSchWaitForEvents.c)
 *     VidSchiMarkFlipQueuesRunningStateOnPresentInfo @ 0x14003C19C (VidSchiMarkFlipQueuesRunningStateOnPresentInfo.c)
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x14003DB20 (VidSchiFlushPendingHWSubmittedFlips.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchSubmitGlobalCommand @ 0x140108A8C (VidSchSubmitGlobalCommand.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiSuspendFlipQueues(struct _VIDSCH_GLOBAL *a1, int a2)
{
  __int64 i; // rdi
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v11[14]; // [rsp+50h] [rbp-19h] BYREF
  bool v12; // [rsp+D0h] [rbp+67h] BYREF
  struct _KEVENT *p_Event; // [rsp+E0h] [rbp+77h] BYREF

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    result = *((unsigned int *)a1 + 12);
    if ( (unsigned int)i >= (unsigned int)result )
      break;
    if ( _bittest(&a2, i) )
    {
      v6 = *((_QWORD *)a1 + i + 431);
      if ( v6 )
      {
        v12 = 0;
        VidSchiMarkFlipQueuesRunningStateOnPresentInfo((__int64)a1, v6, 0, &v12);
        if ( v12 && *(int *)(*((_QWORD *)a1 + 2) + 3044LL) >= 3100 )
        {
          memset(&Event, 0, sizeof(Event));
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          memset(v11, 0, 0x50uLL);
          LODWORD(v11[5]) = 9;
          v11[3] = VIDMM_PHYSICAL_ADAPTER_PBMM::SetSegmentPowerState;
          LODWORD(v11[0]) = 0;
          v11[4] = &Event;
          v11[6] = a1;
          VidSchSubmitGlobalCommand(a1, v11);
          p_Event = &Event;
          VidSchWaitForEvents((__int64)a1, 1u, (PVOID *)&p_Event, 0LL, 0);
          v9 = *(unsigned int *)(v6 + 3252);
          if ( (_DWORD)v9 )
          {
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 281LL, 57344LL, a1, (unsigned int)i, v9);
            WdLogGlobalForLineNumber = 916;
            JUMPOUT(0x140106E16LL);
          }
        }
      }
    }
  }
  v7 = 0LL;
  if ( (_DWORD)result )
  {
    do
    {
      if ( _bittest(&a2, v7) )
      {
        v8 = *((_QWORD *)a1 + v7 + 431);
        if ( v8 )
          result = VidSchiFlushPendingHWSubmittedFlips(a1, v8, v7);
      }
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < *((_DWORD *)a1 + 12) );
  }
  return result;
}
