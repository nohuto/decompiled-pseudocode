/*
 * XREFs of sub_14001D2F0 @ 0x14001D2F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_14001D2F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  __int64 v6; // rcx
  int v7; // edx
  __int64 v8; // r8
  __int64 result; // rax
  __int128 v10; // [rsp+20h] [rbp-89h] BYREF
  __int128 v11; // [rsp+30h] [rbp-79h]
  _DWORD *v12; // [rsp+40h] [rbp-69h]
  _DWORD v13[2]; // [rsp+50h] [rbp-59h] BYREF
  __int128 v14; // [rsp+58h] [rbp-51h]
  __int128 v15; // [rsp+68h] [rbp-41h]
  __int128 v16; // [rsp+78h] [rbp-31h]
  __int128 v17; // [rsp+88h] [rbp-21h]
  __int128 v18; // [rsp+98h] [rbp-11h]
  __int128 v19; // [rsp+A8h] [rbp-1h]
  __int128 v20; // [rsp+B8h] [rbp+Fh]
  __int128 v21; // [rsp+C8h] [rbp+1Fh]
  char v22; // [rsp+D8h] [rbp+2Fh]
  char v23; // [rsp+D9h] [rbp+30h]
  char v24; // [rsp+DAh] [rbp+31h]
  int v25; // [rsp+DCh] [rbp+33h]
  __int64 v26; // [rsp+E0h] [rbp+37h]

  v12 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  sub_140032C80(v13, 0LL, 152LL);
  v6 = *(_QWORD *)(a1 + 3968);
  if ( v6 )
  {
    v7 = *(_DWORD *)(a1 + 3976);
    if ( v7 )
    {
      v13[0] = 152;
      v13[1] = 152;
      v14 = *(_OWORD *)(v6 + 384);
      v15 = *(_OWORD *)(v6 + 400);
      v16 = *(_OWORD *)(v6 + 416);
      v17 = *(_OWORD *)(v6 + 432);
      v18 = *(_OWORD *)(v6 + 448);
      v19 = *(_OWORD *)(v6 + 464);
      v20 = *(_OWORD *)(v6 + 480);
      v21 = *(_OWORD *)(v6 + 496);
      v22 = *(_BYTE *)(v6 + 5);
      v23 = *(_BYTE *)(v6 + 6);
      v24 = *(_BYTE *)(v6 + 7);
      *(_QWORD *)&v10 = 0x2800000028LL;
      *(_QWORD *)&v11 = L"StorNVMe";
      v25 = v7;
      v26 = v6;
      v12 = v13;
      *((_QWORD *)&v10 + 1) = 0x100000001LL;
      DWORD2(v11) = 1;
      StorPortExtendedFunction(104LL, a1, 0LL, &v10);
    }
  }
  v8 = *(_QWORD *)(a1 + 3968);
  if ( v8 )
    StorPortExtendedFunction(1LL, a1, v8, v5);
  *(_OWORD *)(a1 + 3968) = 0LL;
  result = StorPortExtendedFunction(31LL, a1, a3, v5);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 24), 0xCu);
  return result;
}
