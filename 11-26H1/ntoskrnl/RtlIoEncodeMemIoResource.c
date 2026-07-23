/*
 * XREFs of RtlIoEncodeMemIoResource @ 0x1404FE530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlIoEncodeMemIoResource(
        PIO_RESOURCE_DESCRIPTOR Descriptor,
        UCHAR Type,
        ULONGLONG Length,
        ULONGLONG Alignment,
        ULONGLONG MinimumAddress,
        ULONGLONG MaximumAddress)
{
  USHORT Flags; // dx
  ULONGLONG v8; // r10
  ULONGLONG v9; // r8
  ULONGLONG v10; // rax
  USHORT v11; // dx
  ULONGLONG v12; // rax
  ULONGLONG v13; // rax

  if ( ((Type - 3) & 0xFB) != 0 && (Type != 1 || Length > 0xFFFFFFFF || Alignment > 0xFFFFFFFF) )
    return -1073741811;
  *(_OWORD *)&Descriptor->u.BusNumber.MaxBusNumber = __PAIR128__(MaximumAddress, MinimumAddress);
  if ( Type == 1 )
  {
    Descriptor->Type = 1;
LABEL_8:
    Descriptor->u.Port.Length = Length;
    Descriptor->u.Port.Alignment = Alignment;
    return 0;
  }
  Descriptor->Flags &= 0xF1FFu;
  Flags = Descriptor->Flags;
  if ( Length <= 0xFFFFFFFF )
  {
    if ( Alignment <= 0xFFFFFFFF )
    {
      Descriptor->Type = 3;
      goto LABEL_8;
    }
LABEL_14:
    LODWORD(v8) = Length >> 8;
    if ( Length == (unsigned __int64)(unsigned int)v8 << 8 && Alignment <= 0xFFFFFFFF00LL )
    {
      while ( 1 )
      {
        v9 = Alignment >> 8;
        if ( Alignment == (unsigned __int64)(unsigned int)(Alignment >> 8) << 8 )
          break;
        v10 = Alignment;
        Alignment *= 2LL;
        if ( Alignment < v10 )
          return -1073741823;
      }
      v11 = Flags | 0x200;
LABEL_20:
      Descriptor->Type = 7;
      Descriptor->u.Port.Length = v8;
      Descriptor->u.Port.Alignment = v9;
      Descriptor->Flags = v11;
      return 0;
    }
    return -1073741823;
  }
  if ( Length <= 0xFFFFFFFF00LL )
    goto LABEL_14;
  if ( Length > 0xFFFFFFFF0000LL )
  {
    if ( Length <= 0xFFFFFFFF00000000uLL )
    {
      v8 = HIDWORD(Length);
      if ( Length == HIDWORD(Length) << 32 && Alignment <= 0xFFFFFFFF00000000uLL )
      {
        while ( 1 )
        {
          v9 = HIDWORD(Alignment);
          if ( Alignment == (unsigned __int64)HIDWORD(Alignment) << 32 )
            break;
          v13 = Alignment;
          Alignment *= 2LL;
          if ( Alignment < v13 )
            return -1073741823;
        }
        v11 = Flags | 0x800;
        goto LABEL_20;
      }
    }
  }
  else
  {
    LODWORD(v8) = Length >> 16;
    if ( Length == (unsigned __int64)(unsigned int)v8 << 16 && Alignment <= 0xFFFFFFFF0000LL )
    {
      while ( 1 )
      {
        v9 = Alignment >> 16;
        if ( Alignment == (unsigned __int64)(unsigned int)(Alignment >> 16) << 16 )
          break;
        v12 = Alignment;
        Alignment *= 2LL;
        if ( Alignment < v12 )
          return -1073741823;
      }
      v11 = Flags | 0x400;
      goto LABEL_20;
    }
  }
  return -1073741823;
}
