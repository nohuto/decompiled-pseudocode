/*
 * XREFs of sub_1401879D4 @ 0x1401879D4
 * Callers:
 *     sub_140062EFC @ 0x140062EFC (sub_140062EFC.c)
 * Callees:
 *     sub_140056088 @ 0x140056088 (sub_140056088.c)
 *     sub_140067EAC @ 0x140067EAC (sub_140067EAC.c)
 *     sub_1400C3BAC @ 0x1400C3BAC (sub_1400C3BAC.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 */

__int64 __fastcall sub_1401879D4(__int64 a1, __int64 a2, _QWORD *a3)
{
  _DWORD *v4; // r15
  size_t v6; // r12
  int v7; // edi
  int v8; // ecx
  int v9; // r9d
  int v10; // r14d
  int v11; // ebx
  unsigned int v12; // edi
  char v13; // al
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  _DWORD Dst[10]; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v19; // [rsp+88h] [rbp+Fh]
  int v20; // [rsp+E8h] [rbp+6Fh] BYREF
  int v21; // [rsp+F0h] [rbp+77h]
  unsigned int v22; // [rsp+F8h] [rbp+7Fh]

  v4 = *(_DWORD **)(a2 + 24);
  v6 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  memset_0(Dst, 0, 0x40uLL);
  v22 = 0;
  LOBYTE(v7) = 0;
  v21 = 0;
  *a3 = 0LL;
  LOBYTE(v10) = -1;
  if ( sub_140056088(a1) )
  {
    if ( v4 && v6 >= 0x10 )
    {
      Dst[0] = 10;
      v19 = v19 & 0xFFFFFF00 | 0xD1;
      v20 = sub_140187D84(v8, 0, 0, v9, (__int64)Dst);
      v11 = v20;
      if ( v20 >= 0 )
      {
        memset_0(v4, 0, v6);
        v12 = v22;
        v13 = v22;
        *(_WORD *)v4 = 1;
        v14 = v13 & 1;
        v7 = (v12 >> 1) & 1;
        v4[1] = 16;
        v4[2] = v14;
        v15 = *(_QWORD *)(a1 + 6160);
        if ( v14 != *(_DWORD *)(v15 + 36) )
          *(_DWORD *)(v15 + 36) = v14;
        v16 = *(_QWORD *)(a1 + 6160);
        if ( v7 != *(_DWORD *)(v16 + 32) )
          *(_DWORD *)(v16 + 32) = v7;
        *a3 = 16LL;
      }
      LOWORD(v9) = v21;
    }
    else
    {
      v11 = -1073741789;
      v20 = -1073741789;
    }
    if ( v11 >= 0 )
      goto LABEL_16;
  }
  else
  {
    v20 = -1073741637;
  }
  sub_140067EAC(v9, &v20);
  v11 = v20;
  if ( v20 >= 0 )
  {
LABEL_16:
    v10 = v4[2];
    goto LABEL_17;
  }
  LOBYTE(v7) = -1;
LABEL_17:
  sub_1400C3BAC(a1, v10, v7, v9, v11);
  return (unsigned int)v11;
}
