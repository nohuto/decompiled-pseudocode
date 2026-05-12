/*
 * XREFs of sub_140188328 @ 0x140188328
 * Callers:
 *     sub_140063854 @ 0x140063854 (sub_140063854.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140056088 @ 0x140056088 (sub_140056088.c)
 *     sub_140067EAC @ 0x140067EAC (sub_140067EAC.c)
 *     sub_1400C4254 @ 0x1400C4254 (sub_1400C4254.c)
 *     sub_1400C4F10 @ 0x1400C4F10 (sub_1400C4F10.c)
 *     sub_1400C4FBC @ 0x1400C4FBC (sub_1400C4FBC.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 */

__int64 __fastcall sub_140188328(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdi
  char v7; // r12
  unsigned __int16 v8; // si
  __int64 v9; // rcx
  ULONG v10; // ebx
  _BYTE *v11; // r15
  __int64 v12; // rdx
  int v13; // ebx
  __int64 v15; // [rsp+28h] [rbp-41h]
  _OWORD Dst[2]; // [rsp+60h] [rbp-9h] BYREF
  ULONG v17; // [rsp+88h] [rbp+1Fh]
  char v18; // [rsp+9Ch] [rbp+33h]
  int v19; // [rsp+D8h] [rbp+6Fh] BYREF
  int v20; // [rsp+E0h] [rbp+77h] BYREF

  v6 = 0LL;
  v7 = 0;
  memset_0(Dst, 0, 0x40uLL);
  v8 = 0;
  *a3 = 0LL;
  v20 = 0;
  if ( sub_140056088(a1) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 6160) + 36LL) == 1 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x28u )
      {
        v6 = *(_QWORD *)(a2 + 24) + 8LL;
        if ( *(_WORD *)v6 == 1
          && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 12LL) >= 0x20u
          && (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 24) + 20LL) - 1) <= 0xFE )
        {
          v7 = 1;
          v19 = sub_1400C4F10(v9);
          if ( v19 >= 0 )
          {
            v10 = 4 * *(_DWORD *)(v6 + 12) + 4;
            v11 = (_BYTE *)sub_1400143E0(64LL, v10, 1179476306LL, *(_QWORD *)(a1 + 8));
            if ( v11 )
            {
              v12 = 0LL;
              for ( *v11 = *(_BYTE *)(v6 + 12); (unsigned int)v12 < *(_DWORD *)(v6 + 12); v12 = (unsigned int)(v12 + 1) )
              {
                v11[4 * v12 + 4] = *(_BYTE *)(v6 + 16LL * (unsigned int)v12 + 28);
                if ( (*(_DWORD *)(v6 + 16LL * (unsigned int)v12 + 24) & 1) != 0 )
                  *(_DWORD *)&v11[4 * v12 + 4] |= 0x100u;
              }
              v18 = 7;
              LODWORD(Dst[0]) = Dst[0] & 0xFFFFFF00 | 0xD1;
              v17 = v10 >> 2;
              v19 = sub_140187D84(a1, v11, 0LL, v10, Dst, v15, 2u, 0, 0, 0LL, &v20);
              v13 = v19;
              ExFreePoolWithTag(v11, 0x464D6152u);
              v8 = v20;
              if ( v13 >= 0 )
                goto LABEL_21;
            }
            else
            {
              v19 = -1073741670;
            }
          }
        }
        else
        {
          v19 = -1073741811;
        }
      }
      else
      {
        v19 = -1073741585;
      }
    }
    else
    {
      v19 = -1073741436;
    }
  }
  else
  {
    v19 = -1073741637;
  }
  sub_140067EAC(v8, &v19);
  v13 = v19;
  if ( v7 )
LABEL_21:
    sub_1400C4FBC(a1);
  sub_1400C4254(a1, v6, v8, v13);
  return (unsigned int)v13;
}
