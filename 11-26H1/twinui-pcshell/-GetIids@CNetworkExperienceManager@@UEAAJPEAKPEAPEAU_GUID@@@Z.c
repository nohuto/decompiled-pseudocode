/*
 * XREFs of ?GetIids@CNetworkExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1803BE200
 * Callers:
 *     ?GetIids@CNetworkExperienceManager@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1803BE280 (-GetIids@CNetworkExperienceManager@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CNetworkExperienceManager::GetIids(
        CNetworkExperienceManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = GUID_c9ddc674_b44b_4c67_9d79_2b237d9be05a;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
