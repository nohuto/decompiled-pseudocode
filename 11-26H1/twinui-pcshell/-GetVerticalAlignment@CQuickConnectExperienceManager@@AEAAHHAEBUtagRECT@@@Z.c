/*
 * XREFs of ?GetVerticalAlignment@CQuickConnectExperienceManager@@AEAAHHAEBUtagRECT@@@Z @ 0x180391D30
 * Callers:
 *     ?FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x180391968 (-FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CQuickConnectExperienceManager::GetVerticalAlignment(
        CQuickConnectExperienceManager *this,
        int a2,
        const struct tagRECT *a3)
{
  unsigned int v3; // r9d
  float *v4; // r10

  v3 = *((_DWORD *)this + 99);
  v4 = (float *)((char *)this + 348);
  if ( v3 == *((_DWORD *)this + 101) )
    v3 = (int)*v4;
  if ( (signed int)(v3 + a2) > a3->bottom )
    return (unsigned int)(int)(float)((float)(*((float *)this + 89) + *v4) - (float)a2);
  return v3;
}
