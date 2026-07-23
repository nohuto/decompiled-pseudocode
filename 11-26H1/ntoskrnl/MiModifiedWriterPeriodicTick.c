/*
 * XREFs of MiModifiedWriterPeriodicTick @ 0x1402A7214
 * Callers:
 *     MiPartitionPeriodicTick @ 0x1402A6458 (MiPartitionPeriodicTick.c)
 * Callees:
 *     MiWakeMappedPageWriter @ 0x1402A729C (MiWakeMappedPageWriter.c)
 *     MiScanPagefiles @ 0x1402A72EC (MiScanPagefiles.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

__int64 __fastcall MiModifiedWriterPeriodicTick(_DWORD *a1)
{
  char v3; // al
  int v4; // eax
  __int64 v5; // rdx

  if ( ++a1[282] == a1[283] )
  {
    v3 = a1[281] + 1;
    a1[282] = 0;
    v4 = v3 & 0xF;
    a1[281] = v4;
    v5 = ((_BYTE)v4 - 8) & 0xF;
    if ( *(_QWORD *)&a1[22 * v5 + 1508] )
      KeSetEvent((PRKEVENT)&a1[4 * v5 + 1924 + 2 * v5], 0, 0);
  }
  MiWakeMappedPageWriter(a1);
  return MiScanPagefiles(a1);
}
