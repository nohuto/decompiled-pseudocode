/*
 * XREFs of ?SetReferenceProperty@CPathGeometryMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x14005A760
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReplaceResource@VCResourceMarshaler@DirectComposition@@@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCResourceMarshaler@1@PEAV21@1@Z @ 0x140021DB0 (--$ReplaceResource@VCResourceMarshaler@DirectComposition@@@CApplicationChannel@DirectComposition.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x14005B060 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?SetReferenceProperty@CGeometryMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1401405F0 (-SetReferenceProperty@CGeometryMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@IPEAV.c)
 */

__int64 __fastcall DirectComposition::CPathGeometryMarshaler::SetReferenceProperty(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  DirectComposition::CResourceMarshaler *v5; // r10
  int v8; // r8d

  v5 = a4;
  if ( a3 != 5 )
    return DirectComposition::CGeometryMarshaler::SetReferenceProperty(
             (DirectComposition::CGeometryMarshaler *)this,
             a2,
             a3,
             a4,
             a5);
  v8 = 0;
  if ( a4
    && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((unsigned int *)a4 + 9), 156LL) )
  {
    return (unsigned int)-1073741811;
  }
  else if ( v5 == this[12]
         || (v8 = DirectComposition::CApplicationChannel::ReplaceResource<DirectComposition::CResourceMarshaler>(
                    a2,
                    this + 12,
                    v5,
                    0LL),
             v8 >= 0) )
  {
    *((_DWORD *)this + 4) |= 0x800u;
    *a5 = 1;
  }
  return (unsigned int)v8;
}
