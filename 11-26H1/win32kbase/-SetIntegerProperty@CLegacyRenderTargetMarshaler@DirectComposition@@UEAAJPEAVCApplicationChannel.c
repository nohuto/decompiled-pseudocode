/*
 * XREFs of ?SetIntegerProperty@CLegacyRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140242C20
 * Callers:
 *     ?SetIntegerProperty@CLegacyStereoRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14022AE60 (-SetIntegerProperty@CLegacyStereoRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLegacyRenderTargetMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _BYTE *a5)
{
  unsigned int v5; // edx
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d

  v5 = 0;
  v6 = a3 - 1;
  if ( v6 )
  {
    v7 = v6 - 2;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 5;
          if ( !v10 )
          {
            if ( (unsigned int)(a4 - 1) > 3 )
              return (unsigned int)-1073741811;
            *(_DWORD *)(a1 + 16) |= 0x100u;
            *(_DWORD *)(a1 + 128) = a4;
            goto LABEL_15;
          }
          v11 = v10 - 1;
          if ( v11 )
          {
            if ( v11 != 2 )
              return (unsigned int)-1073741811;
            *(_DWORD *)(a1 + 16) |= 0x400u;
LABEL_15:
            *a5 = 1;
            return v5;
          }
          *(_DWORD *)(a1 + 136) = a4;
        }
        else
        {
          *(_DWORD *)(a1 + 84) = a4;
        }
      }
      else
      {
        if ( *(_DWORD *)(a1 + 80) || (_DWORD)a4 != 10 && (_DWORD)a4 != 24 && (_DWORD)a4 != 28 && (_DWORD)a4 != 87 )
          return (unsigned int)-1073741811;
        *(_DWORD *)(a1 + 80) = a4;
      }
    }
    else
    {
      if ( *(_DWORD *)(a1 + 64) )
        return (unsigned int)-1073741811;
      *(_DWORD *)(a1 + 64) = a4;
    }
    *(_DWORD *)(a1 + 16) |= 0x40u;
    goto LABEL_15;
  }
  if ( *(_QWORD *)(a1 + 72) != a4 )
  {
    *(_DWORD *)(a1 + 16) |= 0x100u;
    *(_QWORD *)(a1 + 72) = a4;
    *a5 = 1;
  }
  return v5;
}
