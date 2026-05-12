/*
 * XREFs of sub_140185648 @ 0x140185648
 * Callers:
 *     sub_14005B648 @ 0x14005B648 (sub_14005B648.c)
 * Callees:
 *     sub_140056088 @ 0x140056088 (sub_140056088.c)
 *     sub_1400C4F10 @ 0x1400C4F10 (sub_1400C4F10.c)
 *     sub_1400C4FBC @ 0x1400C4FBC (sub_1400C4FBC.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 */

__int64 __fastcall sub_140185648(__int64 a1, unsigned __int16 a2, int a3)
{
  int v3; // r14d
  __int64 v6; // rcx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // esi
  _DWORD v12[15]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v13; // [rsp+9Ch] [rbp-Ch]

  v3 = a2;
  memset_0(v12, 0, 0x40uLL);
  if ( !sub_140056088(a1) )
    return 3221225659LL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 6160) + 36LL) != 1 )
    return 3221225860LL;
  v8 = a3 - 1;
  if ( !v8 )
  {
    v10 = 0;
    goto LABEL_10;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v10 = 256;
    goto LABEL_10;
  }
  if ( v9 != 1 )
    return 3221225659LL;
  v10 = 512;
LABEL_10:
  v11 = sub_1400C4F10(v6);
  if ( v11 >= 0 )
  {
    LOBYTE(v13) = 8;
    v13 = v10 | v13 & 0xFFFFF0FF;
    v12[0] = 208;
    v12[1] = v3;
    v11 = sub_140187D84(a1, 0, 0, 0, (__int64)v12);
  }
  sub_1400C4FBC(a1);
  return (unsigned int)v11;
}
