/*
 * XREFs of sub_1400A8C00 @ 0x1400A8C00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400A6508 @ 0x1400A6508 (sub_1400A6508.c)
 *     sub_1400A68A0 @ 0x1400A68A0 (sub_1400A68A0.c)
 *     sub_1400A6B14 @ 0x1400A6B14 (sub_1400A6B14.c)
 */

__int64 __fastcall sub_1400A8C00(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  char v7; // bl
  __int64 v8; // rdx
  __int64 v9; // xmm0_8
  __int128 v10; // xmm2
  __int128 v11; // xmm2
  __int64 v12; // xmm0_8
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(a2 + 36) & 4) == 0 && *(_DWORD *)(a2 + 36) )
    _InterlockedExchange64(*(volatile __int64 **)(*(_QWORD *)(a1 + 1336) + 1312LL), *(_QWORD *)(a2 + 24));
  result = (unsigned int)_InterlockedCompareExchange(
                           (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1336) + 1312LL) + 64LL),
                           0,
                           0);
  v7 = result;
  if ( (result & 0xFFFFFF81) == 1 && (result & 2) != 0 )
  {
    sub_1400A68A0(*(_QWORD *)(*(_QWORD *)(a1 + 1336) + 728LL), (__int64)v13);
    v8 = v13[0];
    if ( v13[0] )
    {
      v9 = *(_QWORD *)(a2 + 32);
      v10 = *(_OWORD *)(a2 + 16);
      *(_OWORD *)v13[0] = *(_OWORD *)a2;
      *(_OWORD *)(v8 + 16) = v10;
      *(_QWORD *)(v8 + 32) = v9;
      if ( (v7 & 0x10) != 0 )
      {
        *(_QWORD *)(v8 + 88) = 0LL;
        *(_QWORD *)(v8 + 80) = 0LL;
        _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1336) + 1312LL) + 64LL), 0xFFFFFFEF);
      }
      if ( (v7 & 8) == 0 )
      {
        *(_QWORD *)(v8 + 88) = *(_QWORD *)(v8 + 80);
        v11 = *(_OWORD *)(a2 + 16);
        v12 = *(_QWORD *)(a2 + 32);
        *(_OWORD *)(v8 + 40) = *(_OWORD *)a2;
        *(_OWORD *)(v8 + 56) = v11;
        *(_QWORD *)(v8 + 72) = v12;
        _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1336) + 1312LL) + 64LL), 0xCu);
      }
      *(_DWORD *)(v8 + 96) = a3;
      sub_1400A6B14(v13);
    }
    return sub_1400A6508(v13);
  }
  return result;
}
