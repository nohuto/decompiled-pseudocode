/*
 * XREFs of MiInitializeShadowPageTable @ 0x14087B9A8
 * Callers:
 *     MiMakeShadowPageTableRange @ 0x14087BC3C (MiMakeShadowPageTableRange.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiVaToPfnEx @ 0x14024F870 (MiVaToPfnEx.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiInitializePfnForOtherProcess @ 0x14033D818 (MiInitializePfnForOtherProcess.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x14042A570 (MiReadWriteAnyLevelShadowPte.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MiReplicatePteChange @ 0x14052ABE0 (MiReplicatePteChange.c)
 *     MiMarkPxeAsShadowed @ 0x140703DF4 (MiMarkPxeAsShadowed.c)
 */

void __fastcall MiInitializeShadowPageTable(unsigned __int64 a1, _QWORD *a2, int a3)
{
  bool v4; // r12
  unsigned __int64 v6; // rsi
  __int64 PteShadow; // rbx
  __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  __int64 *PteAddress; // rax
  int v11; // edx
  int v12; // edx
  int v13; // r14d
  unsigned __int64 v14; // rax
  int v15; // edx
  ULONG_PTR v16; // rbp
  unsigned int v17; // r8d
  __int64 v18; // rbx
  __int64 v19; // rax
  ULONG_PTR v20; // rbx
  __int64 v21[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = 0;
  if ( !a3 )
  {
    v6 = (__int64)(a1 << 25) >> 16;
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v6) )
    {
      v9 = a1;
      do
      {
        PteAddress = (__int64 *)MiGetPteAddress(v9);
        v9 = (unsigned __int64)PteAddress;
      }
      while ( v11 != 1 );
      PteShadow = *PteAddress;
      if ( (unsigned __int64)PteAddress >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)PteAddress <= 0xFFFFF6FB7DBED7F8uLL )
      {
        PteShadow = MiReadPteShadow((unsigned __int64)PteAddress, PteShadow);
      }
      v8 = MiVaToPfnEx(v6);
    }
    else
    {
      PteShadow = *(_QWORD *)a1;
      if ( a1 >= 0xFFFFF6FB7DBED000uLL && a1 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(a1, *(_QWORD *)a1);
      v8 = ((unsigned __int64)PteShadow >> 12) & 0xFFFFFFFFFFLL;
    }
    if ( (PteShadow & 0x800) != 0 )
    {
      v12 = 4;
    }
    else
    {
      v12 = 1;
      if ( (MiFlags & 0x4000000) != 0 )
        v4 = (PteShadow & 0x40) != 0 && (PteShadow & 2) == 0;
    }
    v13 = v12 | 2;
    if ( PteShadow < 0 )
      v13 = v12;
LABEL_21:
    v14 = MiGetPteAddress(a1);
    v16 = (MiReadWriteAnyLevelShadowPte(v14, v15, 0, *(ULONG_PTR *)&CLFS_LSN_NULL_EXT) >> 12) & 0xFFFFFFFFFFLL;
    v17 = v13 | 0x90000000;
    if ( !a3 )
      goto LABEL_25;
    goto LABEL_24;
  }
  *a2 = 0LL;
  v13 = 6;
  v8 = (__int64)(a2 + 0x44000000000LL) / 48;
  if ( a3 != 3 )
    goto LABEL_21;
  v16 = -1LL;
LABEL_24:
  v17 = v13 | 0x98000000;
LABEL_25:
  v21[0] = MiMakeValidPte(a1, v8, v17);
  v18 = v21[0];
  if ( v4 )
  {
    v19 = v21[0];
    if ( (unsigned __int64)v21 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v21 <= 0xFFFFF6FB7DBED7F8uLL )
      v19 = MiReadPteShadow((unsigned __int64)v21, v21[0]);
    MiWriteValidPteNewProtection(v21, v19 | 0x40);
    v18 = v21[0];
  }
  v20 = v18 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( a3 )
  {
    if ( a3 == 3 )
      v16 = PsInitialSystemProcess->DirectoryTableBase >> 12;
    MiInitializePfnForOtherProcess(v8, a1, v16, 2560);
  }
  MiReadWriteAnyLevelShadowPte(a1, a3, 1, v20);
  if ( a3 == 3 )
  {
    MiMarkPxeAsShadowed(a1);
    MiReplicatePteChange(a1, 0);
  }
}
