/*
 * XREFs of ?GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180289270
 * Callers:
 *     ?RegisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800C44BC (-RegisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAA?AV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@XZ @ 0x1801E79F8 (-CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAA-AV-$ComPtr@UIApplicationFrameWrapper.c)
 *     ?GetIsSystemInputApp@TouchKeyboardExperienceManager@@UEAAJPEBGPEAH@Z @ 0x1802000B0 (-GetIsSystemInputApp@TouchKeyboardExperienceManager@@UEAAJPEBGPEAH@Z.c)
 *     ?GetAppId@TouchKeyboardExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180201190 (-GetAppId@TouchKeyboardExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18024A340 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18046C558 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x18046EDD0 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     ??$_Construct@$01PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031D64 (--$_Construct@$01PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall TouchKeyboardExperienceManager::GetCurrentInputAppId(__int64 a1, _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  _OWORD *v5; // rdx

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 520);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 520));
  v5 = (_OWORD *)(a1 + 488);
  *(_OWORD *)a2 = 0LL;
  a2[2] = 0LL;
  a2[3] = 0LL;
  if ( *(_QWORD *)(a1 + 512) > 7uLL )
    v5 = *(_OWORD **)v5;
  std::wstring::_Construct<2,unsigned short const *>(a2, v5, *(_QWORD *)(a1 + 504));
  if ( v4 )
    LeaveCriticalSection(v4);
  return a2;
}
