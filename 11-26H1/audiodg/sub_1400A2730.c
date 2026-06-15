/*
 * XREFs of sub_1400A2730 @ 0x1400A2730
 * Callers:
 *     <none>
 * Callees:
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14009D530 @ 0x14009D530 (sub_14009D530.c)
 *     sub_1400AD6FC @ 0x1400AD6FC (sub_1400AD6FC.c)
 *     sub_1400AD7C8 @ 0x1400AD7C8 (sub_1400AD7C8.c)
 *     sub_1400AD820 @ 0x1400AD820 (sub_1400AD820.c)
 */

__int64 __fastcall sub_1400A2730(__int64 a1, __int64 a2)
{
  int v2; // esi
  int v5; // ebx
  _QWORD *v6; // r14
  __int64 v7; // rdx
  int v8; // eax

  v2 = 0;
  if ( *(_DWORD *)(a1 + 464) )
    goto LABEL_2;
  if ( ((a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v5 = -2147024809;
    goto LABEL_20;
  }
  if ( (*(_DWORD *)(a1 + 192) & 0x40000) == 0 || *(_QWORD *)(a1 + 96) == -4LL )
  {
LABEL_2:
    v5 = -2147418113;
  }
  else
  {
    v6 = (_QWORD *)sub_1400492F4(16LL, a2);
    *v6 = off_1400C0300;
    v6[1] = 0LL;
    v5 = sub_1400AD7C8(v6, *(_QWORD *)(a1 + 96) + 4LL);
    if ( v5 >= 0 )
    {
      v8 = sub_1400AD820(v6, v7, a2);
      v5 = v8;
      if ( v8 == -2147023537 )
      {
        v5 = -2004287484;
      }
      else if ( v8 >= 0 )
      {
        *(_DWORD *)(a1 + 464) = 1;
      }
      v2 = sub_1400AD6FC(v6);
    }
    if ( v5 == -2147023537 )
    {
      v5 = -2004287484;
    }
    else if ( v5 >= 0 && v2 < 0 )
    {
      v5 = v2;
      sub_140048108();
    }
    if ( v6 )
      sub_14009D530(v6, 1);
  }
LABEL_20:
  memset((void *)(*(_QWORD *)(a1 + 96) + 4LL), 0, 0x80uLL);
  return (unsigned int)v5;
}
