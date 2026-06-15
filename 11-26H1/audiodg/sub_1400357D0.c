/*
 * XREFs of sub_1400357D0 @ 0x1400357D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14003586C @ 0x14003586C (sub_14003586C.c)
 *     sub_1400359C4 @ 0x1400359C4 (sub_1400359C4.c)
 */

__int64 __fastcall sub_1400357D0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  int v5; // eax
  int v6; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v4 = a1 - 8;
    v5 = sub_1400359C4(a1 - 8);
    if ( v5 < 0 )
      sub_140007934(
        (int)retaddr,
        226,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
        v5);
    v6 = sub_14003586C(v4, a2);
    if ( v6 < 0 )
      sub_140007934(
        (int)retaddr,
        227,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
        v6);
    return 0LL;
  }
  else
  {
    sub_14000C2A8(
      (int)retaddr,
      224,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
      -2147024809);
    return 2147942487LL;
  }
}
