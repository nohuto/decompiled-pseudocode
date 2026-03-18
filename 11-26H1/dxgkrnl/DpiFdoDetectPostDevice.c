/*
 * XREFs of DpiFdoDetectPostDevice @ 0x1404023B8
 * Callers:
 *     DpiAddDevice @ 0x14023C1E0 (DpiAddDevice.c)
 *     DpiFdoSetAdapterPowerState @ 0x14042D4FC (DpiFdoSetAdapterPowerState.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x140402768 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiDecodeResourceDescriptorLength @ 0x140423D08 (DpiDecodeResourceDescriptorLength.c)
 */

__int64 __fastcall DpiFdoDetectPostDevice(__int64 a1, _BYTE *a2)
{
  __int64 v4; // rdi
  unsigned int v5; // r14d
  const void *v6; // r13
  PIRP v7; // rax
  NTSTATUS Status; // ebx
  unsigned int *Information; // rdi
  unsigned int v11; // ebx
  unsigned int *v12; // r12
  unsigned int *v13; // rcx
  __int64 v14; // r15
  _QWORD v15[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-B0h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+80h] [rbp-80h] BYREF
  int v19; // [rsp+88h] [rbp-78h]
  const wchar_t *v20; // [rsp+90h] [rbp-70h]
  _QWORD *v21; // [rsp+98h] [rbp-68h]
  int v22; // [rsp+A0h] [rbp-60h]
  _QWORD *v23; // [rsp+A8h] [rbp-58h]
  int v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  int v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  __int128 v28; // [rsp+D0h] [rbp-30h]
  __int128 v29; // [rsp+E0h] [rbp-20h]
  _QWORD v30[20]; // [rsp+F0h] [rbp-10h] BYREF

  v15[1] = a1;
  memset(v30, 0, sizeof(v30));
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( *(_BYTE *)(v4 + 2722) )
    return 0LL;
  v6 = (const void *)(v4 + 544);
  if ( RtlCompareMemory((const void *)(v4 + 544), &GUID_BUS_VMBUS, 0x10uLL) == 16 || *(_BYTE *)(v4 + 2719) )
  {
LABEL_33:
    *a2 = 1;
    return 0LL;
  }
  *a2 = 0;
  if ( (int)DpiAcquirePostDisplayInfoFromBgfx(v30, 0LL) < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1967;
LABEL_29:
    if ( RtlCompareMemory(v6, &GUID_BUS_TYPE_ACPI, 0x10uLL) != 16 )
      return 0LL;
    if ( *a2 )
      return 0LL;
    LODWORD(v15[0]) = 0;
    v18 = 0LL;
    v20 = L"DisableAutoAcpiPostDeivce";
    v19 = 288;
    v22 = 67108868;
    v21 = v15;
    v24 = 4;
    v23 = v15;
    v25 = 0LL;
    v26 = 0;
    v27 = 0LL;
    v28 = 0LL;
    v29 = 0LL;
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v18, 0LL, 0LL);
    if ( LODWORD(v15[0]) )
      return 0LL;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 2148;
    goto LABEL_33;
  }
  v15[0] = v30[2] + (unsigned int)(LODWORD(v30[1]) * HIDWORD(v30[0]));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v7 = IoBuildSynchronousFsdRequest(0x1Bu, *(PDEVICE_OBJECT *)(v4 + 152), 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( !v7 )
  {
    Status = -1073741670;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 2007;
    return (unsigned int)Status;
  }
  v7->IoStatus.Status = -1073741637;
  v7->Tail.Overlay.CurrentStackLocation[-1].MinorFunction = 10;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 152), v7);
  if ( Status == 259 )
  {
    Status = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( Status )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2040;
      return (unsigned int)Status;
    }
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    Information = (unsigned int *)IoStatusBlock.Information;
    if ( IoStatusBlock.Information )
    {
      v11 = 0;
LABEL_18:
      if ( v11 < *Information )
      {
        v12 = &Information[8 * v11 + 3 + v11];
        while ( 1 )
        {
          if ( v5 >= v12[1] )
          {
            ++v11;
            v5 = 0;
            goto LABEL_18;
          }
          v13 = &v12[4 * v5 + 2 + v5];
          if ( *(_BYTE *)v13 == 3 || *(_BYTE *)v13 == 7 )
          {
            v14 = *(_QWORD *)(v13 + 1);
            if ( v14 <= v30[2] && (unsigned __int64)(v14 + DpiDecodeResourceDescriptorLength()) >= v15[0] )
              break;
          }
          ++v5;
        }
        *a2 = 1;
      }
      ExFreePoolWithTag(Information, 0);
      goto LABEL_29;
    }
  }
  else if ( Status != -1073741637 )
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(v4 + 152), Status);
    WdLogGlobalForLineNumber = 2053;
    return (unsigned int)Status;
  }
  return 0LL;
}
