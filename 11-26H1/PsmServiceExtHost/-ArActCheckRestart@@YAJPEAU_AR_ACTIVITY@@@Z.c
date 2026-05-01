/*
 * XREFs of ?ArActCheckRestart@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x18006CC6C
 * Callers:
 *     ?ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x180014800 (-ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z.c)
 * Callees:
 *     ?ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180014C1C (-ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180014C6C (-ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerMarkAcquired @ 0x180046900 (CempLockTrackerMarkAcquired.c)
 *     CempLockTrackerMarkReleased @ 0x180046990 (CempLockTrackerMarkReleased.c)
 *     ?ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x180064A38 (-ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 */

__int64 __fastcall ArActCheckRestart(struct _AR_ACTIVITY *a1, __int64 a2)
{
  struct _AR_ACTIVITY_HOST **v2; // rsi
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rdx
  int started; // ebx

  v2 = (struct _AR_ACTIVITY_HOST **)((char *)a1 + 16);
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
  CempLockTrackerMarkAcquired(ArLockTrackerId, a2, 1u, 0);
  RtlAcquireSRWLockShared(v4 + 48);
  v5 = v4 + 48;
  v6 = *(_DWORD *)(v4 + 72) & 1;
  RtlReleaseSRWLockShared(v5);
  CempLockTrackerMarkReleased(ArLockTrackerId, v7, 1u);
  ArHostWaitForAndSetChangeInProgress(*v2);
  if ( *((_BYTE *)a1 + 32) )
    goto LABEL_2;
  if ( v6 || (*((_BYTE *)a1 + 28) & 1) == 0 )
  {
    started = -1073741823;
    goto LABEL_8;
  }
  started = ArActStartAsync(a1);
  if ( started >= 0 )
LABEL_2:
    started = 0;
LABEL_8:
  ArHostClearChangeInProgress(*v2);
  return (unsigned int)started;
}
