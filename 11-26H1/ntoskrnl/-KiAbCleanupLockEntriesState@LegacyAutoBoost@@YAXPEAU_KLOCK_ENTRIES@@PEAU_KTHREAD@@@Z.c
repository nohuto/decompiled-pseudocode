/*
 * XREFs of ?KiAbCleanupLockEntriesState@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRIES@@PEAU_KTHREAD@@@Z @ 0x140203CA8
 * Callers:
 *     KeCleanupThreadState @ 0x140201FC8 (KeCleanupThreadState.c)
 * Callees:
 *     ?KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_KLOCK_ENTRY_BOOST_BITMAP@@@Z @ 0x140271700 (-KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall LegacyAutoBoost::KiAbCleanupLockEntriesState(
        struct _KLOCK_ENTRIES **this,
        struct _KLOCK_ENTRY *a2,
        struct _KTHREAD *a3)
{
  ULONG_PTR BugCheckParameter4; // rbx
  unsigned int v6; // esi
  ULONG_PTR v7; // rdi
  struct _KLOCK_ENTRIES **v8; // r10
  struct _KLOCK_ENTRIES *v9; // rax
  union _KLOCK_ENTRY_BOOST_BITMAP *v10; // [rsp+28h] [rbp-10h]

  BugCheckParameter4 = 0LL;
  v6 = 0;
  v7 = 1LL;
  while ( v6 < *((unsigned __int8 *)this + 12) )
  {
    v8 = &this[11 * v6 + 2];
    v9 = *v8;
    if ( *((_BYTE *)v8 + 8) < 0x80u )
    {
      if ( v9 )
      {
        BugCheckParameter4 = (unsigned __int64)*v8 & 0x7FFFFFFFFFFFFFFCLL | 0x8000000000000000uLL;
LABEL_16:
        KeBugCheckEx(0x153u, (ULONG_PTR)a2, (ULONG_PTR)&this[11 * v6 + 2], v7, BugCheckParameter4);
      }
      if ( *((_DWORD *)v8 + 2) >= 0x100u )
      {
        v7 = 2LL;
        goto LABEL_16;
      }
      if ( a2 != (struct _KLOCK_ENTRY *)*(&this[11 * v6] - 11 * ((_BYTE)v8[1] & 0x3F)) )
      {
        v7 = 3LL;
        goto LABEL_16;
      }
      if ( *((_DWORD *)v8 + 20) )
      {
        v7 = 4LL;
        goto LABEL_16;
      }
    }
    else if ( v9 )
    {
      _disable();
      LegacyAutoBoost::KiAbEntryFreeAndEnableInterrupts(
        (LegacyAutoBoost *)&this[11 * v6 + 2],
        a2,
        0LL,
        (void *)1,
        0,
        v10);
    }
    ++v6;
  }
}
