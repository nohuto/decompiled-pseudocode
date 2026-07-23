/*
 * XREFs of HalpMceRecoveryMemoryErrorAmd @ 0x140590FC0
 * Callers:
 *     HalpMceRecoveryMemoryError @ 0x140590F9C (HalpMceRecoveryMemoryError.c)
 * Callees:
 *     HalpHvMceConsumedMemoryErrorRecovery @ 0x140587658 (HalpHvMceConsumedMemoryErrorRecovery.c)
 *     HalpMceMemoryErrorRecovery @ 0x140590CA8 (HalpMceMemoryErrorRecovery.c)
 */

__int64 __fastcall HalpMceRecoveryMemoryErrorAmd(__int64 a1)
{
  __int64 v1; // rax
  char v2; // si
  __int64 v3; // r10
  __int64 v4; // rdi
  int v6; // r8d
  int v7; // eax

  v1 = *(_QWORD *)(a1 + 20);
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = 0LL;
  v6 = -1073741637;
  if ( (((unsigned int)v1 >> 1) & 1) == 0 )
  {
    if ( *(_DWORD *)a1 >= 3u )
      *(_DWORD *)(a1 + 272) |= 8u;
    return (unsigned int)-1073741823;
  }
  if ( (v3 & 0x80000000000LL) == 0 && (v1 & 1) != 0 )
    goto LABEL_16;
  if ( (v3 & 0x400000000000000LL) != 0 )
  {
    v2 = 1;
    v4 = *(_QWORD *)(a1 + 48) & ~((1LL << HIBYTE(*(_QWORD *)(a1 + 48))) - 1) & 0xFFFFFFFFFFFFFFLL;
  }
  if ( BYTE1(HalpDeviceBlockUnblockPushLock.OtherTransferCount) )
  {
    v6 = HalpHvMceConsumedMemoryErrorRecovery(*(unsigned int *)(a1 + 16), v4, v3, (v1 & 2) != 0, v1 & 1);
    if ( v6 >= 0 )
    {
      if ( *(_DWORD *)a1 >= 3u )
        *(_DWORD *)(a1 + 276) |= 2u;
      return (unsigned int)v6;
    }
  }
  v7 = HalpMceMemoryErrorRecovery(1, v2, v4);
  v6 = v7;
  if ( v7 < 0 && *(_DWORD *)a1 >= 3u )
    *(_DWORD *)(a1 + 272) |= 0x10u;
  if ( v7 == -1073741637 )
  {
LABEL_16:
    if ( *(_DWORD *)a1 >= 3u )
      *(_DWORD *)(a1 + 272) |= 1u;
  }
  return (unsigned int)v6;
}
