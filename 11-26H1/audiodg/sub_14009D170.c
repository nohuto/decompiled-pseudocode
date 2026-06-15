/*
 * XREFs of sub_14009D170 @ 0x14009D170
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000F470 @ 0x14000F470 (sub_14000F470.c)
 */

__int64 __fastcall sub_14009D170(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r11
  __int64 v5; // rax
  int v6; // r10d
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 88);
  v5 = 32LL;
  v6 = *(_DWORD *)(v3 + 160);
  if ( !v6 )
    v5 = 72LL;
  *(_QWORD *)(v5 + v3) = *(_QWORD *)a2;
  v7 = 56LL;
  if ( !v6 )
    v7 = 96LL;
  *(_QWORD *)(v7 + v3) = *(_QWORD *)(a2 + 24);
  v8 = 64LL;
  if ( !v6 )
    v8 = 104LL;
  *(_DWORD *)(v8 + v3) = *(_DWORD *)(a2 + 32);
  v9 = 40LL;
  if ( !v6 )
    v9 = 80LL;
  *(_QWORD *)(v9 + v3) = *(_QWORD *)(a2 + 8);
  v10 = 48LL;
  if ( !v6 )
    v10 = 88LL;
  *(_QWORD *)(v10 + v3) = *(_QWORD *)(a2 + 16);
  v11 = 68LL;
  v12 = *(unsigned int *)(a2 + 36);
  if ( !v6 )
    v11 = 108LL;
  *(_DWORD *)(v11 + v3) = v12;
  _InterlockedExchange((volatile __int32 *)(v3 + 160), v6 == 0);
  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 164), 0, 0);
  if ( (result & 2) == 0 )
  {
    *(_QWORD *)(v3 + 112) = *(_QWORD *)a2;
    *(_QWORD *)(v3 + 128) = *(_QWORD *)(a2 + 16);
    v12 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(v3 + 136) = v12;
    _InterlockedExchange64((volatile __int64 *)(v3 + 152), a3);
    _InterlockedOr((volatile signed __int32 *)(v3 + 164), 6u);
  }
  if ( (byte_1400E8401 & 4) != 0 )
    return sub_14000F470(
             v12,
             a2,
             a1,
             *(_DWORD *)(a2 + 36),
             result,
             *(_QWORD *)(a2 + 16),
             *(_QWORD *)(a2 + 24),
             *(_QWORD *)a2,
             *(_QWORD *)(a2 + 8));
  return result;
}
