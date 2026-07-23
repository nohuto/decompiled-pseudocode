/*
 * XREFs of MiGetPageProtection @ 0x1402E8264
 * Callers:
 *     MiQueryAddressState @ 0x1402E7200 (MiQueryAddressState.c)
 *     MiCommitVadFillPageTables @ 0x140312F04 (MiCommitVadFillPageTables.c)
 *     MiProtectInitialVaAttributes @ 0x140313660 (MiProtectInitialVaAttributes.c)
 * Callees:
 *     MiGetPrototypePteDirect @ 0x1402B2B80 (MiGetPrototypePteDirect.c)
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiRotatedToFrameBuffer @ 0x1403145E4 (MiRotatedToFrameBuffer.c)
 *     MiIsPrototypePteVadLookup @ 0x14031E380 (MiIsPrototypePteVadLookup.c)
 *     MiLockTransitionLeafPageEx @ 0x1403400D0 (MiLockTransitionLeafPageEx.c)
 *     MiLocateCloneAddress @ 0x14036D7EC (MiLocateCloneAddress.c)
 *     MiGetPfnProtection @ 0x1404290C0 (MiGetPfnProtection.c)
 *     MiGetImageProtoProtection @ 0x14042EA80 (MiGetImageProtoProtection.c)
 *     MiVadExtentCommitted @ 0x1404468A0 (MiVadExtentCommitted.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x140478A34 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiCaptureProtectionFromLockedProto @ 0x1404AD594 (MiCaptureProtectionFromLockedProto.c)
 *     MiGetValidAweProtection @ 0x1404DCCEC (MiGetValidAweProtection.c)
 *     MiGetValidAwePartitionId @ 0x1404F0104 (MiGetValidAwePartitionId.c)
 *     MiGetProtectionFromPte @ 0x140532CCC (MiGetProtectionFromPte.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiGetPageProtection(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, __int64 **a3, _WORD *a4)
{
  unsigned int v4; // ebx
  ULONG_PTR v5; // rdi
  int v6; // r12d
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v15; // rax
  __int16 ValidAwePartitionId; // ax
  _WORD *v17; // r9
  _WORD *v18; // r9
  unsigned __int64 v19; // rsi
  __int64 *ProtoPteAddress; // rbx
  __int64 v21; // r10
  __int64 PrototypePteDirect; // rbp
  __int64 v23; // r9
  _KPROCESS *Process; // rcx
  __int64 CloneAddress; // rax
  _WORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rbx
  unsigned int v30; // edx
  unsigned int v31; // ebx
  unsigned int *v32; // [rsp+70h] [rbp+8h] BYREF
  __int64 v33; // [rsp+78h] [rbp+10h]

  v4 = *(_DWORD *)(BugCheckParameter2 + 48);
  *a4 = 0;
  v5 = *(_QWORD *)a2;
  v6 = v4 & 0x1C;
  v33 = 0LL;
  v32 = 0LL;
  *a3 = 0LL;
  if ( v6 == 12 && (v4 & 0x880000) != 0x880000 )
  {
    ValidAwePartitionId = MiGetValidAwePartitionId(v5);
    *v17 = ValidAwePartitionId;
    return MiGetValidAweProtection(BugCheckParameter2, v5);
  }
  if ( (v5 & 1) != 0 )
  {
    v11 = (v5 >> 12) & 0xFFFFFFFFFFLL;
    v12 = 6 * v11;
    v13 = 48 * v11 - 0x220000000000LL;
    if ( v6 == 4 )
    {
      if ( v11 <= qword_140E2D920 && ((*(_QWORD *)(48 * v11 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
        *a4 = (*(_QWORD *)(v13 + 40) >> 43) & 0x3FF;
      v31 = (v4 >> 5) & 0x1F;
      if ( (v5 & 0x18) == 8 )
      {
        v31 |= 0x18u;
      }
      else if ( (v5 & 0x10) != 0 )
      {
        v31 |= 8u;
      }
      return v31;
    }
    else if ( v6 == 16 && (unsigned int)MiRotatedToFrameBuffer(a2, 0xFFFFDE0000000000uLL, a3, a4) )
    {
      v30 = (v5 & 0x800) != 0 ? 4 : 1;
      if ( (v4 & 0xE0) != 0 && (v4 & 0x300) == 768 )
      {
        v30 |= 0x18u;
      }
      else if ( (v4 & 0x300) == 0x100 )
      {
        v30 |= 8u;
      }
      return v30;
    }
    else
    {
      *a4 = (*(_QWORD *)(v13 + 40) >> 43) & 0x3FF;
      if ( (*(_QWORD *)(v13 + 40) & 0x10000000000LL) != 0 )
      {
        return MiGetProtectionFromPte(BugCheckParameter2, v5);
      }
      else if ( *(__int64 *)(v13 + 40) < 0 )
      {
        return MiGetPfnProtection(v12, (__int64)(a2 << 25) >> 16, v13);
      }
      else
      {
        return (*(_DWORD *)(v13 + 16) >> 5) & 0x1F;
      }
    }
  }
  if ( (v5 & 0x400) == 0 )
  {
    if ( (v5 & 0x800) != 0 && (v15 = MiLockTransitionLeafPageEx(a2)) != 0 )
    {
      v21 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v15 + 40) >> 43) & 0x3FFLL));
      if ( (*(_DWORD *)(v21 + 4) & 0x20) != 0 )
        v21 = **(_QWORD **)(v21 + 21400);
      *a4 = *(_WORD *)v21;
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      *a4 = **(_WORD **)(stru_140E2ED08.ThreadLock
                       + 8LL * HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
    }
    LODWORD(v5) = (v5 >> 5) & 0x1F;
    return (unsigned int)v5;
  }
  if ( (unsigned int)MiIsPrototypePteVadLookup(v5) )
  {
    v5 = (v5 >> 5) & 0x1F;
    v19 = (__int64)(a2 << 25) >> 16;
    if ( (v4 & 0x80000) == 0 )
    {
      *v18 = **(_WORD **)(stru_140E2ED08.ThreadLock
                        + 8LL * (*(_DWORD *)(**(_QWORD **)(BugCheckParameter2 + 80) + 60LL) & 0x3FF));
      ProtoPteAddress = (__int64 *)MiGetProtoPteAddress(BugCheckParameter2, v19 >> 12, 0xCu, &v32);
      if ( ProtoPteAddress && (unsigned int)MiVadExtentCommitted(BugCheckParameter2, v19) )
      {
        if ( *(_QWORD *)(*(_QWORD *)v32 + 64LL) || (*(_DWORD *)(*(_QWORD *)v32 + 56LL) & 0x2000) != 0 )
          return (unsigned int)v5;
        if ( (int)MiTryLockProtoPoolPageAtDpc((ULONG_PTR)ProtoPteAddress) < 0 )
        {
          *a3 = ProtoPteAddress;
          LODWORD(v5) = 256;
          return (unsigned int)v5;
        }
        LOBYTE(v27) = 17;
        v29 = *ProtoPteAddress;
        MiUnlockProtoPoolPage(v33, v27, v28);
        if ( v29 )
          return (unsigned int)v5;
      }
      LODWORD(v5) = 0;
    }
    return (unsigned int)v5;
  }
  PrototypePteDirect = MiGetPrototypePteDirect(v5);
  if ( !(unsigned int)MiIsPrototypePteVadLookup(v5) && (v5 & 0x800) != 0 )
  {
    v26 = **(_WORD ***)(((PrototypePteDirect - 32) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
    goto LABEL_37;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[1].IdealProcessorAssignmentBlock )
  {
    CloneAddress = MiLocateCloneAddress(Process, PrototypePteDirect);
    if ( CloneAddress )
    {
      v26 = *(_WORD **)(*(_QWORD *)(CloneAddress + 56) + 24LL);
LABEL_37:
      *a4 = *v26;
      return (unsigned int)MmMakeProtectNotWriteCopy[(unsigned int)MiCaptureProtectionFromLockedProto(PrototypePteDirect)];
    }
  }
  if ( v6 != 8 || (v4 & 0x3E0) != 0xE0 )
    KeBugCheckEx(0x1Au, 0x41202uLL, a2, v5, BugCheckParameter2);
  *a4 = **(_WORD **)(stru_140E2ED08.ThreadLock
                   + 8LL * (*(_DWORD *)(**(_QWORD **)(BugCheckParameter2 + 80) + 60LL) & 0x3FF));
  return MiGetImageProtoProtection(BugCheckParameter2, PrototypePteDirect, 1023LL, v23);
}
