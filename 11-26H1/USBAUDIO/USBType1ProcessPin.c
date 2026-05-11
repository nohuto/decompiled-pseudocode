/*
 * XREFs of USBType1ProcessPin @ 0x140002240
 * Callers:
 *     <none>
 * Callees:
 *     USBType1ProcessStreamPointer @ 0x140002380 (USBType1ProcessStreamPointer.c)
 *     USBType1HandleUrbError @ 0x14003F5D0 (USBType1HandleUrbError.c)
 */

__int64 __fastcall USBType1ProcessPin(PKSPIN Pin)
{
  _QWORD *Context; // rax
  int v2; // edi
  __int64 v4; // rbx
  PKSSTREAM_POINTER LeadingEdgeStreamPointer; // rax
  struct _KSSTREAM_POINTER *v6; // rsi
  struct _KSSTREAM_POINTER *v7; // rcx
  unsigned int v9; // edi
  NTSTATUS v10; // edx

  Context = Pin->Context;
  v2 = 0;
  v4 = Context[19];
  if ( *((_BYTE *)Context + 46) )
    return 3221226166LL;
  if ( !*(_BYTE *)(v4 + 116) )
    return 259LL;
  if ( *(_BYTE *)v4 )
  {
    v2 = USBType1HandleUrbError();
    if ( v2 < 0 )
      return (unsigned int)v2;
  }
  LeadingEdgeStreamPointer = KsPinGetLeadingEdgeStreamPointer(Pin, KSSTREAM_POINTER_STATE_LOCKED);
  v6 = LeadingEdgeStreamPointer;
  if ( !LeadingEdgeStreamPointer )
    return (unsigned int)v2;
  if ( LeadingEdgeStreamPointer->OffsetIn.Count / (*(_DWORD *)(v4 + 8) * *(_DWORD *)(v4 + 132)) > 0x100 )
  {
    v9 = -1073741764;
    v7 = LeadingEdgeStreamPointer;
    v10 = -1073741764;
  }
  else
  {
    v7 = LeadingEdgeStreamPointer;
    if ( (LeadingEdgeStreamPointer->StreamHeader->OptionsFlags & 8) != 0 )
    {
      v9 = -1073741762;
      v10 = -1073741762;
    }
    else
    {
      if ( LeadingEdgeStreamPointer->OffsetIn.Count )
        return (unsigned int)USBType1ProcessStreamPointer(LeadingEdgeStreamPointer);
      v9 = 0;
      v10 = 0;
    }
  }
  KsStreamPointerSetStatusCode(v7, v10);
  KsStreamPointerUnlock(v6, 1u);
  return v9;
}
