/*
 * XREFs of sub_1401873E4 @ 0x1401873E4
 * Callers:
 *     sub_140062EFC @ 0x140062EFC (sub_140062EFC.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140056088 @ 0x140056088 (sub_140056088.c)
 *     sub_140067EAC @ 0x140067EAC (sub_140067EAC.c)
 *     sub_1400C3810 @ 0x1400C3810 (sub_1400C3810.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 */

__int64 __fastcall sub_1401873E4(__int64 a1, __int64 a2, _QWORD *a3)
{
  _DWORD *v4; // rbx
  size_t v6; // r12
  __int64 v7; // rdi
  unsigned __int16 v8; // r15
  __int64 v9; // rax
  _DWORD *v10; // r14
  int v11; // esi
  _DWORD Dst[10]; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v14; // [rsp+88h] [rbp+Fh]
  int v15; // [rsp+E8h] [rbp+6Fh] BYREF
  _QWORD *v16; // [rsp+F0h] [rbp+77h]
  int v17; // [rsp+F8h] [rbp+7Fh]

  v16 = a3;
  v4 = *(_DWORD **)(a2 + 24);
  v6 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  memset_0(Dst, 0, 0x40uLL);
  v7 = 0LL;
  v8 = 0;
  v17 = 0;
  *a3 = 0LL;
  if ( !sub_140056088(a1) )
  {
    v15 = -1073741637;
    goto LABEL_19;
  }
  if ( v4 && v6 >= 0x20 )
  {
    v9 = sub_1400143E0(64LL, 64LL, 1179476306LL, *(_QWORD *)(a1 + 8));
    v10 = (_DWORD *)v9;
    if ( !v9 )
    {
      v15 = -1073741670;
      goto LABEL_19;
    }
    Dst[0] = 10;
    v14 = v14 & 0xFFFFFF00 | 0xD3;
    v15 = sub_140187D84(a1, v9, 0, 64, (__int64)Dst);
    v11 = v15;
    if ( v15 >= 0 )
    {
      memset_0(v4, 0, v6);
      *(_WORD *)v4 = 1;
      v4[1] = 32;
      if ( *(_BYTE *)v10 )
      {
        if ( *(_BYTE *)v10 == 1 )
        {
          v4[2] = 2;
        }
        else if ( *(_BYTE *)v10 == 2 )
        {
          v4[2] = 3;
        }
        else
        {
          v4[2] = 4;
        }
      }
      else
      {
        v4[2] = 1;
      }
      v4[3] = v10[3];
      v4[4] = v10[4];
      v4[5] = v10[7];
      v4[6] = v10[8];
      *v16 = 32LL;
    }
    ExFreePoolWithTag(v10, 0x464D6152u);
    v8 = v17;
  }
  else
  {
    v11 = -1073741789;
    v15 = -1073741789;
  }
  if ( v11 >= 0 )
  {
LABEL_20:
    v7 = (__int64)v4;
    goto LABEL_21;
  }
LABEL_19:
  sub_140067EAC(v8, &v15);
  v11 = v15;
  if ( v15 >= 0 )
    goto LABEL_20;
LABEL_21:
  sub_1400C3810(a1, v7, v8, v11);
  return (unsigned int)v11;
}
