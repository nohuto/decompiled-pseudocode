/*
 * XREFs of NtCreateSectionEx @ 0x140868A80
 * Callers:
 *     DifNtCreateSectionExWrapper @ 0x1406735B0 (DifNtCreateSectionExWrapper.c)
 * Callees:
 *     MiCreateSectionCommon @ 0x1409B9D9C (MiCreateSectionCommon.c)
 */

__int64 __fastcall NtCreateSectionEx(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        volatile void *Address,
        ULONGLONG a9)
{
  ULONGLONG ullMultiplicand; // [rsp+40h] [rbp-28h]

  LODWORD(ullMultiplicand) = a9;
  return MiCreateSectionCommon(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           Address,
           ullMultiplicand,
           0,
           KeGetCurrentThread()->PreviousMode);
}
