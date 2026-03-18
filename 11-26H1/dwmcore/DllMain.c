/*
 * XREFs of DllMain @ 0x1801BC54C
 * Callers:
 *     dllmain_dispatch @ 0x18022089C (dllmain_dispatch.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FreeCurrent@CThreadContext@@SAXXZ @ 0x1801BC5C0 (-FreeCurrent@CThreadContext@@SAXXZ.c)
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x1801D4168 (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 *     ?Startup@@YAJXZ @ 0x18020A678 (-Startup@@YAJXZ.c)
 *     McGenEventUnregister_EventUnregister @ 0x18028C1A0 (McGenEventUnregister_EventUnregister.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  BOOL v3; // ebx
  DWORD v4; // edx
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  REGHANDLE v10; // rcx
  REGHANDLE v11; // rcx
  REGHANDLE v12; // rcx
  REGHANDLE v13; // rcx
  REGHANDLE v14; // rcx

  v3 = 1;
  if ( fdwReason )
  {
    v4 = fdwReason - 1;
    if ( v4 )
    {
      if ( v4 == 2 )
        CThreadContext::FreeCurrent();
    }
    else
    {
      CThreadContext::s_dwTlsIndex = TlsAlloc();
      if ( CThreadContext::s_dwTlsIndex == -1 )
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x34u, 0LL);
      }
      else
      {
        v7 = Startup();
        v6 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x36u, 0LL);
        else
          RegisterDwmGuidWithEtw();
      }
      return v6 >= 0;
    }
  }
  else
  {
    McGenEventUnregister_EventUnregister(Microsoft_Windows_Dwm_Compositor_Context, fdwReason, lpvReserved);
    McGenEventUnregister_EventUnregister(&Microsoft_Windows_Dwm_Core_Provider_Context, v8, v9);
    v10 = RegHandle;
    RegHandle = 0LL;
    dword_1803DC880 = 0;
    EventUnregister(v10);
    v11 = qword_1803DC910;
    qword_1803DC910 = 0LL;
    dword_1803DC8F0 = 0;
    EventUnregister(v11);
    v12 = qword_1803DC830;
    qword_1803DC830 = 0LL;
    dword_1803DC810 = 0;
    EventUnregister(v12);
    v13 = qword_1803DC868;
    qword_1803DC868 = 0LL;
    dword_1803DC848 = 0;
    EventUnregister(v13);
    v14 = qword_1803DC8D8;
    qword_1803DC8D8 = 0LL;
    dword_1803DC8B8 = 0;
    EventUnregister(v14);
    if ( CThreadContext::s_dwTlsIndex != -1 )
    {
      CThreadContext::FreeCurrent();
      TlsFree(CThreadContext::s_dwTlsIndex);
      CThreadContext::s_dwTlsIndex = -1;
    }
  }
  return v3;
}
