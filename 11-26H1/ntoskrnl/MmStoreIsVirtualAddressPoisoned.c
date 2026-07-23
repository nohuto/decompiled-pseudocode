/*
 * XREFs of MmStoreIsVirtualAddressPoisoned @ 0x14070FB60
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x1402D26F0 (MmStoreProbeAndLockPages.c)
 *     ?StRegionAccessExceptionFilter@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_EXCEPTION_POINTERS@@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAJ@Z @ 0x140642260 (-StRegionAccessExceptionFilter@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_EXCEPTION_POINTERS@@PEAU_ST_DATA.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiStoreGetVadForAddress @ 0x14039699C (MiStoreGetVadForAddress.c)
 */

__int64 __fastcall MmStoreIsVirtualAddressPoisoned(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  struct _LIST_ENTRY **p_Blink; // rsi
  struct _LIST_ENTRY *VadForAddress; // rbx
  ULONG_PTR v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  KIRQL v9; // bp
  unsigned __int64 v10; // rcx
  unsigned int v11; // ebx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx

  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  VadForAddress = MiStoreGetVadForAddress(a1, a2, a3);
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = MiLockWorkingSetShared((__int64)p_Blink, v7, v8);
  MiMakeSystemAddressValid(v6, (LODWORD(VadForAddress[3].Flink) >> 10) & 0x7F, v9, 2);
  v10 = *(_QWORD *)v6;
  v11 = 0;
  if ( (*(_QWORD *)v6 & 1) == 0 )
  {
    v12 = *(_QWORD *)v6;
    if ( qword_140E2D8C0 )
    {
      if ( (v10 & 0x10) != 0 )
        LOWORD(v12) = v10 & 0xFFEF;
      else
        LOWORD(v12) = v10 & qword_140E2D8C8;
    }
    if ( (v12 & 0x400) == 0 && (v12 & 0x800) == 0 && (v12 & 8) == 0 )
      LOBYTE(v11) = ((v10 >> 5) & 0x1F) == 24;
  }
  MiUnlockPageTableInternal((__int64)p_Blink, ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  LOBYTE(v13) = v9;
  MiUnlockWorkingSetShared((__int64)p_Blink, v13);
  return v11;
}
