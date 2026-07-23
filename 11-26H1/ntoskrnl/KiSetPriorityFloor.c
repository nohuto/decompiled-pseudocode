/*
 * XREFs of KiSetPriorityFloor @ 0x1403825B0
 * Callers:
 *     ?KiAbSetMinimumThreadPriority@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@PEAU_AB_PRIORITY@1@PEAU_SINGLE_LIST_ENTRY@@22PEAK@Z @ 0x14026DBD4 (-KiAbSetMinimumThreadPriority@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@PEAU_AB_PRIORITY@1@PEAU_SING.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall KiSetPriorityFloor(ULONG_PTR BugCheckParameter1, struct _SINGLE_LIST_ENTRY *a2, int a3, char a4)
{
  ULONG_PTR v4; // rbp
  int v7; // edi
  unsigned __int8 v8; // cl
  char v9; // al
  unsigned int v10; // esi

  v4 = a3;
  if ( a4 )
  {
    v7 = 1;
    v8 = 0;
  }
  else
  {
    v10 = 0;
    while ( 1 )
    {
      v8 = 0;
      v7 = 0;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        break;
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v10);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
  }
  v9 = *(_BYTE *)(BugCheckParameter1 + v4 + 824);
  if ( v9 == -1 )
    KeBugCheckEx(0x157u, BugCheckParameter1, v4, 1uLL, 0LL);
  *(_BYTE *)(BugCheckParameter1 + v4 + 824) = v9 + 1;
  *(_DWORD *)(BugCheckParameter1 + 856) |= 1 << v4;
  if ( *(char *)(BugCheckParameter1 + 195) < (int)v4 )
  {
    KiSetPriorityThread(BugCheckParameter1, a2, (unsigned __int64 *)v4);
    v8 = 1;
  }
  if ( !v7 )
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  return v8;
}
