/*
 * XREFs of ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1402E6BD0
 * Callers:
 *     OutputDuplProcessTerminateForSession @ 0x1402E7184 (OutputDuplProcessTerminateForSession.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::ProcessTerminated(OUTPUTDUPL_SESSION_MGR *this, struct _EPROCESS *a2)
{
  unsigned int v4; // ecx
  __int64 v5; // rdi
  unsigned int i; // eax
  __int64 v7; // rbx
  _BYTE v8[24]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (OUTPUTDUPL_SESSION_MGR *)((char *)this + 8), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v4 = *((_DWORD *)this + 1);
  v5 = **((_QWORD **)this + 7);
  for ( i = 0; i < v4; ++i )
  {
    v7 = 32LL * i;
    if ( a2 == *(struct _EPROCESS **)(v7 + v5 + 8) )
    {
      if ( *(_DWORD *)(v7 + v5) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4378;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcesses[i].RefCount == 0", 4378LL, 0LL, 0LL, 0LL, 0LL);
      }
      *(_QWORD *)(v7 + v5 + 8) = 0LL;
      break;
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v8);
}
