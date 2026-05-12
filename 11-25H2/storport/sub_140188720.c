/*
 * XREFs of sub_140188720 @ 0x140188720
 * Callers:
 *     sub_140063854 @ 0x140063854 (sub_140063854.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140056088 @ 0x140056088 (sub_140056088.c)
 *     sub_140067EAC @ 0x140067EAC (sub_140067EAC.c)
 *     sub_1400C1540 @ 0x1400C1540 (sub_1400C1540.c)
 *     sub_1400C4610 @ 0x1400C4610 (sub_1400C4610.c)
 *     sub_1400C4F10 @ 0x1400C4F10 (sub_1400C4F10.c)
 *     sub_1400C4FBC @ 0x1400C4FBC (sub_1400C4FBC.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 */

__int64 __fastcall sub_140188720(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdi
  char v7; // r12
  unsigned __int16 v8; // r14
  _WORD *v9; // rax
  _WORD *v10; // rbx
  int v11; // eax
  __int64 v12; // r9
  int v13; // r15d
  __int64 v15; // [rsp+28h] [rbp-51h]
  int v16; // [rsp+40h] [rbp-39h]
  __int64 v17; // [rsp+48h] [rbp-31h]
  _OWORD Dst[7]; // [rsp+60h] [rbp-19h] BYREF
  int v19; // [rsp+E8h] [rbp+6Fh] BYREF
  int v20; // [rsp+F0h] [rbp+77h] BYREF

  v6 = 0LL;
  v7 = 0;
  memset_0(Dst, 0, 0x40uLL);
  *a3 = 0LL;
  v8 = 0;
  v20 = 0;
  if ( sub_140056088(a1) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 6160) + 36LL) == 1 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x50u )
      {
        v6 = *(_QWORD *)(a2 + 24) + 8LL;
        if ( *(_WORD *)v6 == 1
          && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 12LL) >= 0x48u
          && (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a2 + 24) + 16LL) - 1) <= 0xFFFDu
          && *(_WORD *)(*(_QWORD *)(a2 + 24) + 24LL) == 1
          && *(_WORD *)(*(_QWORD *)(a2 + 24) + 26LL) >= 0x38u
          && (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 24) + 28LL) - 1) <= 2 )
        {
          v7 = 1;
          v19 = sub_1400C4F10(a1);
          if ( v19 >= 0 )
          {
            v9 = (_WORD *)sub_1400143E0(64LL, 128LL, 1179476306LL, *(_QWORD *)(a1 + 8));
            v10 = v9;
            if ( v9 )
            {
              *v9 |= 2u;
              v11 = *(_DWORD *)(v6 + 20);
              switch ( v11 )
              {
                case 1:
                  *((_BYTE *)v10 + 64) = 0;
                  break;
                case 2:
                  *((_BYTE *)v10 + 64) = 1;
                  break;
                case 3:
                  *((_BYTE *)v10 + 64) = 2;
                  break;
              }
              *((_BYTE *)v10 + 65) = *(_BYTE *)(v6 + 24);
              *((_BYTE *)v10 + 66) = *(_BYTE *)(v6 + 25);
              *((_DWORD *)v10 + 17) = *(_DWORD *)(v6 + 28);
              *((_DWORD *)v10 + 18) = *(_DWORD *)(v6 + 32);
              *((_DWORD *)v10 + 19) = *(_DWORD *)(v6 + 36);
              *((_DWORD *)v10 + 20) = *(_DWORD *)(v6 + 40);
              *((_DWORD *)v10 + 21) = *(_DWORD *)(v6 + 44);
              *((_DWORD *)v10 + 22) = *(_DWORD *)(v6 + 48);
              *((_DWORD *)v10 + 23) = *(_DWORD *)(v6 + 52);
              *((_DWORD *)v10 + 24) = *(_DWORD *)(v6 + 56);
              sub_1400C1540((__int64)Dst, 0, *(unsigned __int16 *)(v6 + 8), 0, 0x80u);
              v19 = sub_140187D84(
                      a1,
                      v10,
                      0LL,
                      0x80u,
                      Dst,
                      v15,
                      2u,
                      v12,
                      (unsigned int)v12 & v16,
                      (_DWORD *)(v12 & v17),
                      &v20);
              v13 = v19;
              ExFreePoolWithTag(v10, 0x464D6152u);
              v8 = v20;
              if ( v13 >= 0 )
                goto LABEL_26;
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
LABEL_26:
    sub_1400C4FBC(a1);
  sub_1400C4610(a1, v6, v8, v13);
  return (unsigned int)v13;
}
