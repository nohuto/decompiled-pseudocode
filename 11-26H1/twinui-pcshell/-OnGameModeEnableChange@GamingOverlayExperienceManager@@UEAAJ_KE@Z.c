/*
 * XREFs of ?OnGameModeEnableChange@GamingOverlayExperienceManager@@UEAAJ_KE@Z @ 0x18034EB20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@VGamingOverlayExperienceManager@@@WRL@Microsoft@@IEBAXXZ @ 0x180232F24 (-InternalAddRef@-$ComPtr@VGamingOverlayExperienceManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::OnGameModeEnableChange(
        GamingOverlayExperienceManager *this,
        __int64 a2,
        char a3)
{
  char *v6; // rbx
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = (char *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    *(_QWORD *)v6 = (char *)this - 136;
    Microsoft::WRL::ComPtr<GamingOverlayExperienceManager>::InternalAddRef(v6);
    *((_QWORD *)v6 + 1) = a2;
    v6[16] = a3;
    *(_DWORD *)(v6 + 17) = 0;
    *(_WORD *)(v6 + 21) = 0;
    v6[23] = 0;
    if ( (unsigned int)SHQueueUserWorkItem(
                         GamingOverlayExperienceManager::StaticNotifyBcastDvrOfGameModeChange,
                         v6,
                         0LL,
                         0LL,
                         0LL,
                         0LL,
                         16) )
      return 0LL;
    else
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x60F,
               (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
               v7);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x606,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
