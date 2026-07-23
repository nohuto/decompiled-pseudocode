/*
 * XREFs of ViSpecialFreeCommonBuffer @ 0x140C2DE80
 * Callers:
 *     VfFreeCommonBuffer @ 0x140C2A610 (VfFreeCommonBuffer.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x140C28B0C (DECREMENT_COMMON_BUFFERS.c)
 *     ViCheckPadding @ 0x140C2C570 (ViCheckPadding.c)
 */

__int64 __fastcall ViSpecialFreeCommonBuffer(__int64 a1, unsigned __int16 *a2, void *a3)
{
  KSPIN_LOCK *v3; // rsi
  KIRQL v6; // al
  __int64 i; // rbx
  unsigned __int16 *v8; // rbx
  KIRQL v10; // al
  __int64 v11; // r8
  unsigned __int16 **v12; // rdx

  v3 = (KSPIN_LOCK *)(a2 + 64);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a2 + 16);
  for ( i = *((_QWORD *)a2 + 14); ; i = *((_QWORD *)v8 + 6) )
  {
    v8 = (unsigned __int16 *)(i - 48);
    if ( a2 == v8 - 32 )
      break;
    if ( (void *)(*((_QWORD *)v8 + 2) + *v8) == a3 )
      goto LABEL_6;
  }
  v8 = 0LL;
LABEL_6:
  KeReleaseSpinLock(v3, v6);
  if ( !v8 )
    return 0LL;
  ViCheckPadding(*((_QWORD *)v8 + 2), *((_DWORD *)v8 + 1), *((_QWORD *)v8 + 3), *((_DWORD *)v8 + 2));
  v10 = KeAcquireSpinLockRaiseToDpc(v3);
  v11 = *((_QWORD *)v8 + 6);
  if ( *(unsigned __int16 **)(v11 + 8) != v8 + 24 || (v12 = (unsigned __int16 **)*((_QWORD *)v8 + 7), *v12 != v8 + 24) )
    __fastfail(3u);
  *v12 = (unsigned __int16 *)v11;
  *(_QWORD *)(v11 + 8) = v12;
  KeReleaseSpinLock(v3, v10);
  memset_0(a3, 0, *((unsigned int *)v8 + 2));
  guard_dispatch_icall_no_overrides(*((_QWORD *)a2 + 5), *((unsigned int *)v8 + 1));
  DECREMENT_COMMON_BUFFERS((__int64)a2);
  ExFreePoolWithTag(v8, 0);
  return 1LL;
}
