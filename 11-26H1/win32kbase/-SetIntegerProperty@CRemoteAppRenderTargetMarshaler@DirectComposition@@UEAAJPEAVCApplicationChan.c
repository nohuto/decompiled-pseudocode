/*
 * XREFs of ?SetIntegerProperty@CRemoteAppRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140242820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRemoteAppRenderTargetMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _BYTE *a5)
{
  unsigned int v5; // edx
  int v6; // r8d

  v5 = 0;
  if ( !a3 )
  {
    if ( (_DWORD)a4 == *(_DWORD *)(a1 + 56) )
      return v5;
    if ( (((_DWORD)a4 - 1) & 0xFFFFFFFD) == 0 )
    {
      *(_DWORD *)(a1 + 16) |= 0x800u;
      *(_DWORD *)(a1 + 56) = a4;
      *a5 = 1;
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  v6 = a3 - 4;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      if ( *(_DWORD *)(a1 + 88) != (_DWORD)a4 )
      {
        *(_DWORD *)(a1 + 88) = a4;
        *a5 = 1;
        *(_DWORD *)(a1 + 16) |= 0x2000u;
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( *(_QWORD *)(a1 + 64) )
  {
    if ( !a4 )
    {
      *(_DWORD *)(a1 + 16) |= 0x400u;
      *(_QWORD *)(a1 + 64) = 0LL;
      *a5 = 1;
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( a4 )
  {
    *(_DWORD *)(a1 + 16) |= 0x40u;
    *(_QWORD *)(a1 + 64) = a4;
  }
  return v5;
}
