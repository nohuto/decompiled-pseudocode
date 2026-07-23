/*
 * XREFs of MiCaptureSecureImageBaseAddress @ 0x140B3761C
 * Callers:
 *     MiValidateSectionNewSecurity @ 0x140AC9C64 (MiValidateSectionNewSecurity.c)
 * Callees:
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x1404A08A4 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1404A7D54 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     SeSetImageBaseAddress @ 0x140B37698 (SeSetImageBaseAddress.c)
 */

__int64 __fastcall MiCaptureSecureImageBaseAddress(_QWORD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v8; // rbp

  v5 = a1[12] & 0xFFFFFFFFFFFFFFF8uLL;
  v6 = *(_QWORD *)(v5 + 40);
  CurrentThread = KeGetCurrentThread();
  v8 = *(_QWORD *)(v5 + 32);
  MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v8, a3, a4);
  LODWORD(v6) = SeSetImageBaseAddress(v6 & 0xFFFFFFFFFFFFFFF8uLL, *(_QWORD *)(*a1 + 32LL));
  MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v8);
  return (unsigned int)v6;
}
