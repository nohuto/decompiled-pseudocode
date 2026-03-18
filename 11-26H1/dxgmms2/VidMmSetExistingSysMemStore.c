/*
 * XREFs of VidMmSetExistingSysMemStore @ 0x1400A3C40
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14002C2E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140035B48 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140035F90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

__int64 __fastcall VidMmSetExistingSysMemStore(__int64 **a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  _BYTE v9[24]; // [rsp+50h] [rbp-18h] BYREF

  v3 = **a1;
  if ( (*(_DWORD *)(v3 + 28) & 0x40) != 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (struct DXGFASTMUTEX *const)(v3 + 136), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
    v6 = *(_QWORD *)(v3 + 224);
    v7 = 0;
    if ( *(_DWORD *)(v6 + 24) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 717;
      DxgkLogInternalTriageEvent(v8, 0x40000LL);
      v7 = -1073741811;
    }
    else
    {
      *(_DWORD *)(v6 + 16) = a2;
    }
    DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v9);
    return v7;
  }
  else
  {
    WdLogSingleEntry1(1LL, **a1);
    WdLogGlobalForLineNumber = 2354;
    DxgkLogInternalTriageEvent(v4, 0x40000LL);
    return 3221225485LL;
  }
}
