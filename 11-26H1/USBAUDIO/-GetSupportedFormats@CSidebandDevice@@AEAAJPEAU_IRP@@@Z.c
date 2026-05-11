/*
 * XREFs of ?GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400169C4
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x14000952C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRIPTOR_EX@@PEAEPEAK3@Z @ 0x14000522C (-IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRI.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005B28 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x140007068 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x140007DE8 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x14000A5F4 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x14000D9D0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddd @ 0x140019318 (WPP_RECORDER_AND_TRACE_SF_ddddd.c)
 *     memset @ 0x14001CAC0 (memset.c)
 */

__int64 __fastcall CSidebandDevice::GetSupportedFormats(CSidebandDevice *this, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // r15d
  PDEVICE_OBJECT v7; // r10
  bool v8; // bl
  bool v9; // r8
  PIRP v10; // rcx
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // r13
  int v13; // r8d
  int PinFromEpIndex; // eax
  CSidebandDevice *v15; // rcx
  __int64 v16; // r8
  PVOID DeviceExtension; // r9
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  unsigned int CompletionMode; // r8d
  PDEVICE_OBJECT v20; // rcx
  __int64 v21; // r15
  ULONG Length; // ecx
  unsigned int v23; // r12d
  struct _KSPIN_DESCRIPTOR_EX *v24; // r9
  int v25; // r12d
  __int64 v26; // rcx
  _DWORD *v27; // rax
  bool v28; // zf
  __int64 v29; // r11
  unsigned int v30; // r15d
  __int64 v31; // r9
  bool v32; // al
  __int16 v33; // r9
  __int16 v34; // r10
  __int16 v35; // r11
  int v36; // eax
  char v37; // r10
  __int64 *v38; // rax
  unsigned int v39; // r15d
  bool v40; // r13
  __int16 v41; // r9
  __int16 v42; // r10
  __int16 v43; // r11
  int v44; // eax
  char v45; // r10
  int v46; // [rsp+20h] [rbp-59h]
  int v47; // [rsp+28h] [rbp-51h]
  void *v48; // [rsp+38h] [rbp-41h]
  int v49; // [rsp+60h] [rbp-19h]
  int v50; // [rsp+60h] [rbp-19h]
  struct _IO_STACK_LOCATION *v51; // [rsp+70h] [rbp-9h]
  __int64 *UserBuffer; // [rsp+70h] [rbp-9h]
  __int64 v53; // [rsp+78h] [rbp-1h]
  unsigned __int8 *v54; // [rsp+80h] [rbp+7h]
  ULONG_PTR v55; // [rsp+88h] [rbp+Fh]
  unsigned int v56; // [rsp+E0h] [rbp+67h] BYREF
  PIRP Irp; // [rsp+E8h] [rbp+6Fh]
  unsigned int v58; // [rsp+F0h] [rbp+77h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v59; // [rsp+F8h] [rbp+7Fh] BYREF

  Irp = a2;
  a2->IoStatus.Information = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v51 = CurrentStackLocation;
  v56 = -1;
  v4 = *((_QWORD *)this + 4);
  v59 = 0LL;
  v5 = *(_QWORD *)(v4 + 16) + 128LL;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x18 )
  {
    v6 = -1073741811;
    v7 = WPP_GLOBAL_Control;
    v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_10;
    goto LABEL_9;
  }
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( !(unsigned int)CSidebandDevice::IsValidEndpointIndex(
                        (CSidebandDevice *)CurrentStackLocation,
                        (struct _KSFILTER_DESCRIPTOR *)v5,
                        Parameters->ReadMode) )
  {
    v6 = -1073741811;
    v7 = WPP_GLOBAL_Control;
    v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_10;
    goto LABEL_9;
  }
  v8 = 1;
  LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v5 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v48 = &WPP_e329219d3dc83e7ef4f1a166489f6e61_Traceguids;
    LOBYTE(v13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v5, v13, WPP_GLOBAL_Control->DeviceExtension);
  }
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, Parameters->ReadMode, &v56, &v59);
  LODWORD(v5) = 0;
  v6 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    LOBYTE(v16) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_10;
    DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
    AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
    goto LABEL_37;
  }
  CompletionMode = Parameters->CompletionMode;
  v56 = 0;
  v58 = 0;
  v6 = CSidebandDevice::IntersectDataFormatsWithDataRange(
         v15,
         *(union KSDATAFORMAT ***)&Parameters->InboundQuota,
         CompletionMode,
         v59,
         0LL,
         &v58,
         &v56);
  if ( v6 < 0 )
  {
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    LOBYTE(v16) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_10;
    goto LABEL_45;
  }
  v21 = v58;
  Length = v51->Parameters.Read.Length;
  v23 = v56 + 24 + 8 * v58;
  if ( !Length )
  {
    v10 = Irp;
    v6 = -1073741789;
    Irp->IoStatus.Information = v23;
    goto LABEL_11;
  }
  if ( Length == v23 )
  {
    v55 = v23;
    UserBuffer = (__int64 *)Irp->UserBuffer;
    memset(UserBuffer, 0, v23);
    v24 = v59;
    v53 = v21;
    *(_DWORD *)UserBuffer = v23;
    v25 = 0;
    *((_DWORD *)UserBuffer + 1) = Parameters->ReadMode;
    UserBuffer[2] = (__int64)(UserBuffer + 3);
    *((_DWORD *)UserBuffer + 2) = v21;
    v54 = (unsigned __int8 *)&UserBuffer[v21 + 3];
    v6 = CSidebandDevice::IntersectDataFormatsWithDataRange(
           (CSidebandDevice *)(UserBuffer + 1),
           *(union KSDATAFORMAT ***)&Parameters->InboundQuota,
           Parameters->CompletionMode,
           v24,
           v54,
           (unsigned int *)UserBuffer + 2,
           &v56);
    LODWORD(v59) = v6;
    if ( v58 )
    {
      v26 = 0LL;
      v16 = v53;
      v5 = UserBuffer[2];
      do
      {
        *(_QWORD *)(v26 + v5) = &v54[v25];
        v5 = UserBuffer[2];
        v27 = *(_DWORD **)(v26 + v5);
        v26 += 8LL;
        v25 += *v27;
        --v16;
      }
      while ( v16 );
    }
    if ( !Parameters->CompletionMode )
      goto LABEL_92;
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v5 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v48 = &WPP_e329219d3dc83e7ef4f1a166489f6e61_Traceguids;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        WPP_GLOBAL_Control->DeviceExtension);
    }
    v28 = Parameters->CompletionMode == 0;
    v56 = 0;
    if ( v28 )
    {
LABEL_92:
      v29 = *(_QWORD *)GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data4;
      goto LABEL_93;
    }
    v29 = *(_QWORD *)GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data4;
    v30 = v56;
    v31 = *(_QWORD *)&GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data1;
    while ( 1 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)&Parameters->InboundQuota + 8LL * v30);
      if ( *(_QWORD *)(v5 + 48) == v31 && *(_QWORD *)(v5 + 56) == v29 )
      {
        if ( *(_WORD *)(v5 + 64) == 0xFFFE )
        {
          v32 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          LOBYTE(v56) = v32;
          if ( !v32 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_90;
          v33 = *(_WORD *)(v5 + 82);
          v34 = *(_WORD *)(v5 + 78);
          v35 = *(_WORD *)(v5 + 66);
          v49 = *(_DWORD *)(v5 + 84);
          v36 = *(_DWORD *)(v5 + 68);
          LOBYTE(v5) = v56;
          LOBYTE(v16) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_ddddd(
            WPP_GLOBAL_Control->AttachedDevice,
            v5,
            v16,
            WPP_GLOBAL_Control->DeviceExtension,
            v46,
            v47,
            136,
            (_DWORD)v48,
            v35,
            v36,
            v34,
            v33,
            v49);
        }
        else
        {
          v37 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( !v37 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_90;
          WPP_RECORDER_AND_TRACE_SF_ddd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v37,
            *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v46,
            9u,
            0x89u,
            (__int64)&WPP_e329219d3dc83e7ef4f1a166489f6e61_Traceguids);
        }
        v31 = *(_QWORD *)&GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data1;
        v29 = *(_QWORD *)GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data4;
      }
LABEL_90:
      if ( ++v30 >= Parameters->CompletionMode )
      {
        v6 = (int)v59;
LABEL_93:
        if ( !*((_DWORD *)UserBuffer + 2) )
          goto LABEL_126;
        LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v5 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v48 = &WPP_e329219d3dc83e7ef4f1a166489f6e61_Traceguids;
          WPP_RECORDER_AND_TRACE_SF_dd(
            WPP_GLOBAL_Control->AttachedDevice,
            v5,
            *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
            WPP_GLOBAL_Control->DeviceExtension);
          v29 = *(_QWORD *)GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data4;
        }
        v38 = UserBuffer;
        v56 = 0;
        if ( !*((_DWORD *)UserBuffer + 2) )
        {
LABEL_126:
          if ( v6 >= 0 )
          {
            v10 = Irp;
            Irp->IoStatus.Information = v55;
            goto LABEL_11;
          }
          v20 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v8 = 0;
          }
          LOBYTE(v16) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v8 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_10;
LABEL_45:
          DeviceExtension = v20->DeviceExtension;
          AttachedDevice = v20->AttachedDevice;
LABEL_37:
          LOBYTE(v5) = v8;
          WPP_RECORDER_AND_TRACE_SF_d((_DWORD)AttachedDevice, v5, v16, (_DWORD)DeviceExtension);
          goto LABEL_10;
        }
        v39 = v56;
        while ( 2 )
        {
          v5 = *(_QWORD *)(v38[2] + 8LL * v39);
          if ( *(_QWORD *)(v5 + 48) == *(_QWORD *)&GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data1
            && *(_QWORD *)(v5 + 56) == v29 )
          {
            if ( *(_WORD *)(v5 + 64) == 0xFFFE )
            {
              v40 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              if ( v40 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                v41 = *(_WORD *)(v5 + 82);
                v42 = *(_WORD *)(v5 + 78);
                v43 = *(_WORD *)(v5 + 66);
                v50 = *(_DWORD *)(v5 + 84);
                v44 = *(_DWORD *)(v5 + 68);
                LOBYTE(v5) = v40;
                LOBYTE(v16) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_ddddd(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v5,
                  v16,
                  WPP_GLOBAL_Control->DeviceExtension,
                  v46,
                  v47,
                  139,
                  (_DWORD)v48,
                  v43,
                  v44,
                  v42,
                  v41,
                  v50);
                goto LABEL_123;
              }
            }
            else
            {
              v45 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              if ( v45 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                WPP_RECORDER_AND_TRACE_SF_ddd(
                  (__int64)WPP_GLOBAL_Control->AttachedDevice,
                  v45,
                  *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  v46,
                  9u,
                  0x8Cu,
                  (__int64)&WPP_e329219d3dc83e7ef4f1a166489f6e61_Traceguids);
LABEL_123:
                v29 = *(_QWORD *)GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data4;
              }
            }
          }
          v38 = UserBuffer;
          if ( ++v39 >= *((_DWORD *)UserBuffer + 2) )
          {
            v6 = (int)v59;
            goto LABEL_126;
          }
          continue;
        }
      }
    }
  }
  v6 = -1073741811;
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v8 = 0;
  }
  v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( !v8 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    goto LABEL_10;
LABEL_9:
  LOBYTE(v5) = v8;
  WPP_RECORDER_AND_TRACE_SF_dd(v7->AttachedDevice, v5, v9, v7->DeviceExtension);
LABEL_10:
  v10 = Irp;
LABEL_11:
  v10->IoStatus.Status = v6;
  IofCompleteRequest(v10, 0);
  return (unsigned int)v6;
}
