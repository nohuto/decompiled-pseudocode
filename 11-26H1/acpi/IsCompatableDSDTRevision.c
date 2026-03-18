/*
 * XREFs of IsCompatableDSDTRevision @ 0x140014C60
 * Callers:
 *     ParseOpcode @ 0x140007B60 (ParseOpcode.c)
 *     ParseIntObj @ 0x140009C30 (ParseIntObj.c)
 *     ParseAcquire @ 0x14000D400 (ParseAcquire.c)
 *     LNot @ 0x140011ED0 (LNot.c)
 *     ExprOp2_64 @ 0x140012500 (ExprOp2_64.c)
 *     LogOp2_32 @ 0x140012BEC (LogOp2_32.c)
 *     Store @ 0x140013D20 (Store.c)
 *     ConvertToBuffer @ 0x1400150F8 (ConvertToBuffer.c)
 *     Concat @ 0x140015240 (Concat.c)
 *     CondRefOf @ 0x140015920 (CondRefOf.c)
 *     Match_64 @ 0x140016110 (Match_64.c)
 *     ExprOp1 @ 0x1400164E0 (ExprOp1.c)
 *     Match @ 0x1400166A0 (Match.c)
 *     OSInterface @ 0x140016870 (OSInterface.c)
 *     ConvertToString @ 0x140016ABC (ConvertToString.c)
 *     ToString @ 0x140016D20 (ToString.c)
 *     Match_32 @ 0x1400175CC (Match_32.c)
 *     ProcessWait @ 0x140053EA0 (ProcessWait.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

_BOOL8 IsCompatableDSDTRevision()
{
  unsigned int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( !ghGetAcpiTableVersion )
    return 0LL;
  ghGetAcpiTableVersion(1413763908LL, &v1);
  return v1 >= 2;
}
