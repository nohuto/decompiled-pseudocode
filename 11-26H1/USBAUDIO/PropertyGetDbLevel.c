/*
 * XREFs of PropertyGetDbLevel @ 0x14003CC40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF__guid_d @ 0x140005140 (WPP_RECORDER_AND_TRACE_SF__guid_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14000549C (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005B28 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall PropertyGetDbLevel(PIRP Irp, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r14
  _DWORD *v4; // r13
  __int64 v5; // rdi
  unsigned int v7; // esi
  char v8; // bl
  PKSFILTER FilterFromIrp; // rax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rdi
  const KSNODE_DESCRIPTOR *NodeDescriptors; // rbp
  const GUID *Type; // r12
  char v15; // dl
  PDEVICE_OBJECT v16; // rcx
  int v18; // [rsp+20h] [rbp-68h]
  int v19; // [rsp+28h] [rbp-60h]
  int v20; // [rsp+38h] [rbp-50h]

  v3 = *(unsigned int *)(a2 + 32);
  v4 = a3;
  v5 = a2;
  v7 = -1073741808;
  v8 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF__guid_d(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)a3,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  FilterFromIrp = KsGetFilterFromIrp(Irp);
  if ( !FilterFromIrp )
    goto LABEL_14;
  v12 = 7LL * *(unsigned int *)(v5 + 24);
  NodeDescriptors = FilterFromIrp->Descriptor->NodeDescriptors;
  Type = NodeDescriptors[v12 + 5].Type;
  v15 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v15 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v15,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v18,
      v19,
      0x17u,
      v20);
  if ( (unsigned int)v3 >= HIDWORD(NodeDescriptors[v12 + 3].Name) )
  {
LABEL_14:
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    LOBYTE(v11) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return v7;
LABEL_25:
    LOBYTE(v10) = v8;
    WPP_RECORDER_AND_TRACE_SF_d(v16->AttachedDevice, v10, v11, v16->DeviceExtension);
    return v7;
  }
  v7 = 0;
  *v4 = *(_DWORD *)&Type[2 * v3].Data4[4];
  Irp->IoStatus.Information = 4LL;
  v16 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v8 = 0;
  }
  LOBYTE(v11) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    goto LABEL_25;
  return v7;
}
