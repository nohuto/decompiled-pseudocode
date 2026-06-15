/*
 * XREFs of sub_14007F3A0 @ 0x14007F3A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140078A54 @ 0x140078A54 (sub_140078A54.c)
 */

__int64 __fastcall sub_14007F3A0(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v3 = sub_140078A54(a1 + 80, a2, a3);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 804, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v3);
  return v4;
}
