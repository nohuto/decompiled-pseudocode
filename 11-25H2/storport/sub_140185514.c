/*
 * XREFs of sub_140185514 @ 0x140185514
 * Callers:
 *     sub_14005B208 @ 0x14005B208 (sub_14005B208.c)
 * Callees:
 *     sub_140056088 @ 0x140056088 (sub_140056088.c)
 *     sub_1400C4F10 @ 0x1400C4F10 (sub_1400C4F10.c)
 *     sub_1400C4FBC @ 0x1400C4FBC (sub_1400C4FBC.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 */

__int64 __fastcall sub_140185514(__int64 a1, int a2, unsigned __int16 a3)
{
  __int64 v6; // rcx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // esi
  _DWORD v13[15]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v14; // [rsp+9Ch] [rbp-Ch]

  memset_0(v13, 0, 0x40uLL);
  if ( !sub_140056088(a1) )
    return 3221225659LL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 6160) + 36LL) != 1 )
    return 3221225860LL;
  v8 = a2 - 1;
  if ( !v8 )
  {
    v11 = 0;
    goto LABEL_12;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v11 = 0x10000;
    goto LABEL_12;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v11 = 0x20000;
    goto LABEL_12;
  }
  if ( v10 != 1 )
    return 3221225659LL;
  v11 = 196608;
LABEL_12:
  v12 = sub_1400C4F10(v6);
  if ( v12 >= 0 )
  {
    LOBYTE(v14) = 4;
    v13[0] = 208;
    v14 = v14 & 0xF00000FF | ((v11 | a3) << 8);
    v12 = sub_140187D84(a1, 0, 0, 0, (__int64)v13);
  }
  sub_1400C4FBC(a1);
  return (unsigned int)v12;
}
