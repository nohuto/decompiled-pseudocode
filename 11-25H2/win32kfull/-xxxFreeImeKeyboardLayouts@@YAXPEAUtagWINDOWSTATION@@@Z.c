/*
 * XREFs of ?xxxFreeImeKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x14019E848
 * Callers:
 *     EditionFreeIMEKeyboardLayouts @ 0x14019E830 (EditionFreeIMEKeyboardLayouts.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     ?xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z @ 0x14019E8C8 (-xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z.c)
 */

void __fastcall xxxFreeImeKeyboardLayouts(struct tagWINDOWSTATION *a1)
{
  unsigned int ThreadsWithPKL; // eax
  __int64 v2; // rdx
  __int128 v3; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+30h] [rbp-28h]
  __int64 v5; // [rsp+48h] [rbp-10h]
  struct tagTHREADINFO **v6; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( (*((_DWORD *)a1 + 16) & 4) == 0 )
  {
    v3 = 0LL;
    v5 = 0LL;
    v4 = -1LL;
    ThreadsWithPKL = GetThreadsWithPKL(&v6, &v3, 0LL);
    if ( ThreadsWithPKL )
      xxxImmUnloadThreadsLayout(v6, ThreadsWithPKL, 0LL, 2u);
    if ( v4 != -1 )
      PopAndFreeW32ThreadLock((__int64)&v3, v2);
  }
}
