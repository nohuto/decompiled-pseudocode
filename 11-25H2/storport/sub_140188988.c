/*
 * XREFs of sub_140188988 @ 0x140188988
 * Callers:
 *     sub_140063854 @ 0x140063854 (sub_140063854.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140056088 @ 0x140056088 (sub_140056088.c)
 *     sub_140067EAC @ 0x140067EAC (sub_140067EAC.c)
 *     sub_1400C3D50 @ 0x1400C3D50 (sub_1400C3D50.c)
 *     sub_1400C4F10 @ 0x1400C4F10 (sub_1400C4F10.c)
 *     sub_1400C4FBC @ 0x1400C4FBC (sub_1400C4FBC.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 */

__int64 __fastcall sub_140188988(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdi
  char v7; // r15
  unsigned __int16 v8; // si
  _BYTE *v9; // rax
  void *v10; // r12
  int v11; // ebx
  __int64 v13; // [rsp+28h] [rbp-51h]
  _OWORD Dst[2]; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v15; // [rsp+88h] [rbp+Fh]
  int v16; // [rsp+E8h] [rbp+6Fh] BYREF
  int v17; // [rsp+F0h] [rbp+77h] BYREF

  v6 = 0LL;
  v7 = 0;
  memset_0(Dst, 0, 0x40uLL);
  v8 = 0;
  *a3 = 0LL;
  v17 = 0;
  if ( sub_140056088(a1) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x18u )
    {
      v6 = *(_QWORD *)(a2 + 24) + 8LL;
      if ( *(_WORD *)v6 == 1
        && *(_WORD *)(*(_QWORD *)(a2 + 24) + 10LL) >= 0x10u
        && (!*(_BYTE *)(*(_QWORD *)(a2 + 24) + 12LL) || *(_WORD *)(*(_QWORD *)(a2 + 24) + 16LL) >= 0x3Cu)
        && *(unsigned __int16 *)(*(_QWORD *)(a2 + 24) + 16LL) == 30
                                                               * (*(unsigned __int16 *)(*(_QWORD *)(a2 + 24) + 16LL)
                                                                / 0x1Eu)
        && (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a2 + 24) + 18LL) - 30) <= 0x582u )
      {
        v7 = 1;
        v16 = sub_1400C4F10(a1);
        if ( v16 >= 0 )
        {
          v9 = (_BYTE *)sub_1400143E0(64LL, 64LL, 1179476306LL, *(_QWORD *)(a1 + 8));
          v10 = v9;
          if ( v9 )
          {
            *v9 = *(_BYTE *)(v6 + 4) != 0;
            *((_WORD *)v9 + 16) = *(_WORD *)(v6 + 8);
            *((_WORD *)v9 + 17) = *(_WORD *)(v6 + 10);
            LODWORD(Dst[0]) = Dst[0] & 0xFFFFFF00 | 9;
            v15 = v15 & 0xFFFFFF00 | 0xD4;
            v16 = sub_140187D84(a1, v9, 0LL, 0x40u, Dst, v13, 2u, 0, 0, 0LL, &v17);
            v11 = v16;
            ExFreePoolWithTag(v10, 0x464D6152u);
            v8 = v17;
            if ( v11 >= 0 )
              goto LABEL_18;
          }
          else
          {
            v16 = -1073741670;
          }
        }
      }
      else
      {
        v16 = -1073741811;
      }
    }
    else
    {
      v16 = -1073741585;
    }
  }
  else
  {
    v16 = -1073741637;
  }
  sub_140067EAC(v8, &v16);
  v11 = v16;
  if ( v7 )
LABEL_18:
    sub_1400C4FBC(a1);
  sub_1400C3D50(a1, v6, v8, v11);
  return (unsigned int)v11;
}
