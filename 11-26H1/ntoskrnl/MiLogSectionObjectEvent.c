/*
 * XREFs of MiLogSectionObjectEvent @ 0x14077DED8
 * Callers:
 *     MiCreateSection @ 0x14098B4B4 (MiCreateSection.c)
 *     MiSectionDelete @ 0x140A9ADD0 (MiSectionDelete.c)
 * Callees:
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiLogPerfMemoryEvent @ 0x1404863EC (MiLogPerfMemoryEvent.c)
 */

__int64 __fastcall MiLogSectionObjectEvent(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  int v3; // r8d
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = MiSectionControlArea(a1);
  v5[0] = v2;
  v5[1] = *(_QWORD *)(*(_QWORD *)v1 + 64LL);
  return MiLogPerfMemoryEvent(648 - (v3 != 0), 0x20400001u, (__int64)v5, 16, 5249282);
}
