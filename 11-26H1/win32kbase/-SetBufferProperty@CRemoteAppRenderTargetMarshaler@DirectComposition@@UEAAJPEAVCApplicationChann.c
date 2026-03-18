/*
 * XREFs of ?SetBufferProperty@CRemoteAppRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140242770
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CRemoteAppRenderTargetMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int128 *a4,
        size_t Size,
        _BYTE *a6)
{
  unsigned int v6; // ebx
  int v8; // r8d
  int v9; // r8d
  __int128 v10; // xmm0

  v6 = 0;
  *a6 = 0;
  v8 = a3 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 == 4 && Size == 16 )
      {
        v10 = *a4;
        *(_DWORD *)(a1 + 16) |= 0x1000u;
        *(_OWORD *)(a1 + 92) = v10;
LABEL_11:
        *a6 = 1;
        return v6;
      }
    }
    else if ( Size == 8 )
    {
      memmove((void *)(a1 + 80), a4, 8uLL);
      *(_DWORD *)(a1 + 16) |= 0x200u;
      goto LABEL_11;
    }
  }
  else if ( Size == 8 )
  {
    memmove((void *)(a1 + 72), a4, 8uLL);
    *(_DWORD *)(a1 + 16) |= 0x100u;
    goto LABEL_11;
  }
  return (unsigned int)-1073741811;
}
