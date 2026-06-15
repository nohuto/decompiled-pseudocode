/*
 * XREFs of sub_14004D5B0 @ 0x14004D5B0
 * Callers:
 *     sub_14004E530 @ 0x14004E530 (sub_14004E530.c)
 *     sub_140053700 @ 0x140053700 (sub_140053700.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 */

__int64 __fastcall sub_14004D5B0(int a1, _DWORD *a2)
{
  int v2; // ecx
  int v3; // ecx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1 )
  {
    v2 = a1 - 1;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        if ( v3 != 1 )
        {
          sub_14000C2A8(
            (int)retaddr,
            70,
            (int)"avcore\\audiocore\\server\\audiodg\\exe\\apodevicenotificationshandler.cpp",
            -2147418113);
          return 2147549183LL;
        }
        *a2 = 3;
      }
      else
      {
        *a2 = 2;
      }
    }
    else
    {
      *a2 = 1;
    }
  }
  else
  {
    *a2 = 0;
  }
  return 0LL;
}
