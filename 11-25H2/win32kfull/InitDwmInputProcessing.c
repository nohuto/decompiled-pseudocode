/*
 * XREFs of InitDwmInputProcessing @ 0x140210710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 InitDwmInputProcessing()
{
  unsigned int v0; // edi
  __int64 KernelEvent; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 KernelSemaphore; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx

  v0 = -1073741801;
  KernelEvent = hCreateKernelEvent(1LL);
  *(_QWORD *)(W32GetUserSessionState(v3, v2) + 18736) = KernelEvent;
  v4 = hCreateKernelEvent(1LL);
  *(_QWORD *)(W32GetUserSessionState(v6, v5) + 18696) = v4;
  v7 = CreateKernelEvent(1LL, 0LL);
  *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19256) = v7;
  v10 = CreateKernelEvent(1LL, 0LL);
  *(_QWORD *)(W32GetUserSessionState(v12, v11) + 18800) = v10;
  v13 = CreateKernelEvent(1LL, 0LL);
  *(_QWORD *)(W32GetUserSessionState(v15, v14) + 18760) = v13;
  *(_DWORD *)(W32GetUserSessionState(v17, v16) + 19248) = 0;
  KernelSemaphore = CreateKernelSemaphore(0LL, 0x7FFFFFFFLL);
  *(_QWORD *)(W32GetUserSessionState(v20, v19) + 19240) = KernelSemaphore;
  if ( *(_QWORD *)(W32GetUserSessionState(v22, v21) + 18736)
    && *(_QWORD *)(W32GetUserSessionState(v24, v23) + 18696)
    && *(_QWORD *)(W32GetUserSessionState(v27, v26) + 19256)
    && *(_QWORD *)(W32GetUserSessionState(v29, v28) + 18800)
    && *(_QWORD *)(W32GetUserSessionState(v31, v30) + 18760)
    && *(_QWORD *)(W32GetUserSessionState(v33, v32) + 19240) )
  {
    return (unsigned int)CInputManager::CreateSessionGlobal();
  }
  return v0;
}
