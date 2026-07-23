/*
 * XREFs of EtwpTraceStackKey @ 0x14032E770
 * Callers:
 *     EtwpTraceStackWalk @ 0x14020A6A0 (EtwpTraceStackWalk.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     EtwpDereferenceStackEntry @ 0x14032ECD0 (EtwpDereferenceStackEntry.c)
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     KxTryToAcquireSpinLock @ 0x140332C98 (KxTryToAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall EtwpTraceStackKey(_SLIST_ENTRY *a1, int a2, __int16 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  _SLIST_ENTRY *Next; // r13
  unsigned int v7; // edi
  unsigned __int64 v8; // r10
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rdx
  int v14; // ebp
  __int64 v15; // r15
  unsigned __int8 CurrentIrql; // bl
  __int64 v17; // rcx
  volatile signed __int32 *v18; // rcx
  _SLIST_ENTRY *v19; // r14
  unsigned int v20; // edx
  __int64 v21; // rcx
  _SLIST_ENTRY *i; // r13
  SIZE_T v23; // rbx
  SIZE_T v24; // rax
  _SLIST_ENTRY *v25; // rcx
  _SLIST_ENTRY **v26; // rax
  _SLIST_ENTRY *v27; // rax
  _SLIST_ENTRY *v28; // rdi
  PSLIST_ENTRY v29; // rbx
  _SLIST_ENTRY *v31; // rcx
  _SLIST_ENTRY **v32; // rax
  __int64 v33; // rbp
  _SLIST_HEADER *v34; // rax
  PSLIST_ENTRY v35; // rbx
  unsigned int v36; // r13d
  _SLIST_ENTRY **v37; // rax
  __int64 v38; // rcx
  PSLIST_ENTRY v39; // rsi
  _SLIST_HEADER *v40; // rsi
  unsigned __int64 Alignment; // rax
  unsigned __int16 v42; // r11
  PSLIST_ENTRY v43; // r10
  int v44; // r8d
  __int64 v45; // rdx
  int v46; // r9d
  __int64 v47; // rcx
  _SLIST_ENTRY *v48; // rbx
  unsigned __int8 v51; // [rsp+38h] [rbp-130h]
  int v52; // [rsp+40h] [rbp-128h]
  unsigned int v53; // [rsp+48h] [rbp-120h]
  PSLIST_ENTRY v54; // [rsp+48h] [rbp-120h]
  _SLIST_HEADER *v55; // [rsp+50h] [rbp-118h]
  _SLIST_ENTRY *v56; // [rsp+58h] [rbp-110h]
  PSLIST_ENTRY ListEntry; // [rsp+60h] [rbp-108h] BYREF
  PSLIST_ENTRY v58; // [rsp+68h] [rbp-100h] BYREF
  __int64 v59; // [rsp+70h] [rbp-F8h]
  PSLIST_ENTRY *v60; // [rsp+80h] [rbp-E8h] BYREF
  _QWORD v61[17]; // [rsp+88h] [rbp-E0h]
  __int64 retaddr; // [rsp+168h] [rbp+0h]

  Next = a1[66].Next;
  v59 = a4;
  v58 = a1;
  ListEntry = 0LL;
  v55 = (_SLIST_HEADER *)Next;
  if ( !Next )
  {
LABEL_35:
    LOBYTE(v14) = 0;
    return (unsigned __int8)v14;
  }
  v7 = 0;
  v56 = 0LL;
  v8 = 4LL * a6;
  v9 = 0LL;
  if ( v8 )
  {
    v10 = 0LL;
    do
    {
      v11 = (unsigned int)(v9 + 1);
      v9 = (unsigned int)(v9 + 2);
      v12 = *(unsigned __int16 *)(a5 + 2 * v10) ^ *(unsigned __int16 *)(a5 + 2 * v11);
      v10 = (unsigned int)v9;
      v7 += v12;
    }
    while ( (unsigned int)v9 < v8 );
  }
  v13 = v7 % *((_DWORD *)&Next->Next + 2);
  v14 = 0;
  v15 = (__int64)&Next[v13 + 2] + 8 * v13;
  CurrentIrql = KeGetCurrentIrql();
  v51 = CurrentIrql;
  if ( CurrentIrql <= 1u )
  {
    v17 = KeGetCurrentIrql();
    if ( (_BYTE)v17 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v17, 2LL);
    goto LABEL_10;
  }
  if ( CurrentIrql == 2 )
  {
LABEL_10:
    v18 = (volatile signed __int32 *)(v15 + 16);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64(v18, 0LL) )
        KxWaitForSpinLockAndAcquire(v18);
    }
    else
    {
      KiAcquireSpinLockInstrumented(v18);
    }
LABEL_13:
    v19 = *(_SLIST_ENTRY **)v15;
    v20 = 32;
    while ( v19 != (_SLIST_ENTRY *)v15 )
    {
      ++v14;
      if ( *((_DWORD *)&v19[1].Next + 3) == v7 && LODWORD(v19[2].Next) == a6 )
      {
        v21 = 0LL;
        for ( i = v19; ; i = i[1].Next )
        {
          v52 = v21;
          if ( !i )
            break;
          if ( LODWORD(i[2].Next) < 0x20 )
            v20 = (unsigned int)i[2].Next;
          v53 = v20;
          v23 = 8LL * v20;
          v24 = RtlCompareMemory(&i[2].Next + 1, (const void *)(a5 + 8 * v21), v23);
          v20 = 32;
          if ( v24 != v23 )
            goto LABEL_17;
          v21 = v53 + v52;
        }
        _InterlockedIncrement((volatile signed __int32 *)&v19[1].Next + 2);
        v25 = v19->Next;
        if ( *(&v19->Next->Next + 1) != v19
          || (v26 = (_SLIST_ENTRY **)*((_QWORD *)&v19->Next + 1), *v26 != v19)
          || (*v26 = v25,
              *((_QWORD *)&v25->Next + 1) = v26,
              v27 = *(_SLIST_ENTRY **)v15,
              *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15) )
        {
LABEL_27:
          __fastfail(3u);
        }
        v19->Next = v27;
        *((_QWORD *)&v19->Next + 1) = v15;
        *((_QWORD *)&v27->Next + 1) = v19;
        *(_QWORD *)v15 = v19;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 16), 0LL);
        else
          KiReleaseSpinLockInstrumented((volatile signed __int64 *)(v15 + 16), retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v51);
        __writecr8(v51);
        goto LABEL_63;
      }
LABEL_17:
      v19 = v19->Next;
    }
    if ( v14 == 4 )
    {
      v31 = *(_SLIST_ENTRY **)(v15 + 8);
      v56 = v31;
      if ( v31->Next != (_SLIST_ENTRY *)v15 )
        goto LABEL_27;
      v32 = (_SLIST_ENTRY **)*((_QWORD *)&v31->Next + 1);
      if ( *v32 != v31 )
        goto LABEL_27;
      *(_QWORD *)(v15 + 8) = v32;
      *v32 = (_SLIST_ENTRY *)v15;
    }
    v19 = 0LL;
    v33 = 0LL;
    v54 = 0LL;
    if ( !a6 )
      goto LABEL_52;
    v34 = v55 + 1;
    while ( 1 )
    {
      v35 = RtlpInterlockedPopEntrySList(v34);
      if ( !v35 )
        break;
      v36 = a6 - v33;
      if ( (int)v33 + 32 < a6 )
        v36 = 32;
      memmove(&v35[2].Next + 1, (const void *)(a5 + 8 * v33), 8LL * v36);
      if ( (_DWORD)v33 )
        LODWORD(v35[2].Next) = v36;
      else
        v19 = v35;
      if ( v54 )
        v54[1].Next = v35;
      v34 = v55 + 1;
      v33 = v36 + (unsigned int)v33;
      v54 = v35;
      v35[1].Next = 0LL;
      if ( (unsigned int)v33 >= a6 )
        goto LABEL_52;
    }
    if ( (unsigned int)v33 >= a6 )
    {
LABEL_52:
      *((_DWORD *)&v19[1].Next + 3) = v7;
      LODWORD(v19[2].Next) = a6;
      *((_DWORD *)&v19[1].Next + 2) = 2;
      v37 = *(_SLIST_ENTRY ***)(v15 + 8);
      if ( *v37 != (_SLIST_ENTRY *)v15 )
        goto LABEL_27;
      v19->Next = (_SLIST_ENTRY *)v15;
      *((_QWORD *)&v19->Next + 1) = v37;
      *v37 = v19;
      *(_QWORD *)(v15 + 8) = v19;
      KxReleaseSpinLock((PKSPIN_LOCK)(v15 + 16));
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v51);
      __writecr8(v51);
      if ( v56 )
        EtwpDereferenceStackEntry(v56);
LABEL_63:
      v38 = v59;
      v39 = v58;
      ListEntry = v19;
      LOBYTE(v14) = 1;
      *(_QWORD *)(v59 + 16) = &ListEntry;
      *(_QWORD *)(v38 + 24) = 8LL;
      EtwpLogKernelEvent(v38, v39[85].Next, v39->Next, 2, a3, a2);
      v40 = (_SLIST_HEADER *)v39[66].Next;
      v29 = ListEntry;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&ListEntry[1].Next + 2, 0xFFFFFFFF) == 1 )
      {
        Alignment = v40->Alignment;
        v42 = 1;
        v58 = v29;
        v43 = v29;
        v61[0] = 8LL;
        v44 = *(_DWORD *)Alignment;
        v45 = *(_QWORD *)(Alignment + 1360);
        v60 = &v58;
        do
        {
          v46 = 32;
          if ( LODWORD(v43[2].Next) < 0x20 )
            v46 = (int)v43[2].Next;
          v47 = 2LL * v42++;
          v61[v47 - 1] = (char *)v43 + 40;
          LODWORD(v61[v47]) = 8 * v46;
          HIDWORD(v61[v47]) = 0;
          v43 = v43[1].Next;
        }
        while ( v43 );
        EtwpLogKernelEvent((unsigned int)&v60, v45, v44, v42, 6179, 5244418);
        do
        {
          v28 = v29[1].Next;
          RtlpInterlockedPushEntrySList(v40 + 1, v29);
          v29 = v28;
        }
        while ( v28 );
      }
      return (unsigned __int8)v14;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 16), v51);
    if ( v19 )
    {
      do
      {
        v48 = v19[1].Next;
        RtlpInterlockedPushEntrySList(v55 + 1, v19);
        v19 = v48;
      }
      while ( v48 );
    }
    if ( v56 )
      EtwpDereferenceStackEntry(v56);
    goto LABEL_35;
  }
  if ( (unsigned __int8)KxTryToAcquireSpinLock(v15 + 16, v13, v9) )
    goto LABEL_13;
  return (unsigned __int8)v14;
}
