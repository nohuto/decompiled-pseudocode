/*
 * XREFs of sub_140001810 @ 0x140001810
 * Callers:
 *     <none>
 * Callees:
 *     sub_140001040 @ 0x140001040 (sub_140001040.c)
 *     sub_1400012F0 @ 0x1400012F0 (sub_1400012F0.c)
 *     sub_140001B40 @ 0x140001B40 (sub_140001B40.c)
 *     sub_140002330 @ 0x140002330 (sub_140002330.c)
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 *     sub_14002166C @ 0x14002166C (sub_14002166C.c)
 *     sub_140021754 @ 0x140021754 (sub_140021754.c)
 *     sub_1400217C8 @ 0x1400217C8 (sub_1400217C8.c)
 *     sub_1400219C8 @ 0x1400219C8 (sub_1400219C8.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_140001810(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v8; // rax
  unsigned int *v9; // rcx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int *v12; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  v5 = a2;
  if ( (*(_BYTE *)(a3 + 1) & 1) != 0 )
  {
    v12 = 0LL;
    v8 = sub_14000B900(a2, &v12);
    if ( v8 )
    {
      v9 = v12;
      v10 = *v12;
      if ( *v12 )
      {
        if ( (v10 & 3) != 0 )
        {
          sub_140032C80(v8, 0LL, *v12);
        }
        else
        {
          v11 = v10 >> 2;
          if ( v11 )
            sub_140032C80(v8, 0LL, 4LL * v11);
        }
      }
    }
    a2 = 0x140000000uLL;
    switch ( *(_BYTE *)(v4 + 2) )
    {
      case 0:
        result = sub_1400219C8(v9, v5);
        break;
      case 0x80:
        result = sub_1400217C8(a1, v5);
        break;
      case 0x83:
        result = sub_1400012F0(a1, v5);
        break;
      case 0xB0:
        result = sub_140001040(a1, v5);
        break;
      case 0xB1:
        result = sub_140021754(v9, v5);
        break;
      case 0xB2:
        result = sub_14002166C(a1, v5);
        break;
      default:
        goto LABEL_17;
    }
  }
  else if ( *(_BYTE *)(a3 + 2) )
  {
LABEL_17:
    LOBYTE(a4) = 36;
    LOBYTE(a3) = 5;
    LOBYTE(a2) = 6;
    sub_140002330(v5, a2, a3, a4);
    return 3238002694LL;
  }
  else
  {
    return sub_140001B40();
  }
  return result;
}
