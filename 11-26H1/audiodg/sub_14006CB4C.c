/*
 * XREFs of sub_14006CB4C @ 0x14006CB4C
 * Callers:
 *     sub_14006CD00 @ 0x14006CD00 (sub_14006CD00.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 */

__int64 __fastcall sub_14006CB4C(__int64 a1)
{
  DWORD v2; // ecx
  HRESULT v3; // eax
  HRESULT v4; // eax
  _QWORD **v5; // rcx
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)a1 = off_1400B8740;
  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 )
  {
    v3 = RtwqUnlockWorkQueue(v2);
    if ( v3 < 0 )
      sub_140007934((int)retaddr, 131, (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp", v3);
  }
  if ( *(_BYTE *)(a1 + 104) )
  {
    v4 = RtwqShutdown();
    if ( v4 < 0 )
      sub_140007934((int)retaddr, 136, (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp", v4);
  }
  v5 = *(_QWORD ***)(a1 + 88);
  *v5[1] = 0LL;
  v6 = *v5;
  if ( *v5 )
  {
    do
    {
      v7 = (_QWORD *)*v6;
      sub_140003238(v6 + 2);
      sub_1400453E4((__int64)v6, 0x18uLL);
      v6 = v7;
    }
    while ( v7 );
  }
  sub_1400453E4(*(_QWORD *)(a1 + 88), 0x18uLL);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  result = sub_140003238((__int64 *)(a1 + 40));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
