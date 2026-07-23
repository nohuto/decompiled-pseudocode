/*
 * XREFs of MiChangePageHeatImmediate @ 0x14052B92C
 * Callers:
 *     MiDemoteLocalLargePage @ 0x140283A10 (MiDemoteLocalLargePage.c)
 *     MiFreeLargePageMemory @ 0x1403CF1F4 (MiFreeLargePageMemory.c)
 *     MiLargeFreePageToMdl @ 0x1404C8C88 (MiLargeFreePageToMdl.c)
 * Callees:
 *     MiInitializePageHeatList @ 0x1404655D0 (MiInitializePageHeatList.c)
 *     MiAddPageToHeatList @ 0x14048AF80 (MiAddPageToHeatList.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall MiChangePageHeatImmediate(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v4; // r11d
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v5 = 0LL;
  if ( a3 )
  {
    if ( (stru_140E366D8.WaitRegister.Flags & 1) == 0 )
      return;
    goto LABEL_7;
  }
  if ( (stru_140E366D8.WaitRegister.Flags & 2) != 0 && (a2 <= 1 || (stru_140E366D8.WaitRegister.Flags & 4) == 0) )
  {
LABEL_7:
    MiInitializePageHeatList((__int64)&v5, a3, 0, 1);
    MiAddPageToHeatList(&v5, a1, v4);
  }
}
