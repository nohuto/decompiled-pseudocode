/*
 * XREFs of CmSiBugCheck @ 0x140532864
 * Callers:
 *     HvpAllExceptionsFatalFilter @ 0x14085C964 (HvpAllExceptionsFatalFilter.c)
 *     HvpInpageErrorFilter @ 0x14085C984 (HvpInpageErrorFilter.c)
 *     CmpOpenHiveFile @ 0x1408B51B0 (CmpOpenHiveFile.c)
 *     CmpInitializeValueNameString @ 0x1408BF5E4 (CmpInitializeValueNameString.c)
 *     CmpInitializeKeyNameString @ 0x140B09FC4 (CmpInitializeKeyNameString.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmSiBugCheck(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x51u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
