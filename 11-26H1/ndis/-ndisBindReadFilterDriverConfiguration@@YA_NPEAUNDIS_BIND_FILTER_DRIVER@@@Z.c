/*
 * XREFs of ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x14014B4F8
 * Callers:
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x140161C10 (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 * Callees:
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x14014B540 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ndisBindReadFilterDriverFromV3Registry @ 0x14014B680 (ndisBindReadFilterDriverFromV3Registry.c)
 */

bool __fastcall ndisBindReadFilterDriverConfiguration(struct NDIS_BIND_FILTER_DRIVER *a1)
{
  a1->FilterBindFlags = 0;
  return ((unsigned __int8)ndisBindReadFilterDriverFromV3Registry() || ndisBindReadFilterDriverFromV2Registry(a1))
      && ((a1->FilterBindFlags & 2) != 0 || a1->FilterClass.__ptr_.__value_);
}
