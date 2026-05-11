/*
 * XREFs of ?IsSupportedSidebandTopology@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@@Z @ 0x140012F6C
 * Callers:
 *     IsSupportedSidebandTopology @ 0x14000F2D4 (IsSupportedSidebandTopology.c)
 * Callees:
 *     ?GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x14000570C (-GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005B28 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x140007DE8 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x14000D9D0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?FindConnectedCapturePin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x140010378 (-FindConnectedCapturePin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     ?ValidateSupportedSidebandTopologyEndpointCategory@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x140014788 (-ValidateSupportedSidebandTopologyEndpointCategory@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@.c)
 *     ?ValidateSupportedSidebandTopologyPathNodes@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@KK@Z @ 0x1400149A4 (-ValidateSupportedSidebandTopologyPathNodes@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@KK@Z.c)
 */

__int64 __fastcall CSidebandDevice::IsSupportedSidebandTopology(struct _KSFILTER_DESCRIPTOR *a1)
{
  unsigned int v1; // edi
  unsigned int v2; // edx
  char v3; // bl
  int v4; // eax
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  unsigned int v8; // r13d
  ULONG v9; // ebp
  __int64 v10; // r9
  unsigned int v11; // r13d
  __int64 v12; // r10
  const KSPIN_DESCRIPTOR_EX *PinDescriptors; // r12
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rax
  ULONG *v17; // r8
  int v18; // eax
  __int64 v19; // rax
  ULONG *v20; // r8
  int v21; // eax
  PDEVICE_OBJECT v22; // rcx
  PDEVICE_OBJECT *v23; // r8
  void *v24; // rdx
  int ConnectedCapturePin; // eax
  int v26; // ecx
  int v27; // edx
  PDEVICE_OBJECT v28; // r10
  PDEVICE_OBJECT *v29; // r8
  unsigned int v30; // ecx
  int v32; // [rsp+20h] [rbp-98h]
  unsigned int v33; // [rsp+60h] [rbp-58h]
  int v34; // [rsp+64h] [rbp-54h]
  unsigned int v35; // [rsp+68h] [rbp-50h]
  unsigned int v36[19]; // [rsp+6Ch] [rbp-4Ch] BYREF
  unsigned int v37; // [rsp+C0h] [rbp+8h]
  unsigned int v38; // [rsp+C8h] [rbp+10h] BYREF
  unsigned int v39; // [rsp+D0h] [rbp+18h]
  unsigned int v40; // [rsp+D8h] [rbp+20h] BYREF

  v1 = -1;
  v37 = 0;
  v38 = -1;
  v2 = 0;
  v40 = -1;
  v3 = 1;
  v36[0] = -1;
  v4 = 0;
  v34 = 0;
  v6 = 0;
  v7 = 0;
  v8 = -1;
  v33 = 0;
  v9 = 0;
  v35 = -1;
  if ( !a1->PinDescriptorsCount )
  {
LABEL_83:
    v30 = 1;
    if ( v4 && v1 != v8 )
      v30 = 2;
    if ( v7 > 1 || v2 > v30 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v3 = 0;
      }
      if ( v3 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_ddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v3,
          *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v32,
          9u,
          0x40u,
          (__int64)&WPP_5beda4ce5be130d4523b4ac6acb25968_Traceguids);
      return 0LL;
    }
    return 1LL;
  }
  v10 = *(_QWORD *)GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data4;
  v11 = 0;
  v12 = *(_QWORD *)&GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data1;
  do
  {
    PinDescriptors = a1->PinDescriptors;
    v14 = a1->PinDescriptorSize * v9;
    v15 = v14;
    if ( *(KSPIN_COMMUNICATION *)((char *)&PinDescriptors->PinDescriptor.Communication + v14) != KSPIN_COMMUNICATION_BRIDGE )
    {
      v16 = *(__int64 *)((char *)&PinDescriptors->PinDescriptor.DataRanges + v14);
      if ( *(_QWORD *)(*(_QWORD *)v16 + 32LL) != v12 || *(_QWORD *)(*(_QWORD *)v16 + 40LL) != v10 )
      {
        LOBYTE(v2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
        v17 = &WPP_RECORDER_INITIALIZED;
        if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (LOBYTE(v17) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v17) = 0;
        }
        if ( (_BYTE)v2 || (_BYTE)v17 )
        {
          WPP_RECORDER_AND_TRACE_SF_d(
            WPP_GLOBAL_Control->AttachedDevice,
            v2,
            (_DWORD)v17,
            WPP_GLOBAL_Control->DeviceExtension);
          v10 = *(_QWORD *)GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data4;
          v12 = *(_QWORD *)&GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data1;
        }
        v18 = *(KSPIN_DATAFLOW *)((char *)&PinDescriptors->PinDescriptor.DataFlow + v15);
        if ( v18 == 1 )
        {
          ++v6;
          v1 = v9;
        }
        else if ( v18 == 2 )
        {
          ++v11;
          v35 = v9;
        }
      }
    }
    if ( *(KSPIN_COMMUNICATION *)((char *)&PinDescriptors->PinDescriptor.Communication + v15) != KSPIN_COMMUNICATION_BRIDGE )
      goto LABEL_37;
    v19 = *(__int64 *)((char *)&PinDescriptors->PinDescriptor.DataRanges + v15);
    if ( *(_QWORD *)(*(_QWORD *)v19 + 32LL) != v12 || *(_QWORD *)(*(_QWORD *)v19 + 40LL) != v10 )
      goto LABEL_37;
    LOBYTE(v2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    v20 = &WPP_RECORDER_INITIALIZED;
    if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (LOBYTE(v20) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v20) = 0;
    }
    if ( (_BYTE)v2 || (_BYTE)v20 )
    {
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v2,
        (_DWORD)v20,
        WPP_GLOBAL_Control->DeviceExtension);
      v10 = *(_QWORD *)GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data4;
      v12 = *(_QWORD *)&GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data1;
    }
    v21 = *(KSPIN_DATAFLOW *)((char *)&PinDescriptors->PinDescriptor.DataFlow + v15);
    if ( v21 == 1 )
    {
      ++v33;
LABEL_37:
      v7 = v37;
      goto LABEL_38;
    }
    if ( v21 != 2 )
      goto LABEL_37;
    v7 = ++v37;
    ConnectedCapturePin = CSidebandDevice::FindConnectedCapturePin(a1, v9, v36);
    v26 = v34;
    v10 = *(_QWORD *)GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data4;
    v12 = *(_QWORD *)&GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data1;
    if ( ConnectedCapturePin >= 0 )
      v26 = 1;
    v34 = v26;
LABEL_38:
    ++v9;
  }
  while ( v9 < a1->PinDescriptorsCount );
  v39 = v11;
  v8 = v40;
  if ( v6 > 1 )
  {
    v22 = WPP_GLOBAL_Control;
    v23 = &WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v3 = 0;
    }
    LOBYTE(v23) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v3 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v24 = &WPP_5beda4ce5be130d4523b4ac6acb25968_Traceguids;
      goto LABEL_70;
    }
    return 0LL;
  }
  if ( v6 == 1 )
  {
    if ( (int)CSidebandDevice::GetBridgePinForDataPin(a1, (const KSTOPOLOGY_CONNECTION *)v1, &v38) < 0 )
    {
      v28 = WPP_GLOBAL_Control;
      v29 = &WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v3 = 0;
      }
      LOBYTE(v29) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v3 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      goto LABEL_79;
    }
    if ( !(unsigned int)CSidebandDevice::ValidateSupportedSidebandTopologyEndpointCategory(a1, v38)
      || !(unsigned int)CSidebandDevice::ValidateSupportedSidebandTopologyPathNodes(a1, v1, v38) )
    {
      return 0LL;
    }
  }
  if ( v39 <= 1 )
  {
    if ( v39 == 1 )
    {
      if ( (int)CSidebandDevice::GetBridgePinForDataPin(a1, (const KSTOPOLOGY_CONNECTION *)v35, &v40) < 0 )
      {
        v28 = WPP_GLOBAL_Control;
        v29 = &WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v3 = 0;
        }
        LOBYTE(v29) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v3 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0LL;
LABEL_79:
        LOBYTE(v27) = v3;
        WPP_RECORDER_AND_TRACE_SF_dd(v28->AttachedDevice, v27, (_DWORD)v29, v28->DeviceExtension);
        return 0LL;
      }
      v8 = v40;
      if ( !(unsigned int)CSidebandDevice::ValidateSupportedSidebandTopologyEndpointCategory(a1, v40)
        || !(unsigned int)CSidebandDevice::ValidateSupportedSidebandTopologyPathNodes(a1, v35, v8) )
      {
        return 0LL;
      }
    }
    v1 = v36[0];
    v2 = v33;
    v4 = v34;
    goto LABEL_83;
  }
  v22 = WPP_GLOBAL_Control;
  v23 = &WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v3 = 0;
  }
  LOBYTE(v23) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v3 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v24 = &WPP_5beda4ce5be130d4523b4ac6acb25968_Traceguids;
LABEL_70:
    LOBYTE(v24) = v3;
    WPP_RECORDER_AND_TRACE_SF_d(v22->AttachedDevice, (_DWORD)v24, (_DWORD)v23, v22->DeviceExtension);
  }
  return 0LL;
}
