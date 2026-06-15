/*
 * XREFs of sub_140044B54 @ 0x140044B54
 * Callers:
 *     sub_140044930 @ 0x140044930 (sub_140044930.c)
 * Callees:
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 */

void __fastcall sub_140044B54(_BYTE *a1)
{
  HRESULT v2; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[8] )
  {
    a1[8] = 0;
    v2 = RtwqUnlockWorkQueue(*(_DWORD *)(*(_QWORD *)a1 + 16LL));
    if ( v2 < 0 )
      sub_140007934((int)retaddr, 249, (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp", v2);
    *(_DWORD *)(*(_QWORD *)a1 + 16LL) = 0;
  }
}
