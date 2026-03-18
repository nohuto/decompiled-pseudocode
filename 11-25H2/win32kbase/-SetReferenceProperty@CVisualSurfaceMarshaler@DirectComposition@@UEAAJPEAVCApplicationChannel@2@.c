/*
 * XREFs of ?SetReferenceProperty@CVisualSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140059740
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReplaceResource@VCResourceMarshaler@DirectComposition@@@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCResourceMarshaler@1@PEAV21@1@Z @ 0x140021DB0 (--$ReplaceResource@VCResourceMarshaler@DirectComposition@@@CApplicationChannel@DirectComposition.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x14005B060 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?ResetFrozenFlag@CVisualSurfaceMarshaler@DirectComposition@@IEAAXXZ @ 0x14005B204 (-ResetFrozenFlag@CVisualSurfaceMarshaler@DirectComposition@@IEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CVisualSurfaceMarshaler::SetReferenceProperty(
        DirectComposition::CVisualSurfaceMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  DirectComposition::CResourceMarshaler *v5; // r10
  int v8; // r8d

  v5 = a4;
  if ( a3 )
    return 3221225485LL;
  if ( a4
    && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((unsigned int *)a4 + 9), 182LL) )
  {
    return (unsigned int)-1073741811;
  }
  else if ( v5 == *((DirectComposition::CResourceMarshaler **)this + 7)
         || (v8 = DirectComposition::CApplicationChannel::ReplaceResource<DirectComposition::CResourceMarshaler>(
                    a2,
                    (struct DirectComposition::CResourceMarshaler **)this + 7,
                    v5,
                    0LL),
             v8 >= 0) )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    DirectComposition::CVisualSurfaceMarshaler::ResetFrozenFlag(this);
    *a5 = 1;
  }
  return (unsigned int)v8;
}
