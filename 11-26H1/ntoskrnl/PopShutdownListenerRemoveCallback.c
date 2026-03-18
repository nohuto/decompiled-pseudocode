/*
 * XREFs of PopShutdownListenerRemoveCallback @ 0x14060BBE0
 * Callers:
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopShutdownListenerRemoveCallback(__m256i *a1)
{
  KIRQL v1; // al
  __int64 *v2; // rbx
  KIRQL v3; // r9
  __int64 *v4; // rcx
  __int64 **v5; // rax
  unsigned int v6; // edi
  __m256i v8; // [rsp+20h] [rbp-28h]

  v8 = *a1;
  v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopWeakChargerLock.SavedApcState.Process);
  v2 = *(__int64 **)&PopWeakChargerLock.SavedApcStateFill[40];
  v3 = v1;
  if ( *(struct _KTHREAD **)&PopWeakChargerLock.SavedApcStateFill[40] == (struct _KTHREAD *)&PopWeakChargerLock.SavedApcStateFill[40] )
    goto LABEL_10;
  do
  {
    if ( *((_OWORD *)v2 + 1) == *(_OWORD *)&v8.m256i_u64[1] && v2[4] == v8.m256i_i64[3] )
      break;
    v2 = (__int64 *)*v2;
  }
  while ( v2 != (__int64 *)&PopWeakChargerLock.SavedApcStateFill[40] );
  if ( v2 == (__int64 *)&PopWeakChargerLock.SavedApcStateFill[40] )
  {
LABEL_10:
    v2 = 0LL;
    v6 = -1073741275;
  }
  else
  {
    v4 = (__int64 *)*v2;
    if ( *(__int64 **)(*v2 + 8) != v2 || (v5 = (__int64 **)v2[1], *v5 != v2) )
      __fastfail(3u);
    *v5 = v4;
    v6 = 0;
    v4[1] = (__int64)v5;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&PopWeakChargerLock.SavedApcState.Process, v3);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x206D654Du);
  return v6;
}
