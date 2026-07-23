/*
 * XREFs of MiValidFault @ 0x1403A9098
 * Callers:
 *     MiUserFault @ 0x1403A4EA0 (MiUserFault.c)
 *     MiDispatchFault @ 0x1403A5BC0 (MiDispatchFault.c)
 * Callees:
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiProcessWsInSwapFault @ 0x14029E50C (MiProcessWsInSwapFault.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiRotatedToFrameBuffer @ 0x1403145E4 (MiRotatedToFrameBuffer.c)
 *     MiUpdatePrefetchPriority @ 0x1403169DC (MiUpdatePrefetchPriority.c)
 *     MiUnlockVadTree @ 0x140328470 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     MiCopyOnWrite @ 0x14036CAD8 (MiCopyOnWrite.c)
 *     MiNoFaultFound @ 0x1403A85F8 (MiNoFaultFound.c)
 *     KeInvalidAccessAllowed @ 0x1403A8A70 (KeInvalidAccessAllowed.c)
 *     MiValidWriteFaultProcess @ 0x1403A9440 (MiValidWriteFaultProcess.c)
 *     MiSetFaultPacketDirectives @ 0x1403A981C (MiSetFaultPacketDirectives.c)
 *     KeIsUserVaAccessAllowed @ 0x1403A98D0 (KeIsUserVaAccessAllowed.c)
 *     MiCanGrantExecute @ 0x1404CCA70 (MiCanGrantExecute.c)
 *     MiCheckSystemNxFault @ 0x1404E4804 (MiCheckSystemNxFault.c)
 *     MiValidVirtualizationFault @ 0x140527ED0 (MiValidVirtualizationFault.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiKernelWriteToExecutableMemory @ 0x14070424C (MiKernelWriteToExecutableMemory.c)
 */

__int64 __fastcall MiValidFault(__int64 a1, signed __int64 a2)
{
  ULONG_PTR v2; // rbp
  ULONG_PTR v3; // r15
  ULONG_PTR v4; // rsi
  __int64 *v7; // r12
  _BYTE *v8; // rcx
  _KPROCESS *Process; // r13
  unsigned int v10; // ebx
  int v11; // edx
  int v12; // eax
  char v14; // cl
  unsigned __int64 v15; // rdi
  __int64 v16; // rbx
  struct _LIST_ENTRY *Address; // rdi
  int Flink; // eax
  int v19; // edx
  _BYTE *v20; // rsi
  unsigned int valid; // eax
  unsigned __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  v7 = (__int64 *)(((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = (_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (v4 & 1) == 0 )
  {
LABEL_2:
    if ( v2 >= 0xFFFFF68000000000uLL && v2 <= 0xFFFFF6FFFFFFFFFFuLL && (a2 & 0x80u) != 0LL )
    {
      if ( (v4 & 1) != 0 )
      {
        if ( *v8 != 1 && *v8 != 3 && *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
LABEL_66:
          KeBugCheckEx(0x50u, v2, v3, v4, 8uLL);
      }
      else if ( !KeInvalidAccessAllowed(v4, 0) )
      {
        goto LABEL_66;
      }
      return (unsigned int)-1073741819;
    }
    v10 = 0;
    if ( (a2 & 4) == 0 && v2 < 0x7FFFFFFF0000LL )
      return (unsigned int)-1073741819;
    v11 = 256;
    if ( (*(_DWORD *)(a1 + 80) & 0x100) == 0
      && v4
      && v2 < 0xFFFF800000000000uLL
      && (v4 & 1) == 0
      && !(unsigned __int8)KeIsUserVaAccessAllowed(v4) )
    {
      if ( !KeInvalidAccessAllowed(v4, 0) )
        KeBugCheckEx(0x50u, v2, v3, v4, 0xFuLL);
      v11 = 256;
    }
    if ( (v3 & 2) != 0 )
    {
      v24 = 0LL;
      if ( (a2 & 0x200) != 0 )
      {
        v12 = MiCopyOnWrite(v2, (unsigned __int64)v7, -1LL, 0, &v24);
        v10 = v12;
        if ( v12 < 0 )
        {
          MiSetFaultPacketDirectives(a1, (unsigned int)v12, v24);
          return v10;
        }
        v10 = 274;
        goto LABEL_9;
      }
      if ( (a2 & 0x800) == 0 )
        return (unsigned int)-1073741819;
      if ( a2 >= 0
        && (a2 & 0x40) == 0
        && (a2 & 2) == 0
        && (Process[1].DirectoryTableBase & 0x1000000000LL) != 0
        && v2 < 0xFFFF800000000000uLL )
      {
        v14 = BYTE1(KeGetCurrentThread()[1].Queue);
        if ( (v11 & *(_DWORD *)(a1 + 80)) != 0 )
        {
          if ( (v14 & 0x10) == 0 )
            return (unsigned int)-1073739997;
        }
        else if ( (v14 & 0x20) == 0 )
        {
          v10 = MiKernelWriteToExecutableMemory(a1, a2, Process);
          if ( (v10 & 0x80000000) != 0 )
            return v10;
        }
      }
      MiValidWriteFaultProcess(*(_QWORD *)(a1 + 56), a2);
    }
    else
    {
      if ( (v3 & 0x10) != 0 )
      {
        if ( a2 < 0 )
        {
          if ( !(unsigned int)MiCanGrantExecute(Process, v2) )
            return (unsigned int)-1073741819;
          v22 = ((unsigned __int64)a2 >> 12) & 0xFFFFFFFFFFLL;
          if ( v22 > qword_140E2D920 || ((*(_QWORD *)(48 * v22 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
            return (unsigned int)-1073741819;
          v23 = a2 & 0x7FFFFFFFFFFFFFFFLL;
          if ( (MiFlags & 0x400) != 0 || (MiFlags & 0x800) != 0 )
            v23 |= 0x20uLL;
          MiWriteValidPteNewProtection(v7, v23);
          if ( (MiFlags & 0x400) == 0 && (MiFlags & 0x800) == 0 )
            MiFlushSingleTbEntry(v2, 0LL);
LABEL_9:
          if ( (v4 & 1) != 0 )
          {
            v20 = (_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
            if ( *v20 == 5 )
            {
              valid = MiValidVirtualizationFault(a1, v20, v7);
              if ( (int)(valid + 0x80000000) >= 0 && valid != -1073740748 )
                return valid;
            }
          }
          return v10;
        }
        if ( (v11 & *(_DWORD *)(a1 + 80)) == 0 )
          MiCheckSystemNxFault(a1, a2, 5LL);
      }
      if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 && ((MiFlags & 0x4000000) == 0 || (a2 & 0x42) != 0x40) )
        return (unsigned int)-1073741819;
    }
    MiNoFaultFound(a1, v7, v2, v4, 0, a2);
    goto LABEL_9;
  }
  if ( *v8 == 1 )
  {
    MiUpdatePrefetchPriority((__int64)v8, v2, 0LL);
  }
  else
  {
    if ( *v8 != 3 )
      goto LABEL_2;
    v15 = ((unsigned __int64)a2 >> 12) & 0xFFFFFFFFFFLL;
    if ( v15 <= qword_140E2D920 )
    {
      v16 = 6 * v15;
      if ( ((*(_QWORD *)(48 * v15 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        MiLockVadTree(1u, v4 & 1, 0xFFFFF68000000000uLL);
        Address = MiLocateAddress(v2);
        MiUnlockVadTree(1, 0x11u);
        if ( Address )
        {
          Flink = (int)Address[3].Flink;
          v19 = Flink & 0x1C;
          if ( (((v19 - 4) & 0xFFFFFFE7) != 0 || v19 == 28)
            && ((Flink & 0x80000) == 0 || (Flink & 0x200000) == 0 && (Flink & 0x60000u) < 0x40000)
            && (v19 != 16 || !MiRotatedToFrameBuffer((unsigned __int64)v7)) )
          {
            MiProcessWsInSwapFault(*(_QWORD *)(a1 + 56), 8 * v16 - 0x220000000000LL, v2, 0LL);
          }
        }
      }
    }
  }
  return 0LL;
}
