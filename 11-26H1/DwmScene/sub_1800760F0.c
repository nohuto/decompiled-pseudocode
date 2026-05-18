/*
 * XREFs of sub_1800760F0 @ 0x1800760F0
 * Callers:
 *     sub_18007640C @ 0x18007640C (sub_18007640C.c)
 *     sub_180079498 @ 0x180079498 (sub_180079498.c)
 * Callees:
 *     sub_180013494 @ 0x180013494 (sub_180013494.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800760F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v7; // rdx

  *(_QWORD *)(a1 + 56) = 0LL;
  v4 = *(_QWORD *)(a3 + 56);
  if ( v4 )
  {
    if ( v4 == a3 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      sub_180013494(a3, v7);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a3 + 56) = 0LL;
    }
  }
  *(_QWORD *)(a1 + 64) = a2;
  return a1;
}
