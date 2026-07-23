/*
 * XREFs of MiCompleteProtoPteFault @ 0x1402BAC10
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1402B6900 (MiResolveDemandZeroFault.c)
 *     MiIssueHardFault @ 0x14038F100 (MiIssueHardFault.c)
 *     MiResolveProtoPteFault @ 0x1403A7B0C (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1403A8C64 (MiResolveTransitionFault.c)
 * Callees:
 *     MiAllocateWsle @ 0x1402B9CD8 (MiAllocateWsle.c)
 *     MiProtoFaultGetProtection @ 0x1402BB1B0 (MiProtoFaultGetProtection.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiProtoFaultApplyPrivateFixups @ 0x1402BC040 (MiProtoFaultApplyPrivateFixups.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402C7EE0 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiAddWorkingSetEntries @ 0x1402CDB00 (MiAddWorkingSetEntries.c)
 *     MiLockAndDecrementShareCount @ 0x1402EB25C (MiLockAndDecrementShareCount.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCopyOnWrite @ 0x14036CAD8 (MiCopyOnWrite.c)
 *     MiSetFaultPacketDirectives @ 0x1403A981C (MiSetFaultPacketDirectives.c)
 *     MiProtoFaultLog @ 0x14044EAB0 (MiProtoFaultLog.c)
 */

__int64 __fastcall MiCompleteProtoPteFault(__int64 *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v5; // edi
  _QWORD *v6; // r10
  int v7; // eax
  __int64 *v8; // r15
  signed __int64 *v9; // r12
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 ContainingPageTable; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  ULONG_PTR v17; // rbx
  unsigned int v18; // esi
  unsigned int v19; // r14d
  __int64 result; // rax
  ULONG_PTR v21; // r10
  char v22; // r13
  _BYTE *v23; // rcx
  unsigned __int64 v24; // r8
  char v25; // si
  unsigned __int64 v26; // rax
  __int64 *v27; // r9
  unsigned __int64 v28; // rdx
  _BYTE *v29; // r8
  __int64 v30; // rax
  unsigned __int64 v31; // rbx
  char v32; // cl
  int v33; // eax
  char v34; // cl
  __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  __int64 v37; // r9
  __int16 v38; // ax
  ULONG_PTR v39; // rbx
  ULONG_PTR v40; // rdx
  char v41; // al
  char v42; // cl
  char v43; // al
  bool v44; // zf
  int v45; // eax
  __int64 v46; // [rsp+20h] [rbp-61h]
  __int64 v47; // [rsp+40h] [rbp-41h]
  unsigned __int64 v48; // [rsp+48h] [rbp-39h]
  __int64 *v49; // [rsp+50h] [rbp-31h] BYREF
  _QWORD *v50; // [rsp+58h] [rbp-29h]
  __int64 v51; // [rsp+60h] [rbp-21h]
  __int64 v52; // [rsp+68h] [rbp-19h]
  ULONG_PTR v53; // [rsp+70h] [rbp-11h]
  ULONG_PTR v54; // [rsp+78h] [rbp-9h]
  __int64 v55; // [rsp+80h] [rbp-1h]
  unsigned __int64 v56; // [rsp+88h] [rbp+7h]
  __int64 v57; // [rsp+90h] [rbp+Fh]
  unsigned __int64 v59; // [rsp+E8h] [rbp+67h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+F0h] [rbp+6Fh]

  v5 = 0;
  v49 = a1;
  v50 = 0LL;
  v6 = 0LL;
  v51 = 0LL;
  v7 = 0;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v52 = a2;
  if ( a3 )
  {
    v7 = 64;
    LODWORD(v57) = 64;
  }
  if ( a4 )
    LODWORD(v57) = v7 | 0x20;
  v8 = a1 + 7;
  v47 = a1[7];
  v48 = *a1;
  v9 = (signed __int64 *)((((unsigned __int64)*a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  BugCheckParameter2 = 48 * a2 - 0x220000000000LL;
  v53 = BugCheckParameter2;
  v10 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( (v10 & 0x400) != 0 )
  {
    if ( qword_140E2D8C0 )
    {
      v11 = qword_140E2D8C8 & v10;
      v10 &= ~0x10uLL;
      if ( (*(_QWORD *)(BugCheckParameter2 + 16) & 0x10) == 0 )
        v10 = v11;
    }
    v12 = (v10 >> 12) & 0x3FFFFFFFFFFLL;
    if ( v12 )
      v6 = (_QWORD *)(qword_140E37D10 - 8 + 8 * v12);
    v51 = *v6;
    v50 = v6;
  }
  if ( v6 && LODWORD(stru_140E67200.ThreadLock) )
    MiProtoFaultLog(&v49);
  ContainingPageTable = MiGetContainingPageTable((ULONG_PTR)v9);
  v16 = 6 * ContainingPageTable;
  v17 = 48 * ContainingPageTable - 0x220000000000LL;
  v18 = 0;
  v54 = v17;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v18 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v16, v14, v15) )
      {
        HvlNotifyLongSpinWait(v18);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v17 + 24) < 0 );
  }
  *(_QWORD *)(v17 + 24) = (*(_QWORD *)(v17 + 24) + 1LL) ^ (*(_QWORD *)(v17 + 24) ^ (*(_QWORD *)(v17 + 24) + 1LL)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiProtoFaultGetProtection(&v49);
  v19 = v57;
  if ( (v57 & 0x20) != 0 )
  {
    v21 = BugCheckParameter2;
  }
  else
  {
    result = MiProtoFaultApplyPrivateFixups(&v49);
    if ( (int)result < 0 )
      return result;
    v21 = v53;
    v19 = v57;
    BugCheckParameter2 = v53;
  }
  v22 = BYTE4(v55);
  if ( (v19 & 1) != 0 )
    v22 = 0;
  v23 = (_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (a5 & 1) != 0 && *v23 == 5 )
  {
    v24 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
    v59 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  else
  {
    v59 = 0LL;
    v24 = 0LL;
    if ( (a5 & 1) != 0 )
    {
      v44 = *v23 == 3;
      v59 = 0LL;
      if ( v44 )
      {
        v25 = v55 | 1;
        v59 = 0LL;
        goto LABEL_23;
      }
    }
  }
  v25 = v55;
LABEL_23:
  v26 = v56;
  if ( (v19 & 0x40) != 0
    && (v56 & 0x800) == 0
    && (v56 & 0x200) != 0
    && !KeGetCurrentThread()->ApcState.Process[1].ActiveGroupPadding[0] )
  {
    if ( !v24 && (MiFlags & 0x8000000) == 0 && (byte_140E2D809 & 1) != 0 )
    {
      v26 = v56 & 0xFFFFFFFFFFFFFFDFuLL;
      v19 |= 0x10u;
    }
    v19 |= 8u;
  }
  v27 = a1;
  v28 = v26 & 0xFFFFFFFFFFFFFFDFuLL;
  v29 = (char *)a1 + 69;
  if ( (*((_BYTE *)a1 + 69) & 0x20) == 0 )
    v28 = v26;
  v30 = a1[2];
  v31 = v28;
  if ( (v30 & 1) != 0 && *(_BYTE *)(v30 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    v31 = v28 & 0xFFFFFFFFFFFFFFDFuLL;
    v29 = (char *)a1 + 69;
  }
  v32 = *((_BYTE *)v8 + 13);
  if ( (v32 & 9) != 8 || (v32 & 4) != 0 )
    goto LABEL_40;
  v33 = *((unsigned __int16 *)v8 + 5);
  if ( !(_WORD)v33 )
    goto LABEL_37;
  if ( *((unsigned __int16 *)v8 + 4) + v33 != (((unsigned int)v9 >> 3) & 0x1FF) )
  {
LABEL_62:
    MiEmptyDeferredWorkingSetEntries(v8);
LABEL_36:
    v27 = a1;
    goto LABEL_37;
  }
  v34 = *v29 & 2;
  if ( *(__int64 *)(v21 + 40) < 0 )
  {
    if ( !v34 )
      goto LABEL_37;
    goto LABEL_62;
  }
  if ( !v34 )
  {
    v35 = *v8;
    v36 = ((unsigned __int64)*((unsigned __int16 *)v8 + 4) << 12) + (v8[2] << 25 >> 16 << 25 >> 16);
    if ( v36 < 0xFFFFF68000000000uLL || v36 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v37 = 5LL;
    }
    else
    {
      v37 = 4LL;
      if ( (*(_DWORD *)(v35 + 184) & 0xF) != 0 )
        v37 = 0LL;
    }
    MiAddWorkingSetEntries(v35, v36, *((unsigned __int16 *)v8 + 5), v37);
    *((_WORD *)v8 + 5) = 0;
    goto LABEL_36;
  }
LABEL_37:
  v38 = *((_WORD *)v8 + 5);
  if ( v38 )
  {
    *((_WORD *)v8 + 5) = v38 + 1;
  }
  else
  {
    *((_WORD *)v27 + 33) = 1;
    v40 = BugCheckParameter2;
    *((_WORD *)v8 + 4) = ((unsigned int)v9 >> 3) & 0x1FF;
    v41 = *((_BYTE *)v27 + 69);
    v42 = v41 & 0xFD;
    v43 = v41 | 2;
    if ( *(__int64 *)(v40 + 40) >= 0 )
      v42 = v43;
    *((_BYTE *)v8 + 13) = v42;
  }
  v25 |= 4u;
LABEL_40:
  if ( (*((_BYTE *)v8 + 13) & 1) != 0 )
    v25 |= 0x10u;
  v46 = v31;
  v39 = BugCheckParameter2;
  if ( (unsigned int)MiAllocateWsle(v47, v9, (_QWORD *)BugCheckParameter2, v22, v46, v25, v59) )
  {
    if ( (v19 & 8) != 0 )
    {
      v59 = 0LL;
      if ( v8[2] && (*((_BYTE *)v8 + 13) & 1) == 0 )
      {
        if ( *((_WORD *)v8 + 5) )
          MiEmptyDeferredWorkingSetEntries(v8);
      }
      v45 = MiCopyOnWrite(v48, (_DWORD)v9, -1, 8 * ((v19 >> 4) & 1), (__int64)&v59);
      v5 = v45;
      if ( v45 < 0 )
      {
        MiSetFaultPacketDirectives(a1, (unsigned int)v45, v59);
        return 3221226548LL;
      }
    }
  }
  else
  {
    if ( (v25 & 4) != 0 )
      --*((_WORD *)v8 + 5);
    MiLockAndDecrementShareCount(v39);
    if ( (v19 & 2) == 0 )
      MiLockAndDecrementShareCount(v54);
    return (unsigned int)-1073741801;
  }
  return v5;
}
