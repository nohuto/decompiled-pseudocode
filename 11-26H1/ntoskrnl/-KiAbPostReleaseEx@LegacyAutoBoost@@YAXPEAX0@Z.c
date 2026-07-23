/*
 * XREFs of ?KiAbPostReleaseEx@LegacyAutoBoost@@YAXPEAX0@Z @ 0x140270714
 * Callers:
 *     ExpReleaseFastResourceExclusive @ 0x14026FD50 (ExpReleaseFastResourceExclusive.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140270060 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ExReleaseFastResource @ 0x14027A880 (ExReleaseFastResource.c)
 * Callees:
 *     ?KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_KLOCK_ENTRY_BOOST_BITMAP@@@Z @ 0x140271700 (-KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall LegacyAutoBoost::KiAbPostReleaseEx(struct _KTHREAD *BugCheckParameter2, unsigned __int64 a2, void *a3)
{
  LegacyAutoBoost *v3; // r10
  struct _KLOCK_ENTRY *CurrentThread; // rcx
  __int64 v6; // rax
  union _KLOCK_ENTRY_BOOST_BITMAP *v7; // [rsp+28h] [rbp-10h]

  v3 = (LegacyAutoBoost *)a2;
  if ( (a2 & 1) != 0 )
  {
    CurrentThread = (struct _KLOCK_ENTRY *)KeGetCurrentThread();
    v3 = (LegacyAutoBoost *)(88LL * (unsigned __int8)(a2 >> 1) + CurrentThread[12].BoostBitmap.AllFields + 16);
    v6 = *(_QWORD *)v3 & 0x7FFFFFFFFFFFFFFCLL;
    if ( v6 && *((_BYTE *)v3 + 8) < 0x80u )
      v6 |= 0x8000000000000000uLL;
    if ( (struct _KTHREAD *)v6 != BugCheckParameter2 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v3, 0LL);
  }
  else
  {
    CurrentThread = *(struct _KLOCK_ENTRY **)(a2 - 88LL * (*(_BYTE *)(a2 + 8) & 0x3F) - 16);
  }
  _disable();
  *((_BYTE *)v3 + 10) = 0;
  LegacyAutoBoost::KiAbEntryFreeAndEnableInterrupts(v3, CurrentThread, BugCheckParameter2, (void *)1, 0, v7);
}
