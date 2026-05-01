/*
 * XREFs of ?OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x180462CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?OnApplicationStateChanged_Dispatched@TouchKeyboardExperienceManager@@AEAAJV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4PLM_STATE_CHANGE@@@Z @ 0x180462D30 (-OnApplicationStateChanged_Dispatched@TouchKeyboardExperienceManager@@AEAAJV-$basic_string@GU-$c.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnApplicationStateChanged(__int64 a1, _WORD *a2, unsigned int a3)
{
  char **v5; // rax
  char *v7; // [rsp+20h] [rbp-28h] BYREF

  v5 = std::wstring::wstring(&v7, a2);
  return TouchKeyboardExperienceManager::OnApplicationStateChanged_Dispatched(a1 - 152, v5, a3);
}
