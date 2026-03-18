/*
 * XREFs of RtlpRbReportFatalError @ 0x140619BDC
 * Callers:
 *     RtlAvlRemoveNode @ 0x14030C5E0 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x14030CA60 (RtlAvlInsertNodeEx.c)
 *     MiInsertVad @ 0x140316000 (MiInsertVad.c)
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 *     MiInsertListSentinel @ 0x14044D320 (MiInsertListSentinel.c)
 *     RtlpTreeDoubleRotateNodes @ 0x14044D5D0 (RtlpTreeDoubleRotateNodes.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140458D20 (MiUpdateSystemProtoPtesTree.c)
 * Callees:
 *     <none>
 */

void __noreturn RtlpRbReportFatalError()
{
  __fastfail(0x1Du);
}
