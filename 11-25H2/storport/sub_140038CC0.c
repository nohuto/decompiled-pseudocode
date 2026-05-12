/*
 * XREFs of sub_140038CC0 @ 0x140038CC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140020090 @ 0x140020090 (sub_140020090.c)
 *     sub_140038E08 @ 0x140038E08 (sub_140038E08.c)
 *     sub_140038E34 @ 0x140038E34 (sub_140038E34.c)
 *     sub_140038E58 @ 0x140038E58 (sub_140038E58.c)
 *     sub_140058490 @ 0x140058490 (sub_140058490.c)
 */

char __fastcall sub_140038CC0(int a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // eax
  unsigned int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // rdx
  char v10; // al
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  char v14; // r9
  unsigned int v15; // eax
  __int64 v16; // rdx
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  char v20; // r9
  unsigned __int64 v21; // rcx

  LOBYTE(v5) = sub_140020090(a3 + 376, 12);
  if ( (_BYTE)v5 )
  {
    LOBYTE(v5) = sub_140038E08(a3);
    if ( (_BYTE)v5 )
    {
      v6 = ((__int64 (*)(void))sub_140038E34)();
      v5 = sub_140038E58(v6, v6);
      if ( a1 == 1 )
      {
        *(_BYTE *)(a3 + 108) |= 2u;
        v8 = sub_140038E34(a3, v7, v5);
        v10 = sub_140038E58(v8, v9);
        if ( byte_140168DAA && (byte_1401694F2 & 0x10) != 0 )
          sub_140058490(v12, v11, v13, *(_DWORD *)(a3 + 56), v11, v13, v14, v10);
        LOBYTE(v5) = MEMORY[0xFFFFF78000000008];
        *(_QWORD *)(a3 + 5224) = MEMORY[0xFFFFF78000000008];
      }
      else if ( a1 == 2 )
      {
        *(_BYTE *)(a3 + 108) &= ~2u;
        v15 = sub_140038E34(a3, v7, v5);
        LOBYTE(v5) = sub_140038E58(v15, v16);
        if ( byte_140168DAA && (byte_1401694F2 & 0x10) != 0 )
          LOBYTE(v5) = sub_140058490(v18, v17, v19, *(_DWORD *)(a3 + 56), v17, v19, v20, v5);
        if ( *(_QWORD *)(a3 + 5224) )
        {
          v21 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a3 + 5224);
          LOBYTE(v5) = 75 * v21;
          *(_QWORD *)(a3 + 5232) += v21 / 0x2710;
          *(_QWORD *)(a3 + 5224) = 0LL;
        }
      }
    }
  }
  return v5;
}
