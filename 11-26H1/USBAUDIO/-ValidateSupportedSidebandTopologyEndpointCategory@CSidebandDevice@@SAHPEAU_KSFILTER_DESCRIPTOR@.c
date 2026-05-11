/*
 * XREFs of ?ValidateSupportedSidebandTopologyEndpointCategory@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x140014788
 * Callers:
 *     ?IsSupportedSidebandTopology@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@@Z @ 0x140012F6C (-IsSupportedSidebandTopology@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005B28 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall CSidebandDevice::ValidateSupportedSidebandTopologyEndpointCategory(
        struct _KSFILTER_DESCRIPTOR *a1,
        int a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  bool v15; // al
  ULONG *v16; // r8
  void *v17; // rdx

  v2 = *(const GUID **)((char *)&a1->PinDescriptors->PinDescriptor.Category + a1->PinDescriptorSize * a2);
  v3 = *v2 - *(_QWORD *)&GUID_dff21be1_f70f_11d0_b917_00a0c9223196.Data1;
  if ( *v2 == *(_QWORD *)&GUID_dff21be1_f70f_11d0_b917_00a0c9223196.Data1 )
    v3 = v2[1] - *(_QWORD *)GUID_dff21be1_f70f_11d0_b917_00a0c9223196.Data4;
  if ( !v3 )
    return 1LL;
  v4 = *v2 - *(_QWORD *)&GUID_dff21be2_f70f_11d0_b917_00a0c9223196.Data1;
  if ( *v2 == *(_QWORD *)&GUID_dff21be2_f70f_11d0_b917_00a0c9223196.Data1 )
    v4 = v2[1] - *(_QWORD *)GUID_dff21be2_f70f_11d0_b917_00a0c9223196.Data4;
  if ( !v4 )
    return 1LL;
  v5 = *v2 - *(_QWORD *)&GUID_dff21be3_f70f_11d0_b917_00a0c9223196.Data1;
  if ( *v2 == *(_QWORD *)&GUID_dff21be3_f70f_11d0_b917_00a0c9223196.Data1 )
    v5 = v2[1] - *(_QWORD *)GUID_dff21be3_f70f_11d0_b917_00a0c9223196.Data4;
  if ( !v5 )
    return 1LL;
  v6 = *v2 - *(_QWORD *)&GUID_dff21be4_f70f_11d0_b917_00a0c9223196.Data1;
  if ( *v2 == *(_QWORD *)&GUID_dff21be4_f70f_11d0_b917_00a0c9223196.Data1 )
    v6 = v2[1] - *(_QWORD *)GUID_dff21be4_f70f_11d0_b917_00a0c9223196.Data4;
  if ( !v6 )
    return 1LL;
  v7 = *v2 - *(_QWORD *)&GUID_dff21ce1_f70f_11d0_b917_00a0c9223196.Data1;
  if ( *v2 == *(_QWORD *)&GUID_dff21ce1_f70f_11d0_b917_00a0c9223196.Data1 )
    v7 = v2[1] - *(_QWORD *)GUID_dff21ce1_f70f_11d0_b917_00a0c9223196.Data4;
  if ( !v7 )
    return 1LL;
  v8 = *v2 - *(_QWORD *)&GUID_dff21ce2_f70f_11d0_b917_00a0c9223196.Data1;
  if ( *v2 == *(_QWORD *)&GUID_dff21ce2_f70f_11d0_b917_00a0c9223196.Data1 )
    v8 = v2[1] - *(_QWORD *)GUID_dff21ce2_f70f_11d0_b917_00a0c9223196.Data4;
  if ( !v8 )
    return 1LL;
  v9 = *v2 - *(_QWORD *)&GUID_dff21ce4_f70f_11d0_b917_00a0c9223196.Data1;
  if ( *v2 == *(_QWORD *)&GUID_dff21ce4_f70f_11d0_b917_00a0c9223196.Data1 )
    v9 = v2[1] - *(_QWORD *)GUID_dff21ce4_f70f_11d0_b917_00a0c9223196.Data4;
  if ( !v9 )
    return 1LL;
  v10 = *v2 - *(_QWORD *)&GUID_dff21ce5_f70f_11d0_b917_00a0c9223196.Data1;
  if ( *v2 == *(_QWORD *)&GUID_dff21ce5_f70f_11d0_b917_00a0c9223196.Data1 )
    v10 = v2[1] - *(_QWORD *)GUID_dff21ce5_f70f_11d0_b917_00a0c9223196.Data4;
  if ( !v10 )
    return 1LL;
  v11 = *v2 - *(_QWORD *)&GUID_dff21ce6_f70f_11d0_b917_00a0c9223196.Data1;
  if ( *v2 == *(_QWORD *)&GUID_dff21ce6_f70f_11d0_b917_00a0c9223196.Data1 )
    v11 = v2[1] - *(_QWORD *)GUID_dff21ce6_f70f_11d0_b917_00a0c9223196.Data4;
  if ( !v11 )
    return 1LL;
  v12 = *v2 - *(_QWORD *)&GUID_dff21de1_f70f_11d0_b917_00a0c9223196.Data1;
  if ( *v2 == *(_QWORD *)&GUID_dff21de1_f70f_11d0_b917_00a0c9223196.Data1 )
    v12 = v2[1] - *(_QWORD *)GUID_dff21de1_f70f_11d0_b917_00a0c9223196.Data4;
  if ( !v12 )
    return 1LL;
  v13 = *v2 - *(_QWORD *)&GUID_dff21de2_f70f_11d0_b917_00a0c9223196.Data1;
  if ( *v2 == *(_QWORD *)&GUID_dff21de2_f70f_11d0_b917_00a0c9223196.Data1 )
    v13 = v2[1] - *(_QWORD *)GUID_dff21de2_f70f_11d0_b917_00a0c9223196.Data4;
  if ( !v13 )
    return 1LL;
  v14 = *v2 - *(_QWORD *)&GUID_dff21de3_f70f_11d0_b917_00a0c9223196.Data1;
  if ( *v2 == *(_QWORD *)&GUID_dff21de3_f70f_11d0_b917_00a0c9223196.Data1 )
    v14 = v2[1] - *(_QWORD *)GUID_dff21de3_f70f_11d0_b917_00a0c9223196.Data4;
  if ( !v14 )
    return 1LL;
  v15 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  v16 = &WPP_RECORDER_INITIALIZED;
  if ( v15 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v17 = &WPP_5beda4ce5be130d4523b4ac6acb25968_Traceguids;
    LOBYTE(v17) = v15;
    LOBYTE(v16) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v17,
      (_DWORD)v16,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  return 0LL;
}
