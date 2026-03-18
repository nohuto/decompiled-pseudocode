/*
 * XREFs of TR_SetClientAddressesForOffload @ 0x14004BECC
 * Callers:
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x14003D300 (UsbDevice_HandleAddAndDropEndpointsState.c)
 * Callees:
 *     XilCoreCommonBuffer_ReleaseBuffers @ 0x140033370 (XilCoreCommonBuffer_ReleaseBuffers.c)
 *     CommonBuffer_ReleaseBuffer @ 0x14003D258 (CommonBuffer_ReleaseBuffer.c)
 *     CommonBuffer_AcquireCommonBufferFromPhysicalAddress @ 0x14003FEF4 (CommonBuffer_AcquireCommonBufferFromPhysicalAddress.c)
 *     TR_ReleaseSegment @ 0x14004BE54 (TR_ReleaseSegment.c)
 */

__int64 __fastcall TR_SetClientAddressesForOffload(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v8; // rbp
  unsigned int v9; // edi
  _QWORD *v10; // r14
  _QWORD *v11; // rbx
  _QWORD **v12; // rdx

  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 120LL);
  v9 = 0;
  v10 = CommonBuffer_AcquireCommonBufferFromPhysicalAddress(v8, a2, a3, a1, 828862034);
  if ( v10 )
  {
    v11 = CommonBuffer_AcquireCommonBufferFromPhysicalAddress(v8, a4, a5, a1, 828862034);
    if ( v11 )
    {
      TR_ReleaseSegment(a1, *(_QWORD **)(a1 + 176));
      v12 = (_QWORD **)(a1 + 208);
      *(_QWORD *)(a1 + 176) = 0LL;
      if ( *v12 != v12 )
        XilCoreCommonBuffer_ReleaseBuffers(v8 + 88, v12);
      *(_DWORD *)(a1 + 20) = a3;
      *(_QWORD *)(a1 + 176) = v10;
      *(_QWORD *)(a1 + 240) = v11;
    }
    else
    {
      v9 = -1073741670;
      CommonBuffer_ReleaseBuffer(v8, (__int64)v10);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v9;
}
