/*
 * XREFs of SfsGetFwVersions @ 0x1406E1300
 * Callers:
 *     PrExtApplyPatch @ 0x1405322A8 (PrExtApplyPatch.c)
 *     SfsInitialize @ 0x1406E141C (SfsInitialize.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     SfsGetRegisterStatus @ 0x1406E13EC (SfsGetRegisterStatus.c)
 *     SfsInitiateCmd @ 0x1406E1614 (SfsInitiateCmd.c)
 *     SfsIsAspReady @ 0x1406E1660 (SfsIsAspReady.c)
 *     SfsMapBufferToAsp @ 0x1406E1690 (SfsMapBufferToAsp.c)
 *     PrpLogSfsVersion @ 0x1406E1EDC (PrpLogSfsVersion.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall SfsGetFwVersions(__int64 a1, __int64 a2, __int64 a3)
{
  _KDPC *Dpc; // rbx
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
  __int128 v18; // [rsp+28h] [rbp-20h] BYREF

  if ( !CmpContextListLock.WaitBlockFill4[0] )
    return 3221225659LL;
  v17 = 0;
  v18 = *(_OWORD *)CmpContextListLock.Timer.Dpc;
  while ( (int)SfsIsAspReady(a1, a2, a3) < 0 )
    KeYieldProcessorEx(&v17);
  Dpc = CmpContextListLock.Timer.Dpc;
  memset_0(CmpContextListLock.Timer.Dpc, 0, 0x200000uLL);
  Dpc->TargetInfoAsUlong = 0x2000;
  *((_DWORD *)&Dpc->0 + 1) = 1;
  if ( (int)SfsMapBufferToAsp(v6, v5, v7) < 0 || (int)SfsInitiateCmd(v9, v8, v10) < 0 )
    return 3221225659LL;
  v17 = 0;
  while ( (int)SfsIsAspReady(v12, v11, v13) < 0 )
    KeYieldProcessorEx(&v17);
  if ( (int)SfsGetRegisterStatus(v15, v14, v16) >= 0 )
    return PrpLogSfsVersion(&v18, &CmpContextListLock.Timer.Dpc[64]);
  else
    return 3221225473LL;
}
