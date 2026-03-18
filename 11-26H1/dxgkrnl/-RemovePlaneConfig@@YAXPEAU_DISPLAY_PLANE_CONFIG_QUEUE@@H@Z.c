/*
 * XREFs of ?RemovePlaneConfig@@YAXPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@H@Z @ 0x1401A451C
 * Callers:
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1401A1378 (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x14032E9B0 (-GetNextConfigIndex@@YAHH@Z.c)
 *     ?GetPreviousConfigIndex@@YAHH@Z @ 0x1403A0BA4 (-GetPreviousConfigIndex@@YAHH@Z.c)
 */

void __fastcall RemovePlaneConfig(struct _DISPLAY_PLANE_CONFIG_QUEUE *a1, int a2)
{
  int PreviousConfigIndex; // esi
  __int64 v3; // rdi
  int v5; // eax

  PreviousConfigIndex = -1;
  v3 = a2;
  if ( *(_DWORD *)a1 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9378;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pQueue->HeadIndex != CONFIG_INDEX_INVALID",
      9378LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)a1 + 1) == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9379;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pQueue->TailIndex != CONFIG_INDEX_INVALID",
      9379LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  memset((char *)a1 + 80 * v3 + 8, 0, 0x50uLL);
  v5 = *((_DWORD *)a1 + 1);
  if ( *(_DWORD *)a1 == (_DWORD)v3 )
  {
    if ( v5 == (_DWORD)v3 )
      *((_DWORD *)a1 + 1) = -1;
    else
      PreviousConfigIndex = GetPreviousConfigIndex(v3);
    *(_DWORD *)a1 = PreviousConfigIndex;
  }
  else if ( v5 == (_DWORD)v3 )
  {
    *((_DWORD *)a1 + 1) = GetNextConfigIndex(v3);
  }
}
