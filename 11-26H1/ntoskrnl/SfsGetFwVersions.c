/*
 * XREFs of SfsGetFwVersions @ 0x1406DD060
 * Callers:
 *     PrExtApplyPatch @ 0x14052FDA8 (PrExtApplyPatch.c)
 *     SfsInitialize @ 0x1406DD17C (SfsInitialize.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     SfsGetRegisterStatus @ 0x1406DD14C (SfsGetRegisterStatus.c)
 *     SfsInitiateCmd @ 0x1406DD374 (SfsInitiateCmd.c)
 *     SfsIsAspReady @ 0x1406DD3C0 (SfsIsAspReady.c)
 *     SfsMapBufferToAsp @ 0x1406DD3F0 (SfsMapBufferToAsp.c)
 *     PrpLogSfsVersion @ 0x1406DDC3C (PrpLogSfsVersion.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall SfsGetFwVersions(__int64 a1, __int64 a2, __int64 a3)
{
  struct _LIST_ENTRY *Blink; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // [rsp+20h] [rbp-28h] BYREF
  struct _LIST_ENTRY v18; // [rsp+28h] [rbp-20h] BYREF

  if ( !CmpCallbackListLock.WaitBlockFill4[8] )
    return 3221225659LL;
  v17 = 0;
  v18 = *CmpCallbackListLock.Timer.TimerListEntry.Blink;
  while ( (int)SfsIsAspReady(a1, a2, a3) < 0 )
    KeYieldProcessorEx(&v17);
  Blink = CmpCallbackListLock.Timer.TimerListEntry.Blink;
  memset_0(CmpCallbackListLock.Timer.TimerListEntry.Blink, 0, 0x200000uLL);
  LODWORD(Blink->Flink) = 0x2000;
  HIDWORD(Blink->Flink) = 1;
  if ( (int)SfsMapBufferToAsp(v6, v5, v7) < 0 || (int)SfsInitiateCmd(v9, v8, v10) < 0 )
    return 3221225659LL;
  v17 = 0;
  while ( (int)SfsIsAspReady(v12, v11, v13) < 0 )
    KeYieldProcessorEx(&v17);
  if ( (int)SfsGetRegisterStatus(v15, v14, v16) >= 0 )
    return PrpLogSfsVersion(&v18, &CmpCallbackListLock.Timer.TimerListEntry.Blink[256]);
  else
    return 3221225473LL;
}
