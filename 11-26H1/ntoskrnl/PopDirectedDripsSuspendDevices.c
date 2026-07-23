/*
 * XREFs of PopDirectedDripsSuspendDevices @ 0x140AC6E74
 * Callers:
 *     PopDirectedDripsWorkerRoutine @ 0x1407CF670 (PopDirectedDripsWorkerRoutine.c)
 *     PopDirectedDripsRefreshDisengageState @ 0x140AC6B88 (PopDirectedDripsRefreshDisengageState.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140AC6CD8 (PopDirectedDripsHandleResiliencyNotification.c)
 * Callees:
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x1404CFC70 (PopDirectedDripsDiagTraceNotifyDevices.c)
 *     PopDirectedDripsReleaseTransitionLock @ 0x140AC70C8 (PopDirectedDripsReleaseTransitionLock.c)
 *     PopDirectedDripsAcquireTransitionLock @ 0x140AC70F8 (PopDirectedDripsAcquireTransitionLock.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x140AC7158 (PopDirectedDripsInitializeBroadcast.c)
 *     PopDirectedDripsDestroyBroadcast @ 0x140B35B1C (PopDirectedDripsDestroyBroadcast.c)
 *     PoBroadcastSystemState @ 0x140C0BF20 (PoBroadcastSystemState.c)
 */

__int64 __fastcall PopDirectedDripsSuspendDevices(signed __int32 *a1)
{
  __int64 v2; // rbp
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  unsigned int v5; // edi
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  struct _KLOCK_ENTRIES *v8; // r9
  int v10; // esi
  int v11; // eax
  int v12; // eax

  v2 = MEMORY[0xFFFFF78000000008];
  _m_prefetchw(a1);
  v3 = *a1;
  do
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange(a1, v3, v3);
  }
  while ( v4 != v3 );
  if ( a1[37] || (v3 & 0x3000) == 0 || (v3 & 0x10) != 0 )
  {
    v5 = -1073741823;
  }
  else
  {
    v10 = v3 & 0x800;
    if ( (v3 & 0x800) == 0 || (v3 & 8) != 0 )
    {
      PopDirectedDripsAcquireTransitionLock(a1);
      a1[21] = 0;
      a1[15] = 1;
      a1[16] = 5;
      a1[17] = 5;
      a1[20] = a1[14];
      a1[18] = 1;
      a1[19] = 2;
      v11 = PopDirectedDripsInitializeBroadcast(a1);
      v5 = v11;
      if ( v11 >= 0 )
      {
        _InterlockedOr(a1, 0x80u);
        if ( v10 )
        {
          *((_BYTE *)a1 + 86) = 3;
          PoBroadcastSystemState(a1 + 15);
        }
        *((_BYTE *)a1 + 588) = 0;
        *((_BYTE *)a1 + 86) = 2;
        v12 = PoBroadcastSystemState(a1 + 15);
        a1[35] = v12;
        v5 = v12;
        if ( v12 >= 0 )
        {
          _InterlockedOr(a1, 0x10u);
          _InterlockedAnd(a1, 0xFFFFFFDF);
          ++a1[36];
          v5 = 0;
          goto LABEL_10;
        }
      }
      else
      {
        a1[35] = v11;
      }
    }
    else
    {
      v5 = -1073741536;
    }
  }
  _m_prefetchw(a1);
  v6 = *a1;
  do
  {
    v7 = v6;
    v6 = _InterlockedCompareExchange(a1, v6, v6);
  }
  while ( v7 != v6 );
  if ( (v6 & 0x80u) != 0 )
  {
    PopDirectedDripsDestroyBroadcast();
    _InterlockedAnd(a1, 0xFFFFFF7F);
  }
  PopDirectedDripsReleaseTransitionLock(a1);
LABEL_10:
  PopDirectedDripsDiagTraceNotifyDevices(1u, v5, (MEMORY[0xFFFFF78000000008] - v2) / 0x989680uLL, v8);
  return v5;
}
