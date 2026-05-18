/*
 * XREFs of sub_1800533F0 @ 0x1800533F0
 * Callers:
 *     sub_18007DD3C @ 0x18007DD3C (sub_18007DD3C.c)
 * Callees:
 *     sub_180028BD0 @ 0x180028BD0 (sub_180028BD0.c)
 *     sub_180029070 @ 0x180029070 (sub_180029070.c)
 *     sub_180042544 @ 0x180042544 (sub_180042544.c)
 *     sub_180053D94 @ 0x180053D94 (sub_180053D94.c)
 *     sub_180054510 @ 0x180054510 (sub_180054510.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800533F0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  int v5; // ebp
  __int64 v6; // rdx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+48h] [rbp+10h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)result )
  {
    v5 = *(_DWORD *)(*a2 + 244LL);
    v8 = v5;
    result = sub_180042544(a1 + 112, (__int64)&v8);
    if ( result == *(_QWORD *)(a1 + 112) || !*(_QWORD *)(result + 40) )
    {
      result = sub_180029070(a1, (__int64)a2);
      v6 = *(_QWORD *)(a1 + 136);
      if ( v6 )
      {
        sub_180053D94(a1, v6, *a2);
        v8 = v5;
        *(_BYTE *)(*(_QWORD *)sub_180028BD0((__int64 *)(a1 + 80), (__int64)v7, &v8) + 32LL) = 1;
        if ( (*(_BYTE *)(a1 + 40) & 8) != 0 )
          return sub_180054510(a1 + 136, 0LL);
        result = *(_QWORD *)(a1 + 72);
        if ( (*(_BYTE *)(result + 752) & 8) != 0 )
          return sub_180054510(a1 + 136, 0LL);
      }
    }
  }
  return result;
}
