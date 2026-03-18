/*
 * XREFs of ?RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z @ 0x1401A4650
 * Callers:
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1401A1378 (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x14032E9B0 (-GetNextConfigIndex@@YAHH@Z.c)
 *     ?GetPreviousConfigIndex@@YAHH@Z @ 0x1403A0BA4 (-GetPreviousConfigIndex@@YAHH@Z.c)
 */

void __fastcall RemovePostCompositionConfig(struct _POST_COMPOSITION_CONFIG_QUEUE *a1, int a2)
{
  int PreviousConfigIndex; // esi
  __int64 v3; // rdi
  __int64 v5; // rcx
  int v6; // eax

  PreviousConfigIndex = -1;
  v3 = a2;
  if ( *(_DWORD *)a1 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9410;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pQueue->HeadIndex != CONFIG_INDEX_INVALID",
      9410LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)a1 + 1) == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9411;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pQueue->TailIndex != CONFIG_INDEX_INVALID",
      9411LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = 9 * v3;
  *(_OWORD *)((char *)a1 + 4 * v5 + 8) = 0LL;
  *(_OWORD *)((char *)a1 + 4 * v5 + 24) = 0LL;
  *((_DWORD *)a1 + v5 + 10) = 0;
  v6 = *((_DWORD *)a1 + 1);
  if ( *(_DWORD *)a1 == (_DWORD)v3 )
  {
    if ( v6 == (_DWORD)v3 )
      *((_DWORD *)a1 + 1) = -1;
    else
      PreviousConfigIndex = GetPreviousConfigIndex(v3);
    *(_DWORD *)a1 = PreviousConfigIndex;
  }
  else if ( v6 == (_DWORD)v3 )
  {
    *((_DWORD *)a1 + 1) = GetNextConfigIndex(v3);
  }
}
