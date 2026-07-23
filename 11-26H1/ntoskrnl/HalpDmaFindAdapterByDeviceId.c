/*
 * XREFs of HalpDmaFindAdapterByDeviceId @ 0x14057B12C
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x140782F1C (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140259C30 (ObReferenceObjectSafeWithTag.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     IidAreIdsStrictlyEqual @ 0x14071E4B4 (IidAreIdsStrictlyEqual.c)
 */

__int64 __fastcall HalpDmaFindAdapterByDeviceId(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v4; // al
  __int64 *v5; // r11
  KIRQL v6; // bp
  __int64 v7; // rsi
  __int64 v8; // rcx

  v1 = 0LL;
  if ( !a1 )
    return 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&HalpDmaAdapterListLock);
  v5 = (__int64 *)qword_140FBD5E8;
  v6 = v4;
  while ( v5 != &HalpDmaAdapterList )
  {
    v7 = (__int64)(v5 - 58);
    v8 = v5[9];
    if ( v8 && (unsigned __int8)IidAreIdsStrictlyEqual(v8, a1) )
    {
      if ( ObReferenceObjectSafeWithTag(v7, 0x746C6644u) )
        v1 = v7;
      break;
    }
    v5 = (__int64 *)v5[1];
  }
  KeReleaseSpinLock(&HalpDmaAdapterListLock, v6);
  return v1;
}
