/*
 * XREFs of sub_140099670 @ 0x140099670
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000F5B0 @ 0x14000F5B0 (sub_14000F5B0.c)
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 *     sub_14009D41C @ 0x14009D41C (sub_14009D41C.c)
 */

__int64 __fastcall sub_140099670(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 *v3; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r9
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  __int64 *v13; // rbx
  __int64 result; // rax

  v2 = a2;
  v3 = (__int64 *)(a1 + 248);
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000F5B0(a1, a2, *v3, 7, a2, 0, 0);
  v5 = *(_QWORD *)(*v3 + 88);
  if ( v2 && ((*(_DWORD *)(v5 + 164) & 1) != 0 || (*(_BYTE *)(*v3 + 192) & 1) != 0) )
  {
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(*v3 + 88) + 24LL), 0LL, 0LL);
    v5 = *v3;
    v7 = v6;
    v8 = *(_QWORD *)(*v3 + 88);
    if ( v6 >= 0 )
    {
      a2 = (unsigned int)(*(_DWORD *)(v5 + 104) * v2 - *(_DWORD *)(a1 + 80));
      if ( *(_DWORD *)(v5 + 504) <= 1u )
      {
        v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16), 0LL, 0LL);
        v5 = (unsigned int)a2;
        v10 = (unsigned int)a2 + v7;
        if ( v10 > v9 )
          v10 = v9;
        a2 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 88LL);
        v12 = *(_QWORD *)(a2 + 24);
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 24), v10, v12);
        if ( v12 != v11 )
        {
          do
          {
            v5 = v11;
            v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 24), v10, v11);
          }
          while ( v11 != v5 );
        }
      }
    }
    else
    {
      if ( (byte_1400E8401 & 4) != 0 )
        sub_14009D41C(v5, a2, v5);
      sub_140048108();
      _InterlockedAnd((volatile signed __int32 *)(v8 + 164), 0xFFFFFFFE);
    }
  }
  v13 = (__int64 *)(a1 + 248);
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000F5B0(v5, a2, *v13, 8, v2, *(_DWORD *)(*v13 + 504), 0);
  result = *v13;
  *(_DWORD *)(*v13 + 504) = 3;
  return result;
}
