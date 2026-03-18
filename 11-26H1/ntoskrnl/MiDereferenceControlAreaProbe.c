/*
 * XREFs of MiDereferenceControlAreaProbe @ 0x1404881AC
 * Callers:
 *     MiPrivateFixup @ 0x14051D784 (MiPrivateFixup.c)
 *     MiSegmentDelete @ 0x140A816BC (MiSegmentDelete.c)
 * Callees:
 *     MiQueueControlAreaDelete @ 0x14028DAA0 (MiQueueControlAreaDelete.c)
 *     MiDeleteControlArea @ 0x1404881E0 (MiDeleteControlArea.c)
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
