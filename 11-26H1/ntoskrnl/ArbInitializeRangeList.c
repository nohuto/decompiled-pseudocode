/*
 * XREFs of ArbInitializeRangeList @ 0x14078B8F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlFreeRangeList @ 0x140AE2C50 (RtlFreeRangeList.c)
 *     RtlInvertRangeListEx @ 0x140B12270 (RtlInvertRangeListEx.c)
 *     RtlAddRange @ 0x140B123A0 (RtlAddRange.c)
 */

__int64 __fastcall ArbInitializeRangeList(__int64 a1, int a2, unsigned __int8 *a3, int a4)
{
  unsigned __int8 *v6; // rdi
  unsigned __int64 v7; // r14
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  __int64 v12; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v13[5]; // [rsp+48h] [rbp-28h] BYREF

  v13[1] = v13;
  v13[3] = 0LL;
  v13[0] = v13;
  v6 = a3;
  v12 = 0LL;
  v13[2] = 0LL;
  v7 = (unsigned __int64)&a3[20 * a2];
  while ( (unsigned __int64)v6 < v7 )
  {
    v8 = *v6;
    v9 = *(_DWORD *)(a1 + 32);
    if ( v8 == v9 || (_BYTE)v8 == 7 && v9 == 3 )
    {
      v10 = guard_dispatch_icall_no_overrides((__int64)v6, (__int64)&v12);
      if ( v10 < 0 )
        goto LABEL_10;
    }
    v6 += 20;
  }
  v10 = RtlInvertRangeListEx(a4, (unsigned int)v13, 0, 0, 0LL);
  if ( v10 >= 0 )
    v10 = 0;
LABEL_10:
  RtlFreeRangeList(v13);
  return (unsigned int)v10;
}
