/*
 * XREFs of MiGetSectionStrongImageReference @ 0x140B4F550
 * Callers:
 *     MiValidateEntireInPage @ 0x14038C548 (MiValidateEntireInPage.c)
 *     MiApplyDriverHotPatch @ 0x140873E94 (MiApplyDriverHotPatch.c)
 *     MiLoadHotPatch @ 0x1408770BC (MiLoadHotPatch.c)
 *     MiWalkEntireImage @ 0x140ACA024 (MiWalkEntireImage.c)
 *     MiValidateImagePfn @ 0x140B0676C (MiValidateImagePfn.c)
 *     MmGetSectionStrongImageReference @ 0x140B569E8 (MmGetSectionStrongImageReference.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiGetSectionStrongImageReference(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v2 = *(_QWORD *)(a1 + 40);
  result = (__int64)SepRmCapTableLock.GlobalUpdateVpThreadPriorityListEntry.Flink;
  if ( !SepRmCapTableLock.GlobalUpdateVpThreadPriorityListEntry.Flink
    || (result = guard_dispatch_icall_no_overrides(v2 & 0xFFFFFFFFFFFFFFF8uLL, (__int64)&v4), (int)result >= 0) )
  {
    *(_QWORD *)(a1 + 64) = v4;
  }
  return result;
}
