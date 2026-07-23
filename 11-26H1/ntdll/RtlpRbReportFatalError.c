/*
 * XREFs of RtlpRbReportFatalError @ 0x1801416C8
 * Callers:
 *     RtlAvlInsertNodeEx @ 0x180078EE0 (RtlAvlInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x18008BD00 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x18008CB50 (RtlRbInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x1800D8200 (RtlAvlRemoveNode.c)
 *     RtlpTreeDoubleRotateNodes @ 0x1800D9868 (RtlpTreeDoubleRotateNodes.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlpRbReportFatalError()
{
  __fastfail(0x1Du);
}
