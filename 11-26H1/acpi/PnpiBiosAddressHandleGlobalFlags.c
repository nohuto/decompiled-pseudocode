/*
 * XREFs of PnpiBiosAddressHandleGlobalFlags @ 0x1400A96D0
 * Callers:
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1400B76BC (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1400B7B04 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1400CE1DC (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1400CF578 (PnpiBiosAddressDoubleToIoDescriptor.c)
 * Callees:
 *     PnpiUpdateResourceList @ 0x1400CF2EC (PnpiUpdateResourceList.c)
 */

NTSTATUS __fastcall PnpiBiosAddressHandleGlobalFlags(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        struct _IO_RESOURCE_DESCRIPTOR *a4)
{
  ULONGLONG v4; // r10
  __int64 v5; // r15
  ULONGLONG v6; // rsi
  ULONGLONG v8; // r9
  ULONGLONG v9; // r11
  char v12; // al
  unsigned __int8 Type; // al
  ULONGLONG v14; // rax
  char v15; // dl
  UCHAR v16; // cl
  NTSTATUS result; // eax
  __int64 v18; // rax
  unsigned __int64 Alignment; // [rsp+30h] [rbp-10h] BYREF
  __int64 v20; // [rsp+38h] [rbp-8h] BYREF
  unsigned __int64 MaximumAddress; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int64 MinimumAddress; // [rsp+98h] [rbp+58h] BYREF

  v4 = 0LL;
  v5 = a3;
  v6 = 0LL;
  v20 = 0LL;
  MinimumAddress = 0LL;
  v8 = 0LL;
  Alignment = 0LL;
  v9 = 0LL;
  MaximumAddress = 0LL;
  if ( (AcpiOverrideAttributes & 0x800) != 0 || (v12 = 3, (*(_BYTE *)(a1 + 4) & 1) != 0) )
    v12 = 1;
  a4->ShareDisposition = v12;
  Type = a4->Type;
  if ( Type == 3 || Type == 7 || Type == 1 )
  {
    v14 = RtlIoDecodeMemIoResource(a4, &Alignment, &MinimumAddress, &MaximumAddress);
    v8 = MaximumAddress;
    v9 = v14;
    v4 = MinimumAddress;
    v6 = Alignment;
  }
  v15 = *(_BYTE *)(a1 + 4) & 8;
  if ( (*(_BYTE *)(a1 + 4) & 4) != 0 )
  {
    v16 = a4->Type;
    if ( v15 )
    {
      if ( v16 == 6 )
      {
        a4->u.Port.Length = a4->u.Port.MinimumAddress.LowPart - a4->u.Port.Alignment + 1;
      }
      else
      {
        result = RtlIoEncodeMemIoResource(a4, v16, v8 - v4 + 1, v6, v4, v8);
        if ( result < 0 )
          return result;
      }
    }
    else if ( v16 == 6 )
    {
      a4->u.Port.MinimumAddress.LowPart = a4->u.Port.Length + a4->u.Port.Alignment - 1;
    }
    else
    {
      a4->u.Port.MaximumAddress.QuadPart = v9 + v4 - 1;
    }
  }
  else if ( v15 )
  {
    if ( a4->Type == 6 )
      a4->u.Port.Alignment = a4->u.Port.MinimumAddress.LowPart - a4->u.Port.Length + 1;
    else
      a4->u.Port.MinimumAddress.QuadPart = v8 - v9 + 1;
  }
  if ( (*(_BYTE *)(a1 + 4) & 1) == 0 )
  {
    result = PnpiUpdateResourceList(a2 + 8 * v5, &v20);
    if ( result < 0 )
      return result;
    v18 = v20;
    *(_BYTE *)(v20 + 1) = -127;
    *(_WORD *)(v18 + 4) = 1;
  }
  return 0;
}
