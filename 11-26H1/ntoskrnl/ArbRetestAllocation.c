/*
 * XREFs of ArbRetestAllocation @ 0x14078C1C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ArbpBuildAlternative @ 0x14078C8F4 (ArbpBuildAlternative.c)
 *     RtlCopyRangeList @ 0x140AE2A90 (RtlCopyRangeList.c)
 *     RtlFreeRangeList @ 0x140AE2C50 (RtlFreeRangeList.c)
 *     RtlDeleteOwnersRanges @ 0x140B11B70 (RtlDeleteOwnersRanges.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbRetestAllocation(__int64 a1, __int64 ***a2)
{
  __int64 **v4; // r8
  int v5; // edi
  __int64 *i; // rsi
  __int64 *j; // rsi
  _QWORD v9[6]; // [rsp+40h] [rbp-59h] BYREF
  int v10; // [rsp+70h] [rbp-29h]
  _BYTE *v11; // [rsp+78h] [rbp-21h]
  __int16 v12; // [rsp+80h] [rbp-19h]
  PVOID P; // [rsp+88h] [rbp-11h]
  _BYTE v14[64]; // [rsp+90h] [rbp-9h] BYREF

  memset_0(v9, 0, 0x50uLL);
  memset_0(v14, 0, sizeof(v14));
  v4 = a2[2];
  v11 = v14;
  v10 = 1;
  v9[5] = v14;
  v12 = 1;
  if ( !v4 )
  {
    v5 = RtlCopyRangeList(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 40));
    if ( v5 >= 0 )
    {
      for ( i = **a2; *a2 != (__int64 **)i; i = (__int64 *)*i )
      {
        v5 = RtlDeleteOwnersRanges(*(_QWORD *)(a1 + 48));
        if ( v5 < 0 )
          goto LABEL_15;
      }
      goto LABEL_8;
    }
LABEL_15:
    RtlFreeRangeList(*(_QWORD *)(a1 + 48));
    return (unsigned int)v5;
  }
  v5 = guard_dispatch_icall_no_overrides(a1, *((unsigned int *)a2 + 2));
  if ( v5 < 0 )
    goto LABEL_15;
LABEL_8:
  for ( j = **a2; *a2 != (__int64 **)j; j = (__int64 *)*j )
  {
    P = 0LL;
    v9[4] = j;
    v5 = ArbpBuildAlternative(a1, j[10], v14);
    if ( *((_DWORD *)j + 22) != 2 )
    {
      guard_dispatch_icall_no_overrides(j[9], (__int64)v9);
      v9[1] = v9[0] - 1LL;
      v5 = guard_dispatch_icall_no_overrides(a1, (__int64)v9);
      if ( v5 < 0 )
        goto LABEL_15;
      if ( (v12 & 0x10) != 0 )
      {
        ExFreePoolWithTag(P, 0);
        v12 &= ~0x10u;
      }
    }
  }
  return (unsigned int)v5;
}
