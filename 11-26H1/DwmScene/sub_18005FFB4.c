/*
 * XREFs of sub_18005FFB4 @ 0x18005FFB4
 * Callers:
 *     sub_180060EAC @ 0x180060EAC (sub_180060EAC.c)
 * Callees:
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_180024FEC @ 0x180024FEC (sub_180024FEC.c)
 *     sub_180027978 @ 0x180027978 (sub_180027978.c)
 *     sub_180027B50 @ 0x180027B50 (sub_180027B50.c)
 *     sub_180060880 @ 0x180060880 (sub_180060880.c)
 *     sub_18006A154 @ 0x18006A154 (sub_18006A154.c)
 */

__int64 __fastcall sub_18005FFB4(__int64 *a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *v9; // rbx
  __int128 v11; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v12[8]; // [rsp+40h] [rbp-30h] BYREF
  __int64 *v13; // [rsp+48h] [rbp-28h]
  __int128 v14; // [rsp+50h] [rbp-20h] BYREF
  __int64 v15; // [rsp+60h] [rbp-10h]
  __int64 v16; // [rsp+98h] [rbp+28h] BYREF

  sub_180024FEC(a1, &v14, a3);
  if ( *(_BYTE *)(v15 + 25) || *v6 < *(_DWORD *)(v15 + 32) )
  {
    sub_18006A154(a1);
    v16 = *a1;
    *(_QWORD *)&v11 = a3;
    sub_180060880(v12, a1);
    sub_180027978(v7, (__int64)(v13 + 4), v8, (_DWORD **)&v11);
    sub_180013074(v13, &v16);
    sub_180013074(v13 + 1, &v16);
    sub_180013074(v13 + 2, &v16);
    *((_BYTE *)v13 + 24) = 0;
    *((_BYTE *)v13 + 25) = 0;
    v9 = v13;
    v13 = 0LL;
    sub_180027B50((__int64)v12);
    v11 = v14;
    *(_QWORD *)a2 = sub_18001DD70((__int64)a1, (__int64)&v11, (__int64)v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v15;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
