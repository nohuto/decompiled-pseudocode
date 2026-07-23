/*
 * XREFs of ?KiAbLockEntriesFindLock@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAXPEAU_KLOCK_ENTRIES@@@Z @ 0x14044F700
 * Callers:
 *     ?KiAbPreWakeupThread@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXJK@Z @ 0x14044F6A0 (-KiAbPreWakeupThread@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXJK@Z.c)
 * Callees:
 *     <none>
 */

struct _KLOCK_ENTRY *__fastcall LegacyAutoBoost::KiAbLockEntriesFindLock(
        unsigned __int64 this,
        _BYTE *a2,
        struct _KLOCK_ENTRIES *a3)
{
  __int64 v3; // r11
  unsigned int v5; // edx
  __int64 v7; // rax
  __int64 v8; // r8

  v3 = 0LL;
  if ( (unsigned int)(1LL << a2[12]) - 1 != (*((unsigned __int16 *)a2 + 4) | *((unsigned __int16 *)a2 + 5)) )
  {
    v5 = ((1LL << a2[12]) - 1) ^ (*((unsigned __int16 *)a2 + 4) | *((unsigned __int16 *)a2 + 5));
    while ( _BitScanReverse((unsigned int *)&v7, v5) )
    {
      v8 = 88 * v7;
      v5 &= ~(1 << v7);
      if ( a2[88 * v7 + 25] && (*(_QWORD *)&a2[v8 + 16] & 0x7FFFFFFFFFFFFFFCLL) == (this & 0x7FFFFFFFFFFFFFFCLL) )
        return (struct _KLOCK_ENTRY *)&a2[v8 + 16];
    }
  }
  return (struct _KLOCK_ENTRY *)v3;
}
