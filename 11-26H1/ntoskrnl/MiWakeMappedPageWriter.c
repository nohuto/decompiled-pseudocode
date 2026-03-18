/*
 * XREFs of MiWakeMappedPageWriter @ 0x1402A7E8C
 * Callers:
 *     MiModifiedWriterPeriodicTick @ 0x1402A7E04 (MiModifiedWriterPeriodicTick.c)
 *     MiWorkingSetManager @ 0x1404BE000 (MiWorkingSetManager.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 */

int __fastcall MiWakeMappedPageWriter(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 23248);
  v2 = *(_QWORD *)(a1 + 23456);
  if ( v1 > v2 )
  {
    if ( v1 - v2 >= 0x320 || (v1 = *(_QWORD *)(a1 + 22464), v1 < 0x120) )
      LODWORD(v1) = KeSetEvent((PRKEVENT)(a1 + 920), 0, 0);
  }
  return v1;
}
