/*
 * XREFs of MmStoreProbeAndLockPages @ 0x1402D26F0
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x140384A48 (SmKmStoreHelperCommandProcess.c)
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x14049C76C (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 * Callees:
 *     MiProbeAndLockPrepare @ 0x1402C74B0 (MiProbeAndLockPrepare.c)
 *     MiLockPageLeafPageTable @ 0x1402D0C10 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x1402D1510 (MiProbeLeafPteAccess.c)
 *     MiSetProbePagesAhead @ 0x1402D1B90 (MiSetProbePagesAhead.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSetPfnIdentity @ 0x14036B1E0 (MiSetPfnIdentity.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1403A20A0 (MiUnlockProbePacketWorkingSet.c)
 *     MiFaultInProbeAddress @ 0x1403A2230 (MiFaultInProbeAddress.c)
 *     MiUnlockStoreLockedPages @ 0x1404006D4 (MiUnlockStoreLockedPages.c)
 *     MiStoreMarkLockedPagesModified @ 0x1404567CC (MiStoreMarkLockedPagesModified.c)
 *     KeSetPagePrivilege @ 0x1404AA600 (KeSetPagePrivilege.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MmStoreIsVirtualAddressPoisoned @ 0x14070FB60 (MmStoreIsVirtualAddressPoisoned.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // r8
  __int64 v15; // r14
  ULONG_PTR v16; // rbx
  unsigned int v17; // esi
  char v19; // al
  int PagePrivilege; // eax
  __int64 v21; // r9
  __int128 v22; // [rsp+30h] [rbp-99h] BYREF
  char v23[8]; // [rsp+40h] [rbp-89h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+48h] [rbp-81h]
  unsigned __int64 v25; // [rsp+58h] [rbp-71h]
  unsigned __int64 v26; // [rsp+60h] [rbp-69h]
  unsigned __int64 v27; // [rsp+70h] [rbp-59h]
  __int64 *v28; // [rsp+78h] [rbp-51h]
  __int64 v29; // [rsp+D0h] [rbp+7h]
  int v30; // [rsp+138h] [rbp+6Fh] BYREF

  memset_0(v23, 0, 0xB8uLL);
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v22 = 1uLL;
  v6 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  v7 = v6 & 0xFFFFFFFB;
  v8 = v6 & 0xFFFFFFF3 | 4;
  v9 = v7 | 8;
  if ( !a2 )
    v9 = v8;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) = v9;
  MiProbeAndLockPrepare(
    (__int64)v23,
    BugCheckParameter4,
    *(_QWORD *)(BugCheckParameter4 + 32) + *(unsigned int *)(BugCheckParameter4 + 44),
    *(unsigned int *)(BugCheckParameter4 + 40),
    (__int64)&v22);
  v10 = v28;
  do
  {
    *v10 = -1LL;
    v30 = 0;
    while ( 1 )
    {
      v13 = MiLockPageLeafPageTable((__int64)v23);
      if ( !v27 )
        break;
      v13 = MiProbeLeafPteAccess((__int64)v23, (unsigned __int64)&v30);
      if ( v13 < 0 )
        break;
      if ( !v30 )
      {
        v29 = (v27 >> 12) & 0xFFFFFFFFFFLL;
        MiSetProbePagesAhead((__int64)v23);
        v13 = 0;
        goto LABEL_9;
      }
      if ( v30 != 1 )
      {
        v13 = MiFaultInProbeAddress(v23);
        if ( v13 < 0 )
        {
          ++HIDWORD(stru_140E2ED08.LastXStateSaveDebugInfo);
          break;
        }
      }
    }
    if ( v13 == -1073741801 )
      break;
    if ( v13 == -1073741819 )
    {
      v5 = BugCheckParameter3;
      MiUnlockProbePacketWorkingSet(v23);
      goto LABEL_36;
    }
    if ( v13 < 0 )
      KeBugCheckEx(0x1Au, 0x6001uLL, v13, BugCheckParameter3, BugCheckParameter4);
LABEL_9:
    v15 = 48 * v29;
    v16 = 48 * v29 - 0x220000000000LL;
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v17 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v12, v11, v14) )
        {
          HvlNotifyLongSpinWait(v17);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v16 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v16 + 34) & 8) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v13 = -1073740749;
      MiUnlockProbePacketWorkingSet(v23);
      goto LABEL_36;
    }
    *(_DWORD *)(v16 + 32) ^= (unsigned __int16)(*(_DWORD *)(v16 + 32) ^ (*(_DWORD *)(v16 + 32) + 1));
    *(_DWORD *)(v16 + 32) |= 0x80000u;
    if ( (*(_DWORD *)(v16 + 16) & 0x400LL) == 0 && (MiGetPagePrivilege(v16) & 0x10) != 0 )
    {
      v19 = (*(_QWORD *)(v16 + 40) >> 60) & 7;
      v22 = 0LL;
      if ( v19 == 3 )
      {
        PagePrivilege = MiGetPagePrivilege(v16);
        if ( PagePrivilege )
        {
          v21 = 256LL;
          if ( (PagePrivilege & 0x20) == 0 )
            v21 = 32LL;
          if ( (int)KeSetPagePrivilege(v15 / 48, 0LL, &v22, v21) < 0 )
            KeBugCheckEx(0x1Au, 0x5150BuLL, v15 / 48, 0LL, 0LL);
        }
        MiSetPfnIdentity(v16, 0LL);
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *v28 = v29;
    v10 = v28 + 1;
    BugCheckParameter3 += 4096LL;
    ++v28;
    v25 += 8LL;
  }
  while ( v25 <= v26 );
  MiUnlockProbePacketWorkingSet(v23);
  if ( v13 >= 0 )
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
      KeBugCheckEx(0x1Au, 0x6001uLL, v13, v5, BugCheckParameter4);
    v13 = -1073740574;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= 0xFFFFFFF3;
  return (unsigned int)v13;
}
