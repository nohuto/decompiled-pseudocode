/*
 * XREFs of CmpFreeKeyControlBlock @ 0x140A66720
 * Callers:
 *     CmpCloneToUnbackedKcb @ 0x14085F524 (CmpCloneToUnbackedKcb.c)
 *     CmpCreateKeyControlBlock @ 0x1408CA640 (CmpCreateKeyControlBlock.c)
 * Callees:
 *     ExFreeToLookasideListEx @ 0x14039FE30 (ExFreeToLookasideListEx.c)
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreeKeyControlBlock(PVOID *Entry)
{
  PVOID v2; // rcx
  unsigned __int64 v3; // rcx

  _InterlockedDecrement64((volatile signed __int64 *)&KiSystemServiceTraceCallbackLock.KernelShadowStackInitial);
  if ( Entry[15] != Entry + 15 )
    KeBugCheckEx(0x51u, 0x11uLL, (ULONG_PTR)Entry, 0LL, 0LL);
  if ( ((_DWORD)Entry[1] & 0x10000) != 0 )
    KeBugCheckEx(0x51u, 0x11uLL, (ULONG_PTR)Entry, 1uLL, 0LL);
  v2 = Entry[25];
  if ( (unsigned __int64)v2 > 1 )
    ExFreePoolWithTag(v2, 0x624E4D43u);
  v3 = (unsigned __int64)Entry[37];
  if ( (v3 & 1) != 0 )
    v3 &= ~1uLL;
  if ( v3 )
    CmpFreeTransientPoolWithTag((void *)v3, 0x624E4D43u);
  *((_DWORD *)Entry + 2) |= 0x10000u;
  Entry[4] = 0LL;
  ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)&CmpKcbLookaside, Entry);
  _InterlockedDecrement64((volatile signed __int64 *)&KiSystemServiceTraceCallbackLock.WpsFeedback);
}
