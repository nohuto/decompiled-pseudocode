/*
 * XREFs of xxxDesktopWndProc @ 0x1401847E0
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     xxxDispatchMessage @ 0x140116D64 (xxxDispatchMessage.c)
 *     xxxSendMessageCallback @ 0x14012B834 (xxxSendMessageCallback.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x14016A55C (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxWrapDesktopWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140182DA0 (-xxxWrapDesktopWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x140243864 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxDesktopWndProc(struct tagTHREADINFO **a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v6; // r12d
  struct tagTHREADINFO *v8; // rbp
  __int64 v9; // rbx
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 result; // rax

  v6 = a2;
  v8 = PtiCurrent((__int64)a1, a2);
  v9 = 0LL;
  v10 = 0;
  if ( a1[2] != PtiCurrent(v12, v11) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1497LL);
  if ( a1[13] )
  {
    v13 = *((_QWORD *)v8 + 62);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 40);
      if ( v14 )
      {
        v9 = *(_QWORD *)(v14 + 56);
        v15 = *(_DWORD *)(v9 + 32);
        if ( v15 >= 0x20 )
          return 0LL;
        v10 = 1;
        *(_DWORD *)(v9 + 32) = v15 + 1;
      }
    }
  }
  result = xxxDesktopWndProcWorker((struct tagWND *)a1, v6, a3, a4);
  if ( v10 )
    --*(_DWORD *)(v9 + 32);
  return result;
}
