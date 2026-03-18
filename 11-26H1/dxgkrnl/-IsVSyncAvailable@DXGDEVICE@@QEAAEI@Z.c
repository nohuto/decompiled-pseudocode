/*
 * XREFs of ?IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z @ 0x14037CCB8
 * Callers:
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1401E5A70 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

char __fastcall DXGDEVICE::IsVSyncAvailable(DXGDEVICE *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  char v4; // bl
  __int64 v5; // rdi

  v2 = *((_QWORD *)this + 237);
  v3 = a2;
  if ( !v2 )
    return 1;
  v4 = 1;
  if ( !*(_QWORD *)(v2 + 3160) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10648;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayAdapter()", 10648LL, 0LL, 0LL, 0LL, 0LL);
  }
  v5 = *(_QWORD *)(v2 + 3160);
  if ( !v5 )
    return 0;
  if ( (unsigned int)v3 >= *(_DWORD *)(v5 + 96) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6468;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      6468LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*(_BYTE *)(4024 * v3 + *(_QWORD *)(v5 + 128) + 760) )
    return 0;
  return v4;
}
