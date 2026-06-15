/*
 * XREFs of sub_1400440C4 @ 0x1400440C4
 * Callers:
 *     sub_14000A628 @ 0x14000A628 (sub_14000A628.c)
 * Callees:
 *     sub_1400115FC @ 0x1400115FC (sub_1400115FC.c)
 *     sub_14002F28C @ 0x14002F28C (sub_14002F28C.c)
 *     sub_14005DFF0 @ 0x14005DFF0 (sub_14005DFF0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400440C4(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 *v8; // r14
  __int64 v9; // rcx

  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 96);
  sub_14005DFF0(a1 + 104, *(_QWORD *)(a2 + 104));
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  v4 = *(_QWORD *)(a2 + 120);
  if ( *(_QWORD *)(a1 + 120) != v4 )
    sub_1400115FC((_QWORD *)(a1 + 120), v4);
  v5 = *(_QWORD *)(a2 + 128);
  *(_QWORD *)(a1 + 128) = v5;
  if ( v5 )
    sub_1400B6010(v5);
  v6 = *(_QWORD *)(a2 + 136);
  *(_QWORD *)(a1 + 136) = v6;
  if ( v6 )
    sub_1400B6010(v6);
  sub_14005DFF0(a1 + 152, *(_QWORD *)(a2 + 152));
  result = *(_QWORD *)(a2 + 160);
  v8 = (__int64 *)(a2 + 168);
  *(_QWORD *)(a1 + 160) = result;
  if ( a1 + 168 != a2 + 168 )
  {
    sub_14002F28C((volatile __int64 *)(a1 + 168));
    result = *v8;
    if ( *v8 )
      _InterlockedIncrement((volatile signed __int32 *)(result + 8));
    *(_QWORD *)(a1 + 168) = result;
  }
  v9 = *(_QWORD *)(a2 + 144);
  *(_QWORD *)(a1 + 144) = v9;
  if ( v9 )
    return sub_1400B6010(v9);
  return result;
}
