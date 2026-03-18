/*
 * XREFs of MiGetSectionStrongImageReference @ 0x140B4D7C0
 * Callers:
 *     MiValidateEntireInPage @ 0x14038A798 (MiValidateEntireInPage.c)
 *     MiApplyDriverHotPatch @ 0x14086DAC4 (MiApplyDriverHotPatch.c)
 *     MiLoadHotPatch @ 0x140870D5C (MiLoadHotPatch.c)
 *     MiWalkEntireImage @ 0x140AC8434 (MiWalkEntireImage.c)
 *     MiValidateImagePfn @ 0x140B04B5C (MiValidateImagePfn.c)
 *     MmGetSectionStrongImageReference @ 0x140B54148 (MmGetSectionStrongImageReference.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiGetSectionStrongImageReference(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v2 = *(_QWORD *)(a1 + 40);
  result = (__int64)SepRmCapTableLock.AbWaitObject;
  if ( !SepRmCapTableLock.AbWaitObject
    || (result = guard_dispatch_icall_no_overrides(v2 & 0xFFFFFFFFFFFFFFF8uLL, (__int64)&v4), (int)result >= 0) )
  {
    *(_QWORD *)(a1 + 64) = v4;
  }
  return result;
}
