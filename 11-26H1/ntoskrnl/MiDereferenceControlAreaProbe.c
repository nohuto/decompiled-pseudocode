/*
 * XREFs of MiDereferenceControlAreaProbe @ 0x140481CEC
 * Callers:
 *     MiPrivateFixup @ 0x14051FCB0 (MiPrivateFixup.c)
 *     MiSegmentDelete @ 0x140A8752C (MiSegmentDelete.c)
 * Callees:
 *     MiQueueControlAreaDelete @ 0x14028D000 (MiQueueControlAreaDelete.c)
 *     MiDeleteControlArea @ 0x140481D20 (MiDeleteControlArea.c)
 */

int __fastcall MiDereferenceControlAreaProbe(volatile signed __int64 *a1, int a2)
{
  signed __int64 v2; // rax

  v2 = _InterlockedExchangeAdd64(a1 + 14, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v2 == 1 )
  {
    if ( a2 )
      LODWORD(v2) = MiQueueControlAreaDelete((__int64)a1);
    else
      LODWORD(v2) = MiDeleteControlArea((PVOID)a1);
  }
  return v2;
}
