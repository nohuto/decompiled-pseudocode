/*
 * XREFs of ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1400A48E0
 * Callers:
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x14018F098 (-ndisNblTrackerInitialize@@YAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_DDD @ 0x140064A90 (WPP_RECORDER_SF_DDD.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x14013C2A4 (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 *     ?ndisDriverVerifierNdisFlagEnabled@@YA_NXZ @ 0x140144E40 (-ndisDriverVerifierNdisFlagEnabled@@YA_NXZ.c)
 */

void __fastcall ndisNblTrackerReadConfiguration(
        __int64 a1,
        __int64 a2,
        unsigned __int8 (*a3)(void *, const struct KnobDescriptor *, unsigned __int64 *))
{
  struct _GUID *v3; // [rsp+20h] [rbp-28h]

  ndisRegisterKnobs(&stru_1400F6C40, 5uLL, a3, 0LL, v3);
  if ( *(_DWORD *)ndisNblTrackerNblTimeoutMilliseconds )
  {
    if ( *(_DWORD *)ndisNblTrackerNblTimeoutMilliseconds < 0x64u )
      *(_DWORD *)ndisNblTrackerNblTimeoutMilliseconds = 100;
  }
  else
  {
    *(_DWORD *)ndisNblTrackerNblTimeoutMilliseconds = 60000;
  }
  if ( MmIsDriverVerifying((struct _DRIVER_OBJECT *)ndisDriverObject) )
  {
    if ( *(int *)ndisNblTrackerMode < 1 )
      *(_DWORD *)ndisNblTrackerMode = 1;
    if ( ndisDriverVerifierNdisFlagEnabled() && *(int *)ndisNblTrackerMode < 3 )
      *(_DWORD *)ndisNblTrackerMode = 3;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
      ndisNblTrackerMode[0],
      ndisNblTrackerStuckNblDisposition[0],
      *(_DWORD *)ndisNblTrackerNblTimeoutMilliseconds);
}
