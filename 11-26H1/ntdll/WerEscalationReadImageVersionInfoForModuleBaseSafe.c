/*
 * XREFs of WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800D376C
 * Callers:
 *     WerEscalationLazyInit @ 0x1800D3120 (WerEscalationLazyInit.c)
 *     LdrpRecordUnloadEvent @ 0x1800D3560 (LdrpRecordUnloadEvent.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x1800D37E0 (WerEscalationReadImageVersionInfoForModuleBase.c)
 */

NTSTATUS __fastcall WerEscalationReadImageVersionInfoForModuleBaseSafe(PVOID BaseOfImage, int a2)
{
  NTSTATUS result; // eax
  PIMAGE_NT_HEADERS v4; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0LL;
  if ( a2 || (result = RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &v4), result >= 0) )
  {
    WerEscalationReadImageVersionInfoForModuleBase(BaseOfImage);
    return 0;
  }
  return result;
}
