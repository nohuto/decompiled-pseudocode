/*
 * XREFs of sub_1401867AC @ 0x1401867AC
 * Callers:
 *     sub_140062EFC @ 0x140062EFC (sub_140062EFC.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140056088 @ 0x140056088 (sub_140056088.c)
 *     sub_140067EAC @ 0x140067EAC (sub_140067EAC.c)
 *     sub_1400C14AC @ 0x1400C14AC (sub_1400C14AC.c)
 *     sub_1400C27F8 @ 0x1400C27F8 (sub_1400C27F8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 */

__int64 __fastcall sub_1401867AC(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int16 v4; // bx
  _WORD *v5; // rsi
  _WORD *v7; // r15
  size_t v8; // r13
  unsigned int v9; // r14d
  unsigned __int16 v10; // r12
  _QWORD *v11; // r14
  int v12; // edi
  unsigned int v13; // r12d
  _QWORD *v14; // rax
  __int64 v15; // rax
  unsigned int v16; // edx
  unsigned int v17; // eax
  __int64 v18; // rcx
  _QWORD *v19; // rcx
  int v20; // r8d
  int v22; // [rsp+60h] [rbp-59h] BYREF
  int v23; // [rsp+64h] [rbp-55h]
  _QWORD *v24; // [rsp+68h] [rbp-51h]
  __int64 v25; // [rsp+70h] [rbp-49h]
  _BYTE Dst[64]; // [rsp+80h] [rbp-39h] BYREF
  __int64 v27; // [rsp+C0h] [rbp+7h]
  __int64 v28; // [rsp+C8h] [rbp+Fh]

  v3 = *(_QWORD *)(a2 + 184);
  LOBYTE(v4) = 0;
  v5 = *(_WORD **)(a2 + 24);
  v24 = a3;
  v25 = a1;
  v7 = 0LL;
  v8 = *(unsigned int *)(v3 + 8);
  v9 = *(_DWORD *)(v3 + 16);
  v27 = 0x464406529CB5FA26LL;
  v28 = 0xF5F578400403E87LL;
  memset_0(Dst, 0, sizeof(Dst));
  v10 = 0;
  v23 = 0;
  *v24 = 0LL;
  if ( !sub_140056088(a1) )
  {
    v22 = -1073741637;
    goto LABEL_30;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 6160) + 36LL) != 1 )
  {
    v22 = -1073741436;
    goto LABEL_30;
  }
  if ( v9 < 0x10 )
  {
    v22 = -1073741585;
    goto LABEL_30;
  }
  v7 = v5 + 4;
  if ( v5[4] != 1 || *((_DWORD *)v5 + 3) < 0x10u || (unsigned __int16)(v5[10] - 1) > 0xFFFDu )
  {
    v12 = -1073741811;
    v22 = -1073741811;
LABEL_29:
    if ( v12 >= 0 )
      goto LABEL_32;
    goto LABEL_30;
  }
  if ( v5 && v8 >= 0x28 )
  {
    v11 = (_QWORD *)sub_1400143E0(64LL, 0x2000LL, 1179476306LL, *(_QWORD *)(a1 + 8));
    if ( !v11 )
    {
      v22 = -1073741670;
      goto LABEL_30;
    }
    sub_1400C14AC((__int64)Dst, v5[10], 209, *((_DWORD *)v5 + 4) & 1, (*((_DWORD *)v5 + 4) & 2) == 0, 0x2000u);
    v22 = sub_140187D84(a1, (_DWORD)v11, 0, 0x2000, (__int64)Dst);
    v12 = v22;
    if ( v22 < 0 )
      goto LABEL_26;
    v13 = 8 * *((unsigned __int16 *)v11 + 1) + 28;
    memset_0(v5, 0, v8);
    *v5 = 1;
    if ( v8 >= v13 )
    {
      if ( *(_BYTE *)v11 == 1 )
      {
        v15 = v11[1022] - v27;
        if ( !v15 )
          v15 = v11[1023] - v28;
        if ( !v15 )
        {
          v16 = 0;
          v5[2] = *((_WORD *)v11 + 2);
          v5[3] = *((_WORD *)v11 + 3);
          *(_BYTE *)v7 = *(_BYTE *)v11;
          *((_BYTE *)v5 + 9) = *((_BYTE *)v11 + 1);
          *((_QWORD *)v5 + 2) = v11[1];
          LOWORD(v17) = *((_WORD *)v11 + 1);
          if ( (_WORD)v17 )
          {
            do
            {
              v18 = v16++;
              *(_DWORD *)&v5[4 * v18 + 14] = 1048577;
              LOBYTE(v5[4 * v18 + 16]) = *((_BYTE *)v11 + 4 * v18 + 32);
              HIBYTE(v5[4 * v18 + 16]) = *((_BYTE *)v11 + 4 * v18 + 33);
              LOBYTE(v5[4 * v18 + 17]) = *((_BYTE *)v11 + 4 * v18 + 34);
              HIBYTE(v5[4 * v18 + 17]) = *((_BYTE *)v11 + 4 * v18 + 35);
              v17 = *((unsigned __int16 *)v11 + 1);
            }
            while ( v16 < v17 );
          }
          v19 = v24;
          *((_DWORD *)v5 + 6) = (unsigned __int16)v17;
          v5[1] = v13;
          *v19 = (unsigned __int16)v13;
          goto LABEL_26;
        }
      }
      v12 = -1073741668;
    }
    else
    {
      v14 = v24;
      v12 = -2147483643;
      v5[1] = v13;
      *v14 = 4LL;
    }
    v22 = v12;
LABEL_26:
    ExFreePoolWithTag(v11, 0x464D6152u);
    v10 = v23;
    goto LABEL_29;
  }
  v22 = -1073741820;
LABEL_30:
  sub_140067EAC(v10, &v22);
  v12 = v22;
  if ( v22 < 0 )
    v5 = 0LL;
LABEL_32:
  if ( v7 )
  {
    v20 = *((_DWORD *)v7 + 2);
    v4 = v7[6];
  }
  else
  {
    LOBYTE(v20) = 0;
  }
  sub_1400C27F8(v25, v4, v20, (__int64)v5, v10, v12);
  return (unsigned int)v12;
}
