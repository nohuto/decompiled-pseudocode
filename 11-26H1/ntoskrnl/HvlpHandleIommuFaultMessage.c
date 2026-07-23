/*
 * XREFs of HvlpHandleIommuFaultMessage @ 0x1405C37A4
 * Callers:
 *     HvlSharedIsr @ 0x1402F3080 (HvlSharedIsr.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvlpHandleIommuFaultMessage(__int64 a1)
{
  int v1; // r8d
  __int128 *v3; // r9
  int v4; // ecx
  __int64 v5; // rax
  __int128 v7; // [rsp+20h] [rbp-50h] BYREF
  __int64 v8; // [rsp+30h] [rbp-40h]
  __int128 v9; // [rsp+38h] [rbp-38h]
  __int128 v10; // [rsp+48h] [rbp-28h]
  __int128 v11; // [rsp+58h] [rbp-18h]
  __int64 v12; // [rsp+68h] [rbp-8h]

  v1 = *(_DWORD *)(a1 + 8);
  LODWORD(v8) = 0;
  v12 = 0LL;
  v9 = 0LL;
  LODWORD(v9) = 2;
  BYTE4(v9) = (v1 & 4) != 0;
  v3 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v7 = 0LL;
  DWORD2(v10) = v1 & 1 | _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) & 0xFFFFFFFE;
  if ( (v1 & 1) != 0 )
    *(_QWORD *)&v10 = *(_QWORD *)(a1 + 32);
  v4 = -(*(_DWORD *)a1 != 0);
  DWORD2(v11) = *(unsigned __int16 *)(a1 + 26);
  *(_QWORD *)&v11 = *(_QWORD *)(a1 + 40);
  HIDWORD(v10) = 6 - v4;
  if ( (v1 & 2) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v8 = 0LL;
    v3 = &v7;
    *((_QWORD *)&v7 + 1) = v5;
  }
  return guard_dispatch_icall_no_overrides(v3, *(_QWORD *)(a1 + 24));
}
