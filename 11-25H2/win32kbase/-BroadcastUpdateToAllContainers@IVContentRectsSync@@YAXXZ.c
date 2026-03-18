/*
 * XREFs of ?BroadcastUpdateToAllContainers@IVContentRectsSync@@YAXXZ @ 0x14021C124
 * Callers:
 *     ?SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z @ 0x1401AC6E4 (-SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z.c)
 * Callees:
 *     isRootPartition @ 0x14005E028 (isRootPartition.c)
 *     IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate @ 0x14021C174 (IVContentRectsSync--_anonymous_namespace_--ivSendContentRectsUpdate.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x14021EA58 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

void __fastcall IVContentRectsSync::BroadcastUpdateToAllContainers(IVContentRectsSync *this, __int64 a2)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  if ( isRootPartition((__int64)this, a2) && CIVChannel::ContainerConnected(3u) )
  {
    v2 = 0;
    IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate((struct CONTAINER_ID *)&v2);
  }
}
