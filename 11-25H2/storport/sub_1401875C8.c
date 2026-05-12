/*
 * XREFs of sub_1401875C8 @ 0x1401875C8
 * Callers:
 *     sub_140062EFC @ 0x140062EFC (sub_140062EFC.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140056088 @ 0x140056088 (sub_140056088.c)
 *     sub_140067EAC @ 0x140067EAC (sub_140067EAC.c)
 *     sub_1400C39F8 @ 0x1400C39F8 (sub_1400C39F8.c)
 *     sub_1400C4F10 @ 0x1400C4F10 (sub_1400C4F10.c)
 *     sub_1400C4FBC @ 0x1400C4FBC (sub_1400C4FBC.c)
 *     memmove @ 0x14013C680 (memmove.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_140187C38 @ 0x140187C38 (sub_140187C38.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 */

__int64 __fastcall sub_1401875C8(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  _WORD *v5; // rdi
  char v8; // r15
  int v9; // eax
  int v10; // ebx
  int v11; // ebx
  __int64 v12; // rcx
  char v13; // cl
  int v14; // eax
  unsigned int v15; // r8d
  unsigned int v16; // eax
  __int64 v17; // r13
  unsigned __int64 v18; // r15
  unsigned int v19; // ebx
  unsigned int *v20; // r15
  __int64 v21; // rcx
  int v22; // edx
  int v23; // eax
  size_t v24; // r8
  unsigned int v26; // [rsp+68h] [rbp-31h]
  unsigned __int64 Size; // [rsp+70h] [rbp-29h]
  _DWORD Dst[10]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+Fh]
  int v30; // [rsp+B0h] [rbp+17h]
  unsigned int v31; // [rsp+B4h] [rbp+1Bh]
  unsigned int v32; // [rsp+BCh] [rbp+23h]
  char v33; // [rsp+108h] [rbp+6Fh]
  int v35; // [rsp+118h] [rbp+7Fh] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  v4 = 0LL;
  v5 = *(_WORD **)(a2 + 24);
  Size = *(unsigned int *)(v3 + 8);
  memset_0(Dst, 0, 0x40uLL);
  v33 = 0;
  v8 = 0;
  *a3 = 0LL;
  if ( sub_140056088((__int64)a1) )
  {
    if ( *(_DWORD *)(a1[770] + 36) != 1 )
    {
      v35 = -1073741436;
      goto LABEL_48;
    }
    if ( *(_DWORD *)(v3 + 16) < 0x28u )
    {
      v35 = -1073741585;
      goto LABEL_48;
    }
    if ( v5[4] == 1
      && *((_DWORD *)v5 + 3) >= 0x20u
      && (v9 = *((_DWORD *)v5 + 4)) != 0
      && v9 < 3
      && v5[10]
      && *((_DWORD *)v5 + 8) )
    {
      if ( !v5 )
      {
        v10 = -1073741811;
LABEL_15:
        v35 = v10;
        goto LABEL_48;
      }
      v35 = sub_140187C38();
      v11 = v35;
      if ( v35 >= 0 )
      {
        v12 = *(_QWORD *)(a1[770] + 40);
        if ( !v12 )
          goto LABEL_45;
        v13 = *(_BYTE *)(v12 + 2);
        if ( !v13 )
          goto LABEL_45;
        v14 = *((_DWORD *)v5 + 4);
        v15 = 1 << v13;
        if ( v14 == 1 )
        {
          v8 = *(_BYTE *)(a1[769] + 73);
        }
        else if ( v14 == 2 )
        {
          v8 = *(_BYTE *)(a1[769] + 74);
        }
        v16 = 4096 << v8;
        if ( !v15 || !v16 || v16 < v15 )
        {
LABEL_45:
          v10 = -1073741668;
          goto LABEL_15;
        }
        v17 = v16 / v15;
        if ( *((_QWORD *)v5 + 3) % (unsigned __int64)(unsigned int)(32 * v17) )
        {
          v35 = -1073741584;
          goto LABEL_48;
        }
        v26 = *((_DWORD *)v5 + 8);
        if ( v26 % (unsigned int)v17 )
        {
          v35 = -1073741583;
          goto LABEL_48;
        }
        v18 = ((unsigned __int64)(v26 / (unsigned int)v17) + 7) >> 3;
        if ( Size < (unsigned int)(v18 + 20) )
        {
          v35 = -1073741789;
          goto LABEL_48;
        }
        v33 = 1;
        v35 = sub_1400C4F10((__int64)a1);
        v11 = v35;
        if ( v35 >= 0 )
        {
          v19 = v18 + 4;
          v20 = (unsigned int *)sub_1400143E0(64LL, (unsigned int)(v18 + 4), 1179476306LL, a1[1]);
          if ( !v20 )
          {
            v35 = -1073741670;
            goto LABEL_48;
          }
          v21 = *((_QWORD *)v5 + 3);
          v22 = *((_DWORD *)v5 + 4);
          Dst[0] = Dst[0] & 0xFFFFFF00 | 0xD2;
          Dst[1] = (unsigned __int16)v5[10];
          v23 = *((_DWORD *)v5 + 8) - 1;
          v29 = v21;
          v30 = v23;
          v31 = v19 >> 2;
          LOBYTE(v32) = 9;
          if ( v22 == 1 )
          {
            v32 &= 0xFFFFF0FF;
          }
          else if ( v22 == 2 )
          {
            v32 = v32 & 0xFFFFF0FF | 0x100;
          }
          v35 = sub_140187D84((_DWORD)a1, (_DWORD)v20, 0, v19, (__int64)Dst);
          v11 = v35;
          if ( v35 >= 0 )
          {
            memset_0(v5, 0, Size);
            if ( (_DWORD)v17 * 8 * *v20 == 8 * v17 * ((8 * v17 + (unsigned __int64)v26 - 1) / (8 * v17)) )
            {
              *v5 = 1;
              *((_DWORD *)v5 + 2) = 1;
              v24 = *v20;
              *((_DWORD *)v5 + 4) = *v20;
              *((_DWORD *)v5 + 1) = 20;
              memmove(v5 + 10, v20 + 1, v24);
              *((_DWORD *)v5 + 1) += *((_DWORD *)v5 + 4);
            }
            else
            {
              v11 = -1073741668;
              v35 = -1073741668;
            }
            *a3 = *((unsigned int *)v5 + 1);
          }
          ExFreePoolWithTag(v20, 0x464D6152u);
        }
      }
    }
    else
    {
      v11 = -1073741811;
      v35 = -1073741811;
    }
    if ( v11 >= 0 )
      goto LABEL_49;
    goto LABEL_48;
  }
  v35 = -1073741637;
LABEL_48:
  sub_140067EAC(0, &v35);
  v11 = v35;
LABEL_49:
  if ( v33 )
    sub_1400C4FBC((__int64)a1);
  if ( v11 >= 0 )
    v4 = (__int64)v5;
  sub_1400C39F8((__int64)a1, v4, 0, v11);
  return (unsigned int)v11;
}
