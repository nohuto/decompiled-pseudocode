/*
 * XREFs of ?SetBufferProperty@CRemoteAppRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x140237700
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall DirectComposition::CRemoteAppRenderTargetMarshaler::SetBufferProperty(
        DirectComposition::CRemoteAppRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int128 *a4,
        size_t Size,
        bool *a6)
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
        *((_DWORD *)this + 4) |= 0x800u;
        *(_OWORD *)((char *)this + 92) = v10;
LABEL_11:
        *a6 = 1;
        return v6;
      }
    }
    else if ( Size == 8 )
    {
      memmove((char *)this + 80, a4, 8uLL);
      *((_DWORD *)this + 4) |= 0x100u;
      goto LABEL_11;
    }
  }
  else if ( Size == 8 )
  {
    memmove((char *)this + 72, a4, 8uLL);
    *((_DWORD *)this + 4) |= 0x80u;
    goto LABEL_11;
  }
  return (unsigned int)-1073741811;
}
