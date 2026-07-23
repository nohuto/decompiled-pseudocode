/*
 * XREFs of PopFxDeviceRelationsCleanup @ 0x14046A7E4
 * Callers:
 *     PopFxUnregisterDevice @ 0x140B08758 (PopFxUnregisterDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxTryToAcquireSpinLock @ 0x140332C98 (KxTryToAcquireSpinLock.c)
 *     PopFxIdleComponent @ 0x140396DA0 (PopFxIdleComponent.c)
 *     PopFxNextParentRelationSafe @ 0x14046A9F0 (PopFxNextParentRelationSafe.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxDeviceRelationsCleanup(__int64 a1)
{
  KSPIN_LOCK *v1; // rsi
  __int64 v2; // r14
  KIRQL v3; // bp
  char *v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rdx
  char v13; // di
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  v1 = (KSPIN_LOCK *)(a1 + 1280);
  P = 0LL;
  v2 = a1 + 1304;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1280));
  while ( (unsigned __int8)PopFxNextParentRelationSafe(v2, 0LL, &P) )
  {
    v4 = (char *)P;
    v5 = *((_DWORD *)P + 4);
    v6 = *((_QWORD *)P + 3);
    if ( (v5 & 2) != 0 )
    {
      PopFxIdleComponent(*(_QWORD *)(v6 + 80), *(unsigned int *)(v6 + 16), 2);
      v5 = *((_DWORD *)v4 + 4) & 0xFFFFFFFD;
    }
    *((_DWORD *)v4 + 4) = v5 & 0xFFFFFFF7;
    v7 = v4 + 56;
    *((_QWORD *)v4 + 6) = 0LL;
    v8 = *((_QWORD *)v4 + 7);
    if ( *(char **)(v8 + 8) != v4 + 56 || (v9 = (_QWORD *)*((_QWORD *)v4 + 8), (_QWORD *)*v9 != v7) )
LABEL_14:
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    *((_QWORD *)v4 + 8) = v4 + 56;
    *v7 = v7;
    if ( KxTryToAcquireSpinLock((volatile signed __int32 *)(v6 + 128)) )
    {
      *((_DWORD *)v4 + 4) &= ~4u;
      v10 = v4 + 32;
      *((_QWORD *)v4 + 3) = 0LL;
      v11 = *((_QWORD *)v4 + 4);
      if ( *(char **)(v11 + 8) != v4 + 32 )
        goto LABEL_14;
      v12 = (_QWORD *)*((_QWORD *)v4 + 5);
      if ( (_QWORD *)*v12 != v10 )
        goto LABEL_14;
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      *((_QWORD *)v4 + 5) = v4 + 32;
      *v10 = v10;
      KxReleaseSpinLock((PKSPIN_LOCK)(v6 + 128));
      v13 = 1;
    }
    else
    {
      v13 = 0;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)v4 + 1);
    if ( v13 )
      ExFreePoolWithTag(v4, 0x4D584650u);
  }
  KeReleaseSpinLock(v1, v3);
}
