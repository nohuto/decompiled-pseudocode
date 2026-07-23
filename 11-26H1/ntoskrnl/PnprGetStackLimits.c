/*
 * XREFs of PnprGetStackLimits @ 0x1405250F0
 * Callers:
 *     PnprRecopyMirrorPages @ 0x140524E40 (PnprRecopyMirrorPages.c)
 *     PnprQuiesceProcessorDpc @ 0x140BF8260 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1402634E0 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x14072BF60 (KeGetCurrentStackPointer.c)
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
