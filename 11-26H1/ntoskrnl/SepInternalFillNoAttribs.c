/*
 * XREFs of SepInternalFillNoAttribs @ 0x1403B1FBC
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B0C10 (SepInternalQuerySecurityAttributesTokenEx.c)
 * Callees:
 *     RtlSetVolatileMemory @ 0x140737C70 (RtlSetVolatileMemory.c)
 *     RtlSetUserMemory @ 0x140782108 (RtlSetUserMemory.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 */

__int64 __fastcall SepInternalFillNoAttribs(_WORD *a1, unsigned int a2, _DWORD *a3, char a4)
{
  unsigned int v4; // edi

  v4 = 0;
  if ( a4 )
    RtlWriteULongToUser(a3, 16LL);
  else
    *a3 = 16;
  if ( a2 < 0x10 )
  {
    return (unsigned int)-1073741789;
  }
  else if ( a4 )
  {
    RtlSetUserMemory(a1);
    RtlWriteUShortToUser(a1, 1LL);
  }
  else
  {
    RtlSetVolatileMemory(a1, 0, 0x10uLL);
    *a1 = 1;
  }
  return v4;
}
