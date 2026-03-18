/*
 * XREFs of sub_140C7903C @ 0x140C7903C
 * Callers:
 *     KiSwInterruptDispatch @ 0x140540C30 (KiSwInterruptDispatch.c)
 *     sub_140542730 @ 0x140542730 (sub_140542730.c)
 *     sub_1405519DC @ 0x1405519DC (sub_1405519DC.c)
 *     sub_140552AE4 @ 0x140552AE4 (sub_140552AE4.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140C62010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140C74754 @ 0x140C74754 (sub_140C74754.c)
 *     sub_140C76E10 @ 0x140C76E10 (sub_140C76E10.c)
 *     sub_140C79A90 @ 0x140C79A90 (sub_140C79A90.c)
 *     sub_140C7AA80 @ 0x140C7AA80 (sub_140C7AA80.c)
 *     sub_140C7B1E0 @ 0x140C7B1E0 (sub_140C7B1E0.c)
 *     sub_140C8113C @ 0x140C8113C (sub_140C8113C.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140C7903C(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 result; // rax
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // r11
  _QWORD *v9; // rdx
  __int64 v10; // r9
  int v11; // ecx

  while ( !*(_DWORD *)(a1 + 2328) )
  {
    *(_QWORD *)(a1 + 2336) = a1 - 0x5C5FC0A76E374B18LL;
    result = ((unsigned __int64)a2 - 0x4C48B4211BBACBEBLL) & -(__int64)(a2 != 0LL);
    *(_QWORD *)(a1 + 2344) = result;
    if ( a2 && !a4 )
      a4 = *a2;
    *(_QWORD *)(a1 + 2352) = a4;
    v6 = *(_DWORD *)(a1 + 2520);
    *(_QWORD *)(a1 + 2360) = a3;
    *(_DWORD *)(a1 + 2328) = 1;
    if ( (v6 & 0x20000000) != 0 )
      break;
    if ( (*(_DWORD *)(a1 + 2524) & 0x200000) == 0 )
      break;
    if ( (v6 & 1) == 0 )
      break;
    v7 = *(unsigned int *)(a1 + 2676);
    v8 = *(_QWORD *)(a1 + 2104);
    result = (unsigned int)(*(_DWORD *)(a1 + 2052) - v7);
    a3 = *(_QWORD *)(a1 + 2680);
    v9 = (_QWORD *)(v7 + a1);
    v10 = v7 + a1 + 8 * (result >> 3);
    while ( v9 != (_QWORD *)v10 )
    {
      *v9 ^= a3;
      result = v8 ^ *v9;
      a3 = (result + __ROR8__(a3, a3 & 0x3F)) ^ 0xF05;
      ++v9;
    }
    *(_DWORD *)(a1 + 2524) &= ~0x200000u;
    if ( a3 == *(_QWORD *)(a1 + 2688) )
      break;
    v11 = *(_DWORD *)(a1 + 2052);
    result = *(_QWORD *)(a1 + 1416);
    *(_QWORD *)result = a1;
    *(_DWORD *)(result + 16) = v11;
    if ( !*(_DWORD *)(a1 + 2328) )
    {
      result = *(_QWORD *)(a1 + 1416);
      *(_QWORD *)(result + 24) = a3 ^ *(_QWORD *)(a1 + 2688);
    }
    a2 = 0LL;
    a4 = 256LL;
  }
  return result;
}
