/*
 * XREFs of sub_14001F398 @ 0x14001F398
 * Callers:
 *     sub_14000DBA0 @ 0x14000DBA0 (sub_14000DBA0.c)
 *     sub_140010C10 @ 0x140010C10 (sub_140010C10.c)
 * Callees:
 *     sub_1400069C0 @ 0x1400069C0 (sub_1400069C0.c)
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14001F398(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  unsigned int v4; // eax
  __int64 v5; // r11
  _DWORD *v6; // rdx
  __int64 v7; // r9
  __int64 result; // rax
  _BYTE v9[8]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v10[120]; // [rsp+48h] [rbp-90h] BYREF

  sub_1400069C0(
    a1,
    0,
    0,
    **(_DWORD **)(a1 + 3720),
    *(_QWORD *)(a1 + 3720) + 8LL,
    *(_DWORD *)(*(_QWORD *)(a1 + 3720) + 4LL));
  v2 = *(_QWORD *)(a1 + 3720);
  v3 = 8LL;
  v4 = *(_DWORD *)(v2 + 4) >> 4;
  if ( v4 > 8 || (v3 = v4) != 0 )
  {
    v5 = (unsigned int)v3;
    v6 = (_DWORD *)(v2 + 16);
    do
    {
      *(_QWORD *)&v9[(_QWORD)v6 - v2 - 16] = *((_QWORD *)v6 - 1);
      *(_DWORD *)&v10[(_QWORD)v6 - v2 - 16] = *v6;
      v6 += 4;
      --v5;
    }
    while ( v5 );
  }
  StorPortExtendedFunction(70LL, a1, v9, v3);
  result = StorPortExtendedFunction(1LL, a1, *(_QWORD *)(a1 + 3720), v7);
  *(_QWORD *)(a1 + 3720) = 0LL;
  return result;
}
