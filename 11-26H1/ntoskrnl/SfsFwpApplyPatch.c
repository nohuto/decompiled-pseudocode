/*
 * XREFs of SfsFwpApplyPatch @ 0x1406E1078
 * Callers:
 *     PrExtApplyPatch @ 0x1405322A8 (PrExtApplyPatch.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     SfsGetRegisterStatus @ 0x1406E13EC (SfsGetRegisterStatus.c)
 *     SfsInitiateCmd @ 0x1406E1614 (SfsInitiateCmd.c)
 *     SfsIsAspReady @ 0x1406E1660 (SfsIsAspReady.c)
 *     SfsMapBufferToAsp @ 0x1406E1690 (SfsMapBufferToAsp.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall SfsFwpApplyPatch(__int64 a1, unsigned __int64 a2)
{
  _KDPC *Dpc; // rbx
  unsigned __int64 v5; // rax
  int v6; // ebx
  int v8; // [rsp+40h] [rbp+18h] BYREF

  if ( !CmpContextListLock.WaitBlockFill4[0] )
    return (unsigned int)-1073741637;
  v8 = 0;
  while ( (int)SfsIsAspReady() < 0 )
    KeYieldProcessorEx(&v8);
  Dpc = CmpContextListLock.Timer.Dpc;
  memset_0(CmpContextListLock.Timer.Dpc, 0, 0x200000uLL);
  Dpc->TargetInfoAsUlong = 0x200000;
  *((_DWORD *)&Dpc->0 + 1) = 2;
  if ( Dpc == (_KDPC *)-4096LL )
    return (unsigned int)-1073741637;
  if ( a2 < 0x10 )
    return (unsigned int)-1073741637;
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 > 0x1FF000 )
    return (unsigned int)-1073741637;
  memmove(&Dpc[64], (const void *)(a1 + 4 * (*(unsigned int *)(a1 + 20) + 6LL)), (unsigned int)v5);
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
      CmpContextListLock.Timer.DueTime.LowPart = HIDWORD(CmpContextListLock.Timer.Header.WaitListHead.Flink);
      HIDWORD(CmpContextListLock.Timer.Header.WaitListHead.Flink) = 0;
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v6;
}
