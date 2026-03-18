/*
 * XREFs of PostEvent @ 0x140216918
 * Callers:
 *     ?SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@PEAVForegroundChangeTracker@1@@Z @ 0x1401A9F04 (-SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z @ 0x1401AA270 (-ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z.c)
 *     NtMITPostWindowEventMessage @ 0x1401BB1F0 (NtMITPostWindowEventMessage.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140039670 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140039698 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     EditionPostInputEvent @ 0x1401261D8 (EditionPostInputEvent.c)
 */

char __fastcall PostEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  char v9; // r8
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v11);
  EditionPostInputEvent(30LL, a1, a2, a3, a4, a5);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v11);
  return v9;
}
