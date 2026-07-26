/*
 * XREFs of ?ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016EDD0
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140185800 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14016A220 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x14016B050 (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 */

void __fastcall ndisMNotifyMachineName(struct _NDIS_MINIPORT_BLOCK *a1)
{
  PVOID v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rcx
  HANDLE v5; // rdi
  const wchar_t *v6; // rax
  int v7; // r15d
  int v8; // edx
  __int16 v9; // cx
  NTSTATUS v10; // eax
  const wchar_t *v11; // rax
  __int16 v12; // si
  NTSTATUS v13; // eax
  HANDLE v14; // rcx
  _UNICODE_STRING v15; // [rsp+40h] [rbp-9h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+7h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+67h] BYREF
  PVOID P; // [rsp+B8h] [rbp+6Fh] BYREF

  if ( a1->MediaType == NdisMedium802_3
    && (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x80u) == 0LL
    && a1->MajorNdisVersion <= 6u
    && (a1->MajorNdisVersion != 6 || a1->MinorNdisVersion < 0x51u)
    && !RtlIsStateSeparationEnabled() )
  {
    v2 = 0LL;
    v3 = 0x7FFFLL;
    v4 = 0x7FFFLL;
    v5 = 0LL;
    v6 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\Tcpip\\Parameters";
    v15 = 0LL;
    do
    {
      if ( !*v6 )
        break;
      ++v6;
      --v4;
    }
    while ( v4 );
    v7 = -1073741811;
    v8 = -1073741811;
    if ( v4 )
    {
      v8 = 0;
      v9 = 2 * v4;
      v15.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\Tcpip\\Parameters";
      v15.Length = -2 - v9;
      v15.MaximumLength = -v9;
    }
    if ( v8 >= 0 )
    {
      KeyHandle = 0LL;
      ObjectAttributes.ObjectName = &v15;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v10 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
      v5 = KeyHandle;
      if ( !v10 )
      {
        P = 0LL;
        v15 = 0LL;
        v11 = L"HostName";
        do
        {
          if ( !*v11 )
            break;
          ++v11;
          --v3;
        }
        while ( v3 );
        if ( v3 )
        {
          v7 = 0;
          v12 = 2 * v3;
          v15.Buffer = L"HostName";
          v15.Length = -2 - v12;
          v15.MaximumLength = -v12;
        }
        if ( v7 >= 0 )
        {
          v13 = KRegKey::QueryValueString(&KeyHandle, &v15, &P);
          v2 = P;
          if ( !v13 )
          {
            ndisMDoMiniportOp(a1, 0, 0x1021Au, *((void **)P + 1), *(unsigned __int16 *)P, 1u, 0);
            ExFreePoolWithTag(v2, 0x7274534Bu);
            v14 = KeyHandle;
            if ( !KeyHandle )
              return;
LABEL_28:
            ZwClose(v14);
            return;
          }
          v5 = KeyHandle;
        }
        if ( v2 )
          ExFreePoolWithTag(v2, 0x7274534Bu);
      }
    }
    if ( !v5 )
      return;
    v14 = v5;
    goto LABEL_28;
  }
}
