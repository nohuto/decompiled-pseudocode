/*
 * XREFs of ?StartWorkerWindowMessageThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18034FF1C
 * Callers:
 *     ?add_TargetWindowMoved@GamingOverlayExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180352D60 (-add_TargetWindowMoved@GamingOverlayExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAUIGaming.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?StopWorkerWindowMessageThread@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x1803506EC (-StopWorkerWindowMessageThread@GamingOverlayExperienceManager@@AEAAJ_N@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::StartWorkerWindowMessageThread(HANDLE *this)
{
  int v2; // eax
  unsigned int v3; // edi
  HANDLE EventW; // rax
  const char *v6; // r9
  __int64 v7; // rdx
  _QWORD *v8; // rax
  HANDLE v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = GamingOverlayExperienceManager::StopWorkerWindowMessageThread((GamingOverlayExperienceManager *)this, 1);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x392,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  this[93] = EventW;
  if ( !EventW )
  {
    v7 = 916LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (unsigned int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
             v6);
  }
  v8 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    *v8 = this;
    v9 = this[93];
    v8[2] = 0LL;
    v8[1] = v9;
    if ( !SHCreateThreadWithHandle(
            GamingOverlayExperienceManager::StaticWorkerWindowMessageThread,
            v8,
            0x1000u,
            GamingOverlayExperienceManager::StaticWorkerWindowMessageThreadSetup,
            this + 75) )
    {
      v7 = 928LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v7,
               (unsigned int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
               v6);
    }
    if ( this[71] )
      return 0LL;
    v10 = -2147024890;
    v11 = 930LL;
  }
  else
  {
    v10 = -2147024882;
    v11 = 921LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
    (const char *)v10);
  return v10;
}
