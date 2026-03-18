/*
 * XREFs of PnpiBiosAddressExtendedToIoDescriptor @ 0x1400B76BC
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1400CE578 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001B3DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x14001E4A0 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_L @ 0x1400385BC (WPP_RECORDER_SF_L.c)
 *     PnpiBiosValidateMemoryMapAttribute @ 0x140055CE8 (PnpiBiosValidateMemoryMapAttribute.c)
 *     WPP_RECORDER_SF_i @ 0x14005D6F0 (WPP_RECORDER_SF_i.c)
 *     ACPIInitIgnoreResourceMapDescriptor @ 0x1400680C8 (ACPIInitIgnoreResourceMapDescriptor.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1400A96D0 (PnpiBiosAddressHandleGlobalFlags.c)
 *     AcpiDiagTraceMemoryReserved @ 0x1400AB0EC (AcpiDiagTraceMemoryReserved.c)
 *     PnpiUpdateResourceList @ 0x1400CF2EC (PnpiUpdateResourceList.c)
 */

NTSTATUS __fastcall PnpiBiosAddressExtendedToIoDescriptor(
        unsigned __int8 *BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        char a4)
{
  int v4; // r14d
  unsigned __int8 v5; // dl
  ULONGLONG v7; // rsi
  char v8; // dl
  __int64 v9; // rcx
  unsigned int v10; // r8d
  __int64 v11; // r10
  NTSTATUS result; // eax
  __int64 v13; // rdi
  int v14; // edx
  PIO_RESOURCE_DESCRIPTOR v15; // rdi
  unsigned int v16; // eax
  ULONGLONG v17; // r13
  ULONG_PTR v18; // r8
  ULONGLONG v19; // rdx
  __int64 v20; // rax
  ULONGLONG v21; // r12
  ULONG_PTR v22; // rax
  int v23; // edx
  ULONGLONG v24; // rax
  unsigned __int16 Flags; // cx
  NTSTATUS v26; // eax
  ULONGLONG MaximumAddress; // [rsp+28h] [rbp-38h]
  ULONGLONG v28; // [rsp+40h] [rbp-20h] BYREF
  PIO_RESOURCE_DESCRIPTOR Descriptor; // [rsp+48h] [rbp-18h] BYREF
  ULONG_PTR v30; // [rsp+50h] [rbp-10h]
  ULONG_PTR Length; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v32; // [rsp+A8h] [rbp+48h]
  unsigned int v33; // [rsp+B0h] [rbp+50h]

  v33 = a3;
  v32 = a2;
  v4 = 0;
  v5 = BugCheckParameter2[4];
  Descriptor = 0LL;
  v7 = 0LL;
  v28 = 0LL;
  if ( (v5 & 1) != 0 && BugCheckParameter2[3] == 1 && (a4 & 1) != 0 )
    return 0;
  if ( !PnpiBiosValidateMemoryMapAttribute() )
  {
    AcpiDiagTraceMemoryReserved(
      BugCheckParameter2[3],
      v8,
      BugCheckParameter2[5],
      *((_QWORD *)BugCheckParameter2 + 1),
      *((_QWORD *)BugCheckParameter2 + 2),
      *((_QWORD *)BugCheckParameter2 + 3),
      *((_QWORD *)BugCheckParameter2 + 4),
      v9);
    return 0;
  }
  if ( !v9 )
    return 0;
  v13 = v11 + 8LL * v10;
  result = PnpiUpdateResourceList(v13, &Descriptor);
  if ( result >= 0 )
  {
    if ( BugCheckParameter2[3] < 2u )
    {
      result = PnpiUpdateResourceList(v13, &v28);
      if ( result < 0 )
        return result;
      v7 = v28;
      *(_BYTE *)(v28 + 1) = -127;
      v15 = (PIO_RESOURCE_DESCRIPTOR)(v7 - 32);
      *(_WORD *)(v7 + 4) = 24576;
    }
    else
    {
      v15 = Descriptor;
    }
    v16 = *(unsigned __int16 *)(BugCheckParameter2 + 1);
    if ( v16 < 0x35 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_L(
          WPP_GLOBAL_Control->DeviceExtension,
          v14,
          13,
          24,
          (__int64)&WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids,
          v16);
      }
      KeBugCheckEx(
        0xA5u,
        0xFuLL,
        (ULONG_PTR)BugCheckParameter2,
        *BugCheckParameter2,
        *(unsigned __int16 *)(BugCheckParameter2 + 1));
    }
    v17 = *((_QWORD *)BugCheckParameter2 + 2);
    v18 = *((_QWORD *)BugCheckParameter2 + 5);
    v19 = *((_QWORD *)BugCheckParameter2 + 3);
    Descriptor = (PIO_RESOURCE_DESCRIPTOR)(*((_QWORD *)BugCheckParameter2 + 1) + 1LL);
    v20 = *((_QWORD *)BugCheckParameter2 + 4);
    Length = v18;
    v28 = v19;
    v21 = v20 + v17;
    if ( v20 )
    {
      ACPIInitIgnoreResourceMapDescriptor(v17, v19, v20);
      v18 = Length;
      v19 = v28;
    }
    if ( (BugCheckParameter2[4] & 0xC) == 0xC )
    {
      v22 = v19 - v17 + 1;
      v30 = v22;
      if ( v22 != v18 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v19) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v19,
            13,
            25,
            (__int64)&WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids);
          v22 = v30;
        }
        v18 = v22;
        Length = v22;
      }
      if ( (v17 & *((_QWORD *)BugCheckParameter2 + 1)) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v19) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v19,
            13,
            26,
            (__int64)&WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids);
          v18 = Length;
        }
        Descriptor = (PIO_RESOURCE_DESCRIPTOR)1;
      }
    }
    if ( v18 > 0xFFFFFFFF && BugCheckParameter2[3] )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v19) = 2;
        WPP_RECORDER_SF_i(
          WPP_GLOBAL_Control->DeviceExtension,
          v19,
          13,
          27,
          (__int64)&WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids,
          v18);
        v18 = Length;
      }
      if ( (AcpiOverrideAttributes & 0x80u) == 0 || v17 < 0xFFFFFFFF )
        KeBugCheckEx(0xA5u, 0x14uLL, (ULONG_PTR)BugCheckParameter2, *BugCheckParameter2, (ULONG_PTR)&Length);
    }
    v23 = BugCheckParameter2[3];
    if ( BugCheckParameter2[3] )
    {
      if ( BugCheckParameter2[3] == 1 )
      {
        v15->u.Port.Alignment = (unsigned int)Descriptor;
        v15->u.Port.Length = Length;
        v24 = v28;
        v15->u.Port.MinimumAddress.QuadPart = v17;
        v15->u.Port.MaximumAddress.QuadPart = v24;
        v15->Type = 1;
        if ( (BugCheckParameter2[5] & 0x20) != 0 )
          *(_WORD *)(v7 + 4) |= 1u;
        *(_DWORD *)(v7 + 8) = (BugCheckParameter2[5] & 0x10 | 8u) >> 3;
        *(_QWORD *)(v7 + 12) = v21;
        if ( (BugCheckParameter2[4] & 2) == 0 )
          v15->Flags |= 0x20u;
        v15->u.Port.Alignment = 1;
      }
      else if ( BugCheckParameter2[3] == 2 )
      {
        v15->Type = 6;
        v15->u.Port.Length = Length;
        v15->u.Port.Alignment = *((_DWORD *)BugCheckParameter2 + 4);
        v15->u.Port.MinimumAddress.LowPart = *((_DWORD *)BugCheckParameter2 + 6);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(MaximumAddress) = BugCheckParameter2[3];
        LOBYTE(v23) = 2;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          v23,
          13,
          28,
          (__int64)&WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids,
          MaximumAddress);
      }
    }
    else
    {
      result = RtlIoEncodeMemIoResource(v15, 3u, v18, (ULONGLONG)Descriptor, v17, v28);
      if ( result < 0 )
        return result;
      if ( (BugCheckParameter2[5] & 0x20) != 0 )
        *(_DWORD *)(v7 + 8) = 1;
      else
        *(_DWORD *)(v7 + 8) = v15->Type;
      *(_QWORD *)(v7 + 12) = v21;
      if ( (BugCheckParameter2[48] & 0xC) != 0 )
        v15->Flags |= 0x20u;
      Flags = v15->Flags;
      if ( (BugCheckParameter2[48] & 2) != 0 )
      {
        v15->Flags |= 8u;
        Flags = v15->Flags;
      }
      if ( (BugCheckParameter2[48] & 6) != 0 )
      {
        v15->Flags |= 4u;
        Flags = v15->Flags;
      }
      if ( (BugCheckParameter2[5] & 1) == 0 )
        Flags |= 1u;
      v15->Flags = Flags;
    }
    v26 = PnpiBiosAddressHandleGlobalFlags((__int64)BugCheckParameter2, v32, v33, v15);
    if ( v26 < 0 )
      return v26;
    return v4;
  }
  return result;
}
