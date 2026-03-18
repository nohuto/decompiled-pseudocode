/*
 * XREFs of PopInitializeHighPerfPowerRequest @ 0x140CCFC98
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     PoCaptureReasonContext @ 0x140436EC8 (PoCaptureReasonContext.c)
 *     PopPowerRequestCreateCommon @ 0x140436FDC (PopPowerRequestCreateCommon.c)
 *     PoDestroyReasonContext @ 0x14050A3C0 (PoDestroyReasonContext.c)
 */

__int64 PopInitializeHighPerfPowerRequest()
{
  int *v0; // rdx
  __int64 v1; // r8
  int v2; // ecx
  int Common; // ebx
  _DWORD Src[2]; // [rsp+30h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF
  __int128 v7; // [rsp+48h] [rbp-20h]
  PVOID P; // [rsp+70h] [rbp+8h] BYREF

  *(_DWORD *)&stru_140F10828.WaitBlockFill11[152] = 275;
  *(_QWORD *)&stru_140F10828.NextProcessor = 8LL;
  stru_140F10828.Spare18 = (unsigned __int64)PpmHighPerfRequestExpiration;
  v0 = PpmHighPerfDuration;
  P = 0LL;
  stru_140F10828.UserAffinity = (_KAFFINITY_EX *)&stru_140F10828.Process;
  v1 = 4LL;
  stru_140F10828.Process = (_KPROCESS *)&stru_140F10828.Process;
  stru_140F10828.WaitBlock[2].Thread = 0LL;
  stru_140F10828.LastXStateSaveDebugInfo = 0LL;
  stru_140F10828.QueueListEntry.Blink = 0LL;
  stru_140F10828.WaitBlock[3].Thread = 0LL;
  *(_QWORD *)&stru_140F10828.UserAffinityPrimaryGroup = 0LL;
  HIDWORD(stru_140F10828.NpxState) = 0;
  LOWORD(stru_140F10828.NpxState) = 0;
  BYTE3(stru_140F10828.NpxState) = 0;
  do
  {
    v2 = 300000;
    if ( (unsigned int)*v0 < 0x493E0 )
      v2 = *v0;
    *v0++ = v2;
    --v1;
  }
  while ( v1 );
  Src[0] = 0;
  Src[1] = 1;
  DestinationString = 0LL;
  v7 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Power Manager");
  Common = PoCaptureReasonContext(Src, 0LL, 0LL, 1, 0LL, &P);
  if ( Common >= 0 )
  {
    Common = PopPowerRequestCreateCommon(P, 0, (unsigned int **)&stru_140F10828.WaitBlock[2].WaitListEntry.Blink);
    if ( Common < 0 )
      PoDestroyReasonContext(P);
  }
  return (unsigned int)Common;
}
