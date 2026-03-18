/*
 * XREFs of ?ivOnChildPartitionConnected@IVContentRectsSync@@YAXAEBUCONTAINER_ID@@@Z @ 0x14021C15C
 * Callers:
 *     ?ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z @ 0x14021AB60 (-ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z.c)
 * Callees:
 *     IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate @ 0x14021C174 (IVContentRectsSync--_anonymous_namespace_--ivSendContentRectsUpdate.c)
 */

void __fastcall IVContentRectsSync::ivOnChildPartitionConnected(
        IVContentRectsSync *this,
        const struct CONTAINER_ID *a2)
{
  IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate(this);
}
