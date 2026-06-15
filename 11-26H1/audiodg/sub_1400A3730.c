/*
 * XREFs of sub_1400A3730 @ 0x1400A3730
 * Callers:
 *     <none>
 * Callees:
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 *     sub_1400A20F4 @ 0x1400A20F4 (sub_1400A20F4.c)
 *     sub_1400A2D44 @ 0x1400A2D44 (sub_1400A2D44.c)
 */

__int64 __fastcall sub_1400A3730(__int64 a1, __int64 *a2, __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  char v11; // [rsp+68h] [rbp+10h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  if ( a2 )
  {
    v12 = 0LL;
    v11 = 0;
    if ( !sub_1400A20F4((_QWORD *)(a1 - 440), &v12, &v11) )
    {
      v8 = v12;
      *a2 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 16), 0LL, 0LL);
      if ( a3 )
        *a3 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 40), 0LL, 0LL);
      if ( (byte_1400E8401 & 4) != 0 )
      {
        LOBYTE(v9) = 0;
        if ( a3 )
          v9 = *a3;
        sub_1400A2D44(*a2, v7, 0LL, 7, 0, *a2, 0, v9);
      }
    }
    *(_QWORD *)(a1 - 232) = *a2;
  }
  else
  {
    v3 = -2147467261;
    sub_140048108();
  }
  return v3;
}
