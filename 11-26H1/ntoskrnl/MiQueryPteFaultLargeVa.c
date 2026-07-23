/*
 * XREFs of MiQueryPteFaultLargeVa @ 0x140528B34
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1402B4660 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 */

__int64 __fastcall MiQueryPteFaultLargeVa(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx

  v4 = a2;
  v5 = *(_QWORD *)(a1 + 112);
  if ( v5 )
  {
    LOBYTE(a2) = 17;
    MiUnlockProtoPoolPage(v5, a2, a3);
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 40);
  if ( v6 )
  {
    MiUnlockPageTableInternal(*(_QWORD *)a1, v6);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  LOBYTE(v6) = *(_BYTE *)(a1 + 48);
  if ( (_BYTE)v6 != 17 )
  {
    MiUnlockWorkingSetShared(*(_QWORD *)a1, v6);
    *(_BYTE *)(a1 + 48) = 17;
  }
  return MmAccessFault(0LL, v4, 1, 0LL);
}
