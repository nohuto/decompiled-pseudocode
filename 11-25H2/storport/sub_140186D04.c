/*
 * XREFs of sub_140186D04 @ 0x140186D04
 * Callers:
 *     sub_140062EFC @ 0x140062EFC (sub_140062EFC.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140056088 @ 0x140056088 (sub_140056088.c)
 *     sub_140067EAC @ 0x140067EAC (sub_140067EAC.c)
 *     sub_1400C2C00 @ 0x1400C2C00 (sub_1400C2C00.c)
 *     sub_1400C4F10 @ 0x1400C4F10 (sub_1400C4F10.c)
 *     sub_1400C4FBC @ 0x1400C4FBC (sub_1400C4FBC.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 */

__int64 __fastcall sub_140186D04(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r14
  __int16 v4; // bx
  _WORD *v5; // rdi
  _WORD *v7; // r12
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // r15d
  int v12; // ecx
  int v13; // edx
  unsigned int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // rdx
  char v17; // al
  __int64 v18; // r8
  unsigned __int64 Size; // [rsp+70h] [rbp-29h]
  _DWORD Dst[15]; // [rsp+80h] [rbp-19h] BYREF
  unsigned int v22; // [rsp+BCh] [rbp+23h]
  char v23; // [rsp+108h] [rbp+6Fh]
  int v25; // [rsp+118h] [rbp+7Fh] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  LOBYTE(v4) = 0;
  v5 = *(_WORD **)(a2 + 24);
  v7 = 0LL;
  Size = *(unsigned int *)(v3 + 8);
  memset_0(Dst, 0, 0x40uLL);
  v23 = 0;
  *a3 = 0LL;
  if ( sub_140056088(a1) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 6160) + 36LL) == 1 )
    {
      if ( *(_DWORD *)(v3 + 16) >= 0x18u )
      {
        v7 = v5 + 4;
        if ( v5[4] == 1 && *((_DWORD *)v5 + 3) >= 0x10u && (unsigned __int16)(v5[8] - 1) <= 0xFFFDu )
        {
          if ( !v5 || Size < 8 )
          {
            v25 = -1073741584;
            goto LABEL_34;
          }
          v23 = 1;
          v25 = sub_1400C4F10(a1);
          v8 = v25;
          if ( v25 >= 0 )
          {
            v9 = sub_1400143E0(64LL, 4096LL, 1179476306LL, *(_QWORD *)(a1 + 8));
            v10 = v9;
            if ( !v9 )
            {
              v25 = -1073741670;
              goto LABEL_34;
            }
            LOBYTE(v22) = 12;
            Dst[0] = Dst[0] & 0xFFFFFF00 | 0xD2;
            Dst[10] = 1024;
            v22 = v22 & 0xFF0000FF | ((unsigned __int16)v5[8] << 8);
            v25 = sub_140187D84(a1, v9, 0, 4096, (__int64)Dst);
            v8 = v25;
            if ( v25 >= 0 )
            {
              v11 = 24 * (*(unsigned __int16 *)(v10 + 4) + *(unsigned __int16 *)(v10 + 6)) + 44;
              memset_0(v5, 0, Size);
              *v5 = 1;
              if ( Size >= v11 )
              {
                v12 = *(unsigned __int16 *)(v10 + 4);
                *v7 = v12;
                v13 = *(unsigned __int16 *)(v10 + 6);
                v5[5] = v13;
                *(_QWORD *)(v5 + 6) = *(_QWORD *)(v10 + 8);
                *(_QWORD *)(v5 + 10) = *(_QWORD *)(v10 + 16);
                v5[14] = *(_WORD *)(v10 + 24);
                v5[15] = *(_WORD *)(v10 + 26);
                v5[16] = *(_WORD *)(v10 + 28);
                v5[17] = *(_WORD *)(v10 + 30);
                if ( (*(_BYTE *)(v10 + 32) & 1) != 0 )
                  *((_BYTE *)v5 + 36) |= 1u;
                if ( (*(_BYTE *)(v10 + 32) & 2) != 0 )
                  *((_BYTE *)v5 + 36) |= 2u;
                if ( (*(_BYTE *)(v10 + 32) & 4) != 0 )
                  *((_BYTE *)v5 + 36) |= 4u;
                if ( (*(_BYTE *)(v10 + 32) & 8) != 0 )
                  *((_BYTE *)v5 + 36) |= 8u;
                v14 = 0;
                if ( v13 + v12 )
                {
                  do
                  {
                    v15 = v14;
                    v16 = 3LL * v14;
                    v5[4 * v16 + 22] = 1;
                    *(_DWORD *)&v5[12 * v14 + 24] = 24;
                    v17 = -(v14++ < (unsigned __int16)v5[4]);
                    LOBYTE(v5[4 * v16 + 26]) = v17 + 2;
                    *(_QWORD *)&v5[4 * v16 + 30] = *(_QWORD *)(v10 + 8 * v15 + 40);
                  }
                  while ( v14 < (unsigned __int16)v5[4] + (unsigned int)(unsigned __int16)v5[5] );
                }
                *a3 = v11;
              }
              else
              {
                v8 = -2147483643;
                v25 = -2147483643;
                *a3 = 8LL;
              }
              *((_DWORD *)v5 + 1) = v11;
            }
            ExFreePoolWithTag((PVOID)v10, 0x464D6152u);
          }
        }
        else
        {
          v8 = -1073741811;
          v25 = -1073741811;
        }
        if ( v8 >= 0 )
          goto LABEL_35;
        goto LABEL_34;
      }
      v25 = -1073741585;
    }
    else
    {
      v25 = -1073741436;
    }
  }
  else
  {
    v25 = -1073741637;
  }
LABEL_34:
  sub_140067EAC(0, &v25);
  v8 = v25;
LABEL_35:
  if ( v23 )
    sub_1400C4FBC(a1);
  v18 = 0LL;
  if ( v8 >= 0 )
    v18 = (__int64)v5;
  if ( v7 )
    v4 = v7[4];
  sub_1400C2C00(a1, v4, v18, 0, v8);
  return (unsigned int)v8;
}
