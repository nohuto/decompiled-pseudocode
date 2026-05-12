/*
 * XREFs of sub_140188EAC @ 0x140188EAC
 * Callers:
 *     sub_140063854 @ 0x140063854 (sub_140063854.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140056088 @ 0x140056088 (sub_140056088.c)
 *     sub_140067EAC @ 0x140067EAC (sub_140067EAC.c)
 *     sub_1400C1540 @ 0x1400C1540 (sub_1400C1540.c)
 *     sub_1400C1594 @ 0x1400C1594 (sub_1400C1594.c)
 *     sub_1400C485C @ 0x1400C485C (sub_1400C485C.c)
 *     sub_1400C4F10 @ 0x1400C4F10 (sub_1400C4F10.c)
 *     sub_1400C4FBC @ 0x1400C4FBC (sub_1400C4FBC.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 */

__int64 __fastcall sub_140188EAC(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdi
  char v7; // r12
  unsigned __int16 v8; // r15
  __int16 v9; // r10
  __int16 v10; // cx
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // eax
  _DWORD *v14; // r10
  int v15; // esi
  __int64 v17; // [rsp+28h] [rbp-51h]
  _OWORD Dst[7]; // [rsp+60h] [rbp-19h] BYREF
  int v19; // [rsp+E8h] [rbp+6Fh] BYREF
  int v20; // [rsp+F0h] [rbp+77h] BYREF

  v6 = 0LL;
  v7 = 0;
  memset_0(Dst, 0, 0x40uLL);
  v8 = 0;
  v20 = 0;
  *a3 = 0LL;
  if ( sub_140056088(a1) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 6160) + 36LL) == 1 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x88u )
      {
        v6 = *(_QWORD *)(a2 + 24) + 8LL;
        if ( *(_WORD *)v6 == 1
          && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 12LL) >= 0x80u
          && (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a2 + 24) + 16LL) - 1) <= 0xFFFDu
          && *(_WORD *)(*(_QWORD *)(a2 + 24) + 24LL) == 1
          && *(_WORD *)(*(_QWORD *)(a2 + 24) + 26LL) >= 0x70u
          && (v10 = *(_WORD *)(*(_QWORD *)(a2 + 24) + 28LL), (v10 & 3) != 0)
          && ((v10 & 2) == 0 || (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 24) + 60LL) - 1) <= 2) )
        {
          if ( (v10 & 1) != 0
            && *(_WORD *)(*(_QWORD *)(a2 + 24) + 30LL) == 1
            && *(_WORD *)(*(_QWORD *)(a2 + 24) + 32LL) == 1
            && *(_WORD *)(*(_QWORD *)(a2 + 24) + 34LL) == v9 )
          {
            sub_1400C1594(a1, 1, 3, 1u, (unsigned __int16 *)(*(_QWORD *)(a2 + 24) + 16LL));
          }
          v7 = 1;
          v19 = sub_1400C4F10(a1);
          if ( v19 >= 0 )
          {
            v11 = sub_1400143E0(64LL, 128LL, 1179476306LL, *(_QWORD *)(a1 + 8));
            v12 = v11;
            if ( v11 )
            {
              if ( (*(_BYTE *)(v6 + 20) & 1) != 0 )
              {
                *(_WORD *)v11 |= 1u;
                *(_WORD *)(v11 + 2) = *(_WORD *)(v6 + 22);
                *(_WORD *)(v11 + 4) = *(_WORD *)(v6 + 24);
                *(_BYTE *)(v11 + 6) = *(_BYTE *)(v6 + 26);
                *(_WORD *)(v11 + 8) = *(_WORD *)(v6 + 32);
                *(_WORD *)(v11 + 10) = *(_WORD *)(v6 + 36);
                *(_WORD *)(v11 + 12) = *(_WORD *)(v6 + 40);
                *(_WORD *)(v11 + 14) = *(_WORD *)(v6 + 44);
              }
              if ( (*(_BYTE *)(v6 + 20) & 2) != 0 )
              {
                *(_WORD *)v11 |= 2u;
                v13 = *(_DWORD *)(v6 + 52);
                switch ( v13 )
                {
                  case 1:
                    *(_BYTE *)(v12 + 64) = 0;
                    break;
                  case 2:
                    *(_BYTE *)(v12 + 64) = 1;
                    break;
                  case 3:
                    *(_BYTE *)(v12 + 64) = 2;
                    break;
                }
                *(_BYTE *)(v12 + 65) = *(_BYTE *)(v6 + 56);
                *(_BYTE *)(v12 + 66) = *(_BYTE *)(v6 + 57);
                *(_DWORD *)(v12 + 68) = *(_DWORD *)(v6 + 60);
                *(_DWORD *)(v12 + 72) = *(_DWORD *)(v6 + 64);
                *(_DWORD *)(v12 + 76) = *(_DWORD *)(v6 + 68);
                *(_DWORD *)(v12 + 80) = *(_DWORD *)(v6 + 72);
                *(_DWORD *)(v12 + 84) = *(_DWORD *)(v6 + 76);
                *(_DWORD *)(v12 + 88) = *(_DWORD *)(v6 + 80);
                *(_DWORD *)(v12 + 92) = *(_DWORD *)(v6 + 84);
                *(_DWORD *)(v12 + 96) = *(_DWORD *)(v6 + 88);
              }
              if ( (*(_BYTE *)(v6 + 20) & 4) != 0 )
                *(_OWORD *)(v12 + 48) = *(_OWORD *)(v6 + 104);
              sub_1400C1540((__int64)Dst, 0, *(unsigned __int16 *)(v6 + 8), 0, 0x80u);
              v19 = sub_140187D84(a1, (void *)v12, 0LL, 0x80u, Dst, v17, 2u, (char)v14, (unsigned int)v14, v14, &v20);
              v15 = v19;
              ExFreePoolWithTag((PVOID)v12, 0x464D6152u);
              v8 = v20;
              if ( v15 >= 0 )
                goto LABEL_39;
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
  v15 = v19;
  if ( v7 )
LABEL_39:
    sub_1400C4FBC(a1);
  sub_1400C485C(a1, v6, v8, v15);
  return (unsigned int)v15;
}
