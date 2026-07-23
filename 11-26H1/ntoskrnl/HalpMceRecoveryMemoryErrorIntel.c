/*
 * XREFs of HalpMceRecoveryMemoryErrorIntel @ 0x1405910E4
 * Callers:
 *     HalpMceRecoveryMemoryError @ 0x140590F9C (HalpMceRecoveryMemoryError.c)
 * Callees:
 *     HalpHvMceConsumedMemoryErrorRecovery @ 0x140587658 (HalpHvMceConsumedMemoryErrorRecovery.c)
 *     HalpMceMemoryErrorRecovery @ 0x140590CA8 (HalpMceMemoryErrorRecovery.c)
 */

__int64 __fastcall HalpMceRecoveryMemoryErrorIntel(__int64 a1)
{
  __int64 v1; // r9
  __int64 v3; // r8
  unsigned int v4; // edx
  bool v5; // zf
  __int64 v6; // rcx
  __int64 v7; // rsi
  int v8; // eax

  v1 = *(_QWORD *)(a1 + 20);
  v3 = *(_QWORD *)(a1 + 40);
  v4 = -1073741637;
  if ( (v1 & 1) != 0 && (v1 & 2) == 0 )
  {
    if ( *(_DWORD *)a1 >= 3u )
      *(_DWORD *)(a1 + 272) |= 8u;
    return v4;
  }
  if ( (unsigned __int8)v3 >> 4 == 3 )
  {
    v5 = (((unsigned __int8)v3 >> 2) & 3) == 1;
  }
  else
  {
    if ( (unsigned __int8)v3 >> 4 != 5 )
      goto LABEL_24;
    v5 = (((unsigned __int8)v3 >> 2) & 3) == 0;
  }
  if ( !v5 || (v3 & 3) != 0 )
  {
LABEL_24:
    if ( *(_DWORD *)a1 >= 3u )
      *(_DWORD *)(a1 + 272) |= 1u;
    return v4;
  }
  if ( (v3 & 0x800000000000000LL) != 0 && (v3 & 0x400000000000000LL) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 56);
    if ( (v6 & 0x1C0) != 0x80 )
    {
      if ( *(_DWORD *)a1 >= 3u )
        *(_DWORD *)(a1 + 272) |= 0x40u;
      return v4;
    }
    v7 = HalpMcaPhysicalAddressMask & *(_QWORD *)(a1 + 48) & ~((1LL << v6) - 1);
    if ( BYTE1(HalpDeviceBlockUnblockPushLock.OtherTransferCount) )
    {
      v4 = HalpHvMceConsumedMemoryErrorRecovery(
             *(unsigned int *)(a1 + 16),
             (unsigned int)HalpMcaPhysicalAddressMask & *(_DWORD *)(a1 + 48) & ~((1 << v6) - 1),
             v3,
             (v1 & 2) != 0,
             v1 & 1);
      if ( (v4 & 0x80000000) == 0 )
      {
        if ( *(_DWORD *)a1 >= 3u )
          *(_DWORD *)(a1 + 276) |= 2u;
        return v4;
      }
    }
    v8 = HalpMceMemoryErrorRecovery(1, 1, v7);
    v4 = v8;
    if ( v8 < 0 && *(_DWORD *)a1 >= 3u )
      *(_DWORD *)(a1 + 272) |= 0x10u;
    if ( v8 == -1073741637 )
      goto LABEL_24;
  }
  else if ( *(_DWORD *)a1 >= 3u )
  {
    *(_DWORD *)(a1 + 272) |= 0x20u;
  }
  return v4;
}
