/*
 * XREFs of PopFxActivateComponentDependents @ 0x1403BC2E0
 * Callers:
 *     PopFxCompleteComponentActivation @ 0x1403B8A04 (PopFxCompleteComponentActivation.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     PopPluginComponentActive @ 0x1403B8AA0 (PopPluginComponentActive.c)
 *     PopPepProcessEvent @ 0x1403B9A00 (PopPepProcessEvent.c)
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
 *     PopQueueQuerySetIrp @ 0x1403BC828 (PopQueueQuerySetIrp.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxActivateComponentDependents(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  volatile signed __int32 *v5; // rsi
  unsigned __int8 CurrentIrql; // di
  IRP *Flink; // r14
  _QWORD *v8; // rbx
  _QWORD *v9; // r15
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  _QWORD *v12; // r8
  __int64 result; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rbx
  unsigned __int64 v20; // r14
  bool v21; // r15
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rbx
  __int64 v25; // rax
  ULONG_PTR v26; // r14
  IRP *v27; // rcx
  bool v28; // zf
  _QWORD *v29; // rbp
  __int64 v30; // rcx
  _QWORD *v31; // rax
  unsigned int v32; // ecx
  __int64 v33; // r15
  __int64 v34; // r13
  __int64 v35; // r12
  KIRQL v36; // al
  KSPIN_LOCK *v37; // rcx
  IRP *v38; // rdi
  KIRQL v39; // al
  int v40; // edi
  __int64 v41; // r8
  __int64 v42; // [rsp+20h] [rbp-78h]
  __int128 i; // [rsp+30h] [rbp-68h] BYREF
  __int128 v44; // [rsp+40h] [rbp-58h] BYREF
  __int128 v45; // [rsp+50h] [rbp-48h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]
  __int64 v47; // [rsp+A0h] [rbp+8h]
  char v48; // [rsp+A0h] [rbp+8h]
  __int64 v49; // [rsp+A8h] [rbp+10h]
  __int64 v50; // [rsp+B0h] [rbp+18h]

  v2 = *(_QWORD *)(a1 + 80);
  v3 = 0LL;
  for ( i = 0LL; (unsigned int)v3 < *(_DWORD *)(a1 + 188); v3 = (unsigned int)(v3 + 1) )
  {
    v17 = *(_QWORD *)(a1 + 192);
    v18 = *(unsigned int *)(v17 + 8 * v3);
    v19 = *(unsigned int *)(v17 + 8 * v3 + 4);
    v47 = *(_QWORD *)(*(_QWORD *)(v2 + 872) + 8 * v18);
    v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v47 + 128));
    v21 = 0;
    v22 = *(_QWORD *)(v47 + 176);
    if ( *(_BYTE *)(v22 + 8 * v19 + 4) )
    {
      *(_BYTE *)(v22 + 8 * v19 + 4) = 0;
      v28 = (*(_DWORD *)(v47 + 184))-- == 1;
      v21 = v28;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(v47 + 128));
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v20);
    __writecr8(v20);
    if ( v21 )
    {
      v24 = *(_QWORD *)(v2 + 56);
      if ( *(_BYTE *)(v24 + 124) )
      {
        v25 = *(_QWORD *)(v24 + 32);
        v44 = 0LL;
        DWORD2(v44) = v18;
        v26 = *(_QWORD *)(v25 + 64);
        *(_QWORD *)&v44 = *(_QWORD *)(v25 + 72);
        BYTE12(v44) = 1;
        v45 = 0LL;
        BYTE8(v45) = 0;
        if ( (unsigned __int8)guard_dispatch_icall_no_overrides(7LL, &v44, v23) )
        {
          if ( BYTE8(v45) )
            PopFxBugCheck(0x612uLL, v26, 0LL, 0LL);
        }
      }
      if ( (unsigned __int8)PopPepProcessEvent(v24, (volatile LONG *)(v24 + 208 * v18 + 192), 6u, 2u, v42, 0LL) )
        PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
    }
  }
  v5 = (volatile signed __int32 *)(a1 + 128);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64(v5, 0LL) )
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 128));
  }
  else
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)(a1 + 128));
  }
  Flink = 0LL;
  *((_QWORD *)&i + 1) = &i;
  v8 = (_QWORD *)(a1 + 440);
  *(_QWORD *)&i = &i;
  while ( 1 )
  {
    v9 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 == v8 )
      break;
    v29 = v9 - 4;
    KxAcquireSpinLock(v9 - 3);
    if ( (*(_DWORD *)(v9 - 2) & 8) != 0 )
    {
      v14 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 )
        goto LABEL_30;
      v15 = (_QWORD *)v29[5];
      if ( (_QWORD *)*v15 != v9 )
        goto LABEL_30;
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      v16 = (_QWORD *)*((_QWORD *)&i + 1);
      if ( **((__int128 ***)&i + 1) != &i )
        goto LABEL_30;
      v9[1] = *((_QWORD *)&i + 1);
      *v9 = &i;
      *v16 = v9;
      *((_QWORD *)&i + 1) = v9;
      v32 = v29[2] & 0xFFFFFFFE;
      if ( (v29[2] & 1) != 0 )
      {
        v48 = 1;
        v32 = v29[2] & 0xFFFFFFFC | 2;
      }
      else
      {
        v48 = 0;
      }
      *((_DWORD *)v29 + 4) = v32;
      v33 = 0LL;
      v34 = v29[6];
      if ( *(_DWORD *)v29 )
      {
        v49 = v34 - 112;
        v35 = v34 + 56;
        v50 = v34 - 48;
      }
      else
      {
        v33 = v34 - 1280;
        v49 = 16LL;
        v34 = 128LL;
        v50 = 80LL;
        v35 = 184LL;
      }
      KxReleaseSpinLock(v29 + 1);
      if ( v48 )
      {
        KeReleaseSpinLock((PKSPIN_LOCK)v5, CurrentIrql);
        if ( v33 )
        {
          v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v33 + 1280));
          v28 = (*(_DWORD *)(v33 + 1288))-- == 1;
          v37 = (KSPIN_LOCK *)(v33 + 1280);
          if ( v28 )
          {
            v38 = *(IRP **)(v33 + 1296);
            *(_QWORD *)(v33 + 1296) = 0LL;
            KeReleaseSpinLock(v37, v36);
            v38->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)Flink;
            Flink = v38;
          }
          else
          {
            KeReleaseSpinLock(v37, v36);
          }
        }
        else
        {
          v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v34);
          v40 = *(_DWORD *)v35 - 1;
          *(_DWORD *)v35 = v40;
          KeReleaseSpinLock((PKSPIN_LOCK)v34, v39);
          if ( !v40 )
          {
            LOBYTE(v41) = 1;
            PopPluginComponentActive(*(_QWORD *)v50, *(_DWORD *)v49, v41, 0LL);
          }
        }
        CurrentIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5);
      }
    }
    else
    {
      KxReleaseSpinLock(v29 + 1);
      *((_DWORD *)v29 + 4) &= ~4u;
      v29[3] = 0LL;
      v30 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 )
        goto LABEL_30;
      v31 = (_QWORD *)v9[1];
      if ( (_QWORD *)*v31 != v9 )
        goto LABEL_30;
      *v31 = v30;
      *(_QWORD *)(v30 + 8) = v31;
      ExFreePoolWithTag(v9 - 4, 0x4D584650u);
    }
  }
  v10 = (_QWORD *)i;
  if ( (__int128 *)i != &i )
  {
    v11 = (_QWORD *)*((_QWORD *)&i + 1);
    if ( *(__int128 **)(i + 8) != &i
      || **((__int128 ***)&i + 1) != &i
      || (**((_QWORD **)&i + 1) = i, v10[1] = v11, v12 = (_QWORD *)v8[1], *(_QWORD **)(*v8 + 8LL) != v8)
      || (_QWORD *)*v12 != v8
      || *(_QWORD **)(*v10 + 8LL) != v10
      || (_QWORD *)*v11 != v10 )
    {
LABEL_30:
      __fastfail(3u);
    }
    *v12 = v10;
    v8[1] = v10[1];
    *(_QWORD *)v10[1] = v8;
    v10[1] = v12;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)v5, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v5, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  for ( ; Flink; result = PopQueueQuerySetIrp(v27) )
  {
    v27 = Flink;
    Flink = (IRP *)Flink->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink;
  }
  return result;
}
