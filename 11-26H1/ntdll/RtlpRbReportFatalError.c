/*
 * XREFs of RtlpRbReportFatalError @ 0x1801417C8
 * Callers:
 *     RtlRbRemoveNode @ 0x18006B8B0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x18006C700 (RtlRbInsertNodeEx.c)
 *     RtlAvlInsertNodeEx @ 0x180081B40 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x1800DB240 (RtlAvlRemoveNode.c)
 *     RtlpTreeDoubleRotateNodes @ 0x1800DC8F8 (RtlpTreeDoubleRotateNodes.c)
 * Callees:
 *     <none>
 */

void __noreturn RtlpRbReportFatalError()
{
  __fastfail(0x1Du);
}
