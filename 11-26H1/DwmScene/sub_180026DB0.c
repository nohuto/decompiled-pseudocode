/*
 * XREFs of sub_180026DB0 @ 0x180026DB0
 * Callers:
 *     sub_180051240 @ 0x180051240 (sub_180051240.c)
 *     sub_1800BD1F0 @ 0x1800BD1F0 (sub_1800BD1F0.c)
 * Callees:
 *     sub_1800130CC @ 0x1800130CC (sub_1800130CC.c)
 *     sub_180024D50 @ 0x180024D50 (sub_180024D50.c)
 *     sub_18006BE80 @ 0x18006BE80 (sub_18006BE80.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180026DB0(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 3976) )
  {
    v2 = *(_QWORD *)(a1 + 3864);
    v3 = *(_QWORD *)(a1 + 3856);
    if ( v3 != v2 )
    {
      sub_180024D50(v3, v2);
      *(_QWORD *)(a1 + 3864) = *(_QWORD *)(a1 + 3856);
    }
    sub_18006BE80(a1 + 608);
    sub_18006BE80(a1 + 832);
    sub_18006BE80(a1 + 1056);
    v4 = *(_QWORD *)(a1 + 256);
    v5 = *(_QWORD *)(a1 + 248);
    if ( v5 != v4 )
    {
      sub_1800130CC(v5, v4);
      *(_QWORD *)(a1 + 256) = *(_QWORD *)(a1 + 248);
    }
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 256LL))(a1);
    *(_BYTE *)(a1 + 3976) = 0;
  }
  return result;
}
