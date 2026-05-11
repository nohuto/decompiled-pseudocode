/*
 * XREFs of ?TraverseToCaptureBridgePin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x140014090
 * Callers:
 *     ?FindConnectedCapturePin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x140010378 (-FindConnectedCapturePin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005B28 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?AddConnectionToTravelStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@PEBUKSTOPOLOGY_CONNECTION@@@Z @ 0x1400073C8 (-AddConnectionToTravelStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@PEBUKSTOPOLOGY_CONNECTION@@@Z.c)
 *     _scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____::_2_::scope_exit::_scope_exit @ 0x14000B968 (_scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____--_2_--scope_exit--_scope_exit.c)
 *     _scope_exit__lambda_a16b11757b8cb69a258309176305b33d____::_2_::scope_exit::_scope_exit @ 0x14000F448 (_scope_exit__lambda_a16b11757b8cb69a258309176305b33d____--_2_--scope_exit--_scope_exit.c)
 */

__int64 __fastcall CSidebandDevice::TraverseToCaptureBridgePin(
        struct _KSFILTER_DESCRIPTOR *a1,
        const struct KSTOPOLOGY_CONNECTION *a2,
        unsigned int *a3)
{
  unsigned int v4; // esi
  char v5; // bl
  int v6; // edx
  int v7; // edi
  int v8; // r8d
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v11; // rax
  bool v12; // zf
  unsigned int Flink_high; // ecx
  __int64 v14; // rdx
  const KSPIN_DESCRIPTOR_EX *PinDescriptors; // rax
  ULONG i; // esi
  int v17; // edx
  int v18; // r8d
  struct _LIST_ENTRY *v19; // [rsp+50h] [rbp-19h] BYREF
  struct _LIST_ENTRY v20; // [rsp+58h] [rbp-11h] BYREF
  struct _LIST_ENTRY **v21; // [rsp+68h] [rbp-1h] BYREF
  char v22; // [rsp+70h] [rbp+7h]
  struct _LIST_ENTRY *v23; // [rsp+78h] [rbp+Fh] BYREF
  char v24; // [rsp+80h] [rbp+17h]
  unsigned int v26; // [rsp+E8h] [rbp+7Fh]

  *a3 = -1;
  v20.Blink = &v20;
  v4 = 0;
  v20.Flink = &v20;
  v23 = &v20;
  v5 = 1;
  v24 = 1;
  v7 = CSidebandDevice::AddConnectionToTravelStack(&v20, a2);
  if ( v7 >= 0 )
  {
    while ( 1 )
    {
      Flink = v20.Flink;
      if ( v20.Flink == &v20 || v4 >= 0x3E8 )
        break;
      v26 = ++v4;
      if ( v20.Flink->Blink != &v20 || (v11 = v20.Flink->Flink, v20.Flink->Flink->Blink != v20.Flink) )
        __fastfail(3u);
      v20.Flink = v20.Flink->Flink;
      v11->Blink = &v20;
      v19 = Flink;
      v12 = LODWORD(Flink[1].Flink) == -1;
      v21 = &v19;
      v22 = 1;
      if ( v12 )
      {
        Flink_high = HIDWORD(Flink[1].Flink);
        v14 = a1->PinDescriptorSize * Flink_high;
        PinDescriptors = a1->PinDescriptors;
        if ( *(KSPIN_COMMUNICATION *)((char *)&PinDescriptors->PinDescriptor.Communication + v14) == KSPIN_COMMUNICATION_BRIDGE
          && *(KSPIN_DATAFLOW *)((char *)&PinDescriptors->PinDescriptor.DataFlow + v14) == KSPIN_DATAFLOW_IN )
        {
          v7 = 0;
          *a3 = Flink_high;
          scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____::_2_::scope_exit::_scope_exit((__int64)&v21);
          break;
        }
        scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____::_2_::scope_exit::_scope_exit((__int64)&v21);
      }
      else
      {
        for ( i = 0; i < a1->ConnectionsCount; ++i )
        {
          if ( a1->Connections[i].ToNode == LODWORD(Flink[1].Flink) )
          {
            v7 = CSidebandDevice::AddConnectionToTravelStack(&v20, &a1->Connections[i]);
            if ( v7 < 0 )
            {
              LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
              if ( (_BYTE)v17 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v18) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_d(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v17,
                  v18,
                  WPP_GLOBAL_Control->DeviceExtension);
              }
              break;
            }
            Flink = v19;
          }
        }
        scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____::_2_::scope_exit::_scope_exit((__int64)&v21);
        v4 = v26;
      }
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    if ( v5 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = v5;
      LOBYTE(v8) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v6, v8, WPP_GLOBAL_Control->DeviceExtension);
    }
  }
  scope_exit__lambda_a16b11757b8cb69a258309176305b33d____::_2_::scope_exit::_scope_exit((__int64)&v23);
  return (unsigned int)v7;
}
