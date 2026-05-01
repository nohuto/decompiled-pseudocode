/*
 * XREFs of ?OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x18046EBE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?OnApplicationStateChanged_Dispatched@TouchKeyboardExperienceManager@@AEAAJV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4PLM_STATE_CHANGE@@@Z @ 0x18046EC20 (-OnApplicationStateChanged_Dispatched@TouchKeyboardExperienceManager@@AEAAJV-$basic_string@GU-$c.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnApplicationStateChanged(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rax
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = std::wstring::wstring((__int64)v7, a2);
  return TouchKeyboardExperienceManager::OnApplicationStateChanged_Dispatched(a1 - 152, v5, a3);
}
