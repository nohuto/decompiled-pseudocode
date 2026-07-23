/*
 * XREFs of CcChargeDirtyPages @ 0x14039FBB0
 * Callers:
 *     CcSetDirtyPinnedData @ 0x14039F000 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x14039F350 (CcSetDirtyInMask.c)
 * Callees:
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140387494 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcScheduleLazyWriteScan @ 0x1403E3830 (CcScheduleLazyWriteScan.c)
 */

void __fastcall CcChargeDirtyPages(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  _BYTE *v6; // rsi
  _BYTE *v7; // rbp
  _QWORD *v8; // r14
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rax

  v4 = 0LL;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 536);
    if ( CcEnablePerVolumeLazyWriter )
      v4 = *(_QWORD **)(a1 + 600);
  }
  else
  {
    v5 = *((_QWORD *)PspSystemPartition + 1);
  }
  if ( CcEnablePerVolumeLazyWriter )
  {
    v6 = (char *)v4 + 708;
    v7 = (char *)v4 + 1172;
    v8 = v4 + 124;
  }
  else
  {
    v6 = (_BYTE *)(v5 + 780);
    v7 = (_BYTE *)(v5 + 1292);
    v8 = (_QWORD *)(v5 + 1056);
  }
  *(_QWORD *)(v5 + 1056) += a4;
  if ( v4 )
    v4[124] += a4;
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
    if ( v4 )
    {
      v9[33] += v4[127];
      v9[34] = v4[128];
      v9[35] = v4[129];
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
  {
    LOBYTE(a3) = 1;
    CcScheduleLazyWriteScan(v5, v4, a3, 0LL);
  }
  if ( *v6 )
  {
    CcScheduleLazyWriteScan(v5, v4, 0LL, 0LL);
    *v6 = 0;
  }
  if ( !CcEnablePerVolumeLazyWriter )
    CcAdjustWriteBehindThreadPoolIfNeeded(v5, 0);
}
