/*
 * XREFs of sub_180051E20 @ 0x180051E20
 * Callers:
 *     sub_1800523AC @ 0x1800523AC (sub_1800523AC.c)
 *     sub_180052670 @ 0x180052670 (sub_180052670.c)
 *     sub_1800536E8 @ 0x1800536E8 (sub_1800536E8.c)
 *     sub_1800579C0 @ 0x1800579C0 (sub_1800579C0.c)
 *     sub_18006AD9C @ 0x18006AD9C (sub_18006AD9C.c)
 *     sub_18006B680 @ 0x18006B680 (sub_18006B680.c)
 *     sub_18007E2A0 @ 0x18007E2A0 (sub_18007E2A0.c)
 *     sub_180080354 @ 0x180080354 (sub_180080354.c)
 *     sub_1800817A0 @ 0x1800817A0 (sub_1800817A0.c)
 *     sub_180081EFC @ 0x180081EFC (sub_180081EFC.c)
 *     sub_180083A90 @ 0x180083A90 (sub_180083A90.c)
 *     sub_180083E30 @ 0x180083E30 (sub_180083E30.c)
 *     sub_180084B68 @ 0x180084B68 (sub_180084B68.c)
 *     sub_1800CDFC0 @ 0x1800CDFC0 (sub_1800CDFC0.c)
 *     sub_1800CE6C0 @ 0x1800CE6C0 (sub_1800CE6C0.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_18001DF68 @ 0x18001DF68 (sub_18001DF68.c)
 *     sub_180027978 @ 0x180027978 (sub_180027978.c)
 *     sub_180027B50 @ 0x180027B50 (sub_180027B50.c)
 *     sub_1800425BC @ 0x1800425BC (sub_1800425BC.c)
 */

__int64 __fastcall sub_180051E20(__int64 *a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  _DWORD *v10; // [rsp+30h] [rbp-40h] BYREF
  __int128 v11; // [rsp+40h] [rbp-30h] BYREF
  __int128 v12; // [rsp+50h] [rbp-20h] BYREF
  __int64 v13; // [rsp+60h] [rbp-10h]
  __int64 v14; // [rsp+98h] [rbp+28h] BYREF

  sub_1800425BC(a1, &v12, a3);
  if ( *(_BYTE *)(v13 + 25) || *v5 < *(_DWORD *)(v13 + 32) )
  {
    if ( a1[1] == 0x492492492492492LL )
      sub_18001DF68();
    v10 = v5;
    v14 = *a1;
    v11 = (unsigned __int64)a1;
    v6 = sub_180011790(0x38uLL);
    sub_180027978(v7, v6 + 32, v8, &v10);
    sub_180013074((__int64 *)v6, &v14);
    sub_180013074((__int64 *)(v6 + 8), &v14);
    sub_180013074((__int64 *)(v6 + 16), &v14);
    *(_WORD *)(v6 + 24) = 0;
    *((_QWORD *)&v11 + 1) = 0LL;
    sub_180027B50((__int64)&v11);
    v11 = v12;
    *(_QWORD *)a2 = sub_18001DD70((__int64)a1, (__int64)&v11, v6);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
