/*
 * XREFs of NdisAllocateSharedMemory @ 0x1400621F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ??0NdisAllocateSharedMemoryTelemetry@@QEAA@_NPEBU_NDIS_SHARED_MEMORY_PARAMETERS@@H@Z @ 0x140062430 (--0NdisAllocateSharedMemoryTelemetry@@QEAA@_NPEBU_NDIS_SHARED_MEMORY_PARAMETERS@@H@Z.c)
 *     ndisAllocateSharedMemoryInternal @ 0x140062560 (ndisAllocateSharedMemoryInternal.c)
 *     WPP_RECORDER_SF_dq @ 0x1400687E0 (WPP_RECORDER_SF_dq_ea_1400687E0.c)
 *     ??1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ @ 0x14008F1E0 (--1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ.c)
 *     ndisGetSharedMemoryAllocationDetails @ 0x140090EE0 (ndisGetSharedMemoryAllocationDetails.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ??1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ @ 0x1401374E0 (--1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ.c)
 *     ??0NdisDmaAllocationHistogramStopwatch@@QEAA@XZ @ 0x140169A30 (--0NdisDmaAllocationHistogramStopwatch@@QEAA@XZ.c)
 *     ?SetMacAddress@NdisDmaAllocationHistogramStopwatch@@QEAAXQEBE@Z @ 0x14016ABC0 (-SetMacAddress@NdisDmaAllocationHistogramStopwatch@@QEAAXQEBE@Z.c)
 */

NDIS_STATUS __stdcall NdisAllocateSharedMemory(
        NDIS_HANDLE NdisHandle,
        PNDIS_SHARED_MEMORY_PARAMETERS SharedMemoryParameters,
        PNDIS_HANDLE pAllocationHandle)
{
  int SharedMemoryAllocationDetails; // eax
  bool v7; // dl
  NDIS_STATUS v8; // esi
  __int64 v9; // rdx
  unsigned int PreferredNode; // eax
  NDIS_STATUS v11; // ebx
  char v13[8]; // [rsp+28h] [rbp-190h]
  int v14; // [rsp+40h] [rbp-178h] BYREF
  __int128 v15; // [rsp+48h] [rbp-170h]
  __int64 v16; // [rsp+58h] [rbp-160h]
  _BYTE v17[32]; // [rsp+60h] [rbp-158h] BYREF
  _BYTE v18[16]; // [rsp+80h] [rbp-138h] BYREF
  __int128 v19; // [rsp+90h] [rbp-128h]
  unsigned int v20; // [rsp+A4h] [rbp-114h]
  char v21[4]; // [rsp+B0h] [rbp-108h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0x37u,
      (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
      (char)NdisHandle,
      SharedMemoryParameters->Length);
  *pAllocationHandle = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)&ndisGlobalStatistics);
  NdisDmaAllocationHistogramStopwatch::NdisDmaAllocationHistogramStopwatch((NdisDmaAllocationHistogramStopwatch *)v17);
  v16 = 0LL;
  v15 = 0LL;
  SharedMemoryAllocationDetails = ndisGetSharedMemoryAllocationDetails(NdisHandle, SharedMemoryParameters, &v14);
  NdisAllocateSharedMemoryTelemetry::NdisAllocateSharedMemoryTelemetry(
    (NdisAllocateSharedMemoryTelemetry *)v18,
    v7,
    SharedMemoryParameters,
    SharedMemoryAllocationDetails);
  v8 = *(_DWORD *)v21;
  if ( *(_DWORD *)v21 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v13 = *(_DWORD *)v21;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x15u,
        0x38u,
        (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
        *(_QWORD *)v13);
      v8 = *(_DWORD *)v21;
    }
    NdisAllocateSharedMemoryTelemetry::~NdisAllocateSharedMemoryTelemetry((NdisAllocateSharedMemoryTelemetry *)v18);
    NdisDmaAllocationHistogramStopwatch::~NdisDmaAllocationHistogramStopwatch((NdisDmaAllocationHistogramStopwatch *)v17);
    return v8;
  }
  else
  {
    v9 = v16;
    if ( v16 )
      NdisDmaAllocationHistogramStopwatch::SetMacAddress(
        (NdisDmaAllocationHistogramStopwatch *)v17,
        (const unsigned __int8 *const)(v16 + 120));
    PreferredNode = SharedMemoryParameters->PreferredNode;
    if ( v18[0] || v18[1] )
    {
      if ( (_QWORD)v15 )
        v19 = *(_OWORD *)(v15 + 4008);
      v20 = PreferredNode;
    }
    if ( v14 == 1 )
    {
      v11 = ndisAllocateSharedMemoryInternal(&v14, v9, SharedMemoryParameters, pAllocationHandle);
      *(_DWORD *)v21 = v11;
    }
    else
    {
      v11 = -1073741823;
      *(_DWORD *)v21 = -1073741823;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_dq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        21,
        57,
        (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
        v11,
        (char)*pAllocationHandle);
      v11 = *(_DWORD *)v21;
    }
    NdisAllocateSharedMemoryTelemetry::~NdisAllocateSharedMemoryTelemetry((NdisAllocateSharedMemoryTelemetry *)v18);
    NdisDmaAllocationHistogramStopwatch::~NdisDmaAllocationHistogramStopwatch((NdisDmaAllocationHistogramStopwatch *)v17);
    return v11;
  }
}
