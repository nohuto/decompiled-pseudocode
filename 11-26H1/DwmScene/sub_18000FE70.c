/*
 * XREFs of sub_18000FE70 @ 0x18000FE70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010E00 @ 0x180010E00 (sub_180010E00.c)
 */

__int64 __fastcall sub_18000FE70(char *a1)
{
  int v2; // ecx
  __int64 result; // rax
  int v4; // ecx
  int v5; // ecx
  _DWORD v6[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v7; // [rsp+28h] [rbp-28h]
  char v8; // [rsp+30h] [rbp-20h]
  char v9; // [rsp+31h] [rbp-1Fh]
  __int16 v10; // [rsp+32h] [rbp-1Eh]
  int v11; // [rsp+34h] [rbp-1Ch]
  __int16 v12; // [rsp+38h] [rbp-18h]
  __int16 v13; // [rsp+3Ah] [rbp-16h]
  int v14; // [rsp+3Ch] [rbp-14h]
  __int64 v15; // [rsp+40h] [rbp-10h]
  __int64 v16; // [rsp+48h] [rbp-8h]
  __int64 v17; // [rsp+60h] [rbp+10h] BYREF

  v6[1] = 0;
  v9 = 0;
  v6[0] = *((_DWORD *)a1 + 2);
  v7 = *((_QWORD *)a1 + 3);
  v8 = *a1;
  v10 = word_1801C8460;
  v12 = *((_WORD *)a1 + 32);
  v15 = *((_QWORD *)a1 + 7);
  v16 = *((_QWORD *)a1 + 16);
  v11 = 0;
  v13 = 0;
  v14 = 0;
  v17 = 0LL;
  sub_180010E00(0LL, v6, &v17);
  v2 = BYTE4(v17);
  result = (unsigned int)v17;
  *((_DWORD *)a1 + 4) = v17;
  v4 = v2 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
        *((_DWORD *)a1 + 1) |= 4u;
    }
    else
    {
      *((_DWORD *)a1 + 1) |= 2u;
    }
  }
  else
  {
    *((_DWORD *)a1 + 1) |= 1u;
  }
  return result;
}
