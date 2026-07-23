/*
 * XREFs of MiZeroFault @ 0x14041A2F0
 * Callers:
 *     MiUserFault @ 0x1403A4EA0 (MiUserFault.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiMakePrototypePteVadLookup @ 0x1402B1B50 (MiMakePrototypePteVadLookup.c)
 *     MiCheckUserVirtualAddress @ 0x1402B36E0 (MiCheckUserVirtualAddress.c)
 *     MiResolveSharedZeroFault @ 0x1402B3950 (MiResolveSharedZeroFault.c)
 *     MiInitializeZeroFaultPacket @ 0x1402B6EB0 (MiInitializeZeroFaultPacket.c)
 *     MiResolvePrivateZeroFault @ 0x1402B71E0 (MiResolvePrivateZeroFault.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiPrefetchJumpVad @ 0x140316388 (MiPrefetchJumpVad.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiAllowGuardFault @ 0x1403A8A00 (MiAllowGuardFault.c)
 *     MiUpdatePageTableUseCount @ 0x1403DD1D0 (MiUpdatePageTableUseCount.c)
 *     MiCheckVadSequential @ 0x140440CD0 (MiCheckVadSequential.c)
 *     MiCheckFatalAccessViolation @ 0x14049A444 (MiCheckFatalAccessViolation.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiZeroFault(__int64 a1, unsigned __int64 a2, int *a3, __int64 *a4, _QWORD *a5)
{
  _QWORD *v5; // rax
  unsigned int v6; // r13d
  int v8; // esi
  ULONG_PTR v9; // r15
  __int64 v10; // rbx
  unsigned __int64 *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdi
  _DWORD *v17; // r8
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  _KPROCESS *Process; // r9
  __int64 Flink; // rbx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rdx
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  volatile signed __int32 *v26; // r8
  __int64 v27; // rax
  volatile signed __int32 *v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // r8
  __int64 v31; // r9
  __int64 result; // rax
  char v33; // si
  unsigned __int64 PrototypePteVadLookup; // rax
  unsigned __int64 *v35; // [rsp+30h] [rbp-61h]
  struct _LIST_ENTRY v36; // [rsp+38h] [rbp-59h] BYREF
  __int128 v37; // [rsp+50h] [rbp-41h] BYREF
  __int128 v38; // [rsp+60h] [rbp-31h]
  __int128 v39; // [rsp+70h] [rbp-21h]
  __int128 v40; // [rsp+80h] [rbp-11h]
  __int64 v41; // [rsp+90h] [rbp-1h]
  __int64 v42; // [rsp+98h] [rbp+7h]
  __int64 retaddr; // [rsp+E8h] [rbp+57h]
  int v44; // [rsp+F0h] [rbp+5Fh] BYREF
  _BYTE *v45; // [rsp+F8h] [rbp+67h]
  int *v46; // [rsp+100h] [rbp+6Fh]
  __int64 *v47; // [rsp+108h] [rbp+77h]

  v47 = a4;
  v46 = a3;
  v45 = (_BYTE *)a2;
  v5 = a5;
  v6 = 0;
  *(_BYTE *)a2 = 1;
  *a4 = 0LL;
  v44 = 0;
  *v5 = 0LL;
  v8 = 24;
  v37 = 0LL;
  v41 = 0LL;
  v38 = 0LL;
  LODWORD(v42) = 0;
  v39 = 0LL;
  *a3 = 24;
  v40 = 0LL;
  v9 = *(_QWORD *)a1;
  v10 = *(_QWORD *)a1 >> 9;
  v36.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread()->ApcState.Process;
  v11 = (unsigned __int64 *)((v10 & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v35 = v11;
  if ( v9 >= 0xFFFF800000000000uLL )
  {
    v12 = *(_QWORD *)(a1 + 16);
    v13 = *(_QWORD *)(a1 + 16) & 1LL;
    a2 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v13 && *(_BYTE *)a2 == 1 )
      return 0LL;
    if ( v9 >= 0xFFFFF68000000000uLL
      && v9 <= 0xFFFFF6FFFFFFFFFFuLL
      && v12
      && (!v13 || *(_BYTE *)a2 != 7 && *(_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFEuLL) != 8) )
    {
      KeBugCheckEx(0x50u, v9, *(_QWORD *)(a1 + 8), (ULONG_PTR)v11, 6uLL);
    }
  }
  v36.Flink = 0LL;
  v14 = 0LL;
  if ( v9 >= 0x7FFFFFFF0000LL )
  {
    if ( v9 >= 0xFFFFF68000000000uLL && v9 <= 0xFFFFF6FFFFFFFFFFuLL )
      v8 = 4;
    goto LABEL_59;
  }
  if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
  {
    v15 = v9 & 0x7FFFFFFFF000LL;
    if ( (v9 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
    {
      v16 = qword_140E2D7A8;
      v8 = 1;
      goto LABEL_60;
    }
    if ( v15 == qword_140E2D7B8 && v15 )
    {
      v16 = qword_140E2D7B0;
      v8 = 1;
      goto LABEL_60;
    }
  }
  v17 = (_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[8] + 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v17);
    v19 = *v17 & 0x7FFFFFFF;
    v18 = _InterlockedCompareExchange(v17, v19 + 1, v19);
    if ( v19 != v18 )
    {
      while ( v18 >= 0 )
      {
        a2 = (unsigned int)v18;
        v18 = _InterlockedCompareExchange(v17, v18 + 1, v18);
        if ( v18 == (_DWORD)a2 )
          goto LABEL_25;
      }
      LOBYTE(a2) = -1;
      ExpWaitForSpinLockSharedAndAcquire(v17, a2, (__int64)v17);
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v17, 0xFFu);
  }
LABEL_25:
  Process = KeGetCurrentThread()->ApcState.Process;
  Flink = (__int64)Process[3].Header.WaitListHead.Flink;
  if ( Flink )
  {
    v22 = v9 >> 12;
    if ( v9 >> 12 < (*(unsigned int *)(Flink + 24) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 32) << 32))
      || (v23 = *(unsigned int *)(Flink + 28), v22 > (v23 | ((unsigned __int64)*(unsigned __int8 *)(Flink + 33) << 32))) )
    {
      Flink = *(_QWORD *)&Process[3].Header.Lock;
      if ( !Flink )
        goto LABEL_36;
      do
      {
        v23 = *(unsigned int *)(Flink + 28);
        if ( v22 <= (v23 | ((unsigned __int64)*(unsigned __int8 *)(Flink + 33) << 32)) )
        {
          v23 = *(unsigned int *)(Flink + 24) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 32) << 32);
          if ( v22 >= v23 )
            break;
          Flink = *(_QWORD *)Flink;
        }
        else
        {
          Flink = *(_QWORD *)(Flink + 8);
        }
      }
      while ( Flink );
      if ( !Flink )
      {
LABEL_36:
        Flink = 0LL;
        goto LABEL_46;
      }
      Process[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)Flink;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw((const void *)(Flink + 64));
      v25 = *(_DWORD *)(Flink + 64) & 0x7FFFFFFF;
      v24 = _InterlockedCompareExchange((volatile signed __int32 *)(Flink + 64), v25 + 1, v25);
      if ( v25 != v24 )
      {
        while ( v24 >= 0 )
        {
          v23 = (unsigned int)v24;
          v24 = _InterlockedCompareExchange((volatile signed __int32 *)(Flink + 64), v24 + 1, v24);
          if ( v24 == (_DWORD)v23 )
            goto LABEL_46;
        }
        LOBYTE(v23) = -1;
        ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)(Flink + 64), v23, v22);
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented((_DWORD *)(Flink + 64), 0xFFu);
    }
  }
  else
  {
    Flink = 0LL;
  }
LABEL_46:
  v26 = (volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[8] + 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd(v26, 0xBFFFFFFF);
    _InterlockedDecrement(v26);
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v26, retaddr);
  }
  if ( !Flink )
  {
    v11 = v35;
LABEL_59:
    v16 = 0LL;
    goto LABEL_60;
  }
  v27 = MiCheckUserVirtualAddress(v9, Flink, 1, &v44);
  v28 = (volatile signed __int32 *)(Flink + 64);
  v16 = v27;
  v36.Flink = (struct _LIST_ENTRY *)Flink;
  v14 = Flink;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd(v28, 0xBFFFFFFF);
    _InterlockedDecrement(v28);
    v8 = v44;
    v11 = v35;
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v28, retaddr);
    v8 = v44;
    v11 = v35;
  }
LABEL_60:
  MiInitializeZeroFaultPacket((_QWORD *)a1, &v36, (unsigned int *)&v37);
  if ( v8 == 24 )
  {
    MiCheckFatalAccessViolation(v9);
    if ( (v37 & 2) != 0 && v14 )
    {
      MiPrefetchJumpVad(v40, v14, v9);
      return 3221225477LL;
    }
    return 3221225477LL;
  }
  if ( (v8 & 0xFFFFFFF8) == 0x10 )
  {
    if ( (v37 & 2) == 0 )
    {
      if ( !(unsigned int)MiAllowGuardFault(*(_QWORD *)(a1 + 16)) )
        return 3221225477LL;
      v33 = v8 & 0xEF;
      if ( v16 )
        PrototypePteVadLookup = MiMakePrototypePteVadLookup(v33);
      else
        PrototypePteVadLookup = MiMakeDemandZeroPte(v33);
      *v11 = PrototypePteVadLookup;
      MiUpdatePageTableUseCount(v9, 1);
      *v45 = 2;
    }
    return 0LL;
  }
  LODWORD(v39) = v8;
  *((_QWORD *)&v38 + 1) = v16;
  if ( v16 )
  {
    if ( (v37 & 2) == 0 )
    {
      if ( v14 )
      {
        if ( *(__int64 *)(v14 + 128) >= 0 )
        {
          v6 = MiCheckVadSequential(&v37);
          if ( v6 == -1073741280 )
          {
            *(_DWORD *)(a1 + 80) |= 0x20u;
            *(_QWORD *)(a1 + 88) = v14;
          }
        }
      }
    }
    *v45 = 0;
    *v46 = v8;
    *v47 = v16;
    MiResolveSharedZeroFault((__int64)&v37, v29, v30, v31);
    result = v6;
    *(_DWORD *)(a1 + 80) ^= (*(_DWORD *)(a1 + 80) ^ ((unsigned int)v37 >> 1)) & 0x1FE00;
  }
  else
  {
    LODWORD(result) = MiResolvePrivateZeroFault((int *)&v37);
    *a5 = v42;
    return (unsigned int)result;
  }
  return result;
}
