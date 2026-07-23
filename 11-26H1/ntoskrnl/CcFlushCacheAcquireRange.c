/*
 * XREFs of CcFlushCacheAcquireRange @ 0x14039BA5C
 * Callers:
 *     CcWriteBehindInternal @ 0x140386430 (CcWriteBehindInternal.c)
 *     CcWriteBehindAsync @ 0x1403879F4 (CcWriteBehindAsync.c)
 *     CcFlushCachePriv @ 0x14039A060 (CcFlushCachePriv.c)
 *     CcWriteBehindAsyncFlushOneRange @ 0x1405B62C4 (CcWriteBehindAsyncFlushOneRange.c)
 * Callees:
 *     CcAcquireByteRangeForWrite @ 0x1403E5550 (CcAcquireByteRangeForWrite.c)
 *     CcAmILowPriorityWriter @ 0x14047E3C8 (CcAmILowPriorityWriter.c)
 */

bool __fastcall CcFlushCacheAcquireRange(__int64 a1)
{
  __int64 v1; // rsi
  char v2; // bl
  char v3; // bp
  char v5; // r14
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // r15
  char v9; // dl
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // r11d

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  v3 = *(_BYTE *)(a1 + 132);
  v5 = *(_BYTE *)(a1 + 133);
  v6 = *(_QWORD *)(a1 + 96);
  v7 = *(_QWORD *)(a1 + 88);
  if ( (*(_DWORD *)(v1 + 200) || !v3 || v5)
    && (*(_QWORD *)(v1 + 8) || (*(_DWORD *)(v1 + 152) & 4) != 0 || *(_DWORD *)(v1 + 112))
    && !*(_DWORD *)(a1 + 64) )
  {
    v8 = (a1 + 208) & -(__int64)(*(_BYTE *)(a1 + 201) != 0);
    if ( v3 && (unsigned __int8)CcAmILowPriorityWriter(v1) )
    {
      v9 = 1;
    }
    else
    {
      v9 = 0;
      if ( !v3 )
        goto LABEL_6;
    }
    if ( !v5 )
    {
      v11 = 0;
      v10 = a1 + 48;
LABEL_10:
      v12 = 0;
      return (unsigned __int8)CcAcquireByteRangeForWrite(v1, v12, v11, v7, a1 + 40, v10, a1 + 120, v9, v8) != 0;
    }
LABEL_6:
    v10 = a1 + 48;
    v11 = *(_DWORD *)(a1 + 48);
    if ( !v3 || v5 )
    {
      v12 = a1 + 32;
      if ( v6 )
        return (unsigned __int8)CcAcquireByteRangeForWrite(v1, v12, v11, v7, a1 + 40, v10, a1 + 120, v9, v8) != 0;
    }
    goto LABEL_10;
  }
  return v2;
}
