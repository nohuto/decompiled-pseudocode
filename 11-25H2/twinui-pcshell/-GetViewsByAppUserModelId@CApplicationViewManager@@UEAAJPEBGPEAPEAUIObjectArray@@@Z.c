/*
 * XREFs of ?GetViewsByAppUserModelId@CApplicationViewManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1801D2640
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationViewsById@CApplicationViewManager@@AEAAJPEBG_K_NPEAPEAUIObjectArray@@@Z @ 0x1801D2668 (-GetApplicationViewsById@CApplicationViewManager@@AEAAJPEBG_K_NPEAPEAUIObjectArray@@@Z.c)
 */

__int64 __fastcall CApplicationViewManager::GetViewsByAppUserModelId(
        CApplicationViewManager *this,
        const unsigned __int16 *a2,
        struct IObjectArray **a3)
{
  return CApplicationViewManager::GetApplicationViewsById(
           (CApplicationViewManager *)((char *)this - 136),
           a2,
           0xFFFFFFFFFFFFFFFFuLL,
           0,
           a3);
}
