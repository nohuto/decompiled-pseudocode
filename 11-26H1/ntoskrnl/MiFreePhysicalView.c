/*
 * XREFs of MiFreePhysicalView @ 0x140A941CC
 * Callers:
 *     MiRemoveVad @ 0x14044DF80 (MiRemoveVad.c)
 * Callees:
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 */

char __fastcall MiFreePhysicalView(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8

  LOBYTE(v2) = MiReadVadFlags(a2) & 0x1C;
  if ( (_BYTE)v2 == 4 )
  {
    v2 = *(_QWORD *)(v3 + 1040);
    --*(_QWORD *)(v2 + 1144);
  }
  return v2;
}
