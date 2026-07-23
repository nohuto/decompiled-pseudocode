/*
 * XREFs of MiFaultInProbeAddress @ 0x1403A2230
 * Callers:
 *     MiProbeAndLockPacket @ 0x1402D0300 (MiProbeAndLockPacket.c)
 *     MiLockPageLeafPageTable @ 0x1402D0C10 (MiLockPageLeafPageTable.c)
 *     MmStoreProbeAndLockPages @ 0x1402D26F0 (MmStoreProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x1403A1040 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x140367284 (MiLockWorkingSetSharedAtDpc.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1403A20A0 (MiUnlockProbePacketWorkingSet.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiDeliverPicoExceptionForProbedPage @ 0x1406EEFBC (MiDeliverPicoExceptionForProbedPage.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiFaultInProbeAddress(__int64 a1)
{
  unsigned __int64 v2; // r14
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rax
  ULONG_PTR v5; // rbp
  unsigned int v6; // esi
  __int64 v7; // rdx
  int v8; // edi
  __int64 v9; // r8
  __int64 v10; // rcx
  _QWORD v12[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int16 v13; // [rsp+30h] [rbp-98h] BYREF
  _QWORD *v14; // [rsp+38h] [rbp-90h]
  __int64 v15; // [rsp+40h] [rbp-88h]
  __int64 v16; // [rsp+48h] [rbp-80h]
  __int64 v17; // [rsp+50h] [rbp-78h]
  int v18; // [rsp+58h] [rbp-70h]

  memset_0(&v13, 0, 0x78uLL);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = (unsigned __int64)*(unsigned int *)(a1 + 96) >> 1;
  v4 = *(_QWORD *)(a1 + 16) - (v2 & 0xFFFFFFFFFFFFF000uLL);
  v12[0] = v2 & 0xFFFFFFFFFFFFF000uLL;
  v12[1] = v4;
  v13 = 2;
  v14 = v12;
  v5 = 0LL;
  v15 = 1LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v6 = v3 & 3;
  if ( v6 )
  {
    v5 = 2LL;
    if ( v6 == 3 )
    {
      v5 = 0LL;
    }
    else if ( (*(_BYTE *)(a1 + 104) & 0x1E) == 0xC && (unsigned int)MiGetSystemRegionType(v2) == 11 )
    {
      v5 = 0LL;
    }
  }
  MiUnlockProbePacketWorkingSet(a1);
  v8 = MmAccessFault(v5, v2);
  if ( v8 < 0 )
  {
    v9 = *(unsigned int *)(a1 + 104);
    LOBYTE(v9) = v9 & 0x1E;
    if ( (_BYTE)v9 == 2 )
    {
      v9 = *(_QWORD *)(a1 + 88);
      if ( *(_QWORD *)(v9 + 1600) )
        v8 = MiDeliverPicoExceptionForProbedPage(v2, v6);
    }
  }
  *(_DWORD *)(a1 + 104) &= ~1u;
  v10 = *(_QWORD *)(a1 + 112);
  if ( KeGetCurrentIrql() == 2 )
  {
    *(_BYTE *)(a1 + 72) = 17;
    MiLockWorkingSetSharedAtDpc(v10);
  }
  else
  {
    *(_BYTE *)(a1 + 72) = MiLockWorkingSetShared(v10, v7, v9);
  }
  return (unsigned int)v8;
}
