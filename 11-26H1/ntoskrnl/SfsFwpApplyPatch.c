/*
 * XREFs of SfsFwpApplyPatch @ 0x1406DCDD8
 * Callers:
 *     PrExtApplyPatch @ 0x14052FDA8 (PrExtApplyPatch.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     SfsGetRegisterStatus @ 0x1406DD14C (SfsGetRegisterStatus.c)
 *     SfsInitiateCmd @ 0x1406DD374 (SfsInitiateCmd.c)
 *     SfsIsAspReady @ 0x1406DD3C0 (SfsIsAspReady.c)
 *     SfsMapBufferToAsp @ 0x1406DD3F0 (SfsMapBufferToAsp.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall SfsFwpApplyPatch(__int64 a1, unsigned __int64 a2)
{
  struct _LIST_ENTRY *Blink; // rbx
  unsigned __int64 v5; // rax
  int v6; // ebx
  int v8; // [rsp+40h] [rbp+18h] BYREF

  if ( !CmpCallbackListLock.WaitBlockFill4[8] )
    return (unsigned int)-1073741637;
  v8 = 0;
  while ( (int)SfsIsAspReady() < 0 )
    KeYieldProcessorEx(&v8);
  Blink = CmpCallbackListLock.Timer.TimerListEntry.Blink;
  memset_0(CmpCallbackListLock.Timer.TimerListEntry.Blink, 0, 0x200000uLL);
  LODWORD(Blink->Flink) = 0x200000;
  HIDWORD(Blink->Flink) = 2;
  if ( Blink == (struct _LIST_ENTRY *)-4096LL )
    return (unsigned int)-1073741637;
  if ( a2 < 0x10 )
    return (unsigned int)-1073741637;
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 > 0x1FF000 )
    return (unsigned int)-1073741637;
  memmove(&Blink[256], (const void *)(a1 + 4 * (*(unsigned int *)(a1 + 20) + 6LL)), (unsigned int)v5);
  if ( (int)SfsMapBufferToAsp() < 0 )
    return (unsigned int)-1073741637;
  v6 = SfsInitiateCmd();
  if ( v6 < 0 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v8 = 0;
    while ( (int)SfsIsAspReady() < 0 )
      KeYieldProcessorEx(&v8);
    if ( (int)SfsGetRegisterStatus() >= 0 )
    {
      LODWORD(CmpCallbackListLock.Timer.Dpc) = HIDWORD(CmpCallbackListLock.Timer.Header.WaitListHead.Blink);
      HIDWORD(CmpCallbackListLock.Timer.Header.WaitListHead.Blink) = 0;
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v6;
}
