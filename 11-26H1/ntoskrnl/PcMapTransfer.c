/*
 * XREFs of PcMapTransfer @ 0x140596900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall PcMapTransfer(__int64 *a1, __int64 a2, char a3, __int64 a4, unsigned __int64 a5, unsigned int a6)
{
  unsigned int v7; // edx
  unsigned __int64 v8; // r10
  unsigned int v9; // ebx
  unsigned __int8 v10; // r11
  __int64 v11; // rdx
  bool v12; // cf
  unsigned __int8 v13; // r8
  unsigned int v14; // ebx
  unsigned __int8 v15; // cl
  __int16 v16; // di
  __int64 v17; // rdx
  char result; // al

  v7 = a6;
  if ( *((_BYTE *)a1 + 21) )
  {
    v7 = a6 >> 1;
    v8 = a5 >> 16;
    a5 = (__int64)a5 >> 1;
  }
  else
  {
    LOBYTE(v8) = BYTE2(a5);
  }
  v9 = v7 - 1;
  v10 = v7 - 1;
  v11 = *a1;
  v12 = a3 != 0;
  v13 = *((_BYTE *)a1 + 16);
  v14 = v9 >> 8;
  v15 = (v12 ? 8 : 4) | *((_BYTE *)a1 + 17) & 0xF3;
  v16 = a1[2] & 3;
  if ( v13 >= 4u )
  {
    __outbyte(v11 + 24, 0);
    __outbyte(*a1 + 22, v15);
    __outbyte(4 * v16 + *a1, a5);
    __outbyte(4 * v16 + *a1, BYTE1(a5));
    __outbyte(a1[1] + 128, v8);
    __outbyte(4 * v16 + *a1 + 2, v10);
    __outbyte(4 * v16 + *a1 + 2, v14);
    v17 = *a1 + 20;
  }
  else
  {
    __outbyte(v11 + 12, 0);
    __outbyte(*a1 + 11, v15);
    __outbyte(2 * v16 + *a1, a5);
    __outbyte(2 * v16 + *a1, BYTE1(a5));
    __outbyte(a1[1] + 128, v8);
    __outbyte(2 * v16 + *a1 + 1, v10);
    __outbyte(2 * v16 + *a1 + 1, v14);
    v17 = *a1 + 10;
  }
  __outbyte(v17, v16);
  result = *((_BYTE *)a1 + 16);
  *((_BYTE *)a1 + 19) = result;
  return result;
}
