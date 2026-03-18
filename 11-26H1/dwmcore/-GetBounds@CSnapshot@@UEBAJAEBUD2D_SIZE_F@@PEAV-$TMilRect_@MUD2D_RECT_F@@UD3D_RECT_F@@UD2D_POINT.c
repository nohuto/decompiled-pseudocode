/*
 * XREFs of ?GetBounds@CSnapshot@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180286D10
 * Callers:
 *     ?AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180286B80 (-AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSnapshot::GetBounds(__int64 a1, float *a2, __int64 a3)
{
  float v3; // xmm1_4
  int v4; // eax

  *(_QWORD *)a3 = 0LL;
  v3 = (float)*(int *)(a1 + 80);
  *(float *)(a3 + 8) = v3;
  v4 = *(_DWORD *)(a1 + 84);
  *(float *)(a3 + 12) = (float)v4;
  if ( *a2 != 0.0 && a2[1] != 0.0 )
  {
    *(float *)(a3 + 8) = fminf(v3, *a2);
    *(float *)(a3 + 12) = fminf((float)v4, a2[1]);
  }
  return 0LL;
}
