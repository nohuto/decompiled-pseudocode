/*
 * XREFs of RtlCmDecodeMemIoResource @ 0x1404D4880
 * Callers:
 *     HalpDmaGetReservedRegionsForDeviceResources @ 0x14058A82C (HalpDmaGetReservedRegionsForDeviceResources.c)
 *     IopGenericUnpackResource @ 0x1407A67C0 (IopGenericUnpackResource.c)
 *     PnprAddMemoryResources @ 0x1407AE908 (PnprAddMemoryResources.c)
 *     PnpFilterResourceRequirementsList @ 0x140AA43F4 (PnpFilterResourceRequirementsList.c)
 *     PnpCmResourcesToIoResources @ 0x140AA4F18 (PnpCmResourcesToIoResources.c)
 *     PnpIsRangeWithin @ 0x140B38590 (PnpIsRangeWithin.c)
 * Callees:
 *     <none>
 */

ULONGLONG __stdcall RtlCmDecodeMemIoResource(PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor, PULONGLONG Start)
{
  ULONGLONG result; // rax
  USHORT Flags; // r8

  result = 0LL;
  if ( Descriptor->Type == 3 || Descriptor->Type == 1 )
  {
    result = Descriptor->u.Generic.Length;
  }
  else
  {
    Flags = Descriptor->Flags;
    if ( (Flags & 0x200) != 0 )
    {
      result = (unsigned __int64)Descriptor->u.Generic.Length << 8;
    }
    else if ( (Flags & 0x400) != 0 )
    {
      result = (unsigned __int64)Descriptor->u.Generic.Length << 16;
    }
    else if ( (Flags & 0x800) != 0 )
    {
      result = (unsigned __int64)Descriptor->u.Generic.Length << 32;
    }
  }
  if ( Start )
    *Start = Descriptor->u.Generic.Start.QuadPart;
  return result;
}
