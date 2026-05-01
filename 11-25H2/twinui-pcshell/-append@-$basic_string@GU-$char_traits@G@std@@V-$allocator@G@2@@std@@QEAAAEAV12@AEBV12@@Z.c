/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@@Z @ 0x18019022C
 * Callers:
 *     ?TelemetryLogProcessesLaunchedAfterGame@BroadcastDVRComponent@@AEAAXAEBV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@@Z @ 0x18010EDA4 (-TelemetryLogProcessesLaunchedAfterGame@BroadcastDVRComponent@@AEAAXAEBV-$vector@VString@Interna.c)
 *     ?UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z @ 0x18018FE24 (-UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z.c)
 *     ?TelemetryLogProcessesLaunchedWithGame@BroadcastDVRComponent@@AEAAXAEBV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@@Z @ 0x1801900B4 (-TelemetryLogProcessesLaunchedWithGame@BroadcastDVRComponent@@AEAAXAEBV-$vector@VString@Internal.c)
 *     ?GetViewTypesString@KBViewInfo@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1802B6584 (-GetViewTypesString@KBViewInfo@@QEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@s.c)
 *     ?UpdateViewMovingStateInShellPreference@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x180467F94 (-UpdateViewMovingStateInShellPreference@TouchKeyboardExperienceManager@@AEAAXI_N@Z.c)
 *     ?UpdateShellViewCoordinatorShellPreferences@TabTipAdapter@KeyboardHosting@@QEAAXW4ShellView@Shell@UI@WindowsUdk@winrt@@AEBUhstring@7@1@Z @ 0x180471AAC (-UpdateShellViewCoordinatorShellPreferences@TabTipAdapter@KeyboardHosting@@QEAAXW4ShellView@Shel.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180029F78 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802D0044 (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1806A4B0C (memcpy_0.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

_QWORD *__fastcall std::wstring::append(_QWORD *Src, _QWORD *a2)
{
  _QWORD *v2; // rsi
  unsigned __int64 v3; // r14
  unsigned __int64 v5; // rbp
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // r13
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  size_t size_of; // rax
  char *v12; // rax
  size_t v13; // r14
  size_t v14; // r8
  char *v15; // r12
  char *v16; // r15
  void *v18; // rbx
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
    Src[2] = v3 + v6;
    if ( v5 > 7 )
      v19 = (_QWORD *)*Src;
    memmove_0((char *)v19 + 2 * v6, v2, 2 * v3);
    *((_WORD *)v19 + v3 + v6) = 0;
  }
  else
  {
    v7 = 0x7FFFFFFFFFFFFFFELL;
    if ( 0x7FFFFFFFFFFFFFFELL - v6 < v3 )
      std::_Xlen_string();
    v8 = v3 + v6;
    v9 = (v3 + v6) | 7;
    if ( v9 <= 0x7FFFFFFFFFFFFFFELL )
    {
      v10 = v5 >> 1;
      if ( v5 <= 0x7FFFFFFFFFFFFFFELL - (v5 >> 1) )
      {
        v7 = v10 + v5;
        if ( v9 >= v10 + v5 )
          v7 = (v3 + v6) | 7;
      }
    }
    size_of = std::_Get_size_of_n<2>(v7 + 1);
    v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v13 = 2 * v3;
    Src[2] = v8;
    Src[3] = v7;
    v14 = 2 * v6;
    v15 = v12;
    v16 = &v12[2 * v6];
    if ( v5 > 7 )
    {
      v18 = (void *)*Src;
      memcpy_0(v12, (const void *)*Src, v14);
      memcpy_0(v16, v2, v13);
      *(_WORD *)&v15[2 * v8] = 0;
      std::_Deallocate<16,0>(v18, (const struct std::nothrow_t *)(2 * v5 + 2));
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
