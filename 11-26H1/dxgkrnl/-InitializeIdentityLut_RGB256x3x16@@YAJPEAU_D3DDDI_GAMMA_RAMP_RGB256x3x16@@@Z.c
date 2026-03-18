/*
 * XREFs of ?InitializeIdentityLut_RGB256x3x16@@YAJPEAU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1400A0848
 * Callers:
 *     ColorSpaceTransformInitIdentityTransform @ 0x1400A0890 (ColorSpaceTransformInitIdentityTransform.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitializeIdentityLut_RGB256x3x16(struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *a1)
{
  unsigned int v1; // edx
  USHORT *Green; // r8
  int v3; // eax
  int v4; // ecx

  v1 = 0;
  Green = a1->Green;
  do
  {
    v3 = v1 | (v1 << 16);
    ++v1;
    v4 = (2 * (v3 | 0x8000)) | ((v3 | 0x8000) << 9);
    *((_DWORD *)Green + 128) = v4;
    *(_DWORD *)Green = v4;
    *((_DWORD *)Green - 128) = v4;
    Green += 2;
  }
  while ( v1 < 0x80 );
  return 0LL;
}
