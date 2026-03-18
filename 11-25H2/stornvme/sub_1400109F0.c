/*
 * XREFs of sub_1400109F0 @ 0x1400109F0
 * Callers:
 *     sub_14000DBA0 @ 0x14000DBA0 (sub_14000DBA0.c)
 *     sub_140019F10 @ 0x140019F10 (sub_140019F10.c)
 * Callees:
 *     sub_1400069C0 @ 0x1400069C0 (sub_1400069C0.c)
 *     sub_140007D80 @ 0x140007D80 (sub_140007D80.c)
 *     sub_140020820 @ 0x140020820 (sub_140020820.c)
 */

char __fastcall sub_1400109F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int128 v4; // rax
  unsigned int v5; // edi
  __int64 v6; // rbp
  int v8; // esi
  unsigned __int64 v9; // r9
  char v10; // cl
  unsigned int v11; // eax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rsi
  unsigned int v15; // r10d
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r9
  __int64 v18; // r9
  unsigned int v19; // eax
  signed __int32 v21[8]; // [rsp+0h] [rbp-38h] BYREF

  *((_QWORD *)&v4 + 1) = a2;
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 1560);
  if ( (*(_DWORD *)(a1 + 4336) & 2) == 0 )
    goto LABEL_7;
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 3748), 5u);
  v8 = 0;
  while ( (*(_DWORD *)(a1 + 3748) & 0x80u) != 0 )
  {
    StorPortExtendedFunction(81LL, a1, 1000LL, a4);
    if ( (unsigned int)++v8 >= 0x3E8 )
      goto LABEL_6;
  }
  if ( !(unsigned __int8)sub_140020820(a1) )
LABEL_6:
    *(_DWORD *)(a1 + 4056) |= 0x40000u;
LABEL_7:
  v9 = *(_QWORD *)(a1 + 3720);
  if ( v9 )
    sub_1400069C0(a1, 0, 0, *(_DWORD *)v9, v9 + 8, *(_DWORD *)(v9 + 4));
  v10 = *(_BYTE *)(a1 + 3728);
  if ( (v10 & 3) == 3 )
    *(_BYTE *)(a1 + 3728) = v10 | 4;
  v11 = *(_DWORD *)(v6 + 88);
  if ( v11 )
  {
    a3 = v11;
    v9 = 0x346DC5D63886594BLL;
    v12 = 10000 * (v11 / 0x2710uLL);
    v13 = v12 + 10000;
    if ( v11 == v12 )
      v13 = v11;
    v4 = v13 * (unsigned __int128)0x346DC5D63886594BuLL;
    v14 = *((_QWORD *)&v4 + 1) >> 11;
  }
  else
  {
    LODWORD(v14) = 500;
  }
  v15 = *(unsigned __int8 *)(a1 + 47);
  if ( (_BYTE)v15 )
  {
    a3 = (unsigned int)v14;
    v16 = 100 * ((unsigned int)v14 / 0x64uLL);
    v17 = v16 + 100;
    if ( (unsigned int)v14 == v16 )
      v17 = (unsigned int)v14;
    *((_QWORD *)&v4 + 1) = (v17 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
    LODWORD(v4) = *(unsigned __int8 *)(a1 + 47);
    v9 = v17 / 0x64;
    if ( (unsigned int)v9 > v15 )
      LODWORD(v4) = v9;
    LODWORD(v14) = 100 * v4;
  }
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 24) & 0xFFFFFDFA | 4;
  sub_140007D80(a1, *((__int64 *)&v4 + 1), a3, v9);
  v19 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) & 0xFFFF3FFF | 0x4000;
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) = v19;
  _InterlockedOr(v21, 0);
  if ( !(_DWORD)v14 )
    goto LABEL_27;
  while ( 1 )
  {
    LOBYTE(v19) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL) & 0xC;
    if ( (_BYTE)v19 == 8 )
      break;
    LOBYTE(v19) = StorPortExtendedFunction(81LL, a1, 10000LL, v18);
    if ( ++v5 >= (unsigned int)v14 )
      goto LABEL_27;
  }
  if ( v5 >= (unsigned int)v14 )
LABEL_27:
    *(_DWORD *)(a1 + 24) |= 0x200000u;
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 5u);
  return v19;
}
