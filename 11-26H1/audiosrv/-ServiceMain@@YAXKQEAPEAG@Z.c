/*
 * XREFs of ?ServiceMain@@YAXKQEAPEAG@Z @ 0x180152920
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180037160 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ReportStatusToSCMgr @ 0x180152C80 (ReportStatusToSCMgr.c)
 *     WppInitUm @ 0x180152DEC (WppInitUm.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ServiceMain(unsigned int a1, LPCWSTR *a2)
{
  __int64 v2; // rsi
  __int64 v4; // r9
  __int64 v5; // r9
  __int64 v6; // rdx
  LPVOID v7; // rbx
  HANDLE v8; // rcx
  LPVOID v9; // rax
  __int64 v10; // r9
  unsigned int i; // edi
  __int64 v12; // rax
  SIZE_T v13; // r15
  char *v14; // rcx
  __int64 v15; // rdx
  unsigned int j; // edi
  void *v17; // r8

  v2 = a1;
  if ( !a1 )
    return;
  qword_1801D6500 = 1LL;
  WPP_REGISTRATION_GUIDS = (__int64)&WPP_ThisDir_CTLGUID_AudioTrace;
  qword_1801D64F8 = 0LL;
  WPP_GLOBAL_Control = &WPP_MAIN_CB;
  WPP_MAIN_CB = 0LL;
  WppInitUm();
  sshStatusHandle = RegisterServiceCtrlHandlerExW(*a2, (LPHANDLER_FUNCTION_EX)ServiceCtrl, 0LL);
  if ( !sshStatusHandle )
    return;
  ssStatus = 32;
  dword_1801D6528 = 0;
  if ( !(unsigned int)ReportStatusToSCMgr(2LL, 0LL, 5000LL, v4) )
    return;
  hEventShutdown = CreateEventW(0LL, 1, 0, 0LL);
  if ( !hEventShutdown )
  {
    dword_1801D6528 = GetLastError();
    v6 = (unsigned int)dword_1801D6528;
LABEL_6:
    ReportStatusToSCMgr(1LL, v6, 0LL, v5);
    return;
  }
  dword_1801D6528 = (*((__int64 (__fastcall **)(HANDLE *, LPCWSTR, HANDLE, void (__fastcall *)(void *), _QWORD, int))gpSvchostSharedGlobals
                     + 24))(
                      &hEventShutdownWait,
                      *a2,
                      hEventShutdown,
                      OnServiceShutdown,
                      0LL,
                      8);
  v7 = HeapAlloc(g_hHeap, 0, 0x18uLL);
  v6 = 8LL;
  if ( !v7 )
  {
    dword_1801D6528 = 8;
    goto LABEL_6;
  }
  v8 = g_hHeap;
  *(_QWORD *)v7 = sshStatusHandle;
  *((_DWORD *)v7 + 2) = v2;
  v9 = HeapAlloc(v8, 8u, 8 * v2);
  *((_QWORD *)v7 + 2) = v9;
  if ( !v9 )
  {
LABEL_19:
    dword_1801D6528 = 8;
    v15 = 8LL;
    goto LABEL_20;
  }
  for ( i = 0; i < (unsigned int)v2; ++i )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a2[i][v12] );
    v13 = (unsigned int)(2 * v12 + 2);
    *(_QWORD *)(*((_QWORD *)v7 + 2) + 8LL * i) = HeapAlloc(g_hHeap, 8u, v13);
    v14 = *(char **)(*((_QWORD *)v7 + 2) + 8LL * i);
    if ( !v14 || (int)StringCbCopyW(v14, (unsigned int)v13, (char *)a2[i]) < 0 )
      goto LABEL_19;
  }
  hServiceStartThread = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)AudioSrvStartupThread, v7, 0, 0LL);
  if ( !hServiceStartThread )
  {
    dword_1801D6528 = GetLastError();
    v15 = (unsigned int)dword_1801D6528;
LABEL_20:
    ReportStatusToSCMgr(1LL, v15, 0LL, v10);
    if ( *((_QWORD *)v7 + 2) )
    {
      for ( j = 0; j < *((_DWORD *)v7 + 2); ++j )
      {
        v17 = *(void **)(*((_QWORD *)v7 + 2) + 8LL * j);
        if ( v17 )
          HeapFree(g_hHeap, 0, v17);
      }
      HeapFree(g_hHeap, 0, *((LPVOID *)v7 + 2));
    }
    HeapFree(g_hHeap, 0, v7);
  }
}
