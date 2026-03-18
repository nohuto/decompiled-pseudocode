/*
 * XREFs of PnpiBiosAddressToIoDescriptor @ 0x1400CE1DC
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

__int64 __fastcall PnpiBiosAddressToIoDescriptor(
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
  struct _IO_RESOURCE_DESCRIPTOR *v14; // rdi
  int v15; // edx
  unsigned int v16; // r13d
  unsigned int v17; // r12d
  unsigned int v18; // eax
  unsigned int v19; // ecx
  int v20; // eax
  int v21; // r8d
  int v22; // edx
  unsigned int v23; // eax
  unsigned int v24; // eax
  NTSTATUS v25; // eax
  unsigned __int16 v26; // [rsp+40h] [rbp-48h]
  int v27; // [rsp+44h] [rbp-44h]
  _QWORD v28[8]; // [rsp+48h] [rbp-40h] BYREF
  struct _IO_RESOURCE_DESCRIPTOR *v29; // [rsp+90h] [rbp+8h] BYREF
  __int64 v30; // [rsp+98h] [rbp+10h]
  unsigned int v31; // [rsp+A0h] [rbp+18h]

  v31 = a3;
  v30 = a2;
  v4 = 0;
  v5 = BugCheckParameter2[4];
  v7 = 0LL;
  v28[0] = 0LL;
  v29 = 0LL;
  if ( (v5 & 1) != 0 && BugCheckParameter2[3] == 1 && (a4 & 1) != 0 )
    return 0LL;
  if ( !PnpiBiosValidateMemoryMapAttribute() )
  {
    AcpiDiagTraceMemoryReserved(
      BugCheckParameter2[3],
      v8,
      BugCheckParameter2[5],
      *((unsigned __int16 *)BugCheckParameter2 + 3),
      *((unsigned __int16 *)BugCheckParameter2 + 4),
      *((unsigned __int16 *)BugCheckParameter2 + 5),
      *((unsigned __int16 *)BugCheckParameter2 + 6),
      v9);
    return 0LL;
  }
  if ( !(_WORD)v9 )
    return 0LL;
  v13 = v11 + 8LL * v10;
  result = PnpiUpdateResourceList(v13, &v29);
  if ( (int)result >= 0 )
  {
    if ( BugCheckParameter2[3] < 2u )
    {
      result = PnpiUpdateResourceList(v13, v28);
      if ( (int)result < 0 )
        return result;
      v7 = v28[0];
      *(_BYTE *)(v28[0] + 1LL) = -127;
      v14 = (struct _IO_RESOURCE_DESCRIPTOR *)(v7 - 32);
      *(_WORD *)(v7 + 4) = 24576;
      *(_DWORD *)(v7 + 16) = 0;
    }
    else
    {
      v14 = v29;
    }
    v15 = 13;
    if ( *(_WORD *)(BugCheckParameter2 + 1) < 0xDu )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 2;
        WPP_RECORDER_SF_L(
          WPP_GLOBAL_Control->DeviceExtension,
          v15,
          13,
          11,
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
    v16 = *((unsigned __int16 *)BugCheckParameter2 + 4);
    v17 = *((unsigned __int16 *)BugCheckParameter2 + 7);
    v27 = *((unsigned __int16 *)BugCheckParameter2 + 3) + 1;
    v18 = *((unsigned __int16 *)BugCheckParameter2 + 6);
    v26 = v18 + v16;
    v19 = *((unsigned __int16 *)BugCheckParameter2 + 5);
    LOWORD(v29) = *((_WORD *)BugCheckParameter2 + 5);
    if ( (_WORD)v18 )
    {
      ACPIInitIgnoreResourceMapDescriptor(v16, v19, v18);
      LOWORD(v19) = (_WORD)v29;
      v15 = 13;
    }
    if ( (BugCheckParameter2[4] & 0xC) != 0xC )
      goto LABEL_29;
    v20 = (unsigned __int16)v19 - v16 + 1;
    LODWORD(v28[0]) = v20;
    if ( v20 != v17 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v15,
          13,
          12,
          (__int64)&WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids);
        v20 = v28[0];
      }
      v17 = v20;
    }
    if ( ((unsigned __int16)v16 & *((_WORD *)BugCheckParameter2 + 3)) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v15,
          13,
          13,
          (__int64)&WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids);
      }
      v21 = 1;
    }
    else
    {
LABEL_29:
      v21 = v27;
    }
    v22 = BugCheckParameter2[3];
    if ( BugCheckParameter2[3] )
    {
      if ( BugCheckParameter2[3] == 1 )
      {
        v23 = (unsigned __int16)v29;
        v14->u.Port.Alignment = v21;
        v14->u.Port.Length = v17;
        v14->u.Port.MinimumAddress.LowPart = v16;
        v14->u.Port.MaximumAddress.QuadPart = v23;
        v14->u.Port.MinimumAddress.HighPart = 0;
        v14->Type = 1;
        if ( (BugCheckParameter2[5] & 0x20) != 0 )
          *(_WORD *)(v7 + 4) |= 1u;
        *(_DWORD *)(v7 + 8) = (BugCheckParameter2[5] & 0x10 | 8u) >> 3;
        *(_DWORD *)(v7 + 12) = v26;
        if ( (BugCheckParameter2[4] & 2) == 0 )
          v14->Flags |= 0x20u;
        v14->u.Port.Alignment = 1;
      }
      else if ( BugCheckParameter2[3] == 2 )
      {
        v14->Type = 6;
        v14->u.Port.Alignment = *((unsigned __int16 *)BugCheckParameter2 + 4);
        v14->u.Port.MinimumAddress.LowPart = *((unsigned __int16 *)BugCheckParameter2 + 5);
        v14->u.Port.Length = v17;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = 2;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          v22,
          13,
          14,
          (__int64)&WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids,
          BugCheckParameter2[3]);
      }
    }
    else
    {
      v24 = (unsigned __int16)v29;
      v14->u.Port.Alignment = v21;
      v14->u.Port.Length = v17;
      v14->u.Port.MinimumAddress.LowPart = v16;
      v14->u.Port.MaximumAddress.LowPart = v24;
      v14->u.Port.MaximumAddress.HighPart = 0;
      v14->u.Port.MinimumAddress.HighPart = 0;
      v14->Type = 3;
      *(_DWORD *)(v7 + 8) = (~BugCheckParameter2[5] & 0x20 | 0x10u) >> 4;
      *(_DWORD *)(v7 + 12) = v26;
      PnpiBiosAddressHandleMemoryFlags((__int64)BugCheckParameter2, (__int64)v14);
      v14->u.Port.Alignment = 1;
    }
    v25 = PnpiBiosAddressHandleGlobalFlags((__int64)BugCheckParameter2, v30, v31, v14);
    if ( v25 < 0 )
      return (unsigned int)v25;
    return v4;
  }
  return result;
}
