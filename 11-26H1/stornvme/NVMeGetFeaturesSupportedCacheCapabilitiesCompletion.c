/*
 * XREFs of NVMeGetFeaturesSupportedCacheCapabilitiesCompletion @ 0x14000FDC0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeGetFeaturesSupportedCacheCapabilitiesCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _BYTE *v3; // r8
  __int64 v4; // r9
  __int64 v5; // r10

  result = GetSrbExtension(a2);
  if ( *(_BYTE *)(v4 + 3) == 1 )
  {
    if ( v3 )
      *(_BYTE *)(v5 + 3964) = *(_BYTE *)(v5 + 3964) & 0xFB | (4 * (*v3 & 1));
    else
      *(_BYTE *)(v4 + 3) = 4;
  }
  *(_BYTE *)(result + 4225) |= 8u;
  return result;
}
