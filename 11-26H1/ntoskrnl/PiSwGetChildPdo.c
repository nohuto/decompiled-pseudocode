/*
 * XREFs of PiSwGetChildPdo @ 0x140A8BC18
 * Callers:
 *     PipEnumerateCompleted @ 0x1409AF3E4 (PipEnumerateCompleted.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     IoDeleteDevice @ 0x140426AC0 (IoDeleteDevice.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     IoInvalidateDeviceRelations @ 0x1404CC3D0 (IoInvalidateDeviceRelations.c)
 *     McTemplateK0zzq_EtwWriteTransfer @ 0x1405DEA0C (McTemplateK0zzq_EtwWriteTransfer.c)
 *     McTemplateK0zztt_EtwWriteTransfer @ 0x1405DEAEC (McTemplateK0zztt_EtwWriteTransfer.c)
 *     McTemplateK0zzzd_EtwWriteTransfer @ 0x1405DECE8 (McTemplateK0zzzd_EtwWriteTransfer.c)
 *     ObSetSecurityObjectByPointer @ 0x1408F2970 (ObSetSecurityObjectByPointer.c)
 *     IoCreateDevice @ 0x14091B9C0 (IoCreateDevice.c)
 *     PnpConcatPWSTR @ 0x140953094 (PnpConcatPWSTR.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14095A580 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwProcessRemove @ 0x1409AD484 (PiSwProcessRemove.c)
 *     PiSwFindPdoAssociation @ 0x140A8C4E8 (PiSwFindPdoAssociation.c)
 *     PiSwAddPdoAssociation @ 0x140B29854 (PiSwAddPdoAssociation.c)
 *     PiSwMakePdoInactive @ 0x140B40844 (PiSwMakePdoInactive.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

PDEVICE_OBJECT __fastcall PiSwGetChildPdo(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT v4; // rbx
  WCHAR *v5; // r14
  struct _DEVICE_OBJECT *v6; // rdx
  __int64 v7; // rbp
  char v8; // r15
  __int64 PdoAssociation; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  UNICODE_STRING *p_DestinationString; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rsi
  __int64 v17; // r8
  __int16 v18; // ax
  char v19; // si
  __int64 v20; // rcx
  NTSTATUS v21; // eax
  _DWORD *DeviceExtension; // rsi
  __int64 v23; // rcx
  const wchar_t *v24; // rcx
  const wchar_t *v25; // r9
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF
  PCWSTR SourceString; // [rsp+98h] [rbp+10h] BYREF
  PDEVICE_OBJECT v30; // [rsp+A0h] [rbp+18h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v30 = 0LL;
  v6 = a1;
  SourceString = 0LL;
  v7 = a2 - 96;
  DestinationString = 0LL;
  if ( (byte_140EF412C & 0x40) != 0 )
  {
    McTemplateK0zzzd_EtwWriteTransfer(
      *(_QWORD *)(a2 + 16),
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_GetChildPdo_Start,
      a3,
      *(const wchar_t **)(a2 - 88),
      *(const wchar_t **)(a2 - 80),
      *(const wchar_t **)(*(_QWORD *)(a2 + 16) + 8LL),
      *(_DWORD *)(a2 - 92));
    v6 = a1;
  }
  v8 = 1;
  LOBYTE(a3) = 1;
  PdoAssociation = PiSwFindPdoAssociation(a2 - 96, v6, a3);
  v11 = PdoAssociation;
  if ( (*(_DWORD *)(a2 - 92) & 2) == 0 )
  {
    if ( PdoAssociation )
    {
      v4 = *(PDEVICE_OBJECT *)(PdoAssociation + 40);
      *((_DWORD *)v4->DeviceExtension + 2) = *((_DWORD *)v4->DeviceExtension + 2) & 0xFFFFFFB7 | 8;
      v8 = 0;
LABEL_26:
      v19 = v8;
      goto LABEL_31;
    }
    if ( v10 == *((_QWORD *)IopRootDeviceNode + 4) )
    {
      if ( *(_QWORD *)(a2 - 16) )
      {
        p_DestinationString = (UNICODE_STRING *)(a2 - 24);
        if ( *(_WORD *)(a2 - 24) >= 2u )
        {
LABEL_12:
          v16 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)p_DestinationString, 0x746C6644u);
          if ( v16 )
          {
            if ( (byte_140EF412C & 0x40) != 0 )
              McTemplateK0zzq_EtwWriteTransfer(
                v15,
                v14,
                v17,
                *(const wchar_t **)(a2 - 88),
                *(const wchar_t **)(a2 - 80),
                *(_WORD *)(a2 + 104));
            ObfDereferenceObject(v16);
            if ( !*(_WORD *)(a2 + 104) )
              IoInvalidateDeviceRelations(a1, SingleBusRelations);
            v18 = *(_WORD *)(a2 + 104);
            if ( v18 != -1 )
              *(_WORD *)(a2 + 104) = v18 + 1;
            v19 = 0;
            goto LABEL_31;
          }
          goto LABEL_20;
        }
      }
      v13 = PnpConcatPWSTR(
              0xC8uLL,
              0x57706E50u,
              (PVOID *)&SourceString,
              3LL,
              *(_QWORD *)(a2 - 88),
              L"\\",
              *(_QWORD *)(a2 - 80));
      v5 = (WCHAR *)SourceString;
      if ( v13 >= 0 && RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0 )
      {
        p_DestinationString = &DestinationString;
        goto LABEL_12;
      }
    }
LABEL_20:
    v20 = *(_QWORD *)(a2 + 24);
    *(_WORD *)(a2 + 104) = 0;
    if ( v20 )
      PiSwMakePdoInactive(v20);
    v19 = 0;
    v21 = IoCreateDevice(PiSwDeviceDriverObject, 0x10u, 0LL, 0x22u, 0x80u, 0, &v30);
    v4 = v30;
    if ( v21 < 0 )
      goto LABEL_31;
    DeviceExtension = v30->DeviceExtension;
    *(_OWORD *)DeviceExtension = 0LL;
    if ( *(_QWORD *)(a2 + 56) && (int)ObSetSecurityObjectByPointer((__int64)v4) < 0 )
    {
      IoDeleteDevice(v4);
      v4 = 0LL;
    }
    else
    {
      *(_QWORD *)DeviceExtension = v7;
      _InterlockedAdd((volatile signed __int32 *)v7, 1u);
      *(_QWORD *)(a2 + 24) = v4;
      DeviceExtension[2] |= 8u;
      v4->Flags &= ~0x80u;
      PiSwAddPdoAssociation(a2 - 96, a1, v4);
    }
    goto LABEL_26;
  }
  v19 = 0;
  if ( !PdoAssociation )
    goto LABEL_35;
  v23 = *(_QWORD *)(*(_QWORD *)(PdoAssociation + 40) + 64LL);
  *(_DWORD *)(v23 + 8) &= ~8u;
  if ( (*(_DWORD *)(v23 + 8) & 4) == 0 )
    goto LABEL_35;
  PiSwProcessRemove(*(_QWORD *)(PdoAssociation + 40), 0);
  v7 = 0LL;
LABEL_31:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x57706E50u);
  if ( v4 )
    PsReferenceSiloContext(v4);
LABEL_35:
  if ( (byte_140EF412C & 0x40) != 0 )
  {
    if ( v7 )
    {
      v24 = *(const wchar_t **)(v7 + 16);
      v25 = *(const wchar_t **)(v7 + 8);
    }
    else
    {
      v25 = &word_140B8A320;
      v24 = &word_140B8A320;
    }
    McTemplateK0zztt_EtwWriteTransfer(
      (__int64)v24,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_GetChildPdo_Stop,
      v11,
      v25,
      v24,
      v4 != 0LL,
      v19);
  }
  return v4;
}
