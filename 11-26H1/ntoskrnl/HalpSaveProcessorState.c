/*
 * XREFs of HalpSaveProcessorState @ 0x140727AC0
 * Callers:
 *     HaliSaveProcessorContextAndSleep @ 0x140727CF0 (HaliSaveProcessorContextAndSleep.c)
 * Callees:
 *     KasanHibernationGetStackLow @ 0x1405DFFA0 (KasanHibernationGetStackLow.c)
 *     KeSaveStateForHibernate @ 0x14072C9A0 (KeSaveStateForHibernate.c)
 */

__int64 __fastcall HalpSaveProcessorState(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  char *StackLow; // r9
  _QWORD *v4; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  if ( a1 )
  {
    KeSaveStateForHibernate();
    StackLow = KasanHibernationGetStackLow(v2, v1);
    v4 = (_QWORD *)(v7 + 272);
    *(_QWORD *)(v7 + 520) = HalpResumePoint;
    v4[19] = &v7;
    v4[15] = retaddr;
    v4[16] = StackLow;
  }
  return 0LL;
}
