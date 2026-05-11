/*
 * XREFs of PropertySetBoolean @ 0x14003DCA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14000549C (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005B28 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF__guid_dd @ 0x140007BD4 (WPP_RECORDER_AND_TRACE_SF__guid_dd.c)
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 *     QueuePropertyRequest @ 0x14003E21C (QueuePropertyRequest.c)
 *     DeviceRequestPowerUp @ 0x14003FECC (DeviceRequestPowerUp.c)
 */

__int64 __fastcall PropertySetBoolean(PIRP Irp, __int64 a2, unsigned __int8 *a3)
{
  PKSFILTER FilterFromIrp; // rax
  __int64 v7; // rdx
  int v8; // r8d
  unsigned __int8 v9; // si
  int v10; // edi
  _QWORD *p_Descriptor; // r14
  char v12; // bl
  char v13; // dl
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rbp
  int v19; // [rsp+20h] [rbp-78h]
  int v20; // [rsp+28h] [rbp-70h]
  int v21; // [rsp+38h] [rbp-60h]
  unsigned int v22; // [rsp+A0h] [rbp+8h] BYREF
  struct _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+A8h] [rbp+10h]
  __int64 v24; // [rsp+B0h] [rbp+18h]

  v22 = 0;
  FilterFromIrp = KsGetFilterFromIrp(Irp);
  v9 = *a3;
  v10 = -1073741811;
  p_Descriptor = &FilterFromIrp->Descriptor;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v12 = 1;
  v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF__guid_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v13,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v19,
      v20,
      0xCu,
      v21,
      a2);
  if ( v9 <= 1u && p_Descriptor )
  {
    v14 = *p_Descriptor;
    v15 = *(unsigned int *)(a2 + 32);
    v16 = p_Descriptor[2];
    v17 = *(_QWORD *)(v14 + 72) + 168LL * *(unsigned int *)(a2 + 24);
    v24 = *(_QWORD *)(v17 + 128);
    LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v7,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v19,
        v20,
        0xDu,
        v21);
    if ( *(_DWORD *)(*(_QWORD *)(v16 + 16) + 536LL) == 1 )
    {
      if ( (unsigned int)v15 < *(_DWORD *)(v17 + 92) )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned __int8 *, _DWORD, int, unsigned int *))(v17 + 136))(
                v16,
                v17,
                CurrentStackLocation->Parameters.Read.Length,
                a3,
                v15,
                1,
                &v22);
        if ( v10 >= 0 )
        {
          *(_BYTE *)(v24 + 16 * v15 + 12) = *a3;
          Irp->IoStatus.Information = v22;
          return (unsigned int)v10;
        }
      }
    }
    else if ( (int)DeviceRequestPowerUp(v16, v7) < 0 )
    {
      v10 = -1073741661;
    }
    else
    {
      v10 = QueuePropertyRequest(Irp);
      if ( v10 >= 0 )
        return (unsigned int)v10;
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v12 = 0;
  }
  if ( v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = v12;
    LOBYTE(v8) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v7, v8, WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)v10;
}
