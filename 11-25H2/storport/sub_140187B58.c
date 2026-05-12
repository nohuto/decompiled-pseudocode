/*
 * XREFs of sub_140187B58 @ 0x140187B58
 * Callers:
 *     sub_14005DB44 @ 0x14005DB44 (sub_14005DB44.c)
 * Callees:
 *     sub_140056088 @ 0x140056088 (sub_140056088.c)
 *     sub_1400C4F10 @ 0x1400C4F10 (sub_1400C4F10.c)
 *     sub_1400C4FBC @ 0x1400C4FBC (sub_1400C4FBC.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 */

__int64 __fastcall sub_140187B58(__int64 a1, char a2)
{
  __int64 v4; // rcx
  int v6; // ebx
  _DWORD v7[14]; // [rsp+60h] [rbp-48h] BYREF
  char v8; // [rsp+98h] [rbp-10h]
  unsigned int v9; // [rsp+9Ch] [rbp-Ch]

  memset_0(v7, 0, 0x40uLL);
  if ( !sub_140056088(a1) )
    return 3221225659LL;
  v6 = sub_1400C4F10(v4);
  if ( v6 >= 0 )
  {
    LOBYTE(v9) = 3;
    v9 = v9 & 0xF0FFFFFF | 0x1000000;
    v7[0] = 209;
    v8 = a2;
    v6 = sub_140187D84(a1, 0, 0, 0, (__int64)v7);
  }
  sub_1400C4FBC(a1);
  return (unsigned int)v6;
}
