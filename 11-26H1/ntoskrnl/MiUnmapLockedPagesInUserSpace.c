/*
 * XREFs of MiUnmapLockedPagesInUserSpace @ 0x140A027C4
 * Callers:
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiDeleteVirtualAddresses @ 0x14036358C (MiDeleteVirtualAddresses.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiRemoveSecureEntry @ 0x14048A184 (MiRemoveSecureEntry.c)
 *     MiLocateOldestSecure @ 0x1404D0A1C (MiLocateOldestSecure.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 *     MiCheckSecuredVad @ 0x140A033E8 (MiCheckSecuredVad.c)
 */

void __fastcall MiUnmapLockedPagesInUserSpace(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4, __int64 a3)
{
  __int64 PteAddress; // rbp
  _KPROCESS *Process; // r15
  ULONG_PTR v7; // rax
  ULONG_PTR v8; // rbx
  __int64 v9; // rcx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rsi
  _QWORD *OldestSecure; // rax
  ULONG_PTR v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 PteShadow; // rax
  int v21; // edx
  _OWORD v22[3]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v23; // [rsp+60h] [rbp-38h]
  int v24; // [rsp+B0h] [rbp+18h] BYREF
  int v25; // [rsp+B4h] [rbp+1Ch]

  v25 = HIDWORD(a3);
  v24 = 0;
  PteAddress = MiGetPteAddress(BugCheckParameter2);
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = MiObtainReferencedVadEx(BugCheckParameter2, 1LL, &v24);
  v8 = v7;
  if ( v7 && (MiReadVadFlags(v7) & 0x1C) == 4 )
  {
    v10 = ((*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) << 12) | 0xFFF;
    v11 = (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32)) << 12;
    if ( (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) != v11
      || BugCheckParameter4 != (*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32))
                             - (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32))
                             + 1 )
    {
      if ( v11 + 4096 != (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL)
        || BugCheckParameter4 != (*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32))
                               - (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32))
                               - 1 )
      {
        goto LABEL_10;
      }
      if ( (PteAddress & 0xFFF) != 0 )
      {
        v19 = PteAddress - 8;
        PteShadow = *(_QWORD *)(PteAddress - 8);
        if ( (unsigned __int64)(PteAddress - 8) >= 0xFFFFF6FB7DBED000uLL && v19 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow(v19, *(_QWORD *)(PteAddress - 8));
        if ( PteShadow )
          goto LABEL_10;
      }
      v14 = MiGetPteAddress(v10);
      v17 = v14;
      if ( (v14 & 0xFFF) != 0 )
      {
        v18 = *(_QWORD *)v14;
        if ( v17 >= v16 && v17 <= v15 )
          v18 = MiReadPteShadow(v17, v18);
        if ( v18 )
LABEL_10:
          KeBugCheckEx(0x1Au, 0x1230uLL, v8, BugCheckParameter2, BugCheckParameter4);
      }
    }
    OldestSecure = MiLocateOldestSecure(v8);
    if ( !OldestSecure )
      KeBugCheckEx(0x1Au, 0x1231uLL, BugCheckParameter2, v8, 0LL);
    MiRemoveSecureEntry(v13, OldestSecure);
    if ( (MiReadVadFlags(v8) & 2) != 0 && (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
    {
      v24 = MiCheckSecuredVad(v8, v11, (*(_DWORD *)(v8 + 28) - *(_DWORD *)(v8 + 24) + 1) << 12, 85, 0, 0LL);
      if ( v24 < 0 )
      {
        v21 = *(_DWORD *)(v8 + 28);
        v23 = 0LL;
        v22[2] = v8;
        memset(v22, 0, 32);
        MiDeleteVirtualAddresses(v11, (v21 << 12) | 0xFFF, 64, (__int64)v22);
        goto LABEL_21;
      }
    }
    MiDeleteVad(v8, 0LL, 0x40000000);
  }
  else if ( v8 )
  {
LABEL_21:
    MiUnlockAndDereferenceVad((volatile signed __int32 *)v8);
  }
}
