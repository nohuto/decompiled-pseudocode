/*
 * XREFs of sub_140186AFC @ 0x140186AFC
 * Callers:
 *     sub_140062EFC @ 0x140062EFC (sub_140062EFC.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140056088 @ 0x140056088 (sub_140056088.c)
 *     sub_140067EAC @ 0x140067EAC (sub_140067EAC.c)
 *     sub_1400C2A38 @ 0x1400C2A38 (sub_1400C2A38.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 */

__int64 __fastcall sub_140186AFC(__int64 a1, __int64 a2, _QWORD *a3)
{
  _DWORD *v4; // r14
  size_t v6; // r12
  __int64 v7; // rdi
  unsigned __int16 v8; // r15
  __int64 v9; // rax
  unsigned __int16 *v10; // rsi
  int v11; // ebx
  unsigned int v12; // eax
  _DWORD Dst[10]; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v15; // [rsp+88h] [rbp+Fh]
  int v16; // [rsp+E8h] [rbp+6Fh] BYREF
  _QWORD *v17; // [rsp+F0h] [rbp+77h]
  int v18; // [rsp+F8h] [rbp+7Fh]

  v17 = a3;
  v4 = *(_DWORD **)(a2 + 24);
  v6 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  memset_0(Dst, 0, 0x40uLL);
  v7 = 0LL;
  v8 = 0;
  v18 = 0;
  *a3 = 0LL;
  if ( !sub_140056088(a1) )
  {
    v16 = -1073741637;
    goto LABEL_18;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 6160) + 36LL) != 1 )
  {
    v16 = -1073741436;
    goto LABEL_18;
  }
  if ( v4 && v6 >= 0x10 )
  {
    v9 = sub_1400143E0(64LL, 64LL, 1179476306LL, *(_QWORD *)(a1 + 8));
    v10 = (unsigned __int16 *)v9;
    if ( !v9 )
    {
      v16 = -1073741670;
      goto LABEL_18;
    }
    Dst[0] = 10;
    v15 = v15 & 0xFFFFFF00 | 0xD4;
    v16 = sub_140187D84(a1, v9, 0, 64, (__int64)Dst);
    v11 = v16;
    if ( v16 >= 0 )
    {
      v12 = v10[16];
      if ( v12 >= 0x3C && v12 == 30 * (v12 / 0x1E) && (unsigned __int16)(v10[17] - 30) <= 0x582u )
      {
        memset_0(v4, 0, v6);
        *v4 = 1048577;
        *((_BYTE *)v4 + 4) = *(_BYTE *)v10 != 0;
        *((_WORD *)v4 + 4) = v10[16];
        *((_WORD *)v4 + 5) = v10[17];
        *v17 = 16LL;
      }
      else
      {
        v11 = -1073741668;
        v16 = -1073741668;
      }
    }
    ExFreePoolWithTag(v10, 0x464D6152u);
    v8 = v18;
  }
  else
  {
    v11 = -1073741584;
    v16 = -1073741584;
  }
  if ( v11 >= 0 )
  {
LABEL_19:
    v7 = (__int64)v4;
    goto LABEL_20;
  }
LABEL_18:
  sub_140067EAC(v8, &v16);
  v11 = v16;
  if ( v16 >= 0 )
    goto LABEL_19;
LABEL_20:
  sub_1400C2A38(a1, v7, v8, v11);
  return (unsigned int)v11;
}
