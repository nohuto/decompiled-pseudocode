/*
 * XREFs of ndisRegisterScatterGatherDmaForGenericObject @ 0x1401453E8
 * Callers:
 *     NdisMRegisterScatterGatherDma @ 0x1400CB1E0 (NdisMRegisterScatterGatherDma.c)
 * Callees:
 *     ??$MakePoolPtrNP@U_NDIS_SG_DMA_BLOCK@@@@YA?AV?$unique_ptr@U_NDIS_SG_DMA_BLOCK@@U?$KFreePoolNP@U_NDIS_SG_DMA_BLOCK@@@@@wistd@@K@Z @ 0x140003014 (--$MakePoolPtrNP@U_NDIS_SG_DMA_BLOCK@@@@YA-AV-$unique_ptr@U_NDIS_SG_DMA_BLOCK@@U-$KFreePoolNP@U_.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_DMA_ADAPTER@@$$A6AXPEAU1@@Z$1?CloseDmaAdapter@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400C9928 (--1-$unique_storage@U-$resource_policy@PEAU_DMA_ADAPTER@@$$A6AXPEAU1@@Z$1-CloseDmaAdapter@@YAX0@.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisRegisterScatterGatherDmaForGenericObject(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v6; // edx
  unsigned int v7; // ebx
  _DEVICE_OBJECT *v8; // rcx
  int v9; // edx
  struct _DMA_ADAPTER *v10; // rsi
  int v11; // edx
  _DWORD *v12; // rax
  ULONG NumberOfMapRegisters; // [rsp+30h] [rbp-39h] BYREF
  struct _DMA_ADAPTER *DmaAdapter; // [rsp+38h] [rbp-31h] BYREF
  _DWORD *v16; // [rsp+40h] [rbp-29h] BYREF
  struct _DEVICE_DESCRIPTION DeviceDescription; // [rsp+50h] [rbp-19h] BYREF

  memset(&DeviceDescription, 0, sizeof(DeviceDescription));
  v6 = *(_DWORD *)(a2 + 4);
  DeviceDescription.Version = 3;
  *(_WORD *)&DeviceDescription.Master = 257;
  DeviceDescription.InterfaceType = InterfaceTypeUndefined;
  DeviceDescription.MaximumLength = *(_DWORD *)(a2 + 8);
  v7 = 0;
  DeviceDescription.DmaAddressWidth = (v6 & 1) != 0 ? 64 : 32;
  if ( (v6 & 4) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      LOBYTE(v6) = 5;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        1,
        25,
        (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids);
    }
    DeviceDescription.Reserved1 = 1;
    DeviceDescription.InterfaceType = PCIBus;
  }
  v8 = *(_DEVICE_OBJECT **)(a2 + 40);
  NumberOfMapRegisters = 0;
  DmaAdapter = IoGetDmaAdapter(v8, &DeviceDescription, &NumberOfMapRegisters);
  v10 = DmaAdapter;
  if ( DmaAdapter )
  {
    MakePoolPtrNP<_NDIS_SG_DMA_BLOCK>((__int64)&v16);
    v12 = v16;
    if ( v16 )
    {
      *v16 = 11534607;
      *((_QWORD *)v12 + 2) = a1;
      *((_QWORD *)v12 + 3) = *(_QWORD *)(a2 + 40);
      v12[17] = *(_DWORD *)(a2 + 8);
      v12[16] = *(_DWORD *)(a2 + 4);
      *((_QWORD *)v12 + 5) = v10;
      DmaAdapter = 0LL;
      _InterlockedIncrement(v12 + 22);
      *a3 = v12;
      *(_DWORD *)(a2 + 32) = 0;
      goto LABEL_14;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v11,
        (_DWORD)v16 + 1,
        (_DWORD)v16 + 27,
        (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      1,
      26,
      (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
      *(_QWORD *)(a2 + 40));
  }
  v7 = -1073741670;
LABEL_14:
  wil::details::unique_storage<wil::details::resource_policy<_DMA_ADAPTER *,void (_DMA_ADAPTER *),&void CloseDmaAdapter(_DMA_ADAPTER *),wistd::integral_constant<unsigned __int64,0>,_DMA_ADAPTER *,_DMA_ADAPTER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DMA_ADAPTER *,void (_DMA_ADAPTER *),&void CloseDmaAdapter(_DMA_ADAPTER *),wistd::integral_constant<unsigned __int64,0>,_DMA_ADAPTER *,_DMA_ADAPTER *,0,std::nullptr_t>>(&DmaAdapter);
  return v7;
}
