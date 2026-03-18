/*
 * XREFs of EtwpPsProvProcessEnumCallback @ 0x140954D20
 * Callers:
 *     EtwpPsProvCaptureState @ 0x14082FE4C (EtwpPsProvCaptureState.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     ObFastDereferenceObject @ 0x140265740 (ObFastDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     EtwpPsProvTraceProcess @ 0x140952CBC (EtwpPsProvTraceProcess.c)
 *     PsSetProcessTelemetryAppState @ 0x140953E54 (PsSetProcessTelemetryAppState.c)
 *     EtwpQueryTokenPackageInfo @ 0x14096DBF8 (EtwpQueryTokenPackageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x14096DF08 (EtwpQueryProcessOtherInfo.c)
 *     EtwpIsProcessZombie @ 0x14096EF94 (EtwpIsProcessZombie.c)
 */

__int64 __fastcall EtwpPsProvProcessEnumCallback(_KPROCESS *BugCheckParameter1, _BYTE *a2)
{
  char v4; // si
  struct _KPROCESS *v5; // rcx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  bool v9; // zf
  ULONG_PTR v10; // r14
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v13[3]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v14[168]; // [rsp+70h] [rbp-90h] BYREF

  v12 = 0LL;
  v4 = 0;
  memset(v13, 0, sizeof(v13));
  memset_0(v14, 0, sizeof(v14));
  if ( !(unsigned int)EtwpIsProcessZombie(BugCheckParameter1) )
  {
    if ( a2[9] )
    {
      if ( (*a2 & 1) != 0
        && BugCheckParameter1 != PsIdleProcess
        && (BugCheckParameter1[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) == 0 )
      {
        PsSetProcessTelemetryAppState(v5, 5);
      }
    }
    else
    {
      v9 = BugCheckParameter1 == PsIdleProcess;
      a2[8] = 0;
      if ( !v9
        && KeGetCurrentThread()->ApcState.Process != BugCheckParameter1
        && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&BugCheckParameter1[1].ProfileListHead.Blink) )
      {
        KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v13);
        v4 = 1;
        a2[8] = 1;
      }
      if ( (*a2 & 0x10) != 0 )
      {
        v11 = 0;
        v10 = PsReferencePrimaryTokenWithTag((__int64)BugCheckParameter1, 0x746C6644u, v6, v7);
        EtwpQueryTokenPackageInfo(v10, v14, &v11);
        if ( a2[8] )
          EtwpQueryProcessOtherInfo(BugCheckParameter1, &v12);
        ObFastDereferenceObject((signed __int64 *)&BugCheckParameter1[1].ActiveProcessors, v10, 0x746C6644u);
        EtwpPsProvTraceProcess((__int64)BugCheckParameter1, v11, v14, (int *)&v12, 771);
      }
      if ( v4 )
      {
        KiUnstackDetachProcess((__int64)v13, 0);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&BugCheckParameter1[1].ProfileListHead.Blink);
      }
    }
  }
  return 0LL;
}
