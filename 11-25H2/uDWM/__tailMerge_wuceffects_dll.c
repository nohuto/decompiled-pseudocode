/*
 * XREFs of __tailMerge_wuceffects_dll @ 0x18009C32B
 * Callers:
 *     __imp_load_CreateCrossfadeEffectFactory @ 0x18009C3AA (__imp_load_CreateCrossfadeEffectFactory.c)
 *     __imp_load_CreateMicaBrush @ 0x18009C3BC (__imp_load_CreateMicaBrush.c)
 *     __imp_load_CreateAcrylicBrush @ 0x18009C3CE (__imp_load_CreateAcrylicBrush.c)
 *     __imp_load_CrossFadeToNewBrush @ 0x18009C3E0 (__imp_load_CrossFadeToNewBrush.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180081090 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_wuceffects_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_wuceffects_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
