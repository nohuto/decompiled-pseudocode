/*
 * XREFs of NtCreateProfileEx @ 0x140842690
 * Callers:
 *     DifNtCreateProfileExWrapper @ 0x140672E80 (DifNtCreateProfileExWrapper.c)
 * Callees:
 *     ExpProfileCreate @ 0x140842064 (ExpProfileCreate.c)
 */

__int64 __fastcall NtCreateProfileEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        volatile void *a6,
        unsigned int a7,
        int a8)
{
  return ExpProfileCreate(a1, a2, a3, a4, a5, a6, a7, a8);
}
