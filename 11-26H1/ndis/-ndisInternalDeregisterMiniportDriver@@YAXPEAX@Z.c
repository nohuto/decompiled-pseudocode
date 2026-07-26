/*
 * XREFs of ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x140139848
 * Callers:
 *     NdisLWMDeregisterMiniportDriver @ 0x140094E60 (NdisLWMDeregisterMiniportDriver.c)
 *     NdisMDeregisterMiniportDriver @ 0x140095730 (NdisMDeregisterMiniportDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x140016370 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z @ 0x14006E680 (-ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ??1_NDIS_M_DRIVER_BLOCK@@QEAA@XZ @ 0x14009316C (--1_NDIS_M_DRIVER_BLOCK@@QEAA@XZ.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisInternalDeregisterMiniportDriver(struct _NDIS_M_DRIVER_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // r8
  _NDIS_PROTOCOL_BLOCK *AssociatedProtocol; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      111,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)a1);
  MiniportQueue = a1->MiniportQueue;
  if ( MiniportQueue )
  {
    DbgPrint(
      "NdisMDeregisterMiniportDriver: Deregistering miniport driver %p with active miniports %p\n",
      a1,
      MiniportQueue);
    if ( SLOBYTE(a1->Flags) < 0 )
      ndisBugCheckEx(0x2BuLL, (ULONG_PTR)a1, 0LL, 0LL);
  }
  AssociatedProtocol = a1->AssociatedProtocol;
  if ( AssociatedProtocol )
  {
    AssociatedProtocol->AssociatedMiniDriver = 0LL;
    a1->AssociatedProtocol = 0LL;
  }
  if ( ndisCloseRef(&a1->Ref.SpinLock) )
  {
    ndisDereferenceDriver(a1, 0, 0xFFu);
    if ( (a1->Flags & 0xC0) != 0 )
    {
      ndisWaitForKernelObject(&a1->MiniportsRemovedEvent);
      KeClearEvent(&a1->MiniportsRemovedEvent);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        1,
        112,
        (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
        (char)a1);
    _NDIS_M_DRIVER_BLOCK::~_NDIS_M_DRIVER_BLOCK(a1);
  }
}
