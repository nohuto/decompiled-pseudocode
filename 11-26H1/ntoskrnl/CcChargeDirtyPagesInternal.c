/*
 * XREFs of CcChargeDirtyPagesInternal @ 0x1404B349C
 * Callers:
 *     CcAddDirtyPagesToExternalCache @ 0x1404F26A0 (CcAddDirtyPagesToExternalCache.c)
 *     CcUpdateExternalCacheInfoEx @ 0x1404FE9A0 (CcUpdateExternalCacheInfoEx.c)
 * Callees:
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140387494 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcScheduleLazyWriteScan @ 0x1403E3830 (CcScheduleLazyWriteScan.c)
 */

void __fastcall CcChargeDirtyPagesInternal(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  _BYTE *v6; // rsi
  _BYTE *v7; // r14
  _QWORD *v8; // rbp
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rax

  if ( CcEnablePerVolumeLazyWriter )
  {
    v6 = (_BYTE *)(a6 + 708);
    v7 = (_BYTE *)(a6 + 1172);
    v8 = (_QWORD *)(a6 + 992);
  }
  else
  {
    v6 = (_BYTE *)(a5 + 780);
    v7 = (_BYTE *)(a5 + 1292);
    v8 = (_QWORD *)(a5 + 1056);
  }
  *(_QWORD *)(a5 + 1056) += a4;
  if ( a6 )
    *(_QWORD *)(a6 + 992) += a4;
  if ( a2 )
    *(_DWORD *)(a2 + 8) += a4;
  if ( a3 )
    *(_DWORD *)(a3 + 32) += a4;
  if ( a1 )
  {
    *(_DWORD *)(a1 + 112) += a4;
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 512) + 40LL), a4);
    v9 = *(_QWORD **)(a1 + 512);
    v9[31] += v9[5];
    v10 = v9[32];
    if ( v10 <= *(_QWORD *)(*(_QWORD *)(a1 + 512) + 40LL) )
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 512) + 40LL);
    v9[32] = v10;
    if ( a6 )
    {
      v9[33] += *(_QWORD *)(a6 + 1016);
      v9[34] = *(_QWORD *)(a6 + 1024);
      v9[35] = *(_QWORD *)(a6 + 1032);
    }
    ++v9[36];
    if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 )
    {
      _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 248) + 24LL), a4);
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 248) + 136LL) == -1LL )
        *(_QWORD *)(*(_QWORD *)(a1 + 248) + 136LL) = MEMORY[0xFFFFF78000000320];
    }
  }
  if ( *v7 && *v8 >= 0x2000uLL )
    CcScheduleLazyWriteScan((_BYTE *)a5, (_BYTE *)a6, 1, 0);
  if ( *v6 )
  {
    CcScheduleLazyWriteScan((_BYTE *)a5, (_BYTE *)a6, 0, 0);
    *v6 = 0;
  }
  if ( !CcEnablePerVolumeLazyWriter )
    CcAdjustWriteBehindThreadPoolIfNeeded(a5, 0);
}
