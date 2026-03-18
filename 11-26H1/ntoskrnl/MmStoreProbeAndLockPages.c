/*
 * XREFs of MmStoreProbeAndLockPages @ 0x1402F0670
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x140382C98 (SmKmStoreHelperCommandProcess.c)
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x1404A2D4C (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiProbeAndLockPrepare @ 0x1402E5470 (MiProbeAndLockPrepare.c)
 *     MiLockPageLeafPageTable @ 0x1402EEB90 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x1402EF490 (MiProbeLeafPteAccess.c)
 *     MiSetProbePagesAhead @ 0x1402EFB10 (MiSetProbePagesAhead.c)
 *     MiGetPagePrivilege @ 0x1402F9878 (MiGetPagePrivilege.c)
 *     MiSetPfnIdentity @ 0x140369440 (MiSetPfnIdentity.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1403A0340 (MiUnlockProbePacketWorkingSet.c)
 *     MiFaultInProbeAddress @ 0x1403A04D0 (MiFaultInProbeAddress.c)
 *     MiUnlockStoreLockedPages @ 0x1404075E4 (MiUnlockStoreLockedPages.c)
 *     MiStoreMarkLockedPagesModified @ 0x14045CC24 (MiStoreMarkLockedPagesModified.c)
 *     KeSetPagePrivilege @ 0x1404B0F70 (KeSetPagePrivilege.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     MmStoreIsVirtualAddressPoisoned @ 0x14070AEB0 (MmStoreIsVirtualAddressPoisoned.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall MmStoreProbeAndLockPages(ULONG_PTR BugCheckParameter4, int a2)
{
  struct _KTHREAD *CurrentThread; // r13
  ULONG_PTR v5; // r15
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // eax
  int v9; // ecx
  __int64 *v10; // rcx
  int v11; // edi
  __int64 v12; // r14
  ULONG_PTR v13; // rbx
  unsigned int v14; // esi
  char v16; // al
  int PagePrivilege; // eax
  __int64 v18; // r9
  __int128 v19; // [rsp+30h] [rbp-99h] BYREF
  char v20[8]; // [rsp+40h] [rbp-89h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+48h] [rbp-81h]
  unsigned __int64 v22; // [rsp+58h] [rbp-71h]
  unsigned __int64 v23; // [rsp+60h] [rbp-69h]
  unsigned __int64 v24; // [rsp+70h] [rbp-59h]
  __int64 *v25; // [rsp+78h] [rbp-51h]
  __int64 v26; // [rsp+D0h] [rbp+7h]
  int v27; // [rsp+138h] [rbp+6Fh] BYREF

  memset_0(v20, 0, 0xB8uLL);
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v19 = 1uLL;
  v6 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  v7 = v6 & 0xFFFFFFFB;
  v8 = v6 & 0xFFFFFFF3 | 4;
  v9 = v7 | 8;
  if ( !a2 )
    v9 = v8;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) = v9;
  MiProbeAndLockPrepare(
    (__int64)v20,
    BugCheckParameter4,
    *(_QWORD *)(BugCheckParameter4 + 32) + *(unsigned int *)(BugCheckParameter4 + 44),
    *(unsigned int *)(BugCheckParameter4 + 40),
    (__int64)&v19);
  v10 = v25;
  do
  {
    *v10 = -1LL;
    v27 = 0;
    while ( 1 )
    {
      v11 = MiLockPageLeafPageTable((__int64)v20);
      if ( !v24 )
        break;
      v11 = MiProbeLeafPteAccess((__int64)v20, (unsigned __int64)&v27);
      if ( v11 < 0 )
        break;
      if ( !v27 )
      {
        v26 = (v24 >> 12) & 0xFFFFFFFFFFLL;
        MiSetProbePagesAhead((__int64)v20);
        v11 = 0;
        goto LABEL_9;
      }
      if ( v27 != 1 )
      {
        v11 = MiFaultInProbeAddress(v20);
        if ( v11 < 0 )
        {
          ++HIDWORD(stru_140E2EB88.LastXStateSaveDebugInfo);
          break;
        }
      }
    }
    if ( v11 == -1073741801 )
      break;
    if ( v11 == -1073741819 )
    {
      v5 = BugCheckParameter3;
      MiUnlockProbePacketWorkingSet(v20);
      goto LABEL_36;
    }
    if ( v11 < 0 )
      KeBugCheckEx(0x1Au, 0x6001uLL, v11, BugCheckParameter3, BugCheckParameter4);
LABEL_9:
    v12 = 48 * v26;
    v13 = 48 * v26 - 0x220000000000LL;
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v14 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v14);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v13 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v13 + 34) & 8) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v11 = -1073740749;
      MiUnlockProbePacketWorkingSet(v20);
      goto LABEL_36;
    }
    *(_DWORD *)(v13 + 32) ^= (unsigned __int16)(*(_DWORD *)(v13 + 32) ^ (*(_DWORD *)(v13 + 32) + 1));
    *(_DWORD *)(v13 + 32) |= 0x80000u;
    if ( (*(_DWORD *)(v13 + 16) & 0x400LL) == 0 && (MiGetPagePrivilege(v13) & 0x10) != 0 )
    {
      v16 = (*(_QWORD *)(v13 + 40) >> 60) & 7;
      v19 = 0LL;
      if ( v16 == 3 )
      {
        PagePrivilege = MiGetPagePrivilege(v13);
        if ( PagePrivilege )
        {
          v18 = 256LL;
          if ( (PagePrivilege & 0x20) == 0 )
            v18 = 32LL;
          if ( (int)KeSetPagePrivilege(v12 / 48, 0LL, &v19, v18) < 0 )
            KeBugCheckEx(0x1Au, 0x5150BuLL, v12 / 48, 0LL, 0LL);
        }
        MiSetPfnIdentity(v13, 0LL);
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *v25 = v26;
    v10 = v25 + 1;
    BugCheckParameter3 += 4096LL;
    ++v25;
    v22 += 8LL;
  }
  while ( v22 <= v23 );
  MiUnlockProbePacketWorkingSet(v20);
  if ( v11 >= 0 )
  {
    MiStoreMarkLockedPagesModified(BugCheckParameter4);
    goto LABEL_16;
  }
LABEL_36:
  MiUnlockStoreLockedPages(BugCheckParameter4);
LABEL_16:
  if ( v5 )
  {
    if ( !(unsigned int)MmStoreIsVirtualAddressPoisoned(v5) )
      KeBugCheckEx(0x1Au, 0x6001uLL, v11, v5, BugCheckParameter4);
    v11 = -1073740574;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= 0xFFFFFFF3;
  return (unsigned int)v11;
}
