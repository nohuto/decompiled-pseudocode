/*
 * XREFs of CmpNotifyChangeKey @ 0x14093CF14
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x14093C190 (NtNotifyChangeMultipleKeys.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     Feature_NotifyQuotaCharge__private_IsEnabledDeviceUsageNoInline @ 0x1404B712C (Feature_NotifyQuotaCharge__private_IsEnabledDeviceUsageNoInline.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     CmpLogNotificationRegister @ 0x14085B884 (CmpLogNotificationRegister.c)
 *     CmpPostNotify @ 0x1408D1490 (CmpPostNotify.c)
 *     CmpFreePostBlock @ 0x1408D75E0 (CmpFreePostBlock.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C5E750 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 __fastcall CmpNotifyChangeKey(
        __int64 a1,
        _QWORD *a2,
        int a3,
        unsigned __int8 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v8; // r15d
  __int64 v11; // rdx
  __int64 *v12; // r8
  __int64 v13; // rbx
  __int64 v14; // r14
  int v15; // ebx
  __int64 v16; // rcx
  __int64 Pool2; // rax
  _QWORD *v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // ebx
  __int64 *p_SListFaultAddress; // rdx
  _QWORD *v23; // rcx
  int v24; // eax
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  unsigned __int8 CurrentIrql; // si
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v29; // rax
  __int64 **v30; // rcx
  __int64 v31; // rax
  __int64 **QuantumTarget; // rax
  signed __int32 v33[8]; // [rsp+0h] [rbp-58h] BYREF

  v8 = a4;
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    v20 = -1073741444;
    goto LABEL_16;
  }
  v13 = *(_QWORD *)(a1 + 16);
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
  if ( v13 )
    goto LABEL_11;
  v15 = (unsigned __int16)*((_DWORD *)a2 + 14);
  if ( !(unsigned int)Feature_NotifyQuotaCharge__private_IsEnabledDeviceUsageNoInline()
    || v15 == 4
    || (v16 = 0LL, v15 == 2) )
  {
    v16 = 1LL;
  }
  Pool2 = ExAllocatePool2(v16 + 256);
  v13 = Pool2;
  if ( !Pool2 )
  {
    v20 = -1073741670;
LABEL_16:
    CmpFreePostBlock(a2);
    return v20;
  }
  *(_QWORD *)(Pool2 + 32) = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(Pool2 + 48) = ((*(_DWORD *)(Pool2 + 48) ^ (a3 ^ *(_DWORD *)(Pool2 + 48)) & 0x3FFFFFFF) & 0x3FFFFFFF ^ (v8 << 30)) & 0x7FFFFFFF;
  *(_QWORD *)(Pool2 + 24) = Pool2 + 16;
  *(_QWORD *)(Pool2 + 16) = Pool2 + 16;
  *(_QWORD *)(a1 + 16) = Pool2;
  *(_QWORD *)(Pool2 + 40) = a1;
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)(Pool2 + 56));
  v12 = (__int64 *)(v14 + 1592);
  while ( *v12 )
  {
    v11 = *(_QWORD *)(*v12 + 32);
    v12 = (__int64 *)*v12;
    if ( *(_WORD *)(v11 + 12) > *(_WORD *)(*(_QWORD *)(a1 + 8) + 12LL) )
    {
      *(_QWORD *)v13 = v12;
      *(_QWORD *)v12[1] = v13;
      *(_QWORD *)(v13 + 8) = v12[1];
      v12[1] = v13;
      goto LABEL_11;
    }
  }
  *v12 = v13;
  *(_QWORD *)v13 = 0LL;
  *(_QWORD *)(v13 + 8) = v12;
LABEL_11:
  v18 = (_QWORD *)(v13 + 16);
  v19 = *(_QWORD *)(v13 + 16);
  if ( *(_QWORD *)(v19 + 8) != v13 + 16 )
    goto LABEL_12;
  *a2 = v19;
  a2[1] = v18;
  *(_QWORD *)(v19 + 8) = a2;
  v23 = a2 + 4;
  *v18 = a2;
  if ( _bittest((const signed __int32 *)a2 + 14, 0x10u) )
  {
    a2[5] = a2 + 4;
    *v23 = v23;
  }
  else
  {
    v11 = *(_QWORD *)(a7 + 40);
    if ( *(_QWORD *)v11 != a7 + 32 )
      goto LABEL_12;
    *v23 = a7 + 32;
    a2[5] = v11;
    *(_QWORD *)v11 = v23;
    *(_QWORD *)(a7 + 40) = v23;
  }
  v24 = (unsigned __int16)*((_DWORD *)a2 + 14);
  if ( v24 != 3 && v24 != 4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 1 )
      __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v11) = 1;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v11);
    }
    CurrentThread = KeGetCurrentThread();
    if ( ((__int64)CurrentThread[1].Queue & 8) == 0 )
    {
      LOBYTE(CurrentThread[1].Queue) |= 8u;
      _InterlockedOr(v33, 0);
      CurrentThread[1].QuantumTarget = (unsigned __int64)&CurrentThread[1].SListFaultAddress;
      CurrentThread[1].SListFaultAddress = &CurrentThread[1].SListFaultAddress;
    }
    v29 = KeGetCurrentThread();
    v30 = (__int64 **)(a2 + 2);
    p_SListFaultAddress = (__int64 *)&v29[1].SListFaultAddress;
    if ( _bittest((const signed __int32 *)a2 + 14, 0x10u) )
    {
      v31 = *p_SListFaultAddress;
      if ( *(__int64 **)(*p_SListFaultAddress + 8) == p_SListFaultAddress )
      {
        *v30 = (__int64 *)v31;
        a2[3] = p_SListFaultAddress;
        *(_QWORD *)(v31 + 8) = v30;
        *p_SListFaultAddress = (__int64)v30;
LABEL_17:
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        goto LABEL_20;
      }
    }
    else
    {
      QuantumTarget = (__int64 **)v29[1].QuantumTarget;
      if ( *QuantumTarget == p_SListFaultAddress )
      {
        *v30 = p_SListFaultAddress;
        a2[3] = QuantumTarget;
        *QuantumTarget = (__int64 *)v30;
        p_SListFaultAddress[1] = (__int64)v30;
        goto LABEL_17;
      }
    }
LABEL_12:
    __fastfail(3u);
  }
  v25 = (_QWORD *)qword_140FD65D0;
  p_SListFaultAddress = &CmpAsyncKernelPostList;
  v26 = a2 + 2;
  if ( *(__int64 **)qword_140FD65D0 != &CmpAsyncKernelPostList )
    goto LABEL_12;
  *v26 = &CmpAsyncKernelPostList;
  a2[3] = v25;
  *v25 = v26;
  qword_140FD65D0 = (__int64)(a2 + 2);
LABEL_20:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x2000000) != 0 )
    CmpLogNotificationRegister(
      (__int64)a2,
      *(_QWORD *)(a1 + 8),
      *((_DWORD *)a2 + 14),
      v8,
      HIWORD(*((_DWORD *)a2 + 14)) & 1);
  if ( *(int *)(v13 + 48) >= 0 )
    return 259LL;
  CmpPostNotify(v13, p_SListFaultAddress, (__int64)v12, 0x10Cu, 1, 0LL, 0LL);
  return 0LL;
}
