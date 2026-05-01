/*
 * XREFs of ?GetHorizontalAlignment@CQuickConnectExperienceManager@@AEAAHHAEBUtagRECT@@@Z @ 0x180391BF0
 * Callers:
 *     ?FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x180391968 (-FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CQuickConnectExperienceManager::GetHorizontalAlignment(
        CQuickConnectExperienceManager *this,
        int a2,
        const struct tagRECT *a3)
{
  float v3; // xmm1_4
  float v4; // xmm2_4
  LONG v5; // ecx

  v3 = *((float *)this + 88);
  v4 = *((float *)this + 86);
  v5 = (int)(float)((float)((float)(v3 - (float)a2) * 0.5) + v4);
  if ( v5 >= a3->left )
  {
    if ( v5 + a2 > a3->right )
      return (unsigned int)(int)(float)((float)(v3 + v4) - (float)a2);
  }
  else
  {
    return (unsigned int)(int)v4;
  }
  return (unsigned int)v5;
}
