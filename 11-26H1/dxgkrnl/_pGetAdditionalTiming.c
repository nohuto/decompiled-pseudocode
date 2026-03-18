/*
 * XREFs of _pGetAdditionalTiming @ 0x14038D1C0
 * Callers:
 *     ?_GetAdditionalTiming@MonitorModes@DxgMonitor@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x14038CFB8 (-_GetAdditionalTiming@MonitorModes@DxgMonitor@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@.c)
 * Callees:
 *     _pLoadAdditinalMode @ 0x14038D4B8 (_pLoadAdditinalMode.c)
 *     _pGetAdditionalModeEntry @ 0x1403D0BE8 (_pGetAdditionalModeEntry.c)
 */

__int64 __fastcall pGetAdditionalTiming(int a1, char a2, _DWORD *a3, _QWORD *a4)
{
  int v4; // esi
  __int64 v5; // rdi
  _DWORD *i; // rbx
  int AdditinalMode; // eax
  __int64 v11; // rdx
  __int64 result; // rax

  v4 = 0;
  v5 = a1;
  if ( a1 == -2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 877;
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 878;
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 879;
  }
  if ( (_DWORD)v5 == 15 )
  {
    *a3 = 0;
    result = 0LL;
    *a4 = 0LL;
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&qword_140168770, 0LL);
    if ( (_DWORD)v5 == -2 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 281;
    }
    for ( i = qword_140169578; i; i = *(_DWORD **)i )
    {
      if ( (_DWORD)v5 == i[2] && a2 == *((_BYTE *)i + 12) )
        goto LABEL_18;
    }
    ExReleasePushLockEx(&qword_140168770, 0LL);
    ExAcquirePushLockExclusiveEx(&qword_140168770, 0LL);
    if ( (_DWORD)v5 == -2 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 281;
    }
    for ( i = qword_140169578; i; i = *(_DWORD **)i )
    {
      if ( (_DWORD)v5 == i[2] && a2 == *((_BYTE *)i + 12) )
        goto LABEL_18;
    }
    AdditinalMode = pLoadAdditinalMode((unsigned int)v5);
    v4 = AdditinalMode;
    if ( AdditinalMode == -1073741772 || AdditinalMode == -1073741275 )
    {
      WdLogSingleEntry1(7LL);
      WdLogGlobalForLineNumber = 951;
    }
    else if ( AdditinalMode >= 0 )
    {
      LOBYTE(v11) = a2;
      i = (_DWORD *)pGetAdditionalModeEntry((unsigned int)v5, v11);
      if ( !i )
      {
        WdLogSingleEntry1(7LL);
        WdLogGlobalForLineNumber = 963;
        v4 = -1073741275;
      }
    }
    else
    {
      WdLogSingleEntry2(3LL, v5, AdditinalMode);
      WdLogGlobalForLineNumber = 956;
    }
LABEL_18:
    ExReleasePushLockEx(&qword_140168770, 0LL);
    KeLeaveCriticalRegion();
    if ( v4 >= 0 )
    {
      if ( !i )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 987;
      }
      *a3 = i[4];
      *a4 = i + 5;
    }
    else if ( i )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 994;
    }
    return (unsigned int)v4;
  }
  return result;
}
