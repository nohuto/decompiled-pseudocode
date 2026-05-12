/*
 * XREFs of sub_14006AE00 @ 0x14006AE00
 * Callers:
 *     sub_14017ADA0 @ 0x14017ADA0 (sub_14017ADA0.c)
 * Callees:
 *     sub_140033D74 @ 0x140033D74 (sub_140033D74.c)
 *     sub_140033DA4 @ 0x140033DA4 (sub_140033DA4.c)
 *     sub_140033E20 @ 0x140033E20 (sub_140033E20.c)
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 *     sub_1400697CC @ 0x1400697CC (sub_1400697CC.c)
 */

__int64 __fastcall sub_14006AE00(PCUNICODE_STRING String2)
{
  volatile signed __int32 *i; // rbx
  __int64 v4; // rax
  _QWORD *v5; // r15
  _QWORD *j; // rsi
  KSPIN_LOCK *k; // r14
  __int64 *m; // rax
  __int64 *n; // rax
  void *v10; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v11; // rcx
  volatile signed __int32 *v12; // rcx
  PVOID *v13; // rax
  volatile signed __int32 *v14; // rcx
  PVOID *v15; // rax
  struct _KLOCK_QUEUE_HANDLE v16; // [rsp+20h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v17; // [rsp+38h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v18; // [rsp+50h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-18h] BYREF

  memset(&v17, 0, sizeof(v17));
  memset(&v18, 0, sizeof(v18));
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (unsigned int)sub_1400567A0() )
    KeAcquireInStackQueuedSpinLock(&qword_140169200, &LockHandle);
  for ( i = (volatile signed __int32 *)qword_140169290; ; i = *(volatile signed __int32 **)i )
  {
    if ( i == (volatile signed __int32 *)&qword_140169290 )
      goto LABEL_7;
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(i + 6), String2, 1u) )
      break;
  }
  v4 = sub_140033DA4();
  v5 = (_QWORD *)v4;
  if ( v4 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 24), &v18);
    for ( j = (_QWORD *)v5[1]; j != v5 + 1; j = (_QWORD *)*j )
    {
      KeAcquireInStackQueuedSpinLock(j + 7, &v17);
      for ( k = (KSPIN_LOCK *)j[4]; k != j + 4; k = (KSPIN_LOCK *)*k )
      {
        if ( (unsigned int)sub_1400567A0() )
        {
          memset(&v16, 0, sizeof(v16));
          KeAcquireInStackQueuedSpinLock(k + 9, &v16);
          for ( m = (__int64 *)k[10]; m != (__int64 *)(k + 10); m = (__int64 *)*m )
            m[442] = 0LL;
          KeReleaseInStackQueuedSpinLock(&v16);
          KeAcquireInStackQueuedSpinLock(k + 19, &v16);
          for ( n = (__int64 *)k[20]; n != (__int64 *)(k + 20); n = (__int64 *)*n )
            n[442] = 0LL;
          KeReleaseInStackQueuedSpinLock(&v16);
        }
        if ( !(unsigned int)sub_1400567A0()
          && (volatile signed __int32 *)k[766] == i
          && (int)sub_140033D74((__int64)(k - 8)) >= 0 )
        {
          v10 = (void *)k[695];
          *((_BYTE *)k + 48) &= ~0x10u;
          k[766] = 0LL;
          ExFreePoolWithTag(v10, 0x72436152u);
          v11 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)k[34];
          k[695] = 0LL;
          ExReleaseRundownProtectionCacheAware(v11);
        }
      }
      KeReleaseInStackQueuedSpinLock(&v17);
    }
    KeReleaseInStackQueuedSpinLock(&v18);
    sub_140033E20(v5);
    if ( !(unsigned int)sub_1400567A0() )
    {
      sub_1400697CC((PVOID)i);
      v12 = *(volatile signed __int32 **)i;
      if ( *(volatile signed __int32 **)(*(_QWORD *)i + 8LL) == i )
      {
        v13 = (PVOID *)*((_QWORD *)i + 1);
        if ( *v13 == i )
        {
          *v13 = (PVOID)v12;
          *((_QWORD *)v12 + 1) = v13;
          goto LABEL_7;
        }
      }
LABEL_37:
      __fastfail(3u);
    }
    if ( _InterlockedExchangeAdd(i + 4, 0xFFFFFFFF) == 1 )
    {
      v14 = *(volatile signed __int32 **)i;
      if ( *(volatile signed __int32 **)(*(_QWORD *)i + 8LL) != i )
        goto LABEL_37;
      v15 = (PVOID *)*((_QWORD *)i + 1);
      if ( *v15 != i )
        goto LABEL_37;
      *v15 = (PVOID)v14;
      *((_QWORD *)v14 + 1) = v15;
      sub_1400697CC((PVOID)i);
    }
  }
LABEL_7:
  if ( (unsigned int)sub_1400567A0() )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
