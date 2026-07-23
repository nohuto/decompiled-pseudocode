/*
 * XREFs of RtlCopySidAndAttributesArray @ 0x18013CB80
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopySid @ 0x1800C6480 (RtlCopySid.c)
 */

NTSTATUS __cdecl RtlCopySidAndAttributesArray(
        ULONG Count,
        PSID_AND_ATTRIBUTES Src,
        ULONG SidAreaSize,
        PSID_AND_ATTRIBUTES Dest,
        PSID SidArea,
        PSID *RemainingSidArea,
        PULONG RemainingSidAreaSize)
{
  ULONG i; // esi
  unsigned int v13; // ebp

  for ( i = 0; i < Count; ++i )
  {
    v13 = 4 * *((unsigned __int8 *)Src[i].Sid + 1) + 8;
    if ( v13 > SidAreaSize )
      return -1073741789;
    Dest[i].Sid = SidArea;
    Dest[i].Attributes = Src[i].Attributes;
    SidAreaSize -= v13;
    RtlCopySid(v13, SidArea, Src[i].Sid);
    SidArea = (char *)SidArea + v13;
  }
  *RemainingSidArea = SidArea;
  *RemainingSidAreaSize = SidAreaSize;
  return 0;
}
