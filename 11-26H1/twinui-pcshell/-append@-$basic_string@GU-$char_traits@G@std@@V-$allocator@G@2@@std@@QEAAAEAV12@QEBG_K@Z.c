/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800334F0
 * Callers:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x180033DA8 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x1800E17E0 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 *     ?InitUserConfig@Theming@@YAXXZ @ 0x180123CB8 (-InitUserConfig@Theming@@YAXXZ.c)
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x18013CE90 (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x180171490 (-EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ.c)
 *     ?UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z @ 0x1801E2FE8 (-UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z.c)
 *     ?CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z @ 0x1801E95A0 (-CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@$$QEAV10@QEBG@Z @ 0x1801F31AC (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1801F31AC.c)
 *     ?TelemetryLogProcessesLaunchedWithGame@BroadcastDVRComponent@@AEAAXAEBV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@@Z @ 0x180201678 (-TelemetryLogProcessesLaunchedWithGame@BroadcastDVRComponent@@AEAAXAEBV-$vector@VString@Internal.c)
 *     ?SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z @ 0x18028FEA0 (-SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z.c)
 *     ??$append@Uhstring@winrt@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBUhstring@winrt@@@Z @ 0x1802900B0 (--$append@Uhstring@winrt@@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA.c)
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180033648 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802C72B8 (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

_QWORD *__fastcall std::wstring::append(_QWORD *Src, void *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  __int64 v5; // r14
  __int64 v8; // rbx
  __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 size_of; // rax
  char *v13; // rax
  size_t v14; // rsi
  size_t v15; // r8
  char *v16; // r12
  char *v17; // r14
  __int64 v19; // rbx
  __int64 v20; // rbp
  _QWORD *v21; // rbx

  v3 = Src[3];
  v5 = Src[2];
  if ( a3 <= v3 - v5 )
  {
    v20 = v5 + a3;
    v21 = Src;
    Src[2] = v5 + a3;
    if ( v3 > 7 )
      v21 = (_QWORD *)*Src;
    memmove_0((char *)v21 + 2 * v5, a2, 2 * a3);
    *((_WORD *)v21 + v20) = 0;
  }
  else
  {
    v8 = 0x7FFFFFFFFFFFFFFELL;
    if ( 0x7FFFFFFFFFFFFFFELL - v5 < a3 )
      std::_Xlen_string();
    v9 = v5 + a3;
    v10 = (v5 + a3) | 7;
    if ( v10 <= 0x7FFFFFFFFFFFFFFELL )
    {
      v11 = v3 >> 1;
      if ( v3 <= 0x7FFFFFFFFFFFFFFELL - (v3 >> 1) )
      {
        v8 = v3 + v11;
        if ( v10 >= v3 + v11 )
          v8 = (v5 + a3) | 7;
      }
    }
    size_of = std::_Get_size_of_n<2>(v8 + 1);
    v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    v14 = 2 * a3;
    Src[2] = v9;
    Src[3] = v8;
    v15 = 2 * v5;
    v16 = v13;
    v17 = &v13[2 * v5];
    if ( v3 > 7 )
    {
      v19 = *Src;
      memcpy_0(v13, (const void *)*Src, v15);
      memcpy_0(v17, a2, v14);
      *(_WORD *)&v16[2 * v9] = 0;
      std::_Deallocate<16>(v19, 2 * v3 + 2);
    }
    else
    {
      memcpy_0(v13, Src, v15);
      memcpy_0(v17, a2, v14);
      *(_WORD *)&v16[2 * v9] = 0;
    }
    *Src = v16;
  }
  return Src;
}
