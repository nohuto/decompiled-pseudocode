/*
 * XREFs of ?SetBufferProperty@CLegacyAnimationTriggerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x14023FAB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLegacyAnimationTriggerMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        _QWORD *a4,
        __int64 a5,
        _BYTE *a6)
{
  unsigned int v6; // edx
  int v7; // r8d

  v6 = 0;
  if ( a3 )
    return (unsigned int)-1073741811;
  v7 = *(_DWORD *)(a1 + 16);
  if ( (v7 & 0x40) == 0 )
  {
    if ( a5 == 8 )
    {
      *(_QWORD *)(a1 + 56) = *a4;
    }
    else if ( a5 )
    {
      return (unsigned int)-1073741811;
    }
    *(_DWORD *)(a1 + 16) = v7 | 0x40;
    *a6 = 1;
    return v6;
  }
  return (unsigned int)-1073741790;
}
