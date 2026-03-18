/*
 * XREFs of ?SetFloatProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x140245920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetFloatProperty(
        __int64 a1,
        int a2,
        float a3,
        char *a4)
{
  unsigned int v4; // r8d
  int v5; // r10d
  char v6; // al

  v4 = 0;
  v5 = 0;
  if ( a2 == 5 )
  {
    v5 = 2048;
    if ( *(float *)(a1 + 112) == a3 )
    {
      v6 = 0;
    }
    else
    {
      *(float *)(a1 + 112) = a3;
      v6 = 1;
    }
    *a4 = v6;
  }
  else
  {
    v4 = -1073741811;
  }
  if ( *a4 )
    *(_DWORD *)(a1 + 16) |= v5;
  return v4;
}
