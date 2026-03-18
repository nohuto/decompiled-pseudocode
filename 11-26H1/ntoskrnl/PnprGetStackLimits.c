/*
 * XREFs of PnprGetStackLimits @ 0x140522A84
 * Callers:
 *     PnprRecopyMirrorPages @ 0x1405227D4 (PnprRecopyMirrorPages.c)
 *     PnprQuiesceProcessorDpc @ 0x140BF2260 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x140263F70 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x140727390 (KeGetCurrentStackPointer.c)
 */

char __fastcall PnprGetStackLimits(_QWORD *a1, unsigned __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 CurrentStackPointer; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF
  char *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  *a1 = KeGetCurrentStackPointer(a1, a2);
  CurrentStackPointer = KeGetCurrentStackPointer(v4, v3);
  return KeQueryCurrentStackInformationEx(CurrentStackPointer, &v7, &v8, a2);
}
