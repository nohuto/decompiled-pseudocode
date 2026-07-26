/*
 * XREFs of ?ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAIPEAU_NDIS_QUERY_DEVICE_RESET@@@Z @ 0x1400974A0
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1401832D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140008FD0 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140015D10 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140019D10 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x14001AA20 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisQueryDeviceReset(
        struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        struct _NDIS_QUERY_DEVICE_RESET *a5)
{
  bool v5; // zf
  unsigned int v7; // ebx
  KIRQL v8; // bl
  struct _NDIS_IF_BLOCK *InterfaceByNetLuid; // rax
  struct _NDIS_IF_BLOCK *v10; // rsi
  struct _NDIS_MINIPORT_BLOCK *v11; // rax
  struct _NDIS_MINIPORT_BLOCK *v12; // rdi
  struct _NDIS_MINIPORT_BLOCK *v13; // rdx
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax

  v5 = *(_BYTE *)a1 == 0;
  *a4 = 0;
  if ( v5 )
  {
    return (unsigned int)-1073741790;
  }
  else if ( a2 < 0x14 || a3 < 0x14 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
    InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(*(union _NET_LUID_LH *)((char *)a5 + 8));
    v10 = InterfaceByNetLuid;
    if ( InterfaceByNetLuid && (v11 = ndisIfReferenceMiniport(InterfaceByNetLuid, 0x19u), (v12 = v11) != 0LL) )
    {
      if ( (unsigned __int8)ndisReferenceMiniport(v11, 0x6Cu) )
      {
        ndisIfDereferenceMiniport(v10, v13, 0x19u);
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v8);
        if ( (v12->Flags & 0x80u) == 0 || (v12->Flags & 0x100) != 0 )
        {
          v7 = -1073741637;
        }
        else
        {
          CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(v12);
          v7 = CxBlockFromMiniport->Chars.EvtCxMiniportQueryDeviceResetSupport(
                 v12->MiniportAdapterContext,
                 (unsigned int *)a5 + 4);
          *a4 = 20;
        }
        ndisDereferenceMiniport(v12, 0x6Cu);
      }
      else
      {
        ndisIfDereferenceMiniport(v10, v13, 0x19u);
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v8);
        return (unsigned int)-1073676282;
      }
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v8);
      return (unsigned int)-1071448058;
    }
  }
  return v7;
}
