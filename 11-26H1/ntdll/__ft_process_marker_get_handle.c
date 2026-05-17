/*
 * XREFs of __ft_process_marker_get_handle @ 0x1801480F0
 * Callers:
 *     RtlGetFeatureToggleConfiguration @ 0x1801479C0 (RtlGetFeatureToggleConfiguration.c)
 * Callees:
 *     sprintf_s @ 0x180133C60 (sprintf_s.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall _ft_process_marker_get_handle(int a1)
{
  char Buffer[64]; // [rsp+20h] [rbp-58h] BYREF

  memset_thunk_772440563353939046(Buffer, 0, 0x40uLL);
  sprintf_s(Buffer, 0x40uLL, "Local\\FT:lock:%d", a1);
  return 0LL;
}
