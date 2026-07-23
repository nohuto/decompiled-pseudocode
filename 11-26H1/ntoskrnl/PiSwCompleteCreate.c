/*
 * XREFs of PiSwCompleteCreate @ 0x1409B1860
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x1409AE200 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x14041DAC0 (RtlStringCbCopyW.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x140498338 (McTemplateK0zzd_EtwWriteTransfer.c)
 *     McTemplateK0zzz_EtwWriteTransfer @ 0x1405DEBD4 (McTemplateK0zzz_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PnpAllocatePWSTR @ 0x140951520 (PnpAllocatePWSTR.c)
 *     PnpFreeDevPropertyArray @ 0x1409516F0 (PnpFreeDevPropertyArray.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x140962ED4 (_CmGetDeviceInterfaceClassGuid.c)
 *     IoRegisterDeviceInterface @ 0x1409AB500 (IoRegisterDeviceInterface.c)
 *     PiSwLock @ 0x1409AFD6C (PiSwLock.c)
 *     PiSwInterfaceFree @ 0x1409B1D4C (PiSwInterfaceFree.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     PiSwPropertySet @ 0x140A17FD4 (PiSwPropertySet.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x140A18858 (_CmGetDeviceInterfaceReferenceString.c)
 *     PiSwInterfaceCreate @ 0x140A8C6B4 (PiSwInterfaceCreate.c)
 *     PnpCopyDevPropertyArray @ 0x140A8D6D0 (PnpCopyDevPropertyArray.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwCompleteCreate(_QWORD *a1)
{
  __int64 v2; // r15
  const wchar_t **v3; // rsi
  PVOID *v4; // r14
  unsigned int v5; // r12d
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *v8; // rax
  __int64 v9; // rdi
  void *v10; // rcx
  wchar_t *v11; // rcx
  unsigned __int64 v12; // rdx
  signed int PWSTR; // ebx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 *j; // rsi
  __int64 v17; // r13
  __int64 v18; // rcx
  __int64 v19; // r8
  PVOID v20; // rcx
  __int64 v21; // rax
  PVOID v22; // rcx
  const WCHAR *v23; // rsi
  struct _DEVICE_OBJECT *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rsi
  _WORD *v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 i; // r8
  unsigned __int64 v30; // r8
  PVOID *v31; // rcx
  PVOID **v32; // rax
  __int64 v33; // rcx
  int DeviceInterfaceReferenceString; // eax
  char v35; // bl
  __int64 v36; // [rsp+38h] [rbp-D0h]
  __int64 v37; // [rsp+40h] [rbp-C8h] BYREF
  PVOID v38; // [rsp+48h] [rbp-C0h] BYREF
  PVOID *v39; // [rsp+50h] [rbp-B8h]
  __int64 v40; // [rsp+58h] [rbp-B0h] BYREF
  const wchar_t **v41; // [rsp+60h] [rbp-A8h]
  __int64 v42; // [rsp+68h] [rbp-A0h] BYREF
  PVOID *v43; // [rsp+70h] [rbp-98h] BYREF
  PVOID Object; // [rsp+78h] [rbp-90h]
  PCWSTR SourceString; // [rsp+80h] [rbp-88h] BYREF
  PVOID **v46; // [rsp+88h] [rbp-80h] BYREF
  __int64 v47; // [rsp+90h] [rbp-78h]
  PVOID P[2]; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v50; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v51; // [rsp+C8h] [rbp-40h]
  __int128 v52; // [rsp+D8h] [rbp-30h]
  GUID InterfaceClassGuid; // [rsp+E8h] [rbp-20h] BYREF
  WCHAR v54[264]; // [rsp+F8h] [rbp-10h] BYREF

  v39 = &v38;
  v43 = 0LL;
  LODWORD(v37) = 0;
  v38 = &v38;
  v2 = 0LL;
  LODWORD(v42) = 0;
  v3 = 0LL;
  v36 = 0LL;
  v4 = 0LL;
  v46 = 0LL;
  v5 = 0;
  Object = 0LL;
  InterfaceClassGuid = 0LL;
  LODWORD(v40) = 0;
  DestinationString = 0LL;
  *(_OWORD *)P = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  PiSwLock();
  v8 = (__int64 *)a1[8];
  v9 = *v8;
  v47 = v9;
  if ( !v9 )
  {
    PWSTR = -1073741811;
    v17 = 0LL;
    goto LABEL_15;
  }
  *((_DWORD *)v8 + 2) &= 0xFFFFFFF9;
  v3 = (const wchar_t **)(*(_QWORD *)(a1[39] + 40LL) + 40LL);
  v41 = v3;
  if ( (byte_140EF412C & 0x40) != 0 )
    McTemplateK0zzz_EtwWriteTransfer(
      v6,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_DeviceEnumerated,
      v7,
      *(const wchar_t **)(v9 + 8),
      *(const wchar_t **)(v9 + 16),
      v3[1]);
  v10 = *(void **)(v9 + 80);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0x57706E50u);
    *(_OWORD *)(v9 + 72) = 0LL;
  }
  v11 = (wchar_t *)v3[1];
  v12 = ((unsigned __int64)*(unsigned __int16 *)v3 >> 1) + 1;
  SourceString = 0LL;
  PWSTR = PnpAllocatePWSTR(v11, v12, 0x57706E50u, (PVOID *)&SourceString);
  if ( PWSTR < 0 )
  {
    v17 = 0LL;
    goto LABEL_15;
  }
  RtlInitUnicodeString((PUNICODE_STRING)(v9 + 72), SourceString);
  *(_DWORD *)(v9 + 4) |= 4u;
  if ( *(_QWORD *)(v9 + 88) )
    goto LABEL_44;
  v15 = *(_QWORD *)(v9 + 144);
  if ( v15 )
  {
    if ( _InterlockedExchange64((volatile __int64 *)(v15 + 104), 0LL) )
    {
      v2 = *(_QWORD *)(v9 + 144);
      *(_QWORD *)(v9 + 144) = 0LL;
      if ( v2 )
      {
        v26 = *(_QWORD *)(v2 + 184);
        PWSTR = RtlStringCbCopyW(
                  *(NTSTRSAFE_PWSTR *)(v2 + 24),
                  *(unsigned int *)(v26 + 8),
                  *(NTSTRSAFE_PCWSTR *)(v9 + 80));
        if ( PWSTR >= 0 )
        {
          v27 = *(_WORD **)(v2 + 24);
          if ( !v27 )
          {
            PWSTR = -1073741811;
LABEL_14:
            v3 = v41;
            v17 = 0LL;
            v36 = 0LL;
            goto LABEL_15;
          }
          v28 = (unsigned __int64)*(unsigned int *)(v26 + 8) >> 1;
          for ( i = v28; v28; --v28 )
          {
            if ( !*v27 )
              break;
            ++v27;
          }
          PWSTR = v28 == 0 ? 0xC000000D : 0;
          if ( v28 )
            v30 = i - v28;
          else
            v30 = 0LL;
          if ( !v28 )
            goto LABEL_14;
          v14 = 2 * v30;
          v36 = v14;
          goto LABEL_9;
        }
        v3 = v41;
LABEL_44:
        v17 = 0LL;
        goto LABEL_15;
      }
    }
  }
LABEL_9:
  LODWORD(v40) = *(_DWORD *)(v9 + 164);
  v51 = 0x19uLL;
  *((_QWORD *)&v52 + 1) = &v40;
  v50 = DEVPKEY_Device_CreatorProcessId;
  *(_QWORD *)&v52 = 0x400000007LL;
  PWSTR = PnpCopyDevPropertyArray(*(_DWORD *)(v9 + 176), *(_QWORD *)(v9 + 168), v14, (unsigned int)&v37, (__int64)&v43);
  if ( PWSTR >= 0 )
  {
    for ( j = *(__int64 **)(v9 + 184); j != (__int64 *)(v9 + 184); j = (__int64 *)*j )
    {
      PWSTR = PiSwInterfaceCreate(j[2], j[3], *((unsigned int *)j + 8), &v46);
      if ( PWSTR < 0 )
        goto LABEL_13;
      v31 = v39;
      if ( *v39 != &v38 )
LABEL_29:
        __fastfail(3u);
      v32 = v46;
      *v46 = &v38;
      v32[1] = v31;
      *v31 = v32;
      v39 = (PVOID *)v32;
    }
    Object = a1;
    PsReferenceSiloContext(a1);
  }
LABEL_13:
  v4 = v43;
  v5 = v37;
  v3 = v41;
  v17 = v36;
LABEL_15:
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
  if ( PWSTR >= 0 )
  {
    if ( !*((_QWORD *)&v52 + 1) || (PWSTR = PiSwPropertySet(v3[1], 1LL, &v50, 1LL), PWSTR >= 0) )
    {
      if ( !v4 || (PWSTR = PiSwPropertySet(v3[1], 1LL, v4, v5), PWSTR >= 0) )
      {
        v23 = (const WCHAR *)v38;
        if ( v38 != &v38 )
        {
          v24 = (struct _DEVICE_OBJECT *)Object;
          do
          {
            PWSTR = CmGetDeviceInterfaceClassGuid(v18, *((const WCHAR **)v23 + 2), (__int64)&InterfaceClassGuid);
            if ( PWSTR < 0 )
              break;
            DeviceInterfaceReferenceString = CmGetDeviceInterfaceReferenceString(
                                               v33,
                                               *((_QWORD *)v23 + 2),
                                               v54,
                                               260LL,
                                               &v42);
            PWSTR = DeviceInterfaceReferenceString;
            if ( DeviceInterfaceReferenceString == -1073741772 )
            {
              v35 = 0;
            }
            else
            {
              if ( DeviceInterfaceReferenceString < 0 )
                break;
              v35 = 1;
              RtlInitUnicodeString(&DestinationString, v54);
            }
            PWSTR = IoRegisterDeviceInterface(
                      v24,
                      &InterfaceClassGuid,
                      (PUNICODE_STRING)((unsigned __int64)&DestinationString & -(__int64)(v35 != 0)),
                      (PUNICODE_STRING)P);
            if ( PWSTR < 0 )
              break;
            PWSTR = PiSwPropertySet(*((_QWORD *)v23 + 2), 3LL, *((_QWORD *)v23 + 3), *((unsigned int *)v23 + 8));
            if ( PWSTR < 0 )
              break;
            v23 = *(const WCHAR **)v23;
            RtlFreeAnsiString((PUNICODE_STRING)P);
          }
          while ( v23 != (const WCHAR *)&v38 );
          v9 = v47;
          v17 = v36;
        }
      }
    }
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v4 )
    PnpFreeDevPropertyArray(v5, v4, 0x57706E50u);
  while ( 1 )
  {
    v20 = v38;
    if ( v38 == &v38 )
      break;
    if ( *((PVOID **)v38 + 1) != &v38 )
      goto LABEL_29;
    v21 = *(_QWORD *)v38;
    if ( *(PVOID *)(*(_QWORD *)v38 + 8LL) != v38 )
      goto LABEL_29;
    v38 = *(PVOID *)v38;
    *(_QWORD *)(v21 + 8) = &v38;
    PiSwInterfaceFree(v20);
  }
  v22 = P[1];
  if ( P[1] )
    ExFreePool(P[1]);
  if ( v2 )
  {
    v25 = v17 + 2;
    if ( PWSTR < 0 )
      v25 = 0LL;
    *(_QWORD *)(v2 + 56) = v25;
    *(_DWORD *)(v2 + 48) = PWSTR;
    IofCompleteRequest((PIRP)v2, 0);
  }
  if ( v9 && (byte_140EF412C & 0x40) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      (__int64)v22,
      (__int64)KMPnPEvt_SwDevice_DeviceEnumerated_Status,
      v19,
      *(const wchar_t **)(v9 + 8),
      *(const wchar_t **)(v9 + 16),
      PWSTR);
}
