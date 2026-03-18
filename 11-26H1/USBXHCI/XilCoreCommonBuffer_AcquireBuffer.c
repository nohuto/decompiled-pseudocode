/*
 * XREFs of XilCoreCommonBuffer_AcquireBuffer @ 0x1400043A4
 * Callers:
 *     Control_Transfer_DetermineTransferMechanism @ 0x140003FE0 (Control_Transfer_DetermineTransferMechanism.c)
 *     Bulk_TransferData_DetermineTransferMechanism @ 0x140004180 (Bulk_TransferData_DetermineTransferMechanism.c)
 *     CommonBuffer_AcquireBuffer @ 0x140004358 (CommonBuffer_AcquireBuffer.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x140019320 (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1400199C4 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     XilCoreCommonBuffer_AllocateBuffer @ 0x140056E6C (XilCoreCommonBuffer_AllocateBuffer.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1400578F0 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall XilCoreCommonBuffer_AcquireBuffer(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _BYTE *a5)
{
  __int64 v5; // rbx
  __int64 Buffer; // rax
  unsigned int v11; // ecx
  unsigned int *v12; // rdx
  __int64 v13; // rbp
  __int64 v15; // r15
  __int64 v16; // r8

  v5 = 0LL;
  if ( a2 <= 0x1000 )
  {
    v11 = 0;
    v12 = (unsigned int *)(a1 + 32);
    do
    {
      v13 = a1 + ((unsigned __int64)v11 << 6) + 32;
      if ( a2 <= *v12 )
        break;
      ++v11;
      v12 += 16;
    }
    while ( v11 < 2 );
    if ( v13 )
    {
      v15 = a1 + 16;
      *(_BYTE *)(a1 + 25) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
      v5 = XilCoreCommonBuffer_AcquireBufferWithSegmenter(a1, v13, a3, a4, (__int64)a5);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), *(_BYTE *)(a1 + 25));
      if ( v5 )
      {
        if ( !*a5 )
          goto LABEL_23;
        v15 = a1 + 16;
      }
      if ( KeGetCurrentIrql() )
      {
        *a5 = 1;
      }
      else
      {
        v16 = v5 == 0;
        if ( *a5 )
          v16 = (unsigned int)(*(_DWORD *)(v13 + 16) + v16);
        XilCoreCommonBuffer_AllocateBuffers(a1, v13, v16);
        *a5 = 0;
        if ( v5 )
          goto LABEL_23;
        *(_BYTE *)(v15 + 9) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v15);
        v5 = XilCoreCommonBuffer_AcquireBufferWithSegmenter(a1, v13, a3, a4, (__int64)a5);
        KeReleaseSpinLock((PKSPIN_LOCK)v15, *(_BYTE *)(v15 + 9));
      }
      if ( v5 )
      {
LABEL_23:
        *(_DWORD *)(v5 + 80) = 1;
        *(_DWORD *)(v5 + 44) = a2;
        return v5;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 3;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        (_DWORD)v12,
        8,
        18,
        (__int64)&WPP_2cbb8eaba4893cb9c10a668c9784ba4d_Traceguids,
        a2);
    }
  }
  else
  {
    Buffer = XilCoreCommonBuffer_AllocateBuffer(a1, a2);
    v5 = Buffer;
    if ( Buffer )
    {
      *a5 = 0;
      memset(*(void **)(Buffer + 16), 0, a2);
      *(_QWORD *)(v5 + 72) = a3;
      *(_DWORD *)(v5 + 64) = a4;
      goto LABEL_23;
    }
  }
  if ( KeGetCurrentIrql() )
    MicrosoftTelemetryAssertTriggeredArgsMsgKM(
      "usbxhci.sys",
      a4,
      a2,
      "Common buffer allocation failure at DISPATCH LEVEL");
  return v5;
}
