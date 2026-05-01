/*
 * XREFs of ?OnGameModeEnableChange@GamingOverlayExperienceManager@@UEAAJ_KE@Z @ 0x18034AF70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@VGamingOverlayExperienceManager@@@WRL@Microsoft@@IEBAXXZ @ 0x180241DBC (-InternalAddRef@-$ComPtr@VGamingOverlayExperienceManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::OnGameModeEnableChange(
        GamingOverlayExperienceManager *this,
        __int64 a2,
        char a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    *v6 = (char *)this - 136;
    Microsoft::WRL::ComPtr<GamingOverlayExperienceManager>::InternalAddRef(v6);
    v7[1] = a2;
    *((_BYTE *)v7 + 16) = a3;
    *(_DWORD *)((char *)v7 + 17) = 0;
    *(_WORD *)((char *)v7 + 21) = 0;
    *((_BYTE *)v7 + 23) = 0;
    if ( (unsigned int)SHQueueUserWorkItem(
                         GamingOverlayExperienceManager::StaticNotifyBcastDvrOfGameModeChange,
                         v7,
                         0LL,
                         0LL,
                         0LL,
                         0LL,
                         16) )
      return 0LL;
    else
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x5F7,
               (unsigned int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
               v8);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5EE,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
