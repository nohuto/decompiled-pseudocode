/*
 * XREFs of IopPnPDispatch @ 0x140AA13D0
 * Callers:
 *     <none>
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     IopPnPCompleteRequest @ 0x1403FB9B0 (IopPnPCompleteRequest.c)
 *     IoDeleteDevice @ 0x140426AC0 (IoDeleteDevice.c)
 *     IoInvalidateDeviceRelations @ 0x1404CC3D0 (IoInvalidateDeviceRelations.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     PiGetDeviceRegProperty @ 0x140955DCC (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x140AA0C1C (PnpGetDeviceResourcesFromRegistry.c)
 *     IopGetRootDevices @ 0x140AA1748 (IopGetRootDevices.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopPnPDispatch(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  _QWORD *v3; // r12
  void *Information; // rsi
  unsigned int MinorFunction; // r8d
  NTSTATUS RootDevices; // ebx
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  ULONG Length; // ecx
  ULONG v17; // ecx
  ULONG v18; // ecx
  ULONG v19; // ecx
  wchar_t *v20; // rax
  _QWORD *v21; // rdx
  PIO_SECURITY_CONTEXT v22; // rcx
  _DWORD *v23; // rbx
  __m128i si128; // xmm0
  int v25; // edx
  char v26; // r8
  unsigned int v27; // r8d
  unsigned int v28; // r8d
  unsigned int v29; // r8d
  unsigned int v30; // r8d
  unsigned int v31; // r8d
  __int64 Pool2; // rax
  void *v33; // rbx
  _QWORD *v34; // rbx
  PVOID v35; // rcx
  _DWORD *DeviceNode; // rax
  __int64 v37; // rdx
  char *v38; // rdi
  char *v39; // rcx
  ULONG v40; // r9d
  char *v41; // r8
  __int16 v42; // dx
  _WORD *v43; // rax
  int v44; // edx
  _WORD *v45; // rcx
  __int16 i; // r8
  char *v47; // rcx
  __int16 v48; // dx
  signed __int64 v49; // rcx
  __int64 v50; // rdx
  GUID *SecurityContext; // rcx
  GUID *v52; // rcx
  LARGE_INTEGER ByteOffset; // rax
  LARGE_INTEGER v54; // rdx
  void *v55; // rax
  void *v56[2]; // [rsp+40h] [rbp-10h] BYREF
  ULONG v57; // [rsp+98h] [rbp+48h] BYREF
  int v58; // [rsp+A0h] [rbp+50h] BYREF
  int v59; // [rsp+A8h] [rbp+58h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0LL;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  Information = 0LL;
  MinorFunction = CurrentStackLocation->MinorFunction;
  v56[0] = 0LL;
  if ( MinorFunction <= 7 )
  {
    if ( MinorFunction == 7 )
    {
      if ( a1 == *((struct _DEVICE_OBJECT **)IopRootDeviceNode + 4) && !CurrentStackLocation->Parameters.Read.Length )
      {
        RootDevices = IopGetRootDevices(v56);
LABEL_37:
        Information = v56[0];
        goto LABEL_6;
      }
      if ( CurrentStackLocation->Parameters.Read.Length != 4 )
        goto LABEL_5;
      Pool2 = ExAllocatePool2(0x100uLL);
      v33 = (void *)Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)Pool2 = 1;
        *(_QWORD *)(Pool2 + 8) = a1;
        PsReferenceSiloContext(a1);
        Information = v33;
        goto LABEL_29;
      }
LABEL_23:
      RootDevices = -1073741670;
      goto LABEL_6;
    }
    if ( !MinorFunction )
      goto LABEL_29;
    v27 = MinorFunction - 1;
    if ( !v27 )
      goto LABEL_29;
    v28 = v27 - 1;
    if ( !v28 )
    {
      if ( !a1 || (DeviceNode = a1->DeviceObjectExtension->DeviceNode) == 0LL || (DeviceNode[99] & 0x10000) != 0 )
        IoDeleteDevice(a1);
      IoInvalidateDeviceRelations(*((PDEVICE_OBJECT *)IopRootDeviceNode + 4), SingleBusRelations);
      goto LABEL_29;
    }
    v29 = v28 - 1;
    if ( !v29 )
    {
LABEL_29:
      RootDevices = 0;
      goto LABEL_6;
    }
    v30 = v29 - 1;
    if ( v30 )
    {
      v31 = v30 - 1;
      if ( v31 )
      {
        if ( v31 == 1 )
          goto LABEL_29;
        goto LABEL_5;
      }
    }
LABEL_63:
    RootDevices = -1073741823;
    goto LABEL_6;
  }
  v10 = MinorFunction - 8;
  if ( !v10 )
  {
    RootDevices = a2->IoStatus.Status;
    if ( a1 )
      v35 = a1->DeviceObjectExtension->DeviceNode;
    else
      v35 = 0LL;
    if ( v35 != IopRootDeviceNode )
      goto LABEL_6;
    SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
    if ( SecurityContext != &GUID_ARBITER_INTERFACE_STANDARD
      && RtlCompareMemory(SecurityContext, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) != 16 )
    {
      v52 = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
      if ( v52 == &GUID_TRANSLATOR_INTERFACE_STANDARD
        || RtlCompareMemory(v52, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) == 16 )
      {
        ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
        *(_QWORD *)(ByteOffset.QuadPart + 32) = IopTranslatorHandlerCm;
        *(_QWORD *)(ByteOffset.QuadPart + 40) = IopTranslatorHandlerIo;
        goto LABEL_29;
      }
      goto LABEL_6;
    }
    v54 = CurrentStackLocation->Parameters.Read.ByteOffset;
    RootDevices = 0;
    *(_QWORD *)(v54.QuadPart + 32) = ArbArbiterHandler;
    switch ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists )
    {
      case 1u:
        v55 = &IopRootPortArbiter;
        break;
      case 2u:
        v55 = &IopRootIrqArbiter;
        break;
      case 3u:
        goto LABEL_125;
      case 4u:
        v55 = &IopRootDmaArbiter;
        break;
      case 6u:
        v55 = &IopRootBusNumberArbiter;
        break;
      case 7u:
LABEL_125:
        v55 = &IopRootMemArbiter;
        break;
      default:
        RootDevices = -1073741811;
        goto LABEL_6;
    }
    *(_QWORD *)(v54.QuadPart + 8) = v55;
    goto LABEL_6;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( a1 )
      v21 = a1->DeviceObjectExtension->DeviceNode;
    else
      v21 = 0LL;
    v22 = CurrentStackLocation->Parameters.Create.SecurityContext;
    LODWORD(v22->SecurityQos) = 65600;
    v23 = (_DWORD *)&v22->AccessState + 1;
    if ( a1 == *((struct _DEVICE_OBJECT **)IopRootDeviceNode + 4) )
    {
      HIDWORD(v22->SecurityQos) |= 0x1C0u;
      *v23 = 0;
    }
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v22->DesiredAccess = 0;
    v22->FullCreateOptions = 1;
    *(__m128i *)&v22[1].SecurityQos = si128;
    v22[1].DesiredAccess = _mm_cvtsi128_si32(si128);
    if ( *v23 == -1 )
    {
      v57 = 4;
      if ( (int)CmGetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  v21[6],
                  0LL,
                  0x11u,
                  (__int64)&v58,
                  (__int64)&v59,
                  (__int64)&v57,
                  0) >= 0
        && v58 == 4
        && v57 == 4 )
      {
        *v23 = v59;
      }
    }
    goto LABEL_29;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v25 = 0;
    v26 = 4;
LABEL_39:
    RootDevices = PnpGetDeviceResourcesFromRegistry((__int64)a1, v25, v26, v56, &v57);
    if ( RootDevices != -1073741772 )
      goto LABEL_37;
    goto LABEL_29;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v25 = 1;
    v26 = 2;
    goto LABEL_39;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 7;
    if ( v15 )
    {
      if ( v15 == 3 )
        goto LABEL_29;
LABEL_5:
      Information = (void *)a2->IoStatus.Information;
      RootDevices = a2->IoStatus.Status;
      goto LABEL_6;
    }
    if ( a1 == *((struct _DEVICE_OBJECT **)IopRootDeviceNode + 4) )
      goto LABEL_5;
    RootDevices = a2->IoStatus.Status;
    if ( RootDevices >= 0 )
    {
      if ( a2->IoStatus.Information )
        goto LABEL_5;
    }
    if ( a1 )
      v3 = a1->DeviceObjectExtension->DeviceNode;
    Length = CurrentStackLocation->Parameters.Read.Length;
    if ( Length )
    {
      v17 = Length - 1;
      if ( !v17 || (v18 = v17 - 1) == 0 )
      {
        if ( RootDevices != -1073741637 )
          goto LABEL_6;
        RootDevices = PiGetDeviceRegProperty(
                        v3[6],
                        7LL,
                        7,
                        (unsigned int)(CurrentStackLocation->Parameters.Read.Length != 1) + 2,
                        0LL,
                        &v57);
        if ( RootDevices == -1073741789 )
        {
          v38 = (char *)ExAllocatePool2(0x100uLL);
          if ( !v38 )
            goto LABEL_23;
          RootDevices = PiGetDeviceRegProperty(
                          v3[6],
                          v37,
                          7,
                          (unsigned int)(CurrentStackLocation->Parameters.Read.Length != 1) + 2,
                          v38,
                          &v57);
          v39 = v38;
          if ( RootDevices >= 0 )
          {
            v40 = v57;
            v41 = 0LL;
            if ( v38 < &v38[v57 & 0xFFFFFFFE] )
            {
              do
              {
                v42 = *(_WORD *)v39;
                if ( *(_WORD *)v39 )
                {
                  if ( (unsigned __int16)(v42 - 32) > 0x5Fu || v42 == 44 )
                  {
                    *(_WORD *)v39 = 63;
                    v40 = v57;
                  }
                }
                else
                {
                  if ( v41 && v39 == v41 + 2 )
                    break;
                  v41 = v39;
                }
                v39 += 2;
              }
              while ( v39 < &v38[v40 & 0xFFFFFFFE] );
            }
            Information = v38;
            goto LABEL_6;
          }
          ExFreePoolWithTag(v38, 0);
        }
        if ( RootDevices != -1073741275 )
          goto LABEL_6;
        goto LABEL_5;
      }
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 != 2 )
        {
          Information = (void *)a2->IoStatus.Information;
          goto LABEL_6;
        }
        v20 = (wchar_t *)ExAllocatePool2(0x100uLL);
        if ( v20 )
        {
          Information = v20;
          wcscpy(v20, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
          RootDevices = 0;
          goto LABEL_6;
        }
        goto LABEL_23;
      }
    }
    v43 = (_WORD *)ExAllocatePool2(0x100uLL);
    if ( !v43 )
      goto LABEL_23;
    v44 = 0;
    v45 = (_WORD *)v3[6];
    Information = v43;
    RootDevices = 0;
    if ( CurrentStackLocation->Parameters.Read.Length )
    {
      while ( *v45 )
      {
        if ( *v45 == 92 && ++v44 == 2 )
        {
          v47 = (char *)(v45 + 1);
          if ( *(_WORD *)v47 )
          {
            v48 = *(_WORD *)v47;
            v49 = v47 - (char *)v43;
            do
            {
              *v43++ = v48;
              v48 = *(_WORD *)((char *)v43 + v49);
            }
            while ( v48 );
          }
          break;
        }
        ++v45;
      }
    }
    else
    {
      for ( i = *v45; *v45; i = *v45 )
      {
        if ( i == 92 && ++v44 == 2 )
          break;
        ++v45;
        *v43++ = i;
      }
    }
  }
  else
  {
    if ( CurrentStackLocation->Parameters.Read.Length != 1 || a2->IoStatus.Information )
      goto LABEL_5;
    if ( a1 )
      v34 = a1->DeviceObjectExtension->DeviceNode;
    else
      v34 = 0LL;
    PiGetDeviceRegProperty(v34[6], 7LL, 1, 14, 0LL, &v57);
    if ( !v57 )
      goto LABEL_63;
    Information = (void *)ExAllocatePool2(0x100uLL);
    if ( !Information )
      goto LABEL_23;
    RootDevices = PiGetDeviceRegProperty(v34[6], v50, 1, 14, Information, &v57);
    if ( RootDevices < 0 )
    {
      if ( RootDevices == -1073741275 )
        RootDevices = -1073741772;
      ExFreePoolWithTag(Information, 0);
      Information = 0LL;
    }
  }
LABEL_6:
  IopPnPCompleteRequest(a2, RootDevices, (ULONG_PTR)Information);
  return (unsigned int)RootDevices;
}
