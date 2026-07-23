/*
 * XREFs of MiDereferenceDataSubsections @ 0x14070EE8C
 * Callers:
 *     MiInsertInSystemSpace @ 0x1404E7024 (MiInsertInSystemSpace.c)
 * Callees:
 *     MiLocateSubsectionNode @ 0x1402C68F0 (MiLocateSubsectionNode.c)
 *     MiOffsetToProtos @ 0x1403422D4 (MiOffsetToProtos.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140458404 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiDecrementLargeSubsections @ 0x1404FF5B8 (MiDecrementLargeSubsections.c)
 */

void __fastcall MiDereferenceDataSubsections(__int64 a1, unsigned __int64 *a2, __int64 a3, int a4)
{
  __int64 *v8; // rsi
  unsigned __int64 v9; // rbp
  __int64 *SubsectionNode; // rax
  unsigned __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  v8 = (__int64 *)MiOffsetToProtos(a1, *a2, &v11);
  v9 = a3 + v11;
  if ( a4 )
  {
    SubsectionNode = (__int64 *)MiLocateSubsectionNode(a1, (a3 << 12) + *a2 - 1, 0);
    MiDecrementLargeSubsections(v8, SubsectionNode);
  }
  MiRemoveViewsFromSectionWithPfn(v8, v9, 70);
}
