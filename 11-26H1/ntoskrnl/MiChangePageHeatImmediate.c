/*
 * XREFs of MiChangePageHeatImmediate @ 0x140529498
 * Callers:
 *     MiDemoteLocalLargePage @ 0x1402844A0 (MiDemoteLocalLargePage.c)
 *     MiFreeLargePageMemory @ 0x1403C52E8 (MiFreeLargePageMemory.c)
 *     MiLargeFreePageToMdl @ 0x1404CF258 (MiLargeFreePageToMdl.c)
 * Callees:
 *     MiInitializePageHeatList @ 0x14046BE50 (MiInitializePageHeatList.c)
 *     MiAddPageToHeatList @ 0x140491430 (MiAddPageToHeatList.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
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
    if ( (stru_140E36558.WaitRegister.Flags & 1) == 0 )
      return;
    goto LABEL_7;
  }
  if ( (stru_140E36558.WaitRegister.Flags & 2) != 0 && (a2 <= 1 || (stru_140E36558.WaitRegister.Flags & 4) == 0) )
  {
LABEL_7:
    MiInitializePageHeatList((__int64)&v5, a3, 0, 1);
    MiAddPageToHeatList(&v5, a1, v4);
  }
}
