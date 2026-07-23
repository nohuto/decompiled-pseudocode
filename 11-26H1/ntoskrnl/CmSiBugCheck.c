/*
 * XREFs of CmSiBugCheck @ 0x140534D04
 * Callers:
 *     HvpAllExceptionsFatalFilter @ 0x140862C54 (HvpAllExceptionsFatalFilter.c)
 *     HvpInpageErrorFilter @ 0x140862C74 (HvpInpageErrorFilter.c)
 *     CmpOpenHiveFile @ 0x1408BB784 (CmpOpenHiveFile.c)
 *     CmpInitializeValueNameString @ 0x1408C5BB4 (CmpInitializeValueNameString.c)
 *     CmpInitializeKeyNameString @ 0x140B0BD84 (CmpInitializeKeyNameString.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmSiBugCheck(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x51u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
