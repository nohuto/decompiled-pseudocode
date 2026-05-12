/*
 * XREFs of sub_1400A1DE8 @ 0x1400A1DE8
 * Callers:
 *     sub_14009EC74 @ 0x14009EC74 (sub_14009EC74.c)
 *     sub_1400BEB50 @ 0x1400BEB50 (sub_1400BEB50.c)
 *     sub_1400EA980 @ 0x1400EA980 (sub_1400EA980.c)
 *     sub_140100548 @ 0x140100548 (sub_140100548.c)
 *     sub_140112D50 @ 0x140112D50 (sub_140112D50.c)
 *     sub_140185240 @ 0x140185240 (sub_140185240.c)
 *     sub_14019B4AC @ 0x14019B4AC (sub_14019B4AC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400A1DE8(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r10d
  __int64 v4; // rdi
  int v5; // ebx
  signed int v6; // r9d
  __int64 i; // r11
  __int64 result; // rax
  _BYTE *v9; // rcx

  v3 = 0;
  v4 = a2;
  v5 = 0;
  v6 = 7;
  for ( i = 7LL; i >= 0; --i )
  {
    if ( (unsigned __int8)(*(_BYTE *)(a1 + i + 64) - 33) <= 0x5Du && ++v5 == a3 )
      break;
    if ( !i )
      break;
    --v6;
  }
  result = v6;
  if ( (unsigned __int64)v6 < 8 )
  {
    v9 = (_BYTE *)(v6 + a1 + 64);
    do
    {
      LOBYTE(a2) = *v9;
      result = (unsigned int)(a2 - 33);
      if ( (unsigned __int8)(*v9 - 33) <= 0x5Du )
      {
        result = v3++;
        *(_BYTE *)(result + v4) = a2;
        if ( v3 >= a3 )
          break;
      }
      ++v6;
      ++v9;
    }
    while ( (unsigned int)v6 < 8 );
  }
  return result;
}
