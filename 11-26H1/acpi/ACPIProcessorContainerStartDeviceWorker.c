/*
 * XREFs of ACPIProcessorContainerStartDeviceWorker @ 0x140067E50
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x140031590 (WPP_RECORDER_SF_qsLqss.c)
 */

_UNKNOWN **__fastcall ACPIProcessorContainerStartDeviceWorker(__int64 a1)
{
  __int64 DeviceExtension; // rax
  IRP *v3; // rbx
  _QWORD *v4; // rdi
  unsigned int MinorFunction; // esi
  KIRQL v6; // r8
  __int64 i; // rdx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  char v13; // r8
  const char *v14; // rcx
  const char *v15; // rdx
  __int64 v16; // rax
  _UNKNOWN **result; // rax
  __int64 v18; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(*(_QWORD *)(a1 + 32));
  v3 = *(IRP **)(a1 + 40);
  v4 = (_QWORD *)DeviceExtension;
  MinorFunction = v3->Tail.Overlay.CurrentStackLocation->MinorFunction;
  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( !AcpiProcessorContainerHierarchyLocked )
  {
    for ( i = v4[99]; i; i = *(_QWORD *)(i + 792) )
    {
      if ( _bittest64((const signed __int64 *)(i + 1008), 0x27u) )
      {
        v8 = i + 200;
        v9 = v4 + 23;
        v10 = *(_QWORD **)(v8 + 8);
        if ( *v10 == v8 )
        {
          *v9 = v8;
          v4[24] = v10;
          *v10 = v9;
          *(_QWORD *)(v8 + 8) = v9;
          goto LABEL_11;
        }
LABEL_9:
        __fastfail(3u);
      }
    }
    v11 = (_QWORD *)qword_14008F9B8;
    v12 = v4 + 23;
    if ( *(__int64 **)qword_14008F9B8 != &AcpiProcessorContainerRootList )
      goto LABEL_9;
    *v12 = &AcpiProcessorContainerRootList;
    v4[24] = v11;
    *v11 = v12;
    qword_14008F9B8 = (__int64)(v4 + 23);
LABEL_11:
    ++AcpiProcessorContainerCount;
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v6);
  v3->IoStatus.Status = 0;
  v3->IoStatus.Information = 0LL;
  IofCompleteRequest(v3, 0);
  v13 = 0;
  v14 = byte_140075A82;
  v15 = byte_140075A82;
  if ( v4 )
  {
    v16 = v4[1];
    v13 = (char)v4;
    if ( (v16 & 0x200000000000LL) != 0 )
    {
      v14 = (const char *)v4[76];
      if ( (v16 & 0x400000000000LL) != 0 )
        v15 = (const char *)v4[77];
    }
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = MinorFunction;
    if ( MinorFunction >= 0x1A )
      v18 = 26LL;
    return (_UNKNOWN **)WPP_RECORDER_SF_qsLqss(
                          (__int64)WPP_GLOBAL_Control->DeviceExtension,
                          4u,
                          5u,
                          0xBu,
                          (__int64)&WPP_029668765f6d33d913721b2226f68e0b_Traceguids,
                          (char)v3,
                          ACPIDispatchPnpTableNames[v18],
                          0,
                          v13,
                          v14,
                          v15);
  }
  return result;
}
