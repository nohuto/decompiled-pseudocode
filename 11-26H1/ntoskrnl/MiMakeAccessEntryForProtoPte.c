/*
 * XREFs of MiMakeAccessEntryForProtoPte @ 0x14048F484
 * Callers:
 *     MiLogPageAccess @ 0x140322960 (MiLogPageAccess.c)
 * Callees:
 *     MiMakePrototypePteDirect @ 0x1402B4570 (MiMakePrototypePteDirect.c)
 */

unsigned __int64 __fastcall MiMakeAccessEntryForProtoPte(unsigned __int64 a1)
{
  unsigned __int64 PrototypePteDirect; // rax
  unsigned __int64 v2; // r10

  PrototypePteDirect = MiMakePrototypePteDirect(a1);
  v2 = PrototypePteDirect;
  if ( qword_140E2D8C0 )
  {
    if ( (PrototypePteDirect & 0x10) != 0 )
      v2 = PrototypePteDirect & 0xFFFFFFFFFFFFFFEFuLL;
    else
      v2 = qword_140E2D8C8 & PrototypePteDirect;
  }
  return (v2 & 0x3FFFFFFFFFF000LL | (v2 >> 1) & 0x400000000000000LL) >> 12 << 10;
}
