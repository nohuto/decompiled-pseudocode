/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@@Z @ 0x180033C3C
 * Callers:
 *     ?TelemetryLogProcessesLaunchedAfterGame@BroadcastDVRComponent@@AEAAXAEBV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@@Z @ 0x18005006C (-TelemetryLogProcessesLaunchedAfterGame@BroadcastDVRComponent@@AEAAXAEBV-$vector@VString@Interna.c)
 *     ?UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z @ 0x1801E2FE8 (-UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z.c)
 *     ?TelemetryLogProcessesLaunchedWithGame@BroadcastDVRComponent@@AEAAXAEBV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@@Z @ 0x180201678 (-TelemetryLogProcessesLaunchedWithGame@BroadcastDVRComponent@@AEAAXAEBV-$vector@VString@Internal.c)
 *     ?GetViewTypesString@KBViewInfo@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1802AF5CC (-GetViewTypesString@KBViewInfo@@QEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@s.c)
 *     ?UpdateViewMovingStateInShellPreference@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x180473F64 (-UpdateViewMovingStateInShellPreference@TouchKeyboardExperienceManager@@AEAAXI_N@Z.c)
 *     ?UpdateShellViewCoordinatorShellPreferences@TabTipAdapter@KeyboardHosting@@QEAAXW4ShellView@Shell@UI@WindowsUdk@winrt@@AEBUhstring@7@1@Z @ 0x1804802BC (-UpdateShellViewCoordinatorShellPreferences@TabTipAdapter@KeyboardHosting@@QEAAXW4ShellView@Shel.c)
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180033648 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802C72B8 (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

_QWORD *__fastcall std::wstring::append(_QWORD *Src, _QWORD *a2)
{
  _QWORD *v2; // rsi
  unsigned __int64 v3; // r14
  unsigned __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // r13
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 size_of; // rax
  char *v12; // rax
  size_t v13; // r14
  size_t v14; // r8
  char *v15; // rbp
  char *v16; // r15
  __int64 v18; // rbx
  _QWORD *v19; // rbx

  v2 = a2;
  v3 = a2[2];
  if ( a2[3] > 7uLL )
    v2 = (_QWORD *)*a2;
  v5 = Src[3];
  v6 = Src[2];
  if ( v3 <= v5 - v6 )
  {
    v19 = Src;
    Src[2] = v6 + v3;
    if ( v5 > 7 )
      v19 = (_QWORD *)*Src;
    memmove_0((char *)v19 + 2 * v6, v2, 2 * v3);
    *((_WORD *)v19 + v6 + v3) = 0;
  }
  else
  {
    v7 = 0x7FFFFFFFFFFFFFFELL;
    if ( 0x7FFFFFFFFFFFFFFELL - v6 < v3 )
      std::_Xlen_string();
    v8 = v6 + v3;
    v9 = (v6 + v3) | 7;
    if ( v9 <= 0x7FFFFFFFFFFFFFFELL )
    {
      v10 = v5 >> 1;
      if ( v5 <= 0x7FFFFFFFFFFFFFFELL - (v5 >> 1) )
      {
        v7 = v5 + v10;
        if ( v9 >= v5 + v10 )
          v7 = (v6 + v3) | 7;
      }
    }
    size_of = std::_Get_size_of_n<2>(v7 + 1);
    v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    v13 = 2 * v3;
    Src[2] = v8;
    Src[3] = v7;
    v14 = 2 * v6;
    v15 = v12;
    v16 = &v12[2 * v6];
    if ( v5 > 7 )
    {
      v18 = *Src;
      memcpy_0(v12, (const void *)*Src, v14);
      memcpy_0(v16, v2, v13);
      *(_WORD *)&v15[2 * v8] = 0;
      std::_Deallocate<16>(v18, 2 * v5 + 2);
    }
    else
    {
      memcpy_0(v12, Src, v14);
      memcpy_0(v16, v2, v13);
      *(_WORD *)&v15[2 * v8] = 0;
    }
    *Src = v15;
  }
  return Src;
}
