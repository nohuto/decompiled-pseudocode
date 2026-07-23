/*
 * XREFs of PfSnIsHostingApplication @ 0x1409D33F0
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1409D1320 (PfSnBeginAppLaunch.c)
 *     PfSnCalculateScenarioNameAndHash @ 0x1409D30B0 (PfSnCalculateScenarioNameAndHash.c)
 * Callees:
 *     PfLockSharedAcquire @ 0x1404ABEA0 (PfLockSharedAcquire.c)
 *     PfLockSharedRelease @ 0x1404AE4B4 (PfLockSharedRelease.c)
 *     wcsstr @ 0x14053A900 (wcsstr.c)
 */

char __fastcall PfSnIsHostingApplication(wchar_t *SubStr, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rdi
  __int64 v6; // rsi
  char v7; // bl
  wchar_t *v8; // rdi
  struct _LIST_ENTRY **i; // rcx
  wchar_t *v10; // rax
  wchar_t *v12; // rdx

  v4 = -1LL;
  v6 = -1LL;
  v7 = 0;
  do
    ++v6;
  while ( SubStr[v6] );
  PfLockSharedAcquire((volatile signed __int64 *)&stru_140E66D40.ForegroundLossTime, a2, a3, a4);
  do
    ++v4;
  while ( *(_WORD *)&stru_140E66D40.SavedApcStateFill[2 * v4 + 8] );
  v8 = (wchar_t *)&stru_140E66D40.SavedApcStateFill[2 * v4 + 8];
  for ( i = &stru_140E66D40.SavedApcState.ApcListHead[0].Blink; ; i = (struct _LIST_ENTRY **)(v10 + 1) )
  {
    v10 = wcsstr((const wchar_t *)i, SubStr);
    if ( !v10 || v10 < (wchar_t *)&stru_140E66D40.SavedApcStateFill[8] || v10 >= v8 )
      break;
    if ( v10 == (wchar_t *)&stru_140E66D40.SavedApcStateFill[8] || *(v10 - 1) == 44 )
    {
      v12 = &v10[(unsigned int)v6];
      if ( v12 == v8 || *v12 == 44 )
      {
        v7 = 1;
        break;
      }
    }
  }
  PfLockSharedRelease((struct _KTHREAD *)&stru_140E66D40.ForegroundLossTime);
  return v7;
}
