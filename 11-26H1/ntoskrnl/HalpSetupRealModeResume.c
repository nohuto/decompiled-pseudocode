/*
 * XREFs of HalpSetupRealModeResume @ 0x140727B50
 * Callers:
 *     HaliAcpiSleep @ 0x1405A4F20 (HaliAcpiSleep.c)
 * Callees:
 *     HalpInterruptSetProcessorStartContext @ 0x14057F260 (HalpInterruptSetProcessorStartContext.c)
 *     KasanHibernationGetStackLow @ 0x1405DFFA0 (KasanHibernationGetStackLow.c)
 *     KeSaveStateForHibernate @ 0x14072C9A0 (KeSaveStateForHibernate.c)
 */

__int64 __fastcall HalpSetupRealModeResume(_QWORD *a1, int a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  char *StackLow; // r9
  _QWORD *v5; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  LODWORD(HalpDeviceBlockUnblockPushLock.IoSelfBoostsEntry.Next->Next) = a2;
  HalpInterruptSetProcessorStartContext(0LL, 0LL, 0);
  KeSaveStateForHibernate(v8 + 20);
  StackLow = KasanHibernationGetStackLow(v3, v2);
  v5 = v8;
  v8[85] = HalpResumePoint;
  v5[73] = &v8;
  v5[69] = retaddr;
  v5[70] = StackLow;
  return 0LL;
}
