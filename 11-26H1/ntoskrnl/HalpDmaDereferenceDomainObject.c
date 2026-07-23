/*
 * XREFs of HalpDmaDereferenceDomainObject @ 0x140346528
 * Callers:
 *     HalFreeCommonBufferVector @ 0x140345C80 (HalFreeCommonBufferVector.c)
 *     HalFreeCommonBufferDmarThin @ 0x140346220 (HalFreeCommonBufferDmarThin.c)
 *     HalFreeCommonBufferDmaThin @ 0x140346320 (HalFreeCommonBufferDmaThin.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x14034ACB4 (HalpAllocateCommonBufferDmaThin.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x1404CB450 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x1404EB464 (HalpAllocateCommonBufferDmarThin.c)
 *     HalJoinDmaDomain @ 0x1405113F0 (HalJoinDmaDomain.c)
 *     HalCreateCommonBufferFromMdl @ 0x14058C160 (HalCreateCommonBufferFromMdl.c)
 *     HalFreeCommonBufferV3 @ 0x14058C550 (HalFreeCommonBufferV3.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14058C6F0 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpDmaAllocateDomain @ 0x14058CB90 (HalpDmaAllocateDomain.c)
 *     HalpDmaIsAutomaticDomain @ 0x14058D4E0 (HalpDmaIsAutomaticDomain.c)
 *     HalpLeaveDmaDomain @ 0x14058D5A4 (HalpLeaveDmaDomain.c)
 *     HalCreateCommonBufferFromMdlDmaThin @ 0x14058D740 (HalCreateCommonBufferFromMdlDmaThin.c)
 *     HalCreateCommonBufferFromMdlDmarThin @ 0x14058DC30 (HalCreateCommonBufferFromMdlDmarThin.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpDmaDeleteDomain @ 0x1405336C8 (HalpDmaDeleteDomain.c)
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
