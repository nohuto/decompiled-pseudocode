/*
 * XREFs of sub_140039A68 @ 0x140039A68
 * Callers:
 *     sub_140039950 @ 0x140039950 (sub_140039950.c)
 *     sub_140044A2C @ 0x140044A2C (sub_140044A2C.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140048620 @ 0x140048620 (sub_140048620.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 */

__int64 __fastcall sub_140039A68(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = sub_140049338(24LL, &unk_1400C75FC);
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_QWORD *)(v2 + 16) = 0LL;
    v3 = sub_140048620(v2);
    *a1 = v3;
    if ( v3 )
      return 0LL;
  }
  else
  {
    *a1 = 0LL;
  }
  sub_14000C2A8((int)retaddr, 267, (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp", -2147024882);
  return 2147942414LL;
}
