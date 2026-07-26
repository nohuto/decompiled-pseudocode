/*
 * XREFs of ??$make_unique_nothrow@UNDIS_BIND_PROTOCOL_LINK@@$$V@wil@@YA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@XZ @ 0x14005F320
 * Callers:
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x140161780 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_dele.c)
 * Callees:
 *     ??0NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1401642B0 (--0NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 */

NDIS_BIND_LINK_BASE **__fastcall wil::make_unique_nothrow<NDIS_BIND_PROTOCOL_LINK,>(NDIS_BIND_LINK_BASE **a1)
{
  NDIS_BIND_LINK_BASE *PoolWithTag; // rbx

  PoolWithTag = (NDIS_BIND_LINK_BASE *)ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x4C745042u);
  if ( PoolWithTag )
  {
    *(_OWORD *)&PoolWithTag->BindState.Miniport = 0LL;
    *(_OWORD *)&PoolWithTag->BindState.m_AdditionalContext = 0LL;
    *(_OWORD *)&PoolWithTag->BindState.m_unbindReasons = 0LL;
    PoolWithTag->BindState.m_bindContext = 0LL;
    PoolWithTag->DriverLinkage = 0LL;
    PoolWithTag[1].BindState.Miniport = 0LL;
    NDIS_BIND_LINK_BASE::NDIS_BIND_LINK_BASE(PoolWithTag);
    PoolWithTag[1].BindState.Miniport = 0LL;
    *a1 = PoolWithTag;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
