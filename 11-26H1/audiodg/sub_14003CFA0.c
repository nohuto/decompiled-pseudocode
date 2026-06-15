/*
 * XREFs of sub_14003CFA0 @ 0x14003CFA0
 * Callers:
 *     sub_140054A88 @ 0x140054A88 (sub_140054A88.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14003D070 @ 0x14003D070 (sub_14003D070.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 */

__int64 __fastcall sub_14003CFA0(__int64 a1, const void **a2)
{
  void ***v2; // rsi
  __int64 v4; // rbp
  int v5; // eax
  unsigned int v6; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (void ***)(a1 + 16);
  v4 = *((unsigned int *)*a2 + 6);
  v5 = sub_14003D070(v4, a1 + 16);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *((_DWORD *)*v2 + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)*v2 + 3) = *((_DWORD *)a2 + 3);
    *((_DWORD *)*v2 + 4) = *((_DWORD *)a2 + 4);
    *((_DWORD *)*v2 + 5) = *((_DWORD *)a2 + 5);
    *((_DWORD *)*v2 + 6) = *((_DWORD *)a2 + 6);
    *((_DWORD *)*v2 + 7) = *((_DWORD *)a2 + 7);
    memcpy(*v2 + 4, a2 + 4, 4 * v4);
    memcpy(**v2, *a2, 4 * v4 + 32);
    return 0LL;
  }
  else
  {
    sub_14000C2A8((int)retaddr, 195, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp", v5);
    return v6;
  }
}
