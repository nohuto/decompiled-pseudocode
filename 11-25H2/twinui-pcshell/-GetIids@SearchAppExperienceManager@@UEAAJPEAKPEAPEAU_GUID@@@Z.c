/*
 * XREFs of ?GetIids@SearchAppExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18036B940
 * Callers:
 *     ?GetIids@CortanaSharedExperienceManager@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18036B9D0 (-GetIids@CortanaSharedExperienceManager@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SearchAppExperienceManager::GetIids(
        SearchAppExperienceManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x40uLL);
  if ( v6 )
  {
    *v6 = GUID_cc9f58c7_f178_47ce_b78c_6c5f88e13931;
    v6[1] = _uuidof__AUIWeakReferenceSource_Details_Platform__;
    v6[2] = _uuidof__AUIDisposable_Platform__;
    v6[3] = GUID_5fefbb8e_82c3_4ec4_93a0_05c4b9fcd4cd;
    *a2 = 4;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
