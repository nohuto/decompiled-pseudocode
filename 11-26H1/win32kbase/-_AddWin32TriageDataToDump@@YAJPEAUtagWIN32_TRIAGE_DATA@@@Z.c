/*
 * XREFs of ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z @ 0x1401EC6A8
 * Callers:
 *     W32pLkmdDataCollectionCallback @ 0x1401ECA50 (W32pLkmdDataCollectionCallback.c)
 * Callees:
 *     IsFreeSMSSupported @ 0x140196970 (IsFreeSMSSupported.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?_AddMemoryBlockToLiveTriageDump@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAXK@Z @ 0x1401EC538 (-_AddMemoryBlockToLiveTriageDump@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAXK@Z.c)
 *     ?_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z @ 0x1401EC620 (-_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall _AddWin32TriageDataToDump(struct tagWIN32_TRIAGE_DATA *a1)
{
  struct tagTHREADINFO *i; // rdi
  __int64 v3; // rdx
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  _QWORD *j; // rdi
  unsigned int v8; // eax
  _QWORD *k; // rdi
  unsigned int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 UserSessionState; // rax
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  __int64 v21; // rax
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // rax
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  __int64 v29; // rax
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  __int64 v33; // rax
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  __int64 v37; // rax
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  __int64 v41; // rax
  int v42; // edx
  int v43; // ecx
  int v44; // r8d
  __int64 v45; // rax
  int v46; // edx
  int v47; // ecx
  int v48; // r8d
  void **v49; // rax
  int v50; // edx
  int v51; // ecx
  int v52; // r8d
  __int64 v53; // rax
  int v54; // edx
  int v55; // ecx
  int v56; // r8d
  _QWORD *m; // rdi

  for ( i = *(struct tagTHREADINFO **)(*(_QWORD *)a1 + 328LL); i; i = (struct tagTHREADINFO *)*((_QWORD *)i + 87) )
    _AddThreadInfoToLiveTriageDump(a1, i);
  _AddMemoryBlockToLiveTriageDump(a1, *(void **)a1);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 328LL);
  if ( v3 )
  {
    _AddMemoryBlockToLiveTriageDump(a1, *(void **)(v3 + 488));
    _AddMemoryBlockToLiveTriageDump(a1, *(void **)(*(_QWORD *)(*(_QWORD *)a1 + 328LL) + 496LL));
  }
  _AddMemoryBlockToLiveTriageDump(a1, *(void **)(*(_QWORD *)a1 + 344LL));
  _AddMemoryBlockToLiveTriageDump(a1, *(void **)(*(_QWORD *)a1 + 656LL));
  for ( j = *(_QWORD **)(*(_QWORD *)a1 + 352LL); j; j = (_QWORD *)*j )
  {
    v8 = *((_DWORD *)a1 + 4);
    if ( v8 >= 0x3E8 )
      break;
    *((_DWORD *)a1 + 4) = v8 + 1;
    _AddMemoryBlockToLiveTriageDump(a1, j);
  }
  for ( k = *(_QWORD **)(*(_QWORD *)a1 + 360LL); k; k = (_QWORD *)*k )
  {
    v10 = *((_DWORD *)a1 + 4);
    if ( v10 >= 0x3E8 )
      break;
    *((_DWORD *)a1 + 4) = v10 + 1;
    _AddMemoryBlockToLiveTriageDump(a1, k);
  }
  if ( *((_DWORD *)a1 + 4) >= 0x3E8u )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 246);
  v11 = W32GetUserSessionState(v5, v4, v6) + 69048;
  if ( (int)IsFreeSMSSupported(v12) >= 0 )
  {
    v13 = *(_QWORD **)v11;
    while ( v13 != (_QWORD *)v11 && *((_DWORD *)a1 + 2) < 0x3E8u )
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
  _AddMemoryBlockToLiveTriageDump(a1, (void *)(v11 & 0xFFFFFFFFFFFFF000uLL));
  UserSessionState = W32GetUserSessionState(v15, v14, v16);
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((UserSessionState + 18696) & 0xFFFFFFFFFFFFF000uLL));
  v21 = W32GetUserSessionState(v19, v18, v20);
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((v21 + 18944) & 0xFFFFFFFFFFFFF000uLL));
  v25 = W32GetUserSessionState(v23, v22, v24);
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((v25 + 16896) & 0xFFFFFFFFFFFFF000uLL));
  v29 = W32GetUserSessionState(v27, v26, v28);
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((v29 + 68604) & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gpresUser & 0xFFFFFFFFFFFFF000uLL));
  v33 = W32GetUserSessionState(v31, v30, v32);
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((v33 + 19904) & 0xFFFFFFFFFFFFF000uLL));
  v37 = W32GetUserSessionState(v35, v34, v36);
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((v37 + 19912) & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gpWin32kDriverObject & 0xFFFFFFFFFFFFF000uLL));
  v41 = W32GetUserSessionState(v39, v38, v40);
  _AddThreadInfoToLiveTriageDump(a1, *(struct tagTHREADINFO **)(v41 + 18696));
  v45 = W32GetUserSessionState(v43, v42, v44);
  _AddThreadInfoToLiveTriageDump(a1, *(struct tagTHREADINFO **)(v45 + 18944));
  v49 = (void **)W32GetUserSessionState(v47, v46, v48);
  _AddMemoryBlockToLiveTriageDump(a1, *v49);
  v53 = W32GetUserSessionState(v51, v50, v52);
  _AddMemoryBlockToLiveTriageDump(a1, *(void **)(v53 + 19904));
  _AddMemoryBlockToLiveTriageDump(a1, gpWin32kDriverObject);
  for ( m = *(_QWORD **)(W32GetUserSessionState(v55, v54, v56) + 16896); m; m = (_QWORD *)*m )
    _AddMemoryBlockToLiveTriageDump(a1, m);
  return 0LL;
}
