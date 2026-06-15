/*
 * XREFs of sub_1400A8F30 @ 0x1400A8F30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400A6508 @ 0x1400A6508 (sub_1400A6508.c)
 *     sub_1400A68A0 @ 0x1400A68A0 (sub_1400A68A0.c)
 *     sub_1400A6B14 @ 0x1400A6B14 (sub_1400A6B14.c)
 */

void __fastcall sub_1400A8F30(__int64 a1, int a2)
{
  __int64 v3; // rdx
  signed __int64 v4; // rax
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
  {
    sub_1400A68A0(*(_QWORD *)(*(_QWORD *)(a1 + 1368) + 760LL), (__int64)v5);
    v3 = v5[0];
    if ( v5[0] )
    {
      v4 = _InterlockedCompareExchange64(
             (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1368) + 1344LL) + 32LL),
             0LL,
             0LL);
      *(_QWORD *)(v3 + 80) += *(unsigned int *)(v3 + 96);
      if ( *(_QWORD *)(v3 + 80) > v4 )
        *(_QWORD *)(v3 + 80) = v4;
      sub_1400A6B14(v5);
    }
    sub_1400A6508(v5);
  }
}
