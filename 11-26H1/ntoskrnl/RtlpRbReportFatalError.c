/*
 * XREFs of RtlpRbReportFatalError @ 0x14061CC2C
 * Callers:
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     MiInsertVad @ 0x140318030 (MiInsertVad.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 *     MiInsertListSentinel @ 0x140445440 (MiInsertListSentinel.c)
 *     RtlpTreeDoubleRotateNodes @ 0x140445700 (RtlpTreeDoubleRotateNodes.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140450590 (MiUpdateSystemProtoPtesTree.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlpRbReportFatalError()
{
  __fastfail(0x1Du);
}
