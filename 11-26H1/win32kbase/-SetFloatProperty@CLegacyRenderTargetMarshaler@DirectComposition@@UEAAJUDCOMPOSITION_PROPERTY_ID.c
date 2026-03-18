/*
 * XREFs of ?SetFloatProperty@CLegacyRenderTargetMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x140242B60
 * Callers:
 *     <none>
 * Callees:
 *     Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline @ 0x140242DA8 (Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DirectComposition::CLegacyRenderTargetMarshaler::SetFloatProperty(
        __int64 a1,
        int a2,
        float a3,
        _BYTE *a4)
{
  unsigned int v4; // ebx
  int v7; // edx
  int v8; // edx

  v4 = 0;
  v7 = a2 - 7;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 4 )
        return (unsigned int)-1073741811;
      if ( a3 != *(float *)(a1 + 132) )
      {
        if ( a3 >= 1.0 )
        {
          *(_DWORD *)(a1 + 16) |= 0x200u;
          *(float *)(a1 + 132) = a3;
LABEL_14:
          *a4 = 1;
          return v4;
        }
        return (unsigned int)-1073741811;
      }
    }
    else
    {
      if ( !(unsigned int)Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline() )
        return (unsigned int)-1073741811;
      if ( a3 != *(float *)(a1 + 108) )
      {
        if ( a3 <= 0.0 )
          return (unsigned int)-1073741811;
        *(_DWORD *)(a1 + 16) |= 0x100u;
        *(float *)(a1 + 108) = a3;
        *a4 = 1;
      }
    }
  }
  else if ( a3 != *(float *)(a1 + 104) )
  {
    if ( a3 > 0.0 )
    {
      *(_DWORD *)(a1 + 16) |= 0x100u;
      *(float *)(a1 + 104) = a3;
      goto LABEL_14;
    }
    return (unsigned int)-1073741811;
  }
  return v4;
}
