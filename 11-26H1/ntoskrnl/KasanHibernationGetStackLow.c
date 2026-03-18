/*
 * XREFs of KasanHibernationGetStackLow @ 0x1405DD630
 * Callers:
 *     HalpSaveProcessorState @ 0x140722EF0 (HalpSaveProcessorState.c)
 *     HalpSetupRealModeResume @ 0x140722F80 (HalpSetupRealModeResume.c)
 *     PopSaveHiberContextWrapper @ 0x140730A80 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x140263F70 (KeQueryCurrentStackInformationEx.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     KeGetCurrentStackPointer @ 0x140727390 (KeGetCurrentStackPointer.c)
 */

char *__fastcall KasanHibernationGetStackLow(__int64 a1, __int64 a2)
{
  unsigned __int64 CurrentStackPointer; // rax
  int v4; // [rsp+40h] [rbp+8h] BYREF
  char *v5; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  if ( !byte_140FC7BE8 )
    return 0LL;
  CurrentStackPointer = KeGetCurrentStackPointer(a1, a2);
  if ( !KeQueryCurrentStackInformationEx(CurrentStackPointer, &v4, &v5, &v6) )
    KeBugCheckEx(0x1F1u, 6uLL, 0xAuLL, 0LL, 0LL);
  if ( !v4 || v4 == 5 || v4 == 7 || (unsigned int)(v4 - 8) < 2 )
    KeBugCheckEx(0x1F1u, 6uLL, 0xAuLL, 1uLL, v4);
  return v5;
}
