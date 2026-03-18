/*
 * XREFs of HalpDmaDereferenceDomainObject @ 0x1403444A8
 * Callers:
 *     HalFreeCommonBufferVector @ 0x140343C00 (HalFreeCommonBufferVector.c)
 *     HalFreeCommonBufferDmarThin @ 0x1403441A0 (HalFreeCommonBufferDmarThin.c)
 *     HalFreeCommonBufferDmaThin @ 0x1403442A0 (HalFreeCommonBufferDmaThin.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x140348C34 (HalpAllocateCommonBufferDmaThin.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x1404D18A4 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x1404F1E84 (HalpAllocateCommonBufferDmarThin.c)
 *     HalJoinDmaDomain @ 0x140517980 (HalJoinDmaDomain.c)
 *     HalCreateCommonBufferFromMdl @ 0x140589A30 (HalCreateCommonBufferFromMdl.c)
 *     HalFreeCommonBufferV3 @ 0x140589E20 (HalFreeCommonBufferV3.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140589FC0 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpDmaAllocateDomain @ 0x14058A460 (HalpDmaAllocateDomain.c)
 *     HalpDmaIsAutomaticDomain @ 0x14058AD58 (HalpDmaIsAutomaticDomain.c)
 *     HalpLeaveDmaDomain @ 0x14058AE1C (HalpLeaveDmaDomain.c)
 *     HalCreateCommonBufferFromMdlDmaThin @ 0x14058AFC0 (HalCreateCommonBufferFromMdlDmaThin.c)
 *     HalCreateCommonBufferFromMdlDmarThin @ 0x14058B4B0 (HalCreateCommonBufferFromMdlDmarThin.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpDmaDeleteDomain @ 0x1405311C8 (HalpDmaDeleteDomain.c)
 */

__int64 __fastcall HalpDmaDereferenceDomainObject(__int64 *BugCheckParameter3)
{
  char v2; // si
  char v3; // di
  KIRQL v4; // al
  __int64 *v5; // rcx
  KIRQL v6; // dl
  bool v7; // zf
  __int64 v8; // rcx
  __int64 **v9; // rax

  v2 = 0;
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&HalpDmaDomainListLock);
  v5 = (__int64 *)HalpDmaDomainList;
  v6 = v4;
  while ( v5 != &HalpDmaDomainList )
  {
    if ( BugCheckParameter3 == v5 )
    {
      v7 = (*((_DWORD *)BugCheckParameter3 + 28))-- == 1;
      v3 = 1;
      if ( v7 )
      {
        v8 = *BugCheckParameter3;
        if ( *(__int64 **)(*BugCheckParameter3 + 8) != BugCheckParameter3
          || (v9 = (__int64 **)BugCheckParameter3[1], *v9 != BugCheckParameter3) )
        {
          __fastfail(3u);
        }
        *v9 = (__int64 *)v8;
        v2 = 1;
        *(_QWORD *)(v8 + 8) = v9;
      }
      break;
    }
    v5 = (__int64 *)*v5;
  }
  KeReleaseSpinLock(&HalpDmaDomainListLock, v6);
  if ( v2 )
    HalpDmaDeleteDomain((ULONG_PTR)BugCheckParameter3);
  return v3 == 0 ? 0xC000000D : 0;
}
