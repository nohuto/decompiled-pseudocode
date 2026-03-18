/*
 * XREFs of PpmPerfInitialize @ 0x140CD1148
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x1407C8C18 (PopInitializeTimer.c)
 */

__int64 PpmPerfInitialize()
{
  __int64 v0; // rcx
  _BYTE *v1; // rax
  int v2; // ecx
  unsigned int v3; // eax
  int v4; // eax
  unsigned int v5; // ecx
  __int64 v6; // rdx
  __int64 *v7; // r10
  unsigned int v8; // ebx
  unsigned int v9; // r9d
  __int64 v10; // r8
  __int64 v11; // r11

  v0 = 3LL;
  qword_140FBFCA8 = (__int64)&Mm64BitPhysicalAddress + 2;
  *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2) = (PBOOLEAN)&Mm64BitPhysicalAddress + 2;
  dword_140F0B13C = 50;
  dword_140F0B404 = 50;
  v1 = &unk_140F0B408;
  do
  {
    *(v1 - 712) = 1;
    *v1 = 1;
    *(v1 - 688) = 70;
    v1[24] = 70;
    *(v1 - 691) = 30;
    v1[21] = 30;
    *(v1 - 709) = 100;
    v1[3] = 100;
    *(v1 - 706) = 100;
    v1[6] = 100;
    *(v1 - 616) = 100;
    v1[96] = 100;
    *(v1 - 509) = 100;
    v1[203] = 100;
    ++v1;
    --v0;
  }
  while ( v0 );
  *(_QWORD *)&stru_140F11D08.ThreadTimerDelay = 0LL;
  dword_140F0B178 = 2;
  dword_140F0B440 = 2;
  stru_140F11D08.KernelWaitTime = 0LL;
  *(_QWORD *)&stru_140F11D08.ReservedPreviousReadyTimeValue = PpmMediaBufferingWorker;
  stru_140F11D08.ExtendedFeatureDisableMask = (unsigned __int64)PpmPerfLatencySensitivityHintWorker;
  stru_140F11D08.SchedulerAssist = 0LL;
  stru_140F11D08.WpsFeedback = 0LL;
  stru_140F11D08.KernelShadowStackBase = 0LL;
  v2 = PpmPerfQosTransitionHysteresisOverride;
  v3 = PpmPerfQosTransitionHysteresisOverride;
  dword_140F0B174 = 100;
  dword_140F0B43C = 100;
  if ( PpmPerfQosTransitionHysteresisOverride == -1 )
    v3 = PpmPerfQosTransitionHysteresis;
  if ( v3 <= 0x1F4 )
  {
    v2 = 500;
  }
  else if ( PpmPerfQosTransitionHysteresisOverride == -1 )
  {
    v2 = PpmPerfQosTransitionHysteresis;
  }
  v4 = 5 * v2;
  v5 = 0;
  PpmPerfQosIdleExpirationTimeout = (unsigned int)(2 * v4);
  v6 = 0LL;
  v7 = PpmQosClassesOrderedIndexMap;
  do
  {
    v8 = *(_DWORD *)v7;
    v9 = 0;
    v10 = 0LL;
    v11 = v6;
    do
    {
      if ( v8 > *((_DWORD *)PpmQosClassesOrderedIndexMap + v10) )
        PpmPerfQosHysteresis[v11] = 1;
      if ( v5 == 3 )
        PpmPerfQosHysteresis[v6 + v10] = 1;
      if ( v9 == 3 )
      {
        if ( v5 == 4 )
          goto LABEL_23;
        if ( v5 )
          PpmPerfQosHysteresis[v6 + v10] = 1;
      }
      else
      {
        if ( v9 == 4 )
          PpmPerfQosHysteresis[v6 + v10] = 1;
        if ( v5 == 4 )
LABEL_23:
          PpmPerfQosHysteresis[v6 + v10] = 0;
      }
      ++v9;
      ++v10;
      ++v11;
    }
    while ( v9 < 7 );
    ++v5;
    v7 = (__int64 *)((char *)v7 + 4);
    v6 += 7LL;
  }
  while ( v5 < 7 );
  return PopInitializeTimer(
           (__int64)&stru_140F11D08.1144,
           (__int64)PpmPerfTelemetryCallback,
           0LL,
           (__int64)PpmPerfTelemetryWorker,
           0LL);
}
