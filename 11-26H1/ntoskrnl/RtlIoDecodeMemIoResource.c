/*
 * XREFs of RtlIoDecodeMemIoResource @ 0x1404F41D0
 * Callers:
 *     IopGenericScoreRequirement @ 0x1407A91C0 (IopGenericScoreRequirement.c)
 *     IopGenericUnpackRequirement @ 0x1407A92F0 (IopGenericUnpackRequirement.c)
 *     PnpFilterResourceRequirementsList @ 0x140A9FCB4 (PnpFilterResourceRequirementsList.c)
 * Callees:
 *     <none>
 */

ULONGLONG __stdcall RtlIoDecodeMemIoResource(
        PIO_RESOURCE_DESCRIPTOR Descriptor,
        PULONGLONG Alignment,
        PULONGLONG MinimumAddress,
        PULONGLONG MaximumAddress)
{
  ULONGLONG Length; // r10
  ULONGLONG v6; // rcx
  UCHAR Type; // r11
  USHORT Flags; // r8

  Length = 0LL;
  v6 = 0LL;
  Type = Descriptor->Type;
  if ( Type == 3 || Type == 1 )
  {
    Length = Descriptor->u.Port.Length;
    v6 = Descriptor->u.Port.Alignment;
  }
  else
  {
    Flags = Descriptor->Flags;
    if ( (Flags & 0x200) != 0 )
    {
      Length = (unsigned __int64)Descriptor->u.Port.Length << 8;
      v6 = (unsigned __int64)Descriptor->u.Port.Alignment << 8;
    }
    else if ( (Flags & 0x400) != 0 )
    {
      Length = (unsigned __int64)Descriptor->u.Port.Length << 16;
      v6 = (unsigned __int64)Descriptor->u.Port.Alignment << 16;
    }
    else if ( (Flags & 0x800) != 0 )
    {
      Length = (unsigned __int64)Descriptor->u.Port.Length << 32;
      v6 = (unsigned __int64)Descriptor->u.Port.Alignment << 32;
    }
  }
  if ( Alignment )
    *Alignment = v6;
  if ( MinimumAddress )
    *MinimumAddress = Descriptor->u.Port.MinimumAddress.QuadPart;
  if ( MaximumAddress )
    *MaximumAddress = Descriptor->u.Interrupt.TargetedProcessors;
  return Length;
}
