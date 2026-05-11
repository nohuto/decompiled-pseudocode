/*
 * XREFs of ?GetNumberOfEndpointsInDevice@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEAK@Z @ 0x14000AB94
 * Callers:
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x14000A5F4 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z.c)
 *     ?GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140015408 (-GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005B28 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall CSidebandDevice::GetNumberOfEndpointsInDevice(struct _KSFILTER_DESCRIPTOR *a1, unsigned int *a2)
{
  ULONG v4; // ebx
  __int64 v5; // r8
  __int64 v6; // rdx
  const KSPIN_DESCRIPTOR_EX *PinDescriptors; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax

  *a2 = 0;
  v4 = 0;
  if ( a1->PinDescriptorsCount )
  {
    v5 = *(_QWORD *)GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data4;
    v6 = *(_QWORD *)&GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data1;
    do
    {
      PinDescriptors = a1->PinDescriptors;
      v8 = a1->PinDescriptorSize * v4;
      if ( *(KSPIN_COMMUNICATION *)((char *)&PinDescriptors->PinDescriptor.Communication + v8) != KSPIN_COMMUNICATION_BRIDGE )
      {
        v9 = **(_QWORD **)((char *)&PinDescriptors->PinDescriptor.DataRanges + v8);
        v10 = *(_QWORD *)(v9 + 32) - v6;
        if ( !v10 )
          v10 = *(_QWORD *)(v9 + 40) - v5;
        if ( v10 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(v6) = 0;
          }
          if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (LOBYTE(v5) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            LOBYTE(v5) = 0;
          }
          if ( (_BYTE)v6 || (_BYTE)v5 )
            WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v6, v5, WPP_GLOBAL_Control->DeviceExtension);
          ++*a2;
          v5 = *(_QWORD *)GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data4;
          v6 = *(_QWORD *)&GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data1;
        }
      }
      ++v4;
    }
    while ( v4 < a1->PinDescriptorsCount );
  }
  return 0LL;
}
