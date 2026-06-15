/*
 * XREFs of sub_1400A8FD0 @ 0x1400A8FD0
 * Callers:
 *     sub_1400A5CC0 @ 0x1400A5CC0 (sub_1400A5CC0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1400A8FD0(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // r9d
  __int64 v5; // rax
  unsigned int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // [rsp+18h] [rbp+18h]
  __int16 v11; // [rsp+1Ch] [rbp+1Ch]
  int v12; // [rsp+20h] [rbp+20h]
  __int16 v13; // [rsp+24h] [rbp+24h]

  v12 = 131330;
  v13 = 1;
  v10 = 33554945;
  v11 = 256;
  v4 = **(_DWORD **)(a1 + 24);
  v5 = v4 & 0xFFFFFFF7;
  if ( (v4 & 8) != 0 )
    v6 = *((unsigned __int8 *)&v10 + v5);
  else
    v6 = v4 >> 1;
  v7 = *(_QWORD *)(a1 + 24);
  v8 = 100LL * *((unsigned __int8 *)&v12 + v5);
  v9 = 100LL * v6;
  *(_OWORD *)(v8 + v7 + 4) = *(_OWORD *)(v9 + v7 + 4);
  *(_OWORD *)(v8 + v7 + 20) = *(_OWORD *)(v9 + v7 + 20);
  *(_OWORD *)(v8 + v7 + 36) = *(_OWORD *)(v9 + v7 + 36);
  *(_OWORD *)(v8 + v7 + 52) = *(_OWORD *)(v9 + v7 + 52);
  *(_OWORD *)(v8 + v7 + 68) = *(_OWORD *)(v9 + v7 + 68);
  *(_OWORD *)(v8 + v7 + 84) = *(_OWORD *)(v9 + v7 + 84);
  *(_DWORD *)(v8 + v7 + 100) = *(_DWORD *)(v9 + v7 + 100);
  *a2 = *(_QWORD *)(a1 + 24) + 4LL + v8;
  JUMPOUT(0x1400A9087LL);
}
