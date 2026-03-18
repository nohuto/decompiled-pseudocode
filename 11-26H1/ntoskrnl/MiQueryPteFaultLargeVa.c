/*
 * XREFs of MiQueryPteFaultLargeVa @ 0x1405264C4
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1402D28A0 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MmAccessFault @ 0x1403A2390 (MmAccessFault.c)
 */

__int64 __fastcall MiQueryPteFaultLargeVa(__int64 a1, signed __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx

  v4 = *(_QWORD *)(a1 + 112);
  if ( v4 )
  {
    MiUnlockProtoPoolPage(v4, 0x11u);
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 )
  {
    MiUnlockPageTableInternal(*(_QWORD *)a1, v5);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  LOBYTE(v5) = *(_BYTE *)(a1 + 48);
  if ( (_BYTE)v5 != 17 )
  {
    MiUnlockWorkingSetShared(*(_QWORD *)a1, v5);
    *(_BYTE *)(a1 + 48) = 17;
  }
  return MmAccessFault(0LL, a2, 1, 0LL);
}
