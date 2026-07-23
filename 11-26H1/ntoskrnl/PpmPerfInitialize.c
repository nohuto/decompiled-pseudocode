/*
 * XREFs of PpmPerfInitialize @ 0x140CD72F0
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x1407CBCB8 (PopInitializeTimer.c)
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
  qword_140FC0CA8 = (__int64)&Mm64BitPhysicalAddress + 2;
  *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2) = (PBOOLEAN)&Mm64BitPhysicalAddress + 2;
  HIDWORD(PopDirectedDripsDiagLock.WpsFeedback) = 50;
  dword_140F0B7C4 = 50;
  v1 = &unk_140F0B7C8;
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
  PpmMediaBufferingWork = 0LL;
  LODWORD(PopDirectedDripsDiagLock.AutoBoostThreadState) = 2;
  dword_140F0B800 = 2;
  WorkItem.Parameter = 0LL;
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmMediaBufferingWorker;
  PpmPerfLatencyBoostWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmPerfLatencySensitivityHintWorker;
  WorkItem.List.Flink = 0LL;
  PpmPerfLatencyBoostWorkItem.Parameter = 0LL;
  PpmPerfLatencyBoostWorkItem.List.Flink = 0LL;
  v2 = PpmPerfQosTransitionHysteresisOverride;
  v3 = PpmPerfQosTransitionHysteresisOverride;
  HIDWORD(PopDirectedDripsDiagLock.SchedulerSharedSwappablePage) = 100;
  dword_140F0B7FC = 100;
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
           (__int64)&PpmPerfTelemetryTimer,
           (__int64)PpmPerfTelemetryCallback,
           0LL,
           (__int64)PpmPerfTelemetryWorker,
           0LL);
}
