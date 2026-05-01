/*
 * XREFs of ?StartWorkerWindowMessageThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180354710
 * Callers:
 *     ?add_TargetWindowMoved@GamingOverlayExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180358DC0 (-add_TargetWindowMoved@GamingOverlayExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAUIGaming.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?StopWorkerWindowMessageThread@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x1803554A0 (-StopWorkerWindowMessageThread@GamingOverlayExperienceManager@@AEAAJ_N@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::StartWorkerWindowMessageThread(HANDLE *this)
{
  int v2; // eax
  unsigned int v3; // edi
  HANDLE EventW; // rax
  const char *v6; // r9
  __int64 v7; // rdx
  _QWORD *v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = GamingOverlayExperienceManager::StopWorkerWindowMessageThread((GamingOverlayExperienceManager *)this, 1);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3AA,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  this[100] = EventW;
  if ( !EventW )
  {
    v7 = 940LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
             v6);
  }
  v8 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    *v8 = this;
    v8[1] = this[100];
    v8[2] = 0LL;
    if ( !SHCreateThreadWithHandle(
            GamingOverlayExperienceManager::StaticWorkerWindowMessageThread,
            v8,
            0x1000u,
            GamingOverlayExperienceManager::StaticWorkerWindowMessageThreadSetup,
            this + 82) )
    {
      v7 = 952LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v7,
               (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
               v6);
    }
    if ( this[78] )
      return 0LL;
    v9 = -2147024890;
    v10 = 954LL;
  }
  else
  {
    v9 = -2147024882;
    v10 = 945LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
    (const char *)v9);
  return v9;
}
