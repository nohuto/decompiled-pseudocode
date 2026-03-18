/*
 * XREFs of ?SetIntegerProperty@CDDisplayRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140243540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDDisplayRenderTargetMarshaler::SetIntegerProperty(
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
  int v12; // r8d

  v5 = 0;
  v6 = a3 - 1;
  if ( v6 )
  {
    v7 = v6 - 2;
    if ( v7 )
    {
      v8 = v7 - 2;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            v11 = v10 - 5;
            if ( !v11 )
            {
              if ( (unsigned int)(a4 - 1) > 3 )
                return (unsigned int)-1073741811;
              *(_DWORD *)(a1 + 16) |= 0x100u;
              *(_DWORD *)(a1 + 144) = a4;
              goto LABEL_26;
            }
            v12 = v11 - 2;
            if ( v12 )
            {
              if ( v12 != 2 )
                return (unsigned int)-1073741811;
              *(_DWORD *)(a1 + 16) |= 0x400u;
LABEL_26:
              *a5 = 1;
              return v5;
            }
            *(_DWORD *)(a1 + 152) = a4;
          }
          else
          {
            *(_DWORD *)(a1 + 92) = a4;
          }
        }
        else
        {
          if ( *(_DWORD *)(a1 + 88) || (_DWORD)a4 != 10 && (_DWORD)a4 != 24 && (_DWORD)a4 != 28 && (_DWORD)a4 != 87 )
            return (unsigned int)-1073741811;
          *(_DWORD *)(a1 + 88) = a4;
        }
      }
      else
      {
        if ( *(_DWORD *)(a1 + 68) )
          return (unsigned int)-1073741811;
        *(_DWORD *)(a1 + 68) = a4;
      }
    }
    else
    {
      if ( *(_DWORD *)(a1 + 64) == (_DWORD)a4 )
        return v5;
      *(_DWORD *)(a1 + 64) = a4;
    }
    *(_DWORD *)(a1 + 16) |= 0x40u;
    goto LABEL_26;
  }
  if ( *(_QWORD *)(a1 + 72) != a4 )
  {
    *(_DWORD *)(a1 + 16) |= 0x100u;
    *(_QWORD *)(a1 + 72) = a4;
    *a5 = 1;
  }
  return v5;
}
