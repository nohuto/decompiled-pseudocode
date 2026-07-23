/*
 * XREFs of IommuProcessPageRequestQueue @ 0x14059EE90
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     IommupHvDismissPageFault @ 0x1405A0A08 (IommupHvDismissPageFault.c)
 *     IommupHvValidatePageRequestGpa @ 0x1405A1214 (IommupHvValidatePageRequestGpa.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall IommuProcessPageRequestQueue(unsigned int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  _QWORD *BugCheckParameter4; // rdi
  __int64 v5; // rax
  _QWORD *v6; // r14
  unsigned __int64 v7; // rbx
  volatile unsigned __int8 *v8; // rdx
  _BYTE *v9; // rsi
  KSPIN_LOCK *v10; // r13
  __int64 v11; // rdx
  int v12; // edx
  __int64 v13; // rsi
  unsigned __int8 CurrentIrql; // r14
  _QWORD *i; // rax
  __int64 *j; // r15
  KIRQL v17; // dl
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r14
  unsigned int v21; // ecx
  int v22; // r13d
  int v23; // eax
  int v24; // r12d
  KIRQL v25; // r13
  __int64 v26; // rdx
  int v28; // eax
  __int64 v29; // rdx
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-28h]
  __int64 v33; // [rsp+50h] [rbp-20h]
  ULONG_PTR v34; // [rsp+58h] [rbp-18h]
  _QWORD *v35; // [rsp+60h] [rbp-10h]
  KIRQL NewIrql; // [rsp+B8h] [rbp+48h]
  char v37; // [rsp+C0h] [rbp+50h]

  LODWORD(BugCheckParameter3) = 0;
  v34 = 0LL;
  v33 = 0LL;
  if ( HalpHvIommu )
  {
    BugCheckParameter4 = (_QWORD *)(*(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.CurrentRunTime
                                  + ((unsigned __int64)a1 << 6));
    v6 = BugCheckParameter4;
    v7 = (unsigned __int64)(BugCheckParameter4 + 3);
  }
  else
  {
    BugCheckParameter4 = (_QWORD *)HalpIommuList;
    if ( a1 )
    {
      v5 = a1;
      do
      {
        BugCheckParameter4 = (_QWORD *)*BugCheckParameter4;
        --v5;
      }
      while ( v5 );
    }
    v6 = (_QWORD *)BugCheckParameter4[2];
    v7 = (unsigned __int64)(BugCheckParameter4 + 49);
  }
  v35 = v6;
  BugCheckParameter2 = 0LL;
  v37 = 0;
  v9 = (_BYTE *)KeAbPreAcquire(v7, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)v7, 0, (LegacyAutoBoost *)v9, (struct _KTHREAD *)v7);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v8) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v9 + 33), v8, 1);
    }
    else
    {
      v9[10] = 1;
    }
  }
  v10 = (KSPIN_LOCK *)(v7 + 8);
  while ( 1 )
  {
    NewIrql = KeAcquireSpinLockRaiseToDpc(v10);
    if ( !(unsigned int)guard_dispatch_icall_no_overrides(v6, &BugCheckParameter3) )
      break;
    v37 = 1;
    if ( (v33 & 0x20) != 0 )
    {
      ++*(_DWORD *)(v7 + 16);
      KeReleaseSpinLock(v10, NewIrql);
    }
    else
    {
      if ( (_DWORD)BugCheckParameter3 == -1 )
        KeBugCheckEx(0x159u, 0LL, BugCheckParameter2, v33 << 16, v34);
      v13 = *(_QWORD *)(guard_dispatch_icall_no_overrides((unsigned int)BugCheckParameter3, v11) + 8);
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 15 )
        __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v12) = 15;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v12);
      }
      KxAcquireSpinLock((PKSPIN_LOCK)(v13 + 32));
      for ( i = *(_QWORD **)(v13 + 40); ; i = (_QWORD *)*i )
      {
        if ( i == (_QWORD *)(v13 + 40) )
          KeBugCheckEx(
            0x159u,
            3uLL,
            BugCheckParameter2,
            (unsigned int)BugCheckParameter3,
            (ULONG_PTR)BugCheckParameter4);
        if ( (_QWORD *)i[2] == BugCheckParameter4 )
          break;
      }
      for ( j = (__int64 *)i[3]; ; j = (__int64 *)*j )
      {
        if ( j == i + 3 )
          KeBugCheckEx(
            0x159u,
            4uLL,
            BugCheckParameter2,
            (unsigned int)BugCheckParameter3,
            (ULONG_PTR)BugCheckParameter4);
        if ( *(_QWORD *)(j[5] + 40) == BugCheckParameter2 )
          break;
      }
      KxReleaseSpinLock((PKSPIN_LOCK)(v13 + 32));
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      if ( (v33 & 8) != 0 )
        KeBugCheckEx(0x159u, 1uLL, BugCheckParameter2, v33 << 16, v34);
      if ( (v33 & 4) != 0 && (*(_DWORD *)(j[5] + 32) & 0x20000) == 0 )
        KeBugCheckEx(0x159u, 2uLL, BugCheckParameter2, v33 << 16, v34);
      if ( *((_BYTE *)j + 56) )
      {
        v17 = NewIrql;
      }
      else
      {
        if ( *(_DWORD *)(j[5] + 80) != *(_DWORD *)(v7 + 16) )
        {
          v18 = 88LL;
          v19 = 512LL;
          do
          {
            *(_QWORD *)(v18 + j[5]) = 0LL;
            v18 += 8LL;
            --v19;
          }
          while ( v19 );
          *(_DWORD *)(j[5] + 80) = *(_DWORD *)(v7 + 16);
        }
        v20 = j[5];
        v21 = *(_DWORD *)(v20 + 92);
        if ( (v21 & 1) != 0 )
        {
          if ( (_DWORD)BugCheckParameter3 != ((v21 >> 1) & 0xFFFFF) )
            KeBugCheckEx(0x159u, 5uLL, BugCheckParameter2, 0LL, (unsigned int)BugCheckParameter3);
        }
        else
        {
          *(_DWORD *)(v20 + 92) = v21 | 1;
          v21 = v21 & 0xFFE00000 | 1 | (2 * (BugCheckParameter3 & 0xFFFFF));
          *(_DWORD *)(v20 + 92) = v21;
        }
        ++*(_DWORD *)(v20 + 88);
        v22 = v21 & 0x400000;
        if ( (v33 & 0x10) != 0 )
          *(_DWORD *)(v20 + 92) = v21 | 0x200000;
        KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 8), NewIrql);
        v23 = guard_dispatch_icall_no_overrides(v33, v34);
        v24 = v23;
        if ( HalpHvIommu && v23 >= 0 && !v22 && (v33 & 0x10) == 0 )
          v24 = IommupHvValidatePageRequestGpa((unsigned int)BugCheckParameter3, BugCheckParameter2, v34);
        v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 8));
        if ( v24 < 0 )
          *(_DWORD *)(v20 + 92) |= 0x400000u;
        v26 = 0xFFFFFFFFLL;
        if ( (*(_DWORD *)(v20 + 88))-- == 1 )
        {
          v28 = *(_DWORD *)(v20 + 92);
          if ( (v28 & 0x200000) != 0 )
          {
            if ( (v28 & 0x400000) != 0 )
              v24 = -1073741823;
            if ( HalpHvIommu )
            {
              IommupHvDismissPageFault(BugCheckParameter3, BugCheckParameter2, 0, v24, v34, v33);
            }
            else
            {
              if ( (*(_DWORD *)(j[5] + 48) & 0x20000) != 0 )
                v26 = (unsigned int)BugCheckParameter3;
              guard_dispatch_icall_no_overrides(v35, v26);
            }
            *(_QWORD *)(v20 + 88) = 0LL;
          }
        }
        v17 = v25;
        v10 = (KSPIN_LOCK *)(v7 + 8);
      }
      KeReleaseSpinLock(v10, v17);
      guard_dispatch_icall_no_overrides((unsigned int)BugCheckParameter3, v29);
      v6 = v35;
    }
  }
  KeReleaseSpinLock(v10, NewIrql);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v7);
  KeAbPostRelease(v7);
  return v37;
}
