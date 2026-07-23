/*
 * XREFs of MiLockStealUserVm @ 0x140458690
 * Callers:
 *     MiInitializePageTradePacket @ 0x140292A70 (MiInitializePageTradePacket.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     MiUnlockStealVm @ 0x140294270 (MiUnlockStealVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiFastLockLeafPageTable @ 0x1402CF2D0 (MiFastLockLeafPageTable.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiLockLowestValidPageTableEx @ 0x1402E2690 (MiLockLowestValidPageTableEx.c)
 *     MiRotatedToFrameBuffer @ 0x1403145E4 (MiRotatedToFrameBuffer.c)
 *     MiSmallVaStillMapsFrame @ 0x1403167FC (MiSmallVaStillMapsFrame.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiGetTopLevelPfn @ 0x1403FD790 (MiGetTopLevelPfn.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x1403FD950 (MiGetPageTablePfnBuddyRaw.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14040B5E0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiLockStealUserVm(__int64 a1, ULONG_PTR a2, unsigned __int8 a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r15
  int v8; // ebp
  unsigned __int64 v9; // r12
  __int64 TopLevelPfn; // rax
  PEPROCESS PageTablePfnBuddyRaw; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  ULONG_PTR v14; // r14
  __int64 p_Blink; // r13
  __int64 v17; // rcx
  __int128 *v18; // r8
  struct _KTHREAD *CurrentThread; // r8
  ULONG_PTR ApcStateIndex; // rax
  unsigned int v21; // ebx
  char v22; // al
  __int64 v23; // rdx
  __int64 v24; // r8
  struct _LIST_ENTRY *Address; // r14
  volatile signed __int32 *v26; // rax
  volatile _KAFFINITY_EX *ActiveProcessors; // rax
  int Flink; // eax
  int v29; // ecx
  int v30; // eax
  unsigned __int64 v31; // rdx
  __int64 *v32; // rcx
  unsigned __int64 v33; // r15
  unsigned __int64 valid; // rax
  unsigned __int64 PteShadow; // rax
  int v36; // r8d
  unsigned __int64 Flink_low; // rax
  __int64 v38; // r8
  __int64 v39; // r11
  unsigned __int64 v40; // r9
  _QWORD *v41; // r9
  unsigned int i; // edx
  __int64 v43; // rcx
  int v44; // [rsp+30h] [rbp-B8h]
  __int64 *v45; // [rsp+38h] [rbp-B0h] BYREF
  unsigned __int64 v46; // [rsp+40h] [rbp-A8h]
  __int64 v47; // [rsp+48h] [rbp-A0h]
  __int64 v48; // [rsp+50h] [rbp-98h]
  __int64 v49; // [rsp+58h] [rbp-90h]
  __int128 v50; // [rsp+60h] [rbp-88h] BYREF
  __int128 v51; // [rsp+70h] [rbp-78h]
  __int128 v52; // [rsp+80h] [rbp-68h]
  __int64 retaddr; // [rsp+E8h] [rbp+0h]

  v47 = a1;
  v46 = a4;
  v6 = a3;
  v49 = 0LL;
  v7 = (__int64)(a4 << 25) >> 16;
  v8 = 0;
  if ( v7 < 0xFFFFF68000000000uLL || (v44 = 1, v7 > 0xFFFFF6FFFFFFFFFFuLL) )
    v44 = 0;
  *(_BYTE *)(a5 + 64) = 0;
  v9 = (__int64)(a2 + 0x220000000000LL) / 48;
  v48 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFLL;
  if ( v48 == v9 )
    _InterlockedIncrement(&dword_140EF9004);
  TopLevelPfn = MiGetTopLevelPfn(a2);
  PageTablePfnBuddyRaw = MiGetPageTablePfnBuddyRaw(TopLevelPfn);
  v14 = (ULONG_PTR)PageTablePfnBuddyRaw;
  p_Blink = (__int64)&PageTablePfnBuddyRaw[2].ReadyListHead.Blink;
  if ( v13 != a2 )
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( PageTablePfnBuddyRaw != PsIdleProcess )
  {
    if ( v48 == v9 && (PageTablePfnBuddyRaw[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
    {
      _InterlockedIncrement(&dword_140EF9058);
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_21;
    }
    if ( PageTablePfnBuddyRaw != KeGetCurrentThread()->ApcState.Process || KeGetCurrentThread()->ApcStateIndex == 1 )
    {
      if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v47 + 21384)) )
      {
        _InterlockedIncrement(&dword_140EF9064);
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_21;
      }
      if ( (*(_DWORD *)(v14 + 500) & 0xC00u) < 0xC00
        || *(_QWORD *)(*(_QWORD *)(p_Blink + 16) + 72LL)
        || *(_QWORD *)(p_Blink + 152) <= 1uLL )
      {
        LODWORD(v45) = 0;
      }
      else
      {
        v17 = *(_QWORD *)(p_Blink + 16);
        LODWORD(v45) = 1;
        ++*(_DWORD *)(v17 + 56);
      }
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v47 + 21384));
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
      __writecr8(v6);
      if ( !(_DWORD)v45 )
      {
        _InterlockedIncrement(&dword_140EF9068);
        return 1LL;
      }
      *(_QWORD *)(a5 + 56) = p_Blink;
      if ( (_KPROCESS *)v14 != KeGetCurrentThread()->ApcState.Process )
      {
        *(_BYTE *)(a5 + 64) = 1;
        v18 = (__int128 *)(a5 + 72);
        v50 = 0LL;
        v51 = 0LL;
        v52 = 0LL;
        if ( a5 == -72 )
        {
          CurrentThread = KeGetCurrentThread();
          ApcStateIndex = CurrentThread->ApcStateIndex;
          if ( (_BYTE)ApcStateIndex )
            KeBugCheckEx(5u, v14, (ULONG_PTR)CurrentThread->ApcState.Process, ApcStateIndex, 0LL);
          v18 = &v50;
        }
        KiStackAttachProcess((_KPROCESS *)v14, 1, (__int64)v18);
      }
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v6 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
        __writecr8(v6);
      }
    }
    v21 = 2;
    *(_QWORD *)(a5 + 32) = 0LL;
    *(_QWORD *)(a5 + 40) = 0LL;
    *(_QWORD *)(a5 + 24) = p_Blink;
    if ( v44 )
    {
      *(_BYTE *)(a5 + 37) |= 1u;
      v22 = MiLockWorkingSetExclusive(p_Blink, v12, v13);
    }
    else
    {
      v22 = MiLockWorkingSetShared(p_Blink, v12, v13);
    }
    *(_BYTE *)(a5 + 36) = v22;
    if ( (*(_DWORD *)(a5 + 8) & 8) != 0 )
    {
      Address = 0LL;
      goto LABEL_45;
    }
    MiLockVadTree(1u, v23, v24);
    Address = MiLocateAddress(v7);
    ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd((volatile signed __int32 *)&ActiveProcessors[4].StaticBitmap[8] + 1, 0xBFFFFFFF);
      _InterlockedDecrement((volatile signed __int32 *)&ActiveProcessors[4].StaticBitmap[8] + 1);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(
        (volatile signed __int32 *)&ActiveProcessors[4].StaticBitmap[8] + 1,
        retaddr);
    }
    if ( !Address )
    {
      _InterlockedIncrement(&dword_140EF906C);
      goto LABEL_68;
    }
    Flink = (int)Address[3].Flink;
    v29 = Flink & 0x80000;
    if ( (Flink & 0x1C) != 0 )
    {
      if ( (v29 || ((__int64)Address[4].Blink & 1) == 0) && ((__int64)Address[3].Flink & 0x1C) == 8 )
        goto LABEL_45;
    }
    else if ( !v29 || (Flink & 0x200000) == 0 && (Flink & 0x60000u) < 0x40000 )
    {
      goto LABEL_45;
    }
    if ( ((__int64)Address[3].Flink & 0x1C) != 0x10 )
      goto LABEL_66;
    *(_DWORD *)(a5 + 8) |= 0x400u;
LABEL_45:
    if ( v44 )
    {
      if ( !(unsigned int)MiSmallVaStillMapsFrame(v7, (__int64)(a2 + 0x220000000000LL) / 48) )
      {
        v26 = (volatile signed __int32 *)&unk_140EF907C;
        v21 = (v48 != (__int64)(a2 + 0x220000000000LL) / 48) + 1;
        if ( v48 != v9 )
          v26 = (volatile signed __int32 *)&unk_140EF9078;
        _InterlockedIncrement(v26);
        goto LABEL_68;
      }
      v33 = v46;
    }
    else
    {
      v45 = 0LL;
      if ( v7 >= 0xFFFFF68000000000uLL && v7 <= 0xFFFFF6FFFFFFFFFFuLL )
        goto LABEL_73;
      v30 = MiFastLockLeafPageTable(p_Blink, v7, 0);
      if ( !v30 )
        goto LABEL_73;
      *(_QWORD *)&v50 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)&v50 + 1) = (((unsigned __int64)v50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *(_QWORD *)&v51 = ((*((_QWORD *)&v50 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)&v51 + 1) = (((unsigned __int64)v51 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v31 = *((_QWORD *)&v50 + v30);
      v32 = (__int64 *)*(&v49 + v30);
      v45 = v32;
      if ( v31 )
      {
        v33 = v46;
      }
      else
      {
LABEL_73:
        v33 = v46;
        valid = MiLockLowestValidPageTableEx(p_Blink, v46, (unsigned __int64 *)&v45, 0);
        v32 = v45;
        v31 = valid;
      }
      *(_QWORD *)(a5 + 40) = v31;
      if ( v32 != (__int64 *)v33 )
        goto LABEL_68;
      PteShadow = *v32;
      if ( (unsigned __int64)v32 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v32 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow((unsigned __int64)v32, *v32);
      if ( (PteShadow & 1) == 0 || ((PteShadow >> 12) & 0xFFFFFFFFFFLL) != v9 )
        goto LABEL_68;
    }
    if ( v9 <= qword_140E2D920
      && ((*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0
      && ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FF) == *(_WORD *)v47
      && *(__int64 *)(a2 + 40) >= 0
      && (*(_QWORD *)(a2 + 40) & 0x20000000000000LL) == 0 )
    {
      v36 = *(_DWORD *)a5;
      if ( (*(_DWORD *)a5 & 0x410000) == 0x410000 || (unsigned int)MiGetPfnSlabType(a2) == 9 )
      {
        if ( (v36 & 0x800000) != 0 )
        {
          if ( Address )
          {
            Flink_low = LODWORD(Address[3].Flink);
            if ( (Flink_low & 0x80000) != 0 && MiVadPageSizes[(Flink_low >> 17) & 3] == 16 )
            {
              v38 = -1LL;
              *(_QWORD *)(a5 + 120) = -1LL;
              v39 = ((*(_QWORD *)(a2 + 8) << 25) - v49) >> 16;
              v40 = v39 & 0xFFFFFFFFFFFF0000uLL;
              if ( (v39 & 0xFFFFFFFFFFFF0000uLL) >> 12 >= (LODWORD(Address[1].Blink) | ((unsigned __int64)LOBYTE(Address[2].Flink) << 32))
                && (v40 + 0xFFFF) >> 12 <= (HIDWORD(Address[1].Blink) | ((unsigned __int64)BYTE1(Address[2].Flink) << 32)) )
              {
                v41 = (_QWORD *)(((v40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                for ( i = 0; i < 0x10; ++i )
                {
                  if ( (*v41 & 1) != 0 )
                  {
                    v43 = (*v41 >> 12) & 0xFFFFFFFFFFLL;
                    if ( (unsigned __int8)HIBYTE(*(_WORD *)v41) >> 4 != (unsigned __int64)i )
                      goto LABEL_106;
                    if ( v38 == -1 )
                    {
                      v38 = v43 - i;
                    }
                    else
                    {
                      if ( v43 != v38 + i )
                        goto LABEL_106;
                      v8 = 1;
                    }
                  }
                  ++v41;
                }
                if ( v8 )
                {
                  _InterlockedIncrement(&dword_140EF9070);
                  goto LABEL_67;
                }
                *(_QWORD *)(a5 + 120) = (unsigned __int16)v39 >> 12;
              }
            }
          }
        }
LABEL_106:
        if ( (*(_DWORD *)(a5 + 8) & 0x400) == 0 || !MiRotatedToFrameBuffer(v33) )
          return 0LL;
LABEL_66:
        _InterlockedIncrement(&dword_140EF906C);
LABEL_67:
        v21 = 1;
      }
    }
LABEL_68:
    MiUnlockStealVm(a5);
    _InterlockedIncrement(&dword_140EF901C);
    return v21;
  }
  _InterlockedIncrement(&dword_140EF905C);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_21:
  if ( (unsigned __int8)v6 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
    __writecr8(v6);
  }
  return 1LL;
}
