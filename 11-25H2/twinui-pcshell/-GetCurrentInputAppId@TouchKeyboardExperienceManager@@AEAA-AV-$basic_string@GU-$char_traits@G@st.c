/*
 * XREFs of ?GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1802939F0
 * Callers:
 *     ?RegisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800BA0AC (-RegisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAA?AV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@XZ @ 0x1801F1160 (-CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAA-AV-$ComPtr@UIApplicationFrameWrapper.c)
 *     ?GetIsSystemInputApp@TouchKeyboardExperienceManager@@UEAAJPEBGPEAH@Z @ 0x18020D1E0 (-GetIsSystemInputApp@TouchKeyboardExperienceManager@@UEAAJPEBGPEAH@Z.c)
 *     ?GetAppId@TouchKeyboardExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18020DFE0 (-GetAppId@TouchKeyboardExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180255AA0 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18045FFC4 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x180462E90 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18005A55C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::GetCurrentInputAppId(struct _RTL_CRITICAL_SECTION *a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi

  v4 = a1 + 13;
  EnterCriticalSection(a1 + 13);
  std::wstring::wstring(a2, (__int64)&a1[12].LockCount);
  if ( v4 )
    LeaveCriticalSection(v4);
  return a2;
}
