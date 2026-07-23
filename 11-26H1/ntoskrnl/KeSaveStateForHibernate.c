/*
 * XREFs of KeSaveStateForHibernate @ 0x14072C9A0
 * Callers:
 *     HalpSaveProcessorState @ 0x140727AC0 (HalpSaveProcessorState.c)
 *     HalpSetupRealModeResume @ 0x140727B50 (HalpSetupRealModeResume.c)
 *     PopSaveHiberContextWrapper @ 0x140735650 (PopSaveHiberContextWrapper.c)
 *     HalpDpOfflineProcessorForReplace @ 0x140BF3ED0 (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     RtlCaptureContext @ 0x140536E40 (RtlCaptureContext.c)
 *     KiSaveProcessorControlState @ 0x14072BDE0 (KiSaveProcessorControlState.c)
 */

__int64 __fastcall KeSaveStateForHibernate(__int64 a1)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  char v4; // [rsp+30h] [rbp+8h] BYREF

  RtlCaptureContext((PCONTEXT)(a1 + 272));
  *(_WORD *)(a1 + 336) = 43;
  *(_WORD *)(a1 + 334) = 83;
  *(_QWORD *)(a1 + 224) = __readmsr(0xC0000100);
  *(_QWORD *)(a1 + 168) = __readmsr(0xC0000101);
  *(_QWORD *)(a1 + 176) = __readmsr(0xC0000102);
  *(_QWORD *)(a1 + 184) = __readmsr(0xC0000081);
  *(_QWORD *)(a1 + 192) = __readmsr(0xC0000082);
  *(_QWORD *)(a1 + 200) = __readmsr(0xC0000083);
  *(_QWORD *)(a1 + 208) = __readmsr(0xC0000084);
  if ( (KiTrapFeatures & 2) != 0 )
  {
    *(_QWORD *)(a1 + 232) = __readmsr(0x1D4u);
    *(_QWORD *)(a1 + 240) = __readmsr(0x1D0u);
    *(_QWORD *)(a1 + 248) = __readmsr(0x1CCu);
    *(_QWORD *)(a1 + 256) = __readmsr(0x1CDu);
    *(_QWORD *)(a1 + 264) = __readmsr(0x1CEu);
  }
  *(_QWORD *)(a1 + 520) = retaddr;
  *(_QWORD *)(a1 + 424) = &v4;
  result = KiSaveProcessorControlState(a1, 0);
  *(_QWORD *)(a1 + 16) &= 0xFFFFFFFFFFFFFFFCuLL;
  *(_QWORD *)(a1 + 24) &= ~0x800000uLL;
  _fxsave((void *)(a1 + 528));
  return result;
}
