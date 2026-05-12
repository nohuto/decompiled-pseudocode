/*
 * XREFs of sub_14018852C @ 0x14018852C
 * Callers:
 *     sub_140063854 @ 0x140063854 (sub_140063854.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140056088 @ 0x140056088 (sub_140056088.c)
 *     sub_140067EAC @ 0x140067EAC (sub_140067EAC.c)
 *     sub_1400C4428 @ 0x1400C4428 (sub_1400C4428.c)
 *     sub_1400C4F10 @ 0x1400C4F10 (sub_1400C4F10.c)
 *     sub_1400C4FBC @ 0x1400C4FBC (sub_1400C4FBC.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 */

__int64 __fastcall sub_14018852C(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdi
  char v7; // r15
  unsigned __int16 v8; // si
  __int64 v9; // rcx
  _BYTE *v10; // r12
  __int16 v11; // ax
  int v12; // ebx
  __int64 v14; // [rsp+28h] [rbp-51h]
  _OWORD Dst[2]; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+Fh]
  int v17; // [rsp+8Ch] [rbp+13h]
  int v18; // [rsp+E8h] [rbp+6Fh] BYREF
  int v19; // [rsp+F0h] [rbp+77h] BYREF

  v6 = 0LL;
  v7 = 0;
  memset_0(Dst, 0, 0x40uLL);
  v8 = 0;
  *a3 = 0LL;
  v19 = 0;
  if ( sub_140056088(a1) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x28u )
    {
      v6 = *(_QWORD *)(a2 + 24) + 8LL;
      if ( *(_WORD *)v6 == 1
        && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 12LL) >= 0x20u
        && *(_WORD *)(*(_QWORD *)(a2 + 24) + 24LL) == 1
        && *(_WORD *)(*(_QWORD *)(a2 + 24) + 26LL) >= 0x10u
        && (*(_BYTE *)(*(_QWORD *)(a2 + 24) + 28LL) & 1) != 0 )
      {
        v7 = 1;
        v18 = sub_1400C4F10(v9);
        if ( v18 >= 0 )
        {
          v10 = (_BYTE *)sub_1400143E0(64LL, 512LL, 1179476306LL, *(_QWORD *)(a1 + 8));
          if ( v10 )
          {
            v11 = *(_WORD *)(v6 + 22);
            v17 |= 1u;
            *(_WORD *)v10 = v11;
            v10[2] = *(_BYTE *)(v6 + 24);
            v10[3] = *(_BYTE *)(v6 + 25);
            v10[4] = *(_BYTE *)(v6 + 26);
            v10[5] = *(_BYTE *)(v6 + 27);
            LODWORD(Dst[0]) = Dst[0] & 0xFFFFFF00 | 9;
            v16 = v16 & 0xFFFFFF00 | 0xD2;
            v18 = sub_140187D84(a1, v10, 0LL, 0x200u, Dst, v14, 2u, 0, 0, 0LL, &v19);
            v12 = v18;
            ExFreePoolWithTag(v10, 0x464D6152u);
            v8 = v19;
            if ( v12 >= 0 )
              goto LABEL_17;
          }
          else
          {
            v18 = -1073741670;
          }
        }
      }
      else
      {
        v18 = -1073741811;
      }
    }
    else
    {
      v18 = -1073741585;
    }
  }
  else
  {
    v18 = -1073741637;
  }
  sub_140067EAC(v8, &v18);
  v12 = v18;
  if ( v7 )
LABEL_17:
    sub_1400C4FBC(a1);
  sub_1400C4428(a1, v6, v8, v12);
  return (unsigned int)v12;
}
