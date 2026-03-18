/*
 * XREFs of ?SetFloatProperty@CProjectedShadowSceneMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x1402468C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x1401B3040 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CProjectedShadowSceneMarshaler::SetFloatProperty(
        __int64 a1,
        unsigned int a2,
        float a3,
        _BYTE *a4)
{
  *a4 = 0;
  switch ( a2 )
  {
    case 1u:
      *(_DWORD *)(a1 + 16) |= 0x800u;
      *(float *)(a1 + 120) = a3;
      break;
    case 4u:
      *(_DWORD *)(a1 + 16) |= 0x200u;
      *(float *)(a1 + 124) = a3;
      break;
    case 5u:
      *(_DWORD *)(a1 + 16) |= 0x1000u;
      *(float *)(a1 + 128) = a3;
      break;
    case 6u:
      *(_DWORD *)(a1 + 16) |= 0x400u;
      *(float *)(a1 + 132) = a3;
      break;
    case 7u:
      *(_DWORD *)(a1 + 16) |= 0x2000u;
      *(float *)(a1 + 136) = a3;
      break;
    case 8u:
      *(_DWORD *)(a1 + 16) |= 0x4000u;
      *(float *)(a1 + 140) = a3;
      break;
    default:
      return DirectComposition::CResourceMarshaler::SetFloatProperty(a1, a2, a3, a4);
  }
  *a4 = 1;
  return 0LL;
}
