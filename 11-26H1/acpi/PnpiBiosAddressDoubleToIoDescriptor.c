/*
 * XREFs of PnpiBiosAddressDoubleToIoDescriptor @ 0x1400CF578
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1400CE578 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001B3DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x14001E4A0 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_L @ 0x1400385BC (WPP_RECORDER_SF_L.c)
 *     PnpiBiosValidateMemoryMapAttribute @ 0x140055CE8 (PnpiBiosValidateMemoryMapAttribute.c)
 *     ACPIInitIgnoreResourceMapDescriptor @ 0x1400680C8 (ACPIInitIgnoreResourceMapDescriptor.c)
 *     PnpiBiosAddressHandleMemoryFlags @ 0x1400A8CA0 (PnpiBiosAddressHandleMemoryFlags.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1400A96D0 (PnpiBiosAddressHandleGlobalFlags.c)
 *     AcpiDiagTraceMemoryReserved @ 0x1400AB0EC (AcpiDiagTraceMemoryReserved.c)
 *     PnpiUpdateResourceList @ 0x1400CF2EC (PnpiUpdateResourceList.c)
 */

__int64 __fastcall PnpiBiosAddressDoubleToIoDescriptor(
        unsigned __int8 *BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        char a4)
{
  unsigned int v4; // esi
  unsigned __int8 v5; // dl
  __int64 v7; // rbp
  char v8; // dl
  unsigned int v9; // ecx
  unsigned int v10; // r8d
  __int64 v11; // r10
  __int64 result; // rax
  __int64 v13; // rdi
  int v14; // edx
  struct _IO_RESOURCE_DESCRIPTOR *v15; // rdi
  unsigned int v16; // r9d
  unsigned int v17; // r13d
  unsigned int v18; // eax
  unsigned int v19; // ecx
  int v20; // eax
  int v21; // r8d
  int v22; // edx
  NTSTATUS v23; // eax
  unsigned int v24; // [rsp+40h] [rbp-58h]
  int v25; // [rsp+44h] [rbp-54h]
  unsigned int v26; // [rsp+48h] [rbp-50h]
  __int64 v27[9]; // [rsp+50h] [rbp-48h] BYREF
  struct _IO_RESOURCE_DESCRIPTOR *v28; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+10h]
  unsigned int v30; // [rsp+B0h] [rbp+18h]

  v30 = a3;
  v29 = a2;
  v4 = 0;
  v5 = BugCheckParameter2[4];
  v7 = 0LL;
  v27[0] = 0LL;
  v28 = 0LL;
  if ( (v5 & 1) != 0 && BugCheckParameter2[3] == 1 && (a4 & 1) != 0 )
    return 0LL;
  if ( !PnpiBiosValidateMemoryMapAttribute() )
  {
    AcpiDiagTraceMemoryReserved(
      BugCheckParameter2[3],
      v8,
      BugCheckParameter2[5],
      *(unsigned int *)(BugCheckParameter2 + 6),
      *(unsigned int *)(BugCheckParameter2 + 10),
      *(unsigned int *)(BugCheckParameter2 + 14),
      *(unsigned int *)(BugCheckParameter2 + 18),
      v9);
    return 0LL;
  }
  if ( !v9 )
    return 0LL;
  v13 = v11 + 8LL * v10;
  result = PnpiUpdateResourceList(v13, &v28);
  if ( (int)result >= 0 )
  {
    if ( BugCheckParameter2[3] < 2u )
    {
      result = PnpiUpdateResourceList(v13, v27);
      if ( (int)result < 0 )
        return result;
      v7 = v27[0];
      *(_BYTE *)(v27[0] + 1) = -127;
      v15 = (struct _IO_RESOURCE_DESCRIPTOR *)(v7 - 32);
      *(_WORD *)(v7 + 4) = 24576;
      *(_DWORD *)(v7 + 16) = 0;
    }
    else
    {
      v15 = v28;
    }
    if ( *(unsigned __int16 *)(BugCheckParameter2 + 1) < 0x17u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_L(
          WPP_GLOBAL_Control->DeviceExtension,
          v14,
          13,
          15,
          (__int64)&WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids,
          *(_WORD *)(BugCheckParameter2 + 1));
      }
      KeBugCheckEx(
        0xA5u,
        0xFuLL,
        (ULONG_PTR)BugCheckParameter2,
        *BugCheckParameter2,
        *(unsigned __int16 *)(BugCheckParameter2 + 1));
    }
    v16 = *(_DWORD *)(BugCheckParameter2 + 10);
    v17 = *(_DWORD *)(BugCheckParameter2 + 22);
    v25 = *(_DWORD *)(BugCheckParameter2 + 6) + 1;
    v18 = *(_DWORD *)(BugCheckParameter2 + 18);
    LODWORD(v28) = v16;
    v26 = v18 + v16;
    v19 = *(_DWORD *)(BugCheckParameter2 + 14);
    v24 = v19;
    if ( v18 )
    {
      ACPIInitIgnoreResourceMapDescriptor(v16, v19, v18);
      v16 = (unsigned int)v28;
      v19 = v24;
    }
    if ( (BugCheckParameter2[4] & 0xC) != 0xC )
      goto LABEL_29;
    v20 = v19 - v16 + 1;
    LODWORD(v27[0]) = v20;
    if ( v20 != v17 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v14,
          13,
          16,
          (__int64)&WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids);
        v16 = (unsigned int)v28;
        v20 = v27[0];
      }
      v17 = v20;
    }
    if ( (v16 & *(_DWORD *)(BugCheckParameter2 + 6)) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v14,
          13,
          17,
          (__int64)&WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids);
        v16 = (unsigned int)v28;
      }
      v21 = 1;
    }
    else
    {
LABEL_29:
      v21 = v25;
    }
    v22 = BugCheckParameter2[3];
    if ( BugCheckParameter2[3] )
    {
      if ( BugCheckParameter2[3] == 1 )
      {
        v15->u.Port.Alignment = v21;
        v15->u.Port.Length = v17;
        v15->u.Port.MinimumAddress.LowPart = v16;
        v15->u.Port.MaximumAddress.QuadPart = v24;
        v15->u.Port.MinimumAddress.HighPart = 0;
        v15->Type = 1;
        if ( (BugCheckParameter2[5] & 0x20) != 0 )
          *(_WORD *)(v7 + 4) |= 1u;
        *(_DWORD *)(v7 + 8) = (BugCheckParameter2[5] & 0x10 | 8u) >> 3;
        *(_DWORD *)(v7 + 12) = v26;
        if ( (BugCheckParameter2[4] & 2) == 0 )
          v15->Flags |= 0x20u;
        v15->u.Port.Alignment = 1;
      }
      else if ( BugCheckParameter2[3] == 2 )
      {
        v15->Type = 6;
        v15->u.Port.Length = v17;
        v15->u.Port.Alignment = *(_DWORD *)(BugCheckParameter2 + 10);
        v15->u.Port.MinimumAddress.LowPart = *(_DWORD *)(BugCheckParameter2 + 14);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = 2;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          v22,
          13,
          18,
          (__int64)&WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids,
          BugCheckParameter2[3]);
      }
    }
    else
    {
      v15->u.Port.Alignment = v21;
      v15->u.Port.Length = v17;
      v15->u.Port.MinimumAddress.LowPart = v16;
      v15->u.Port.MaximumAddress.LowPart = v24;
      v15->u.Port.MaximumAddress.HighPart = 0;
      v15->u.Port.MinimumAddress.HighPart = 0;
      v15->Type = 3;
      *(_DWORD *)(v7 + 8) = (~BugCheckParameter2[5] & 0x20 | 0x10u) >> 4;
      *(_DWORD *)(v7 + 12) = v26;
      PnpiBiosAddressHandleMemoryFlags((__int64)BugCheckParameter2, (__int64)v15);
      v15->u.Port.Alignment = 1;
    }
    v23 = PnpiBiosAddressHandleGlobalFlags((__int64)BugCheckParameter2, v29, v30, v15);
    if ( v23 < 0 )
      return (unsigned int)v23;
    return v4;
  }
  return result;
}
