/*
 * XREFs of ?SetReferenceProperty@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x14005A2E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReplaceResource@VCResourceMarshaler@DirectComposition@@@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCResourceMarshaler@1@PEAV21@1@Z @ 0x140021DB0 (--$ReplaceResource@VCResourceMarshaler@DirectComposition@@@CApplicationChannel@DirectComposition.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x14005B060 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 */

__int64 __fastcall DirectComposition::CCompiledEffectTemplateMarshaler::SetReferenceProperty(
        DirectComposition::CCompiledEffectTemplateMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v7; // r8d
  __int64 v8; // r9
  DirectComposition::CResourceMarshaler *v9; // r10

  if ( a3 )
    return 3221225485LL;
  if ( a4
    && (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((unsigned int *)a4 + 9), 156LL) )
  {
    if ( v8 == *((_QWORD *)this + 8)
      || (v7 = DirectComposition::CApplicationChannel::ReplaceResource<DirectComposition::CResourceMarshaler>(
                 a2,
                 (struct DirectComposition::CResourceMarshaler **)this + 8,
                 v9,
                 0LL),
          v7 >= 0) )
    {
      *((_DWORD *)this + 4) &= ~0x40u;
      *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
