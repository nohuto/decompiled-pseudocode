/*
 * XREFs of MiCompleteProtoPteFault @ 0x1402D8E50
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1402D4B40 (MiResolveDemandZeroFault.c)
 *     MiIssueHardFault @ 0x14038D350 (MiIssueHardFault.c)
 *     MiResolveProtoPteFault @ 0x1403A5DAC (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1403A6F04 (MiResolveTransitionFault.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiAllocateWsle @ 0x1402D7F18 (MiAllocateWsle.c)
 *     MiProtoFaultGetProtection @ 0x1402D93F0 (MiProtoFaultGetProtection.c)
 *     MiGetContainingPageTable @ 0x1402D9BF0 (MiGetContainingPageTable.c)
 *     MiProtoFaultApplyPrivateFixups @ 0x1402DA280 (MiProtoFaultApplyPrivateFixups.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402E5EA0 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiAddWorkingSetEntries @ 0x1402EBAC0 (MiAddWorkingSetEntries.c)
 *     MiLockAndDecrementShareCount @ 0x1403091DC (MiLockAndDecrementShareCount.c)
 *     MiCopyOnWrite @ 0x14036AD38 (MiCopyOnWrite.c)
 *     MiSetFaultPacketDirectives @ 0x1403A7ABC (MiSetFaultPacketDirectives.c)
 *     MiProtoFaultLog @ 0x140457240 (MiProtoFaultLog.c)
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
  ULONG_PTR v13; // rbx
  unsigned int v14; // esi
  unsigned int v15; // r14d
  __int64 result; // rax
  ULONG_PTR v17; // r10
  char v18; // r13
  _BYTE *v19; // rcx
  unsigned __int64 v20; // r8
  char v21; // si
  unsigned __int64 v22; // rax
  __int64 *v23; // r9
  unsigned __int64 v24; // rdx
  _BYTE *v25; // r8
  __int64 v26; // rax
  unsigned __int64 v27; // rbx
  char v28; // cl
  int v29; // eax
  char v30; // cl
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  __int64 v33; // r9
  __int16 v34; // ax
  ULONG_PTR v35; // rbx
  ULONG_PTR v36; // rdx
  char v37; // al
  char v38; // cl
  char v39; // al
  bool v40; // zf
  int v41; // eax
  __int64 v42; // [rsp+20h] [rbp-61h]
  __int64 v43; // [rsp+40h] [rbp-41h]
  unsigned __int64 v44; // [rsp+48h] [rbp-39h]
  __int64 *v45; // [rsp+50h] [rbp-31h] BYREF
  _QWORD *v46; // [rsp+58h] [rbp-29h]
  __int64 v47; // [rsp+60h] [rbp-21h]
  __int64 v48; // [rsp+68h] [rbp-19h]
  ULONG_PTR v49; // [rsp+70h] [rbp-11h]
  ULONG_PTR v50; // [rsp+78h] [rbp-9h]
  __int64 v51; // [rsp+80h] [rbp-1h]
  unsigned __int64 v52; // [rsp+88h] [rbp+7h]
  __int64 v53; // [rsp+90h] [rbp+Fh]
  unsigned __int64 v55; // [rsp+E8h] [rbp+67h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+F0h] [rbp+6Fh]

  v5 = 0;
  v45 = a1;
  v46 = 0LL;
  v6 = 0LL;
  v47 = 0LL;
  v7 = 0;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v48 = a2;
  if ( a3 )
  {
    v7 = 64;
    LODWORD(v53) = 64;
  }
  if ( a4 )
    LODWORD(v53) = v7 | 0x20;
  v8 = a1 + 7;
  v43 = a1[7];
  v44 = *a1;
  v9 = (signed __int64 *)((((unsigned __int64)*a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  BugCheckParameter2 = 48 * a2 - 0x220000000000LL;
  v49 = BugCheckParameter2;
  v10 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( (v10 & 0x400) != 0 )
  {
    if ( qword_140E2D740 )
    {
      v11 = qword_140E2D748 & v10;
      v10 &= ~0x10uLL;
      if ( (*(_QWORD *)(BugCheckParameter2 + 16) & 0x10) == 0 )
        v10 = v11;
    }
    v12 = (v10 >> 12) & 0x3FFFFFFFFFFLL;
    if ( v12 )
      v6 = (_QWORD *)(qword_140E37B90 - 8 + 8 * v12);
    v47 = *v6;
    v46 = v6;
  }
  if ( v6 && LODWORD(stru_140E66FF0.ThreadLock) )
    MiProtoFaultLog(&v45);
  v13 = 48 * MiGetContainingPageTable((ULONG_PTR)v9) - 0x220000000000LL;
  v14 = 0;
  v50 = v13;
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
  *(_QWORD *)(v13 + 24) = (*(_QWORD *)(v13 + 24) + 1LL) ^ (*(_QWORD *)(v13 + 24) ^ (*(_QWORD *)(v13 + 24) + 1LL)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiProtoFaultGetProtection(&v45);
  v15 = v53;
  if ( (v53 & 0x20) != 0 )
  {
    v17 = BugCheckParameter2;
  }
  else
  {
    result = MiProtoFaultApplyPrivateFixups(&v45);
    if ( (int)result < 0 )
      return result;
    v17 = v49;
    v15 = v53;
    BugCheckParameter2 = v49;
  }
  v18 = BYTE4(v51);
  if ( (v15 & 1) != 0 )
    v18 = 0;
  v19 = (_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (a5 & 1) != 0 && *v19 == 5 )
  {
    v20 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
    v55 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  else
  {
    v55 = 0LL;
    v20 = 0LL;
    if ( (a5 & 1) != 0 )
    {
      v40 = *v19 == 3;
      v55 = 0LL;
      if ( v40 )
      {
        v21 = v51 | 1;
        v55 = 0LL;
        goto LABEL_23;
      }
    }
  }
  v21 = v51;
LABEL_23:
  v22 = v52;
  if ( (v15 & 0x40) != 0
    && (v52 & 0x800) == 0
    && (v52 & 0x200) != 0
    && !KeGetCurrentThread()->ApcState.Process[1].ActiveGroupPadding[0] )
  {
    if ( !v20 && (MiFlags & 0x8000000) == 0 && (byte_140E2D689 & 1) != 0 )
    {
      v22 = v52 & 0xFFFFFFFFFFFFFFDFuLL;
      v15 |= 0x10u;
    }
    v15 |= 8u;
  }
  v23 = a1;
  v24 = v22 & 0xFFFFFFFFFFFFFFDFuLL;
  v25 = (char *)a1 + 69;
  if ( (*((_BYTE *)a1 + 69) & 0x20) == 0 )
    v24 = v22;
  v26 = a1[2];
  v27 = v24;
  if ( (v26 & 1) != 0 && *(_BYTE *)(v26 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    v27 = v24 & 0xFFFFFFFFFFFFFFDFuLL;
    v25 = (char *)a1 + 69;
  }
  v28 = *((_BYTE *)v8 + 13);
  if ( (v28 & 9) != 8 || (v28 & 4) != 0 )
    goto LABEL_40;
  v29 = *((unsigned __int16 *)v8 + 5);
  if ( !(_WORD)v29 )
    goto LABEL_37;
  if ( *((unsigned __int16 *)v8 + 4) + v29 != (((unsigned int)v9 >> 3) & 0x1FF) )
  {
LABEL_62:
    MiEmptyDeferredWorkingSetEntries(v8);
LABEL_36:
    v23 = a1;
    goto LABEL_37;
  }
  v30 = *v25 & 2;
  if ( *(__int64 *)(v17 + 40) < 0 )
  {
    if ( !v30 )
      goto LABEL_37;
    goto LABEL_62;
  }
  if ( !v30 )
  {
    v31 = *v8;
    v32 = ((unsigned __int64)*((unsigned __int16 *)v8 + 4) << 12) + (v8[2] << 25 >> 16 << 25 >> 16);
    if ( v32 < 0xFFFFF68000000000uLL || v32 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v33 = 5LL;
    }
    else
    {
      v33 = 4LL;
      if ( (*(_DWORD *)(v31 + 184) & 0xF) != 0 )
        v33 = 0LL;
    }
    MiAddWorkingSetEntries(v31, v32, *((unsigned __int16 *)v8 + 5), v33);
    *((_WORD *)v8 + 5) = 0;
    goto LABEL_36;
  }
LABEL_37:
  v34 = *((_WORD *)v8 + 5);
  if ( v34 )
  {
    *((_WORD *)v8 + 5) = v34 + 1;
  }
  else
  {
    *((_WORD *)v23 + 33) = 1;
    v36 = BugCheckParameter2;
    *((_WORD *)v8 + 4) = ((unsigned int)v9 >> 3) & 0x1FF;
    v37 = *((_BYTE *)v23 + 69);
    v38 = v37 & 0xFD;
    v39 = v37 | 2;
    if ( *(__int64 *)(v36 + 40) >= 0 )
      v38 = v39;
    *((_BYTE *)v8 + 13) = v38;
  }
  v21 |= 4u;
LABEL_40:
  if ( (*((_BYTE *)v8 + 13) & 1) != 0 )
    v21 |= 0x10u;
  v42 = v27;
  v35 = BugCheckParameter2;
  if ( (unsigned int)MiAllocateWsle(v43, v9, (_QWORD *)BugCheckParameter2, v18, v42, v21, v55) )
  {
    if ( (v15 & 8) != 0 )
    {
      v55 = 0LL;
      if ( v8[2] && (*((_BYTE *)v8 + 13) & 1) == 0 )
      {
        if ( *((_WORD *)v8 + 5) )
          MiEmptyDeferredWorkingSetEntries(v8);
      }
      v41 = MiCopyOnWrite(v44, (_DWORD)v9, -1, 8 * ((v15 >> 4) & 1), (__int64)&v55);
      v5 = v41;
      if ( v41 < 0 )
      {
        MiSetFaultPacketDirectives(a1, (unsigned int)v41, v55);
        return 3221226548LL;
      }
    }
  }
  else
  {
    if ( (v21 & 4) != 0 )
      --*((_WORD *)v8 + 5);
    MiLockAndDecrementShareCount(v35);
    if ( (v15 & 2) == 0 )
      MiLockAndDecrementShareCount(v50);
    return (unsigned int)-1073741801;
  }
  return v5;
}
