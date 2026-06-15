/*
 * XREFs of sub_14003A2F0 @ 0x14003A2F0
 * Callers:
 *     sub_140021ACC @ 0x140021ACC (sub_140021ACC.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14003A37C @ 0x14003A37C (sub_14003A37C.c)
 *     sub_14003A424 @ 0x14003A424 (sub_14003A424.c)
 *     memcmp @ 0x14004A694 (memcmp.c)
 */

__int64 __fastcall sub_14003A2F0(__int64 a1, _DWORD *a2, __int64 a3)
{
  int v5; // ebx
  int v6; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2[4] == 5 && !memcmp(a2, &xmmword_1400C7100, 0x10uLL) )
  {
    v5 = sub_14003A424(a1, a3);
    if ( v5 < 0 )
    {
      v6 = 87;
LABEL_5:
      sub_14000C2A8(
        (int)retaddr,
        v6,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
        v5);
      return (unsigned int)v5;
    }
  }
  else
  {
    v5 = sub_14003A37C(a1, a3);
    if ( v5 < 0 )
    {
      v6 = 91;
      goto LABEL_5;
    }
  }
  return 0LL;
}
