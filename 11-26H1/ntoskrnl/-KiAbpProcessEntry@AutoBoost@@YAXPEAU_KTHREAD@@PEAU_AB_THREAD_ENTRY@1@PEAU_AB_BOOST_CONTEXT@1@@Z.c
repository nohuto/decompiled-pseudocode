/*
 * XREFs of ?KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x1403789A0
 * Callers:
 *     ?KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z @ 0x1402741CC (-KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z.c)
 *     ?KiAbpMarkCrossThreadReleasable@AutoBoost@@YAXPEAX0@Z @ 0x1404FE3F0 (-KiAbpMarkCrossThreadReleasable@AutoBoost@@YAXPEAX0@Z.c)
 * Callees:
 *     IoBoostThreadIoPriority @ 0x140205BAC (IoBoostThreadIoPriority.c)
 *     ObReferenceObjectSafeWithTag @ 0x140259C30 (ObReferenceObjectSafeWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027BDE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PsBoostThreadOutstandingIoQoS @ 0x1402D2680 (PsBoostThreadOutstandingIoQoS.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     PsGetIoPriorityThread @ 0x140376E50 (PsGetIoPriorityThread.c)
 *     ?KiAbpApplyTargetPriority@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@U_AB_PRIORITY@1@PEAU_AB_BOOST_CONTEXT@1@PEAT_AB_IO_BOOST@1@@Z @ 0x140377280 (-KiAbpApplyTargetPriority@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@U_AB_PRIORITY@1@PEA.c)
 *     ?KiAbpOwnerComputeCpuPriorityKey@AutoBoost@@YACPEAU_AB_THREAD_ENTRY@1@@Z @ 0x140377770 (-KiAbpOwnerComputeCpuPriorityKey@AutoBoost@@YACPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpProcessEntryAddToTree@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x140378250 (-KiAbpProcessEntryAddToTree@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 */

void __fastcall AutoBoost::KiAbpProcessEntry(
        KSPIN_LOCK *Object,
        struct _KTHREAD *this,
        struct AutoBoost::_AB_THREAD_ENTRY *a3,
        struct AutoBoost::_AB_BOOST_CONTEXT *a4)
{
  int v4; // eax
  __int64 v5; // r15
  volatile signed __int8 *v9; // rcx
  signed __int8 v10; // al
  signed __int8 v11; // tt
  signed __int8 v12; // al
  signed __int8 v13; // tt
  __int64 v14; // rbp
  volatile signed __int32 *v15; // rcx
  int v16; // eax
  int v17; // edi
  unsigned int v18; // edi
  int v19; // ecx
  __int64 v20; // rdx
  BOOLEAN v21; // al
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // edx
  char v25; // al
  char v26; // cl
  __int64 v27; // rax
  volatile signed __int64 *v28; // rcx
  char v29; // si
  __int64 v30; // rcx
  __int64 v31; // rdx
  BOOLEAN v32; // r8
  int v33; // ecx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  char v37; // r11
  unsigned int v38; // r9d
  char v39; // r14
  unsigned int v40; // r10d
  char QuantumTarget; // al
  int IoPriorityThread; // eax
  unsigned __int64 m; // rdi
  char v44; // al
  char v45; // al
  unsigned __int64 j; // rdi
  unsigned __int64 v47; // rax
  _QWORD **v48; // rcx
  _QWORD *i; // rcx
  struct AutoBoost::_AB_THREAD_ENTRY *v50; // rdx
  char v51; // al
  int v52; // esi
  __int64 v53; // rcx
  BOOLEAN v54; // r8
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  _QWORD **v59; // rcx
  unsigned __int64 v60; // rax
  _QWORD *k; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 retaddr; // [rsp+68h] [rbp+0h]
  int v65; // [rsp+78h] [rbp+10h]
  int v66; // [rsp+78h] [rbp+10h]
  int v67; // [rsp+80h] [rbp+18h] BYREF

  v4 = *((_DWORD *)a3 + 6);
  v5 = 0LL;
  v67 = 0;
  if ( (v4 & 1) != 0 && (this->QuantumTarget & 2) == 0 )
    AutoBoost::KiAbpProcessEntryAddToTree((AutoBoost *)this, (struct AutoBoost::_AB_THREAD_ENTRY *)this);
  v9 = (char *)&this->QuantumTarget + 3;
  _m_prefetchw((char *)&this->QuantumTarget + 3);
  v10 = BYTE3(this->QuantumTarget);
  do
  {
    v11 = v10;
    v10 = _InterlockedCompareExchange8(v9, v10 | 1, v10);
  }
  while ( v11 != v10 );
  if ( (v10 & 1) != 0 )
  {
    do
    {
      while ( (*v9 & 1) != 0 )
        _mm_pause();
      _m_prefetchw((const void *)v9);
      v12 = *v9;
      do
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange8(v9, v12 | 1, v12);
      }
      while ( v13 != v12 );
    }
    while ( (v12 & 1) != 0 );
    v9 = (char *)&this->QuantumTarget + 3;
  }
  if ( (this->QuantumTarget & 2) == 0 )
  {
    _InterlockedAnd8(v9, 0xFEu);
    return;
  }
  v14 = *(_QWORD *)&this->Header.Lock;
  v15 = (volatile signed __int32 *)(*(_QWORD *)&this->Header.Lock + 32LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64(v15, 0LL) )
      KxWaitForSpinLockAndAcquire(v15);
  }
  else
  {
    KiAcquireSpinLockInstrumented(v15);
  }
  v16 = *((_DWORD *)a3 + 6);
  if ( (this->QuantumTarget & 0x400) != 0 )
  {
    if ( (v16 & 4) == 0 )
      goto LABEL_47;
    v29 = *(_BYTE *)(*((_QWORD *)this - 6 * (BYTE4(this->QuantumTarget) & 0x7F) - 2) + 195LL);
    if ( v29 > 30 )
      v29 = 30;
    if ( BYTE5(this->QuantumTarget) == v29 )
    {
LABEL_70:
      v36 = *(_QWORD *)(v14 + 48);
      if ( v36 )
        v37 = *(_BYTE *)(v36 + 29);
      else
        v37 = 30;
      v38 = 0;
      v39 = BYTE5(this->QuantumTarget);
      LOBYTE(v40) = 1;
      if ( (this->QuantumTarget & 0x400) != 0 )
      {
        QuantumTarget = this->QuantumTarget;
        if ( (QuantumTarget & 8) != 0 )
        {
          if ( (QuantumTarget & 0x10) != 0 )
            goto LABEL_82;
        }
        else
        {
          IoPriorityThread = PsGetIoPriorityThread((__int64)Object);
          if ( IoPriorityThread < 2 && *((_DWORD *)Object + 376) != v38 )
            LOBYTE(IoPriorityThread) = 2;
          if ( (unsigned __int8)IoPriorityThread >= 2u )
          {
            ++*(_BYTE *)(v14 + 76);
            LOBYTE(this->QuantumTarget) |= 8u;
            if ( *(_BYTE *)(v14 + 76) == (_BYTE)v40 )
              v38 = v40;
          }
        }
        if ( (this->QuantumTarget & 0x10) == 0 && (!*((_DWORD *)Object + 378) || *((_DWORD *)Object + 377)) )
        {
          *(_DWORD *)(v14 + 76) ^= ((unsigned __int16)*(_DWORD *)(v14 + 76) ^ (unsigned __int16)(*(_DWORD *)(v14 + 76)
                                                                                               + 256)) & 0x7F00;
          LOBYTE(this->QuantumTarget) |= 0x10u;
          if ( (*(_DWORD *)(v14 + 76) & 0x7F00) == 0x100 )
            v38 |= 2u;
        }
      }
LABEL_82:
      if ( v37 < v39 )
      {
        if ( !v38 )
        {
LABEL_89:
          j = *(_QWORD *)(v14 + 48);
          while ( j )
          {
            v67 = 0;
            if ( *(char *)(j + 29) >= v39 )
              break;
            AutoBoost::KiAbpApplyTargetPriority(
              *(_QWORD *)(j - 8 - 48LL * (*(_BYTE *)(j + 28) & 0x7F) - 16),
              j - 8,
              (unsigned __int8)v39,
              (__int64)a3,
              &v67);
            *(_BYTE *)(j + 29) = v39;
            v47 = j;
            v48 = *(_QWORD ***)(j + 8);
            if ( v48 )
            {
              j = *(_QWORD *)(j + 8);
              for ( i = *v48; i; i = (_QWORD *)*i )
                j = (unsigned __int64)i;
            }
            else
            {
              for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
              {
                if ( *(_QWORD *)j == v47 )
                  break;
                v47 = j;
              }
            }
          }
          goto LABEL_47;
        }
      }
      else if ( !v38 )
      {
        goto LABEL_47;
      }
      m = *(_QWORD *)(v14 + 48);
      v66 = 0;
      v44 = 0;
      if ( ((unsigned __int8)v38 & (unsigned __int8)v40) != 0 )
        v44 = 2;
      BYTE1(v66) = v44;
      v45 = 0;
      if ( v38 >= 2 )
        v45 = v40;
      BYTE2(v66) = v45;
      while ( m )
      {
        v58 = *(_BYTE *)(m + 28) & 0x7F;
        v67 = 0;
        AutoBoost::KiAbpApplyTargetPriority(*(_QWORD *)(m - 8 - 48 * v58 - 16), m - 8, v66, (__int64)a3, &v67);
        v59 = *(_QWORD ***)(m + 8);
        v60 = m;
        if ( v59 )
        {
          m = *(_QWORD *)(m + 8);
          for ( k = *v59; k; k = (_QWORD *)*k )
            m = (unsigned __int64)k;
        }
        else
        {
          for ( m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL; m; m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD *)m == v60 )
              break;
            v60 = m;
          }
        }
      }
      goto LABEL_89;
    }
    RtlRbRemoveNode((PRTL_RB_TREE)(v14 + 56), (PRTL_BALANCED_NODE)&this->Header.WaitListHead);
    BYTE5(this->QuantumTarget) = v29;
    v30 = *(_QWORD *)(v14 + 64);
    if ( (v30 & 1) != 0 )
    {
      v62 = *(_QWORD *)(v14 + 56);
      if ( !v62 )
      {
        v31 = 0LL;
LABEL_146:
        v32 = 0;
LABEL_69:
        RtlRbInsertNodeEx(
          (PRTL_RB_TREE)(v14 + 56),
          (PRTL_BALANCED_NODE)v31,
          v32,
          (PRTL_BALANCED_NODE)&this->Header.WaitListHead);
        goto LABEL_70;
      }
      v31 = v62 ^ (v14 + 56);
    }
    else
    {
      v31 = *(_QWORD *)(v14 + 56);
    }
    v32 = 0;
    v33 = v30 & 1;
    if ( v31 )
    {
      while ( 1 )
      {
        while ( *(char *)(v31 + 29) - v29 < 0 )
        {
          v34 = *(_QWORD *)v31;
          if ( v33 )
          {
            if ( !v34 )
              goto LABEL_146;
            v34 ^= v31;
          }
          if ( !v34 )
            goto LABEL_146;
          v31 = v34;
        }
        v35 = *(_QWORD *)(v31 + 8);
        if ( v33 )
        {
          if ( !v35 )
            break;
          v35 ^= v31;
        }
        if ( !v35 )
          break;
        v31 = v35;
      }
      v32 = 1;
    }
    goto LABEL_69;
  }
  if ( (v16 & 2) != 0 )
  {
    v17 = 0;
    if ( ((__int64)this->InitialStack & 0x3FFFFFFF) != 0 )
    {
      _BitScanReverse(&v18, (__int64)this->InitialStack & 0x3FFFFFFF);
      v17 = v18 + 1;
    }
    v19 = *(char *)(*((_QWORD *)this - 6 * (BYTE4(this->QuantumTarget) & 0x7F) - 2) + 563LL);
    if ( v19 > v17 )
    {
      LOBYTE(v17) = 30;
      if ( v19 < 30 )
        LOBYTE(v17) = *(_BYTE *)(*((_QWORD *)this - 6 * (BYTE4(this->QuantumTarget) & 0x7F) - 2) + 563LL);
    }
    if ( BYTE5(this->QuantumTarget) == (_BYTE)v17 )
    {
LABEL_40:
      v24 = *(_DWORD *)(v14 + 76);
      v65 = 0;
      v25 = 0;
      v26 = 0;
      if ( (_BYTE)v24 )
        v26 = 2;
      BYTE1(v65) = v26;
      if ( (v24 & 0x7F00) != 0 )
        v25 = 1;
      BYTE2(v65) = v25;
      v27 = *(_QWORD *)(v14 + 64);
      if ( v27 )
        LOBYTE(v65) = *(_BYTE *)(v27 + 29);
      if ( !v65 )
        goto LABEL_47;
      if ( !(unsigned int)AutoBoost::KiAbpApplyTargetPriority((ULONG_PTR)Object, (__int64)this, v65, (__int64)a3, &v67) )
        goto LABEL_113;
      v51 = AutoBoost::KiAbpOwnerComputeCpuPriorityKey((AutoBoost *)this, v50);
      v52 = v51;
      if ( BYTE5(this->QuantumTarget) == v51 )
        goto LABEL_113;
      RtlRbRemoveNode((PRTL_RB_TREE)(v14 + 40), (PRTL_BALANCED_NODE)&this->Header.WaitListHead);
      BYTE5(this->QuantumTarget) = v52;
      v53 = *(_QWORD *)(v14 + 48);
      if ( (v53 & 1) != 0 )
      {
        v63 = *(_QWORD *)(v14 + 40);
        if ( !v63 )
        {
          v54 = 0;
LABEL_112:
          RtlRbInsertNodeEx(
            (PRTL_RB_TREE)(v14 + 40),
            (PRTL_BALANCED_NODE)v5,
            v54,
            (PRTL_BALANCED_NODE)&this->Header.WaitListHead);
LABEL_113:
          LODWORD(v5) = v67;
          goto LABEL_47;
        }
        v5 = v63 ^ (v14 + 40);
      }
      else
      {
        v5 = *(_QWORD *)(v14 + 40);
      }
      v54 = 0;
      if ( v5 )
      {
        while ( 1 )
        {
          while ( v52 - *(char *)(v5 + 29) < 0 )
          {
            v55 = *(_QWORD *)v5;
            if ( (v53 & 1) != 0 )
            {
              if ( !v55 )
                goto LABEL_112;
              v55 ^= v5;
            }
            if ( !v55 )
              goto LABEL_112;
            v5 = v55;
          }
          v56 = *(_QWORD *)(v5 + 8);
          if ( (v53 & 1) != 0 )
          {
            if ( !v56 )
              break;
            v56 ^= v5;
          }
          if ( !v56 )
            break;
          v5 = v56;
        }
        v54 = 1;
      }
      goto LABEL_112;
    }
    RtlRbRemoveNode((PRTL_RB_TREE)(v14 + 40), (PRTL_BALANCED_NODE)&this->Header.WaitListHead);
    BYTE5(this->QuantumTarget) = v17;
    if ( (*(_QWORD *)(v14 + 48) & 1) != 0 )
    {
      v57 = *(_QWORD *)(v14 + 40);
      if ( !v57 )
      {
        v20 = 0LL;
LABEL_117:
        v21 = 0;
LABEL_39:
        RtlRbInsertNodeEx(
          (PRTL_RB_TREE)(v14 + 40),
          (PRTL_BALANCED_NODE)v20,
          v21,
          (PRTL_BALANCED_NODE)&this->Header.WaitListHead);
        goto LABEL_40;
      }
      v20 = v57 ^ (v14 + 40);
    }
    else
    {
      v20 = *(_QWORD *)(v14 + 40);
    }
    v21 = 0;
    if ( v20 )
    {
      while ( 1 )
      {
        while ( (char)v17 - *(char *)(v20 + 29) < 0 )
        {
          v22 = *(_QWORD *)v20;
          if ( (*(_QWORD *)(v14 + 48) & 1) != 0 )
          {
            if ( !v22 )
              goto LABEL_117;
            v22 ^= v20;
          }
          if ( !v22 )
            goto LABEL_117;
          v20 = v22;
        }
        v23 = *(_QWORD *)(v20 + 8);
        if ( (*(_QWORD *)(v14 + 48) & 1) != 0 )
        {
          if ( !v23 )
            break;
          v23 ^= v20;
        }
        if ( !v23 )
          break;
        v20 = v23;
      }
      v21 = 1;
    }
    goto LABEL_39;
  }
LABEL_47:
  v28 = (volatile signed __int64 *)(v14 + 32);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64(v28, 0LL);
  else
    KiReleaseSpinLockInstrumented(v28, retaddr);
  _InterlockedAnd8((volatile signed __int8 *)&this->QuantumTarget + 3, 0xFEu);
  if ( (_DWORD)v5 && ObReferenceObjectSafeWithTag((__int64)Object, 0x746C6644u) )
  {
    if ( (v5 & 1) != 0 )
      IoBoostThreadIoPriority(Object, 2, 0x80000000);
    if ( (v5 & 2) != 0 )
      PsBoostThreadOutstandingIoQoS((__int64)Object);
    ObDereferenceObjectDeferDeleteWithTag(Object, 0x746C6644u);
  }
}
