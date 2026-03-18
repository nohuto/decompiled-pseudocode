/*
 * XREFs of ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z @ 0x1401C3600
 * Callers:
 *     W32pLkmdDataCollectionCallback @ 0x1401C39A0 (W32pLkmdDataCollectionCallback.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     IsFreeSMSSupported @ 0x1401A1110 (IsFreeSMSSupported.c)
 *     ?_AddMemoryBlockToLiveTriageDump@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAXK@Z @ 0x1401C3490 (-_AddMemoryBlockToLiveTriageDump@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAXK@Z.c)
 *     ?_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z @ 0x1401C3578 (-_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall _AddWin32TriageDataToDump(struct tagWIN32_TRIAGE_DATA *a1)
{
  struct tagTHREADINFO *i; // rdi
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *j; // rdi
  unsigned int v7; // eax
  _QWORD *k; // rdi
  unsigned int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  void **v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  _QWORD *m; // rdi

  for ( i = *(struct tagTHREADINFO **)(*(_QWORD *)a1 + 320LL); i; i = (struct tagTHREADINFO *)*((_QWORD *)i + 88) )
    _AddThreadInfoToLiveTriageDump(a1, i);
  _AddMemoryBlockToLiveTriageDump(a1, *(void **)a1);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 320LL);
  if ( v3 )
  {
    _AddMemoryBlockToLiveTriageDump(a1, *(void **)(v3 + 496));
    _AddMemoryBlockToLiveTriageDump(a1, *(void **)(*(_QWORD *)(*(_QWORD *)a1 + 320LL) + 504LL));
  }
  _AddMemoryBlockToLiveTriageDump(a1, *(void **)(*(_QWORD *)a1 + 336LL));
  _AddMemoryBlockToLiveTriageDump(a1, *(void **)(*(_QWORD *)a1 + 648LL));
  for ( j = *(_QWORD **)(*(_QWORD *)a1 + 344LL); j; j = (_QWORD *)*j )
  {
    v7 = *((_DWORD *)a1 + 4);
    if ( v7 >= 0x3E8 )
      break;
    *((_DWORD *)a1 + 4) = v7 + 1;
    _AddMemoryBlockToLiveTriageDump(a1, j);
  }
  for ( k = *(_QWORD **)(*(_QWORD *)a1 + 352LL); k; k = (_QWORD *)*k )
  {
    v9 = *((_DWORD *)a1 + 4);
    if ( v9 >= 0x3E8 )
      break;
    *((_DWORD *)a1 + 4) = v9 + 1;
    _AddMemoryBlockToLiveTriageDump(a1, k);
  }
  if ( *((_DWORD *)a1 + 4) >= 0x3E8u )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 246);
  v10 = W32GetUserSessionState(v5, v4) + 69056;
  if ( (int)IsFreeSMSSupported(v12, v11) >= 0 )
  {
    v13 = *(_QWORD **)v10;
    while ( v13 != (_QWORD *)v10 && *((_DWORD *)a1 + 2) < 0x3E8u )
    {
      _AddMemoryBlockToLiveTriageDump(a1, v13);
      _AddThreadInfoToLiveTriageDump(a1, (struct tagTHREADINFO *)v13[4]);
      _AddThreadInfoToLiveTriageDump(a1, (struct tagTHREADINFO *)v13[5]);
      _AddThreadInfoToLiveTriageDump(a1, (struct tagTHREADINFO *)v13[8]);
      _AddMemoryBlockToLiveTriageDump(a1, (void *)v13[14]);
      v13 = (_QWORD *)*v13;
      ++*((_DWORD *)a1 + 2);
    }
  }
  _AddMemoryBlockToLiveTriageDump(a1, (void *)(v10 & 0xFFFFFFFFFFFFF000uLL));
  UserSessionState = W32GetUserSessionState(v15, v14);
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((UserSessionState + 18648) & 0xFFFFFFFFFFFFF000uLL));
  v19 = W32GetUserSessionState(v18, v17);
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((v19 + 18904) & 0xFFFFFFFFFFFFF000uLL));
  v22 = W32GetUserSessionState(v21, v20);
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((v22 + 16904) & 0xFFFFFFFFFFFFF000uLL));
  v25 = W32GetUserSessionState(v24, v23);
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((v25 + 68612) & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gpresUser & 0xFFFFFFFFFFFFF000uLL));
  v28 = W32GetUserSessionState(v27, v26);
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((v28 + 19872) & 0xFFFFFFFFFFFFF000uLL));
  v31 = W32GetUserSessionState(v30, v29);
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((v31 + 19880) & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gpWin32kDriverObject & 0xFFFFFFFFFFFFF000uLL));
  v34 = W32GetUserSessionState(v33, v32);
  _AddThreadInfoToLiveTriageDump(a1, *(struct tagTHREADINFO **)(v34 + 18648));
  v37 = W32GetUserSessionState(v36, v35);
  _AddThreadInfoToLiveTriageDump(a1, *(struct tagTHREADINFO **)(v37 + 18904));
  v40 = (void **)W32GetUserSessionState(v39, v38);
  _AddMemoryBlockToLiveTriageDump(a1, *v40);
  v43 = W32GetUserSessionState(v42, v41);
  _AddMemoryBlockToLiveTriageDump(a1, *(void **)(v43 + 19872));
  _AddMemoryBlockToLiveTriageDump(a1, gpWin32kDriverObject);
  for ( m = *(_QWORD **)(W32GetUserSessionState(v45, v44) + 16904); m; m = (_QWORD *)*m )
    _AddMemoryBlockToLiveTriageDump(a1, m);
  return 0LL;
}
