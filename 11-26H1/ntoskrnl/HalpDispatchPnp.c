/*
 * XREFs of HalpDispatchPnp @ 0x140B1CA40
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     HalpPassIrpFromFdoToPdo @ 0x1404F453C (HalpPassIrpFromFdoToPdo.c)
 *     HalpInitializeLateSystemActions @ 0x14057A9AC (HalpInitializeLateSystemActions.c)
 *     HalpQueryIdFdo @ 0x140784BC0 (HalpQueryIdFdo.c)
 *     HalpQueryIdPdo @ 0x140784C7C (HalpQueryIdPdo.c)
 *     HalpQueryResources @ 0x140784D58 (HalpQueryResources.c)
 *     HalpQueryAcpiResourceRequirements @ 0x1407886E4 (HalpQueryAcpiResourceRequirements.c)
 *     HalpQueryDeviceRelations @ 0x140B1CC04 (HalpQueryDeviceRelations.c)
 *     HalpQueryInterface @ 0x140B1CCAC (HalpQueryInterface.c)
 *     HalpInitSystemHelper @ 0x140BEF9CC (HalpInitSystemHelper.c)
 */

NTSTATUS __fastcall HalpDispatchPnp(__int64 a1, IRP *a2)
{
  _DWORD *v2; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int MinorFunction; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int Status; // ebx
  unsigned int DeviceRelations; // eax
  int Interface; // eax
  unsigned int v16; // ecx
  bool v17; // zf
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  PIO_SECURITY_CONTEXT SecurityContext; // rcx
  unsigned int v24; // eax

  v2 = *(_DWORD **)(a1 + 64);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( *v2 == 192 )
  {
    MinorFunction = CurrentStackLocation->MinorFunction;
    if ( MinorFunction == 7 )
    {
      DeviceRelations = HalpQueryDeviceRelations(
                          a1,
                          CurrentStackLocation->Parameters.Read.Length,
                          &a2->IoStatus.Information);
LABEL_13:
      Status = DeviceRelations;
      goto LABEL_14;
    }
    if ( MinorFunction <= 7 )
    {
      if ( !CurrentStackLocation->MinorFunction )
      {
        if ( v2[8] == 129 )
        {
          HalpInitializeLateSystemActions();
          Status = 0;
          HalpInitSystemHelper(25LL, 26LL, 0LL);
          goto LABEL_11;
        }
        goto LABEL_10;
      }
      v7 = MinorFunction - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( !v8 )
          goto LABEL_10;
        v9 = v8 - 1;
        if ( !v9 )
          goto LABEL_10;
        v10 = v9 - 1;
        if ( !v10 )
          goto LABEL_10;
        v11 = v10 - 1;
        if ( !v11 )
          goto LABEL_10;
        v17 = v11 == 1;
LABEL_43:
        if ( v17 )
          goto LABEL_10;
LABEL_15:
        Status = a2->IoStatus.Status;
        goto LABEL_16;
      }
      Status = v2[8] != 132 ? 0xC0000001 : 0;
LABEL_14:
      if ( Status != -1073741637 )
        goto LABEL_11;
      goto LABEL_15;
    }
    v16 = MinorFunction - 8;
    if ( !v16 )
    {
      DeviceRelations = HalpQueryInterface(
                          a1,
                          CurrentStackLocation->Parameters.WMI.ProviderId,
                          CurrentStackLocation->Parameters.QueryInterface.Version,
                          CurrentStackLocation->Parameters.CreatePipe.Parameters,
                          CurrentStackLocation->Parameters.QueryInterface.Size,
                          CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart,
                          (__int64)&a2->IoStatus.Information);
      goto LABEL_13;
    }
    v18 = v16 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( !v19 )
      {
        DeviceRelations = HalpQueryResources(a1, &a2->IoStatus.Information);
        goto LABEL_13;
      }
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 8;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( !v22 )
          {
LABEL_10:
            Status = 0;
LABEL_11:
            a2->IoStatus.Status = Status;
LABEL_16:
            IofCompleteRequest(a2, 0);
            return Status;
          }
          v17 = v22 == 2;
          goto LABEL_43;
        }
        DeviceRelations = HalpQueryIdPdo(a1, CurrentStackLocation->Parameters.Read.Length, &a2->IoStatus.Information);
        goto LABEL_13;
      }
      if ( v2[8] == 129 )
      {
        DeviceRelations = HalpQueryAcpiResourceRequirements(&a2->IoStatus.Information);
        goto LABEL_13;
      }
      if ( v2[8] != 130 && (unsigned int)(v2[8] - 131) >= 2 )
      {
LABEL_49:
        Status = -1073741637;
        goto LABEL_14;
      }
    }
    else
    {
      SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
      if ( WORD1(SecurityContext->SecurityQos) != 1 )
        goto LABEL_49;
      v24 = HIDWORD(SecurityContext->SecurityQos) & 0xFFFFFEC3;
      *(PSECURITY_QUALITY_OF_SERVICE *)((char *)&SecurityContext[2].SecurityQos + 4) = 0LL;
      HIDWORD(SecurityContext[2].AccessState) = 0;
      HIDWORD(SecurityContext->SecurityQos) = v24 | 0xC0;
      LODWORD(SecurityContext->AccessState) = -1;
      HIDWORD(SecurityContext->AccessState) = -1;
      HIDWORD(SecurityContext[1].AccessState) = 4;
      SecurityContext[1].DesiredAccess = 4;
      SecurityContext->FullCreateOptions = 1;
    }
    Status = 0;
    goto LABEL_14;
  }
  if ( *v2 != 193 )
  {
    Status = -1073741808;
    goto LABEL_11;
  }
  switch ( CurrentStackLocation->MinorFunction )
  {
    case 7u:
      Interface = HalpQueryDeviceRelations(a1, CurrentStackLocation->Parameters.Read.Length, &a2->IoStatus.Information);
      break;
    case 8u:
      Interface = HalpQueryInterface(
                    a1,
                    CurrentStackLocation->Parameters.WMI.ProviderId,
                    CurrentStackLocation->Parameters.QueryInterface.Version,
                    CurrentStackLocation->Parameters.CreatePipe.Parameters,
                    CurrentStackLocation->Parameters.QueryInterface.Size,
                    CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart,
                    (__int64)&a2->IoStatus.Information);
      break;
    case 0x13u:
      Interface = HalpQueryIdFdo(
                    (unsigned int)CurrentStackLocation->MinorFunction - 8,
                    CurrentStackLocation->Parameters.Read.Length,
                    &a2->IoStatus.Information);
      break;
    default:
      return HalpPassIrpFromFdoToPdo(a1, a2);
  }
  Status = Interface;
  if ( Interface < 0 && Interface != -1073741637 )
    goto LABEL_11;
  if ( Interface != -1073741637 )
    a2->IoStatus.Status = Interface;
  return HalpPassIrpFromFdoToPdo(a1, a2);
}
