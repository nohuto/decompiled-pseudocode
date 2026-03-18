/*
 * XREFs of ?SetBufferProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140194370
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CPrimitiveGroupMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int128 *a4,
        size_t Size,
        _BYTE *a6)
{
  unsigned int v6; // ebx
  int v7; // r8d
  __int128 v8; // xmm0

  v6 = 0;
  *a6 = 0;
  v7 = a3 - 5;
  if ( !v7 )
  {
    if ( Size - 1 <= 0x3F && (Size & 0xF) == 0 )
    {
      *(_DWORD *)(a1 + 192) = Size >> 4;
      memmove((void *)(a1 + 128), a4, Size);
      goto LABEL_8;
    }
    return (unsigned int)-1073741811;
  }
  if ( v7 != 1 || Size != 16 )
    return (unsigned int)-1073741811;
  v8 = *a4;
  *(_DWORD *)(a1 + 16) |= 0x80u;
  *(_OWORD *)(a1 + 196) = v8;
LABEL_8:
  *a6 = 1;
  return v6;
}
