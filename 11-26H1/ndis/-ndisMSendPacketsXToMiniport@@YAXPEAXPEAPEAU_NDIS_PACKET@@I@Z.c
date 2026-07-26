/*
 * XREFs of ?ndisMSendPacketsXToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14008B560
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x14008B440 (-ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x14008BF10 (-ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400C9B18 (-ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCheckPacketAndPad@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400DED60 (-ndisMCheckPacketAndPad@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMSendPacketsXToMiniport(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  unsigned __int8 v3; // r12
  _NDIS_PACKET **v4; // r13
  __int64 v6; // r15
  unsigned int v7; // esi
  struct _NDIS_PACKET **v8; // r14
  struct _NDIS_PACKET *v9; // rbx
  unsigned int v10; // ebp
  bool v11; // zf
  unsigned int v12; // eax

  if ( a3 )
  {
    v3 = 0;
    v4 = a2;
    v6 = a3;
    v7 = 0;
    v8 = a2;
    do
    {
      v9 = *v8;
      v10 = 0;
      *(unsigned __int64 *)((char *)(*v8)->Reserved + (*v8)->Private.NdisPacketOobOffset) = 0LL;
      if ( (a1->SendFlags & 8) != 0 )
      {
        v10 = ndisMCheckPacketAndPad(a1, v9);
        if ( v10 )
          goto LABEL_17;
      }
      if ( (a1->Flags & 0x4000) != 0 || (v9->Private.Flags & 0x80u) == 0 && (a1->Flags & 0x8800000) != 0 )
        v3 = ndisMLoopbackPacketX(a1, v9);
      if ( (v9->Private.NdisPacketFlags & 4) != 0 || v3 )
      {
LABEL_17:
        ndisMSendCompleteX(a1, v9, v10);
        if ( v7 )
        {
          a1->WSendPacketsHandler(a1->MiniportAdapterContext, v4, v7);
          v7 = 0;
          v4 = v8 + 1;
        }
      }
      else if ( (a1->Flags & 0x40) != 0 )
      {
        ndisMAllocSGList(a1, v9);
      }
      else
      {
        v11 = (a1->SendFlags & 1) == 0;
        v9->Private.NdisPacketFlags |= 0x10u;
        if ( v11 )
        {
          v12 = a1->SendHandler(a1->MiniportAdapterContext, v9, v9->Private.Flags);
          if ( v12 != 259 )
            ndisMSendCompleteX(a1, v9, v12);
        }
        else
        {
          ++v7;
        }
      }
      ++v8;
      --v6;
    }
    while ( v6 );
    if ( v7 )
      a1->WSendPacketsHandler(a1->MiniportAdapterContext, v4, v7);
  }
}
