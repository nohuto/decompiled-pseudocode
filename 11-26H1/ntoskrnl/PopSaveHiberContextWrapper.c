/*
 * XREFs of PopSaveHiberContextWrapper @ 0x140735650
 * Callers:
 *     <none>
 * Callees:
 *     VslSwapHiberShadowStacks @ 0x1405C6A00 (VslSwapHiberShadowStacks.c)
 *     KasanHibernationGetStackLow @ 0x1405DFFA0 (KasanHibernationGetStackLow.c)
 *     KasanHibernationResume @ 0x1405E0060 (KasanHibernationResume.c)
 *     KeSaveStateForHibernate @ 0x14072C9A0 (KeSaveStateForHibernate.c)
 *     PopHiberCheckResume @ 0x140C008A0 (PopHiberCheckResume.c)
 *     PopSaveHiberContext @ 0x140C01D50 (PopSaveHiberContext.c)
 */

__int64 __fastcall PopSaveHiberContextWrapper(PVOID Address)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  bool v5; // zf
  __int64 result; // rax
  _BYTE v7[32]; // [rsp+0h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+20h] [rbp-18h]

  __asm { rdsspq  rcx }
  VslSwapHiberShadowStacks(_RCX);
  if ( __readgsdword(0x1A4u)
    || (BugCheckParameter3 = (ULONG_PTR)KasanHibernationGetStackLow(v4, v3),
        KeSaveStateForHibernate((__int64)&PoWakeState),
        KasanHibernationResume(BugCheckParameter3, v7),
        v5 = (unsigned __int8)PopHiberCheckResume() == 0,
        result = 1073742484LL,
        v5) )
  {
    result = PopSaveHiberContext(Address);
  }
  if ( (int)result < 0 )
  {
    BugCheckParameter3 = result;
    VslSwapHiberShadowStacks(0LL);
    return BugCheckParameter3;
  }
  return result;
}
